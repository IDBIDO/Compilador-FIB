//////////////////////////////////////////////////////////////////////
//
//    CodeGenVisitor - Walk the parser tree to do
//                     the generation of code
//
//    Copyright (C) 2017-2023  Universitat Politecnica de Catalunya
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU General Public License
//    as published by the Free Software Foundation; either version 3
//    of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//    contact: José Miguel Rivero (rivero@cs.upc.edu)
//             Computer Science Department
//             Universitat Politecnica de Catalunya
//             despatx Omega.110 - Campus Nord UPC
//             08034 Barcelona.  SPAIN
//
//////////////////////////////////////////////////////////////////////

#include "CodeGenVisitor.h"
#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/code.h"

#include <string>
#include <cstddef>    // std::size_t

// uncomment the following line to enable debugging messages with DEBUG*
#define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
CodeGenVisitor::CodeGenVisitor(TypesMgr       & Types,
                               SymTable       & Symbols,
                               TreeDecoration & Decorations) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations} {
}

// Accessor/Mutator to the attribute currFunctionType
TypesMgr::TypeId CodeGenVisitor::getCurrentFunctionTy() const {
  return currFunctionType;
}

void CodeGenVisitor::setCurrentFunctionTy(TypesMgr::TypeId type) {
  currFunctionType = type;
}

// Methods to visit each kind of node:
//
antlrcpp::Any CodeGenVisitor::visitProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  code my_code;
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  for (auto ctxFunc : ctx->function()) { 
    subroutine subr = visit(ctxFunc);
    my_code.add_subroutine(subr);
  }
  Symbols.popScope();
  DEBUG_EXIT();
  return my_code;
}

antlrcpp::Any CodeGenVisitor::visitFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  
  std::cout << "visitFunction1 " << "\n";
  subroutine subr(ctx->ID()->getText());
  codeCounters.reset();
  

  if (ctx->type() && ctx->type()->simple_type()){
    visit(ctx->type()->simple_type());
    subr.add_param("_result",Types.to_string(getTypeDecor(ctx->type()->simple_type())),false);
  }
  
  std::cout << "visitFunction2 " << "\n";

  std::vector<var> && lparams = visit(ctx->params());
  for (uint i= 0; i< ctx->params()->ID().size(); ++i) {
    subr.add_param(ctx->params()->ID(i)->getText(), Types.to_string(getTypeDecor(ctx->type())), false); //ya llegaremos a pasar arrays como params... el false seran muchas lineas de codigo
  }

  std::cout << "visitFunction3 " << "\n";

  std::vector<var> && lvars = visit(ctx->declarations());
  for (auto & onevar : lvars) {
    subr.add_var(onevar);
  }
  instructionList && code = visit(ctx->statements());
  code = code || instruction(instruction::RETURN());
  subr.set_instructions(code);
  Symbols.popScope();
  DEBUG_EXIT();
  return subr;
}

antlrcpp::Any CodeGenVisitor::visitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
  std::vector<var> lvars;
  for (auto & varDeclCtx : ctx->variable_decl()) {
    std::vector<var> l = visit(varDeclCtx);
    for (auto & one : l)
        lvars.push_back(one);
  }
  DEBUG_EXIT();
  return lvars;
}

antlrcpp::Any CodeGenVisitor::visitVariable_decl(AslParser::Variable_declContext *ctx) {
  DEBUG_ENTER();

  //std::cout << "pre:visitVariable_decl " << "\n";
  TypesMgr::TypeId   t1 = getTypeDecor(ctx->type());
  std::size_t      size = Types.getSizeOfType(t1);
  std::vector<var> lvars;
  for (size_t i= 0; i < ctx->ID().size(); ++i)
    lvars.push_back(var{ctx->ID(i)->getText(), Types.to_string(t1), size});
  //return var{ctx->ID(0)->getText(), Types.to_string(t1), size};   // ct->ID(0)
  //std::cout << "post:visitVariable_decl " << "\n";
  DEBUG_EXIT();
  return lvars;   // ct->ID(0)
}

antlrcpp::Any CodeGenVisitor::visitStatements(AslParser::StatementsContext *ctx) {
  DEBUG_ENTER();
  std::cout << "visitAssignStmt " <<  "\n";
  instructionList code;
  for (auto stCtx : ctx->statement()) {
    instructionList && codeS = visit(stCtx);
    code = code || codeS;
  }
  std::cout << "visitAssignStmt " <<  "\n";
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
  //std::cout << "visitAssignStmt " <<  "\n";
  instructionList code;
  CodeAttribs     && codAtsE1 = visit(ctx->left_expr());
  std::string           addr1 = codAtsE1.addr;
  std::string           offs1 = codAtsE1.offs;
  instructionList &     code1 = codAtsE1.code;
  TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());

  //std::cout << "visitAssignStmt1 " << addr1 << " " << offs1 << " end!" <<  "\n";
  //std::cout << "visitAssignStmt1 " << Types.to_string(tid1) << " end!" <<  "\n";

  CodeAttribs     && codAtsE2 = visit(ctx->expr());
  std::string           addr2 = codAtsE2.addr;
  std::string           offs2 = codAtsE2.offs;
  instructionList &     code2 = codAtsE2.code;
//  TypesMgr::TypeId tid2 = getTypeDecor(ctx->expr());

  //std::cout << "visitAssignStmt2 " << addr2 << " " << offs2 << " end!" <<  "\n";
  //std::cout << "visitAssignStmt2 " << Types.to_string(tid2) << " end!" <<  "\n";

  if (Types.isIntegerTy(tid1) || Types.isBooleanTy(tid1))
    code = code1 || code2 || instruction::ILOAD(addr1, addr2);
  if (Types.isCharacterTy(tid1))
    code = code1 || code2 || instruction::CHLOAD(addr1, addr2);
  if (Types.isFloatTy(tid1))
    code = code1 || code2 || instruction::FLOAD(addr1, addr2);
  //std::cout << "exit " << addr1 << " " << addr2 << " end!" <<  "\n";
  DEBUG_EXIT();
  return code;
}

//WHILE expr DO statements ENDWHILE                             # whileStmt
antlrcpp::Any CodeGenVisitor::visitWhileStmt(AslParser::WhileStmtContext *ctx) {
  DEBUG_ENTER();
  //std::cout << "visitWhileStmt " <<  "\n";
  instructionList code;
  CodeAttribs     && codAtsE1 = visit(ctx->expr());
  std::string           addr1 = codAtsE1.addr;
  std::string           offs1 = codAtsE1.offs;
  instructionList &     code1 = codAtsE1.code;
  //TypesMgr::TypeId tid1 = getTypeDecor(ctx->expr());
  instructionList &&   code2 = visit(ctx->statements());   // primer stmt, ctx->statements

  std::string label = "while"+codeCounters.newLabelWHILE();
  std::string labelEnd = "end"+label;
  code =  instruction::LABEL(label) || code1 || instruction::FJUMP(addr1, labelEnd) || code2 || instruction::UJUMP(label) || instruction::LABEL(labelEnd);
  //std::cout << "exit " << addr1 << " " << addr2 << " end!" <<  "\n";
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
  instructionList code;
  CodeAttribs     && codAtsE = visit(ctx->expr());
  std::string          addr1 = codAtsE.addr;
  instructionList &    code1 = codAtsE.code;
  instructionList &&   code2 = visit(ctx->statements(0));   // primer stmt, ctx->statements
  //if (ctx->statements().size() > 1) while(true){}
    //std::cout<<"This is a warning, visitIfStmt only visits first child" << "\n";
  std::string label = codeCounters.newLabelIF();
  std::string labelEndIf = "endif"+label;
  code = code1 || instruction::FJUMP(addr1, labelEndIf) ||
         code2 || instruction::LABEL(labelEndIf);
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitProcCall(AslParser::ProcCallContext *ctx) {
  DEBUG_ENTER();
  instructionList code;
  // std::string name = ctx->ident()->ID()->getSymbol()->getText();
  std::string name = ctx->ident()->getText();
  code = instruction::CALL(name);
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs     && codAtsE = visit(ctx->left_expr());
  std::string          addr1 = codAtsE.addr;
  // std::string          offs1 = codAtsE.offs;
  instructionList &    code1 = codAtsE.code;
  instructionList &     code = code1;
  // TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());
  code = code1 || instruction::READI(addr1);
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs     && codAt1 = visit(ctx->expr());
  std::string         addr1 = codAt1.addr;
  // std::string         offs1 = codAt1.offs;
  instructionList &   code1 = codAt1.code;
  instructionList &    code = code1;
  TypesMgr::TypeId tid1 = getTypeDecor(ctx->expr());

  if (Types.isIntegerTy(tid1) || Types.isBooleanTy(tid1))
    code = code1 || instruction::WRITEI(addr1);
  else if (Types.isFloatTy(tid1))
    code = code1 || instruction::WRITEF(addr1);
  else if (Types.isCharacterTy(tid1))
    code = code1 || instruction::WRITEC(addr1);
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitWriteString(AslParser::WriteStringContext *ctx) {
  DEBUG_ENTER();
  instructionList code;
  std::string s = ctx->STRING()->getText();
  code = code || instruction::WRITES(s);
  DEBUG_EXIT();
  return code;
}

antlrcpp::Any CodeGenVisitor::visitLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs && codAts = visit(ctx->ident());

  //if (ctx->expr()) {
  //  CodeAttribs && codAtsIndex = visit(ctx->expr());
  //}

  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any visitArray_index(AslParser::Array_acessContext *ctx) {

}

antlrcpp::Any CodeGenVisitor::visitParen(AslParser::ParenContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs     && codAt1 = visit(ctx->expr());
  DEBUG_EXIT();
  return codAt1;
}

antlrcpp::Any CodeGenVisitor::visitUnary(AslParser::UnaryContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs     && codAt1 = visit(ctx->expr());
  std::string         addr1 = codAt1.addr;
  instructionList &   code1 = codAt1.code;
  std::string temp = "%"+codeCounters.newTEMP();

  if (ctx->NOT())
    code1 = code1 || instruction::NOT(temp, addr1);
  else if (ctx->SUB())
    code1 = code1 || instruction::NEG(temp, addr1);
  else if (ctx->PLUS())
    temp = addr1;

  CodeAttribs codAts(temp, "", code1);
  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any CodeGenVisitor::visitArithmetic(AslParser::ArithmeticContext *ctx) {
  DEBUG_ENTER();
  //std::cout << "visitArithmetic size " << ctx->expr().size() << "\n";
  CodeAttribs     && codAt1 = visit(ctx->expr(0));
  std::string         addr1 = codAt1.addr;
  instructionList &   code1 = codAt1.code;
  CodeAttribs     && codAt2 = visit(ctx->expr(1));
  std::string         addr2 = codAt2.addr;
  instructionList &   code2 = codAt2.code;
  instructionList &&   code = code1 || code2;
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  TypesMgr::TypeId  t = getTypeDecor(ctx);
  std::string temp = "%"+codeCounters.newTEMP();
  //std::cout << "visitArithmetic " << Types.to_string(t1) << " " << Types.to_string(t2) << " " << Types.to_string(t) << " " <<  "\n";

  if (Types.isFloatTy(t)){
    std::string         addrF1 = codAt1.addr;
    std::string         addrF2 = codAt2.addr;
      if (not Types.isFloatTy(t1)){
        addrF1 = "%"+codeCounters.newTEMP();
        code = code || instruction::FLOAT(addrF1, addr1);
    }
      if (not Types.isFloatTy(t2)){
        addrF2 = "%"+codeCounters.newTEMP();
        code = code || instruction::FLOAT(addrF2, addr2);
    }
    if (ctx->MUL())
        code = code || instruction::FMUL(temp, addrF1, addrF2);
    else if (ctx->PLUS())
        code = code || instruction::FADD(temp, addrF1, addrF2);
    else if (ctx->SUB())
        code = code || instruction::FSUB(temp, addrF1, addrF2);
    else if (ctx->DIV())
        code = code || instruction::FDIV(temp, addrF1, addrF2);
    /*else if (ctx->MOD())                                            Para el yo del futuro
        code = code || instruction::ADD(temp, addr1, addr2);
        */
  }
  else{
    if (ctx->MUL())
        code = code || instruction::MUL(temp, addr1, addr2);
    else if (ctx->PLUS())
        code = code || instruction::ADD(temp, addr1, addr2);
    else if (ctx->SUB())
        code = code || instruction::SUB(temp, addr1, addr2);
    else if (ctx->DIV())
        code = code || instruction::DIV(temp, addr1, addr2);
    /*else if (ctx->MOD())                                            Para el yo del futuro
        code = code || instruction::ADD(temp, addr1, addr2);
        */
  }
  //std::cout << code.dump() << "\n";
  CodeAttribs codAts(temp, "", code);
  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any CodeGenVisitor::visitLogic(AslParser::LogicContext *ctx) {
  DEBUG_ENTER();
  //std::cout << "visitArithmetic size " << ctx->expr().size() << "\n";
  CodeAttribs     && codAt1 = visit(ctx->expr(0));
  std::string         addr1 = codAt1.addr;
  instructionList &   code1 = codAt1.code;
  CodeAttribs     && codAt2 = visit(ctx->expr(1));
  std::string         addr2 = codAt2.addr;
  instructionList &   code2 = codAt2.code;
  instructionList &&   code = code1 || code2;
  //TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  //TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  //TypesMgr::TypeId  t = getTypeDecor(ctx);
  std::string temp = "%"+codeCounters.newTEMP();
  //std::cout << "visitArithmetic " << Types.to_string(t1) << " " << Types.to_string(t2) << " " << Types.to_string(t) << " " <<  "\n";
  if (ctx->AND())
    code = code || instruction::AND(temp, addr1, addr2);
  else // (ctx->OR())
    code = code || instruction::OR(temp, addr1, addr2);
  //std::cout << code.dump() << "\n";
  CodeAttribs codAts(temp, "", code);
  DEBUG_EXIT();
  return codAts;
}

//(EQUAL|NEQ|GT|LT|GE|LE) expr
antlrcpp::Any CodeGenVisitor::visitRelational(AslParser::RelationalContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs     && codAt1 = visit(ctx->expr(0));
  std::string         addr1 = codAt1.addr;
  instructionList &   code1 = codAt1.code;
  CodeAttribs     && codAt2 = visit(ctx->expr(1));
  std::string         addr2 = codAt2.addr;
  instructionList &   code2 = codAt2.code;
  instructionList &&   code = code1 || code2;
   TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
   TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
   TypesMgr::TypeId  t = getTypeDecor(ctx);
  //std::string temp = "%"+codeCounters.newTEMP();
    std::string temp1 = "%"+codeCounters.newTEMP();
    std::string temp2 = "%"+codeCounters.newTEMP();

  //std::cout << "visitRelational " << Types.to_string(t1) << " " << Types.to_string(t2) << " " << Types.to_string(t) << " " <<  "\n";
  //std::cout << "visitRelational " << addr1 << " " << addr2 << " end!" <<  "\n";

  if (Types.isFloatTy(t1) || Types.isFloatTy(t2) || Types.isFloatTy(t)){
    std::string         addrF1 = codAt1.addr;
    std::string         addrF2 = codAt2.addr;

    if (Types.isIntegerTy(t1)){
        addrF1 = "%"+codeCounters.newTEMP();
        code = code || instruction::FLOAT(addrF1, addr1);
    }
    if (Types.isIntegerTy(t2)){
        addrF2 = "%"+codeCounters.newTEMP();
        code = code || instruction::FLOAT(addrF2, addr2);
    }
    if (ctx->EQUAL())
        code = code || instruction::FEQ(temp1, addrF1, addrF2); //AQUI AÑADIR TODAS LAS COMPARACIONES LOLZ
    else if (ctx->NEQ())
        code = code || instruction::FEQ(temp2, addrF1, addrF2) || instruction::NOT(temp1, temp2);
    else if (ctx->GT())
        code = code || instruction::FLE(temp2, addrF1, addrF2) || instruction::NOT(temp1, temp2); //Como no hay code para GT, hay que concatenar LessEqual y luego hacer Not
    else if (ctx->LT())
        code = code || instruction::FLT(temp1, addrF1, addrF2);
    else if (ctx->GE())
        code = code || instruction::FLT(temp2, addrF1, addrF2) || instruction::NOT(temp1, temp2);
    else if (ctx->LE())
        code = code || instruction::FLE(temp1, addrF1, addrF2);
  }
  else{
    if (ctx->EQUAL())
        code = code || instruction::EQ(temp1, addr1, addr2); //AQUI AÑADIR TODAS LAS COMPARACIONES LOLZ
    else if (ctx->NEQ())
        code = code || instruction::EQ(temp2, addr1, addr2) || instruction::NOT(temp1, temp2);
    else if (ctx->GT())
        code = code || instruction::LE(temp2, addr1, addr2) || instruction::NOT(temp1, temp2); //Como no hay code para GT, hay que concatenar LessEqual y luego hacer Not
    else if (ctx->LT())
        code = code || instruction::LT(temp1, addr1, addr2);
    else if (ctx->GE())
        code = code || instruction::LT(temp2, addr1, addr2) || instruction::NOT(temp1, temp2);
    else if (ctx->LE())
        code = code || instruction::LE(temp1, addr1, addr2);
  }

  //std::cout << "endRelational " << addr1 << " " << addr2 << " end!" <<  "\n";
  CodeAttribs codAts(temp1, "", code);
  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any CodeGenVisitor::visitValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
  instructionList code;
  std::string temp = "%"+codeCounters.newTEMP();
  if (ctx->INTVAL())
    code = instruction::ILOAD(temp, ctx->getText());
  else if (ctx->BOOLVAL())
    code = instruction::LOAD(temp, ctx->getText() == "true" ? "1" : "0");
  else if (ctx->FLOATVAL())
    code = instruction::FLOAD(temp, ctx->getText());
  else if (ctx->CHARVAL())
    code = instruction::CHLOAD(temp, ctx->getText().substr(1, ctx->getText().size()-2));
    
  CodeAttribs codAts(temp, "", code);
  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any CodeGenVisitor::visitExprIdent(AslParser::ExprIdentContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs && codAts = visit(ctx->ident());
  DEBUG_EXIT();
  return codAts;
}

antlrcpp::Any CodeGenVisitor::visitIdent(AslParser::IdentContext *ctx) {
  DEBUG_ENTER();
  CodeAttribs codAts(ctx->ID()->getText(), "", instructionList());
  DEBUG_EXIT();
  return codAts;
}


// Getters for the necessary tree node atributes:
//   Scope and Type
SymTable::ScopeId CodeGenVisitor::getScopeDecor(antlr4::ParserRuleContext *ctx) const {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId CodeGenVisitor::getTypeDecor(antlr4::ParserRuleContext *ctx) const {
  return Decorations.getType(ctx);
}


// Constructors of the class CodeAttribs:
//
CodeGenVisitor::CodeAttribs::CodeAttribs(const std::string & addr,
                                         const std::string & offs,
                                         instructionList & code) :
  addr{addr}, offs{offs}, code{code} {
}

CodeGenVisitor::CodeAttribs::CodeAttribs(const std::string & addr,
                                         const std::string & offs,
                                         instructionList && code) :
  addr{addr}, offs{offs}, code{code} {
}
