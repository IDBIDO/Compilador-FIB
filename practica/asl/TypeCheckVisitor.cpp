//////////////////////////////////////////////////////////////////////
//
//    TypeCheckVisitor - Walk the parser tree to do the semantic
//                       typecheck for the Asl programming language
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

#include "TypeCheckVisitor.h"
#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

#include <iostream>
#include <string>

// uncomment the following line to enable debugging messages with DEBUG*
 //#define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
TypeCheckVisitor::TypeCheckVisitor(TypesMgr       & Types,
                                   SymTable       & Symbols,
                                   TreeDecoration & Decorations,
                                   SemErrors      & Errors) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations},
  Errors{Errors} {
}

// Accessor/Mutator to the attribute currFunctionType
TypesMgr::TypeId TypeCheckVisitor::getCurrentFunctionTy() const {
  return currFunctionType;
}

void TypeCheckVisitor::setCurrentFunctionTy(TypesMgr::TypeId type) {
  currFunctionType = type;
}

// Methods to visit each kind of node:
//
antlrcpp::Any TypeCheckVisitor::visitProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  for (auto ctxFunc : ctx->function()) {
    visit(ctxFunc);
  }
  if (Symbols.noMainProperlyDeclared())
    Errors.noMainProperlyDeclared(ctx);
  Symbols.popScope();
  Errors.print();
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);  
  Symbols.pushThisScope(sc);
  //Symbols.print();
  TypesMgr::TypeId t = Types.createVoidTy();
  if(ctx->type()){
    visit(ctx->type());
    if (ctx->type()->simple_type())     t = getTypeDecor(ctx->type()->simple_type());
    else t = getTypeDecor(ctx->type()->array_type());
  }
  //std::cout << "setCurrentFunctionTy: " << Types.to_string_basic(t) << "\n";
  setCurrentFunctionTy(t);
  visit(ctx->statements());
  Symbols.popScope();
  DEBUG_EXIT();
  return 0;
}

// antlrcpp::Any TypeCheckVisitor::visitDeclarations(AslParser::DeclarationsContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any TypeCheckVisitor::visitVariable_decl(AslParser::Variable_declContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any TypeCheckVisitor::visitType(AslParser::TypeContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

//RETURN ret_expr? ';'                    # returnStmt
antlrcpp::Any TypeCheckVisitor::visitReturnStmt(AslParser::ReturnStmtContext *ctx) {
  DEBUG_ENTER();
  //Symbols.print();
  TypesMgr::TypeId t = getCurrentFunctionTy();
  if (Types.isVoidTy(t)) {
      if (ctx->expr()) Errors.incompatibleReturn(ctx->RETURN());
  } else {
      if (!ctx->expr())
          Errors.incompatibleReturn(ctx->RETURN());
      else{
        visit(ctx->expr());
        TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
        //std::cout << "Return type: " << Types.to_string_basic(t) << "\n";
        //std::cout << "Expr type: " << Types.to_string_basic(t1) << "\n";
        if (not (Types.isNumericTy(t1) and Types.isFloatTy(t)) and not Types.equalTypes(t1,t))
            Errors.incompatibleReturn(ctx->RETURN());
      }
  }

  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitStatements(AslParser::StatementsContext *ctx) {
  DEBUG_ENTER();
  visitChildren(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->left_expr());
  visit(ctx->expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr());
  if ((not Types.isErrorTy(t1)) and (not Types.isErrorTy(t2)) and
      (not Types.copyableTypes(t1, t2)))
    Errors.incompatibleAssignment(ctx->ASSIGN());
  if ((not Types.isErrorTy(t1)) and (not getIsLValueDecor(ctx->left_expr())))
    Errors.nonReferenceableLeftExpr(ctx->left_expr());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitWhileStmt(AslParser::WhileStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
  if ((not Types.isErrorTy(t1)) and (not Types.isBooleanTy(t1)))
    Errors.booleanRequired(ctx);
  visit(ctx->statements());
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
  if ((not Types.isErrorTy(t1)) and (not Types.isBooleanTy(t1)))
    Errors.booleanRequired(ctx);
  visit(ctx->statements(0));
  if (ctx->ELSE()) // always?
    visit(ctx->statements(1));
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitProcCall(AslParser::ProcCallContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->ident());
  if (Types.isErrorTy(t1)) {
    ;
  } else if (not Types.isFunctionTy(t1)) {
    Errors.isNotCallable(ctx->ident());
  } // me esta dando mucho toc pero voy a añadir nuevos estilos!....
  else
  {
    for(uint i= 0; i< ctx->expr().size(); ++i)
      visit(ctx->expr(i));
    if(Types.getNumOfParameters(t1) != ctx->expr().size())
      Errors.numberOfParameters(ctx->ident());
    else
      for(uint i= 0; i< ctx->expr().size(); ++i){
        visit(ctx->expr(i));
        TypesMgr::TypeId tParam = Types.getParameterType(t1, i);
        TypesMgr::TypeId tExpr = getTypeDecor(ctx->expr(i));
        if(not Types.equalTypes(tParam,tExpr) and not (Types.isFloatTy(tParam) and Types.isIntegerTy(tExpr)))
          Errors.incompatibleParameter(ctx->expr(i),i+1,ctx);
      }
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->left_expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->left_expr());
  if (not Types.isErrorTy(t1)){
    if (not Types.isPrimitiveTy(t1) and not Types.isFunctionTy(t1))
      Errors.readWriteRequireBasic(ctx);
    if (not getIsLValueDecor(ctx->left_expr()))
      Errors.nonReferenceableExpression(ctx);
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr());
  if (not Types.isErrorTy(t1) and not Types.isPrimitiveTy(t1))
    Errors.readWriteRequireBasic(ctx);
  DEBUG_EXIT();
  return 0;
}

// antlrcpp::Any TypeCheckVisitor::visitWriteString(AslParser::WriteStringContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

//  ident ('[' expr ']')?     Es tipo asignacion
antlrcpp::Any TypeCheckVisitor::visitLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());  // mirar si existe tal identificador en el stack
  TypesMgr::TypeId tId = getTypeDecor(ctx->ident());   // get ident type
  bool lVal = getIsLValueDecor(ctx->ident());    // ??? -> Indica si es asignable (lo que esta a la izquierda: a= 1)
  bool knowArrayType = true;
  if (ctx->expr()) {    // se trata de un array
    visit(ctx->expr());     // mirar si la expresion es correcta
    TypesMgr::TypeId tIndex = getTypeDecor(ctx->expr());
    if (not Types.isErrorTy(tIndex) and not Types.isIntegerTy(tIndex))      //tIndex no es error
      Errors.nonIntegerIndexInArrayAccess(ctx->expr());                     //tIndex no es un int!
    if (not Types.isErrorTy(tId) and not Types.isArrayTy(tId)) {            //tID no es Err
      Errors.nonArrayInArrayAccess(ctx);                                    //tID no es Array!
      knowArrayType = false;
    }
    if (not Types.isErrorTy(tId) and knowArrayType) tId = Types.getArrayElemType(tId);
    else tId = Types.createErrorTy();
  }
  putTypeDecor(ctx, tId);
  putIsLValueDecor(ctx, lVal);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitParen(AslParser::ParenContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr());
  putTypeDecor(ctx, getTypeDecor(ctx->expr()));
  putIsLValueDecor(ctx, false);   // no es una tipus asignable
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitArithmetic(AslParser::ArithmeticContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  if ((not Types.isErrorTy(t1) and not Types.isNumericTy(t1) and not Types.isFloatTy(t1)) or
      (not Types.isErrorTy(t2) and not Types.isNumericTy(t2) and not Types.isFloatTy(t2)))
    Errors.incompatibleOperator(ctx->op);
  TypesMgr::TypeId t;
  if (Types.isFloatTy(t1) or Types.isFloatTy(t2))
      t = Types.createFloatTy();
  else t = Types.createIntegerTy();
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitLogic(AslParser::LogicContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  if ((not Types.isErrorTy(t1) and not Types.isBooleanTy(t1)) or
      (not Types.isErrorTy(t2) and not Types.isBooleanTy(t2))) 
    Errors.incompatibleOperator(ctx->op);
  putTypeDecor(ctx, Types.createBooleanTy());
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitRelational(AslParser::RelationalContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->expr(0));
  visit(ctx->expr(1));
  TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  std::string oper = ctx->op->getText();
  if (not Types.isErrorTy(t1) and not Types.isErrorTy(t2) and not Types.comparableTypes(t1, t2, oper))
    Errors.incompatibleOperator(ctx->op);
  putTypeDecor(ctx, Types.createBooleanTy());
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
  TypesMgr::TypeId t;
  if (ctx->INTVAL()) t = Types.createIntegerTy();
  else if (ctx->CHARVAL()) t = Types.createCharacterTy();
  else if (ctx->FLOATVAL()) t = Types.createFloatTy();
  else if (ctx->BOOLVAL()) t = Types.createBooleanTy();
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitExprIdent(AslParser::ExprIdentContext *ctx) {
  DEBUG_ENTER();
  visit(ctx->ident());
  TypesMgr::TypeId t = getTypeDecor(ctx->ident());
  putTypeDecor(ctx, t);
  bool lVal = getIsLValueDecor(ctx->ident());
  putIsLValueDecor(ctx, lVal);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitArray_acess(AslParser::Array_acessContext *ctx) {
  DEBUG_ENTER();
  visit(ctx-> ident());   // comprobar si existe el ident
  visit(ctx-> expr());
  TypesMgr::TypeId tID = getTypeDecor(ctx->ident());      // tID: tipo del nodo array
  TypesMgr::TypeId tIndex = getTypeDecor(ctx->expr());    // tIndex: Tipo del indice del array
  TypesMgr::TypeId tElem = Types.createErrorTy();         // tElem: Tipo de los elem del array
  if (not Types.isErrorTy(tID) and not Types.isArrayTy(tID))              //tID no es Err
    Errors.nonArrayInArrayAccess(ctx);                                    //tID no es Array!
  else if (not Types.isErrorTy(tID)) 
    tElem = Types.getArrayElemType(tID); // Guardamos tipo del elemento del array
  if (not Types.isErrorTy(tIndex) and not Types.isIntegerTy(tIndex))      //tIndex no es error
    Errors.nonIntegerIndexInArrayAccess(ctx->expr());                     //tIndex no es un int!
  putTypeDecor(ctx, tElem);
  putIsLValueDecor(ctx, true);              // Una posicion de un array es asignable
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any TypeCheckVisitor::visitIdent(AslParser::IdentContext *ctx) {
  DEBUG_ENTER();
  std::string ident = ctx->getText();
  TypesMgr::TypeId t;
  bool lVal;
  if (Symbols.findInStack(ident) == -1) {     // no existe el identificador en el stack
    Errors.undeclaredIdent(ctx->ID());        // error
    t = Types.createErrorTy();
    lVal = true;                              // Si hay un error, es asignable?
  }
  else {
    t = Symbols.getType(ident);
    lVal= !Symbols.isFunctionClass(ident); //Si es funcion, no es asignable
  }
  putTypeDecor(ctx, t);
  putIsLValueDecor(ctx, lVal);
  DEBUG_EXIT();
  return 0;
}

//ident '(' ')' //DCE: ahor apuede ser ident (expr (',' expr)*)? por ejemplo f(a+3); JP_8
antlrcpp::Any TypeCheckVisitor::visitFunction_call(AslParser::Function_callContext *ctx) {
  DEBUG_ENTER();
  visit(ctx-> ident());   // comprobar si existe el ident
  TypesMgr::TypeId tID = getTypeDecor(ctx->ident());  // tipo de nodo de ident
  TypesMgr::TypeId tFunc = Types.createErrorTy();
  if (not Types.isFunctionTy(tID) and not Types.isErrorTy(tID))
    Errors.isNotCallable(ctx->ident());
  if (Types.isFunctionTy(tID)) {
    if (Types.isVoidFunction(tID))
        Errors.isNotFunction(ctx->ident());
    else tFunc = Types.getFuncReturnType(tID);

    if(Types.getNumOfParameters(tID) != ctx->expr().size())
      Errors.numberOfParameters(ctx->ident());
    else{
      for(uint i = 0; i < ctx->expr().size(); ++i){
        visit(ctx->expr(i));
        TypesMgr::TypeId t1 = Types.getParameterType(tID, i);
        TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(i));
        
        //std::cout << "t1 " << Types.to_string_basic(t1) << "\n";
        //std::cout << "t2 " << Types.to_string_basic(t2) << "\n";
        if(not(Types.isFloatTy(t1)and Types.isIntegerTy(t2))
          and not Types.isErrorTy(t1) and not Types.isErrorTy(t2)){
          if(not Types.equalTypes(t1,t2)) Errors.incompatibleParameter(ctx->expr(i),i+1,ctx);
        }
      }
    }
  }
  putTypeDecor(ctx, tFunc);
  putIsLValueDecor(ctx, false);
  DEBUG_EXIT();
  return 0;
}

// Getters for the necessary tree node atributes:
//   Scope, Type ans IsLValue
SymTable::ScopeId TypeCheckVisitor::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId TypeCheckVisitor::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}
bool TypeCheckVisitor::getIsLValueDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getIsLValue(ctx);
}

// Setters for the necessary tree node attributes:
//   Scope, Type ans IsLValue
void TypeCheckVisitor::putScopeDecor(antlr4::ParserRuleContext *ctx, SymTable::ScopeId s) {
  Decorations.putScope(ctx, s);
}
void TypeCheckVisitor::putTypeDecor(antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t) {
  Decorations.putType(ctx, t);
}
void TypeCheckVisitor::putIsLValueDecor(antlr4::ParserRuleContext *ctx, bool b) {
  Decorations.putIsLValue(ctx, b);
}
