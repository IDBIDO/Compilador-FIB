
// Generated from Calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual antlrcpp::Any visitProg(CalcParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(CalcParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(CalcParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPars(CalcParser::ParsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegate(CalcParser::NegateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus_sub(CalcParser::Plus_subContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProd_div(CalcParser::Prod_divContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSum(CalcParser::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId(CalcParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(CalcParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg(CalcParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }


};

