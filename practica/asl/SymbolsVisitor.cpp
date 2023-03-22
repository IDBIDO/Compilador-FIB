//////////////////////////////////////////////////////////////////////
//
//    SymbolsVisitor - Walk the parser tree to register symbols
//                     for the Asl programming language
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

#include "SymbolsVisitor.h"
#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/SemErrors.h"

#include <iostream>
#include <string>
#include <vector>

#include <cstddef>    // std::size_t

// uncomment the following line to enable debugging messages with DEBUG*
 //#define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
SymbolsVisitor::SymbolsVisitor(TypesMgr       & Types,
                               SymTable       & Symbols,
                               TreeDecoration & Decorations,
                               SemErrors      & Errors) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations},
  Errors{Errors} {
}

/*
visitProgram
visitFunction
visitDeclarations


*/


// Methods to visit each kind of node:
//
antlrcpp::Any SymbolsVisitor::visitProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = Symbols.pushNewScope(SymTable::GLOBAL_SCOPE_NAME);
  putScopeDecor(ctx, sc);
  for (auto ctxFunc : ctx->function()) { 
    visit(ctxFunc);
  }
  // Symbols.print();
  Symbols.popScope();
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  std::string funcName = ctx->ID()->getText();
  SymTable::ScopeId sc = Symbols.pushNewScope(funcName);
  putScopeDecor(ctx, sc);

  
  visit(ctx->params());     // visitar los parametros de la funcion
  visit(ctx->declarations());

  //Symbols.print();
  Symbols.popScope();
  std::string ident = ctx->ID()->getText();
  if (Symbols.findInCurrentScope(ident)) {
    Errors.declaredIdent(ctx->ID());
  }
  else {
    //int id_size = ctx->ID().size();
    //int type_size = ctx->type().size();

    TypesMgr::TypeId tRet; // get RETURN type
    if(ctx->type() != NULL) {     // ha especificado tipo de retorno
      //tRet = getTypeDecor(ctx->type());   // devuelve el tipo
      if (ctx->type()->simple_type()->INT()) tRet = Types.createIntegerTy();
      else if (ctx->type()->simple_type()->BOOL()) tRet = Types.createBooleanTy();
      else if (ctx->type()->simple_type() ->FLOAT()) tRet = Types.createFloatTy();
      else if (ctx->type()->simple_type()->CHAR()) tRet = Types.createCharacterTy();
      else if (ctx->type()->array_type()) {
        int size = stoi(ctx->type()->array_type()->INTVAL()->getText());
        TypesMgr::TypeId elemType = getTypeDecor(ctx->type());
        tRet = Types.createArrayTy(size, elemType);
      }
    } else tRet = Types.createVoidTy();

    // get Param types
    std::vector<TypesMgr::TypeId> lParamsTy; // PARAMETER types
    for (auto i : ctx->params()->type()) {
      lParamsTy.push_back(getTypeDecor(i));
    } 
    
    TypesMgr::TypeId tFunc = Types.createFunctionTy(lParamsTy, tRet);
    Symbols.addFunction(ident, tFunc);
    
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitParams(AslParser::ParamsContext *ctx) {
  DEBUG_ENTER();

  for (size_t i = 0; i < ctx->ID().size(); ++i) {
    visit(ctx->type(i));   // creara un el tipo correspondiente
    std::string ident = ctx->ID(i)->getText();    // id de la variable
    if (Symbols.findInCurrentScope(ident)) {
      Errors.declaredIdent(ctx->ID(i));
    }
    else {
      TypesMgr::TypeId t1 = getTypeDecor(ctx->type(i));
      Symbols.addLocalVar(ident, t1);
    }
  }


  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
  visitChildren(ctx);
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitVariable_decl(AslParser::Variable_declContext *ctx) {
  DEBUG_ENTER();
  for (size_t i= 0; i < ctx->ID().size(); ++i){

  //while(1){}
    std::string ident = ctx->ID(i)->getText();
    if (Symbols.findInCurrentScope(ident))
        Errors.declaredIdent(ctx->ID(i));
    else {
        visit(ctx->type());
        TypesMgr::TypeId t = getTypeDecor(ctx->type());
        //if (ctx->type()->simple_type()) t = getTypeDecor(ctx->type()->simple_type());
        //else t = getTypeDecor(ctx->type()->array_type());
        Symbols.addLocalVar(ident, t);
    }
  }
  DEBUG_EXIT();
  return 0;
  }


antlrcpp::Any SymbolsVisitor::visitType(AslParser::TypeContext *ctx) {
  DEBUG_ENTER();
  if (ctx->simple_type()) {
    visit(ctx->simple_type());
    TypesMgr::TypeId t = getTypeDecor(ctx->simple_type());
    putTypeDecor(ctx, t);
  }
  else if (ctx->array_type()) {
    visit(ctx->array_type());
    TypesMgr::TypeId t = getTypeDecor(ctx->array_type());
    putTypeDecor(ctx, t);
  }

  //Symbols.print();

  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitSimple_type(AslParser::Simple_typeContext *ctx) {
  DEBUG_ENTER();
  if (ctx->INT()) {
    TypesMgr::TypeId t = Types.createIntegerTy();
    putTypeDecor(ctx, t);
  }
  else if (ctx->BOOL()) {
    TypesMgr::TypeId t = Types.createBooleanTy();
    putTypeDecor(ctx, t);
  }
  else if (ctx ->FLOAT()) {
    TypesMgr::TypeId t = Types.createFloatTy();
    putTypeDecor(ctx, t);
  }
  else if (ctx->CHAR()) {
    TypesMgr::TypeId t = Types.createCharacterTy();
    putTypeDecor(ctx, t);
  }
  DEBUG_EXIT();
  return 0;
}

antlrcpp::Any SymbolsVisitor::visitArray_type(AslParser::Array_typeContext *ctx) {
  DEBUG_ENTER();

//TypeId createArrayTy     (unsigned int                size,
//TypeId                      elemType);
  //Symbols.print();
  //while(1){}
  visit(ctx->INTVAL());
  visit(ctx->simple_type());
  //TypesMgr::TypeId t =
  int size = stoi(ctx->INTVAL()->getText());
  TypesMgr::TypeId elemType = getTypeDecor(ctx->simple_type());
  TypesMgr::TypeId t = Types.createArrayTy(size, elemType);
  putTypeDecor(ctx, t);
  DEBUG_EXIT();
  return 0;
}

// antlrcpp::Any SymbolsVisitor::visitStatements(AslParser::StatementsContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitAssignStmt(AslParser::AssignStmtContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitIfStmt(AslParser::IfStmtContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitProcCall(AslParser::ProcCallContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitReadStmt(AslParser::ReadStmtContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitWriteExpr(AslParser::WriteExprContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitWriteString(AslParser::WriteStringContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitLeft_expr(AslParser::Left_exprContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitExprIdent(AslParser::ExprIdentContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitArithmetic(AslParser::ArithmeticContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitRelational(AslParser::RelationalContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitValue(AslParser::ValueContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }

// antlrcpp::Any SymbolsVisitor::visitIdent(AslParser::IdentContext *ctx) {
//   DEBUG_ENTER();
//   antlrcpp::Any r = visitChildren(ctx);
//   DEBUG_EXIT();
//   return r;
// }


// Getters for the necessary tree node atributes:
//   Scope and Type
SymTable::ScopeId SymbolsVisitor::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId SymbolsVisitor::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}

// Setters for the necessary tree node attributes:
//   Scope and Type
void SymbolsVisitor::putScopeDecor(antlr4::ParserRuleContext *ctx, SymTable::ScopeId s) {
  Decorations.putScope(ctx, s);
}
void SymbolsVisitor::putTypeDecor(antlr4::ParserRuleContext *ctx, TypesMgr::TypeId t) {
  Decorations.putType(ctx, t);
}
