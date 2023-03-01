
// Generated from Calc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcParser.
 */
class  CalcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcParser.
   */
    virtual antlrcpp::Any visitProg(CalcParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitAssign(CalcParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitIf(CalcParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitBlank(CalcParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitPars(CalcParser::ParsContext *context) = 0;

    virtual antlrcpp::Any visitNegate(CalcParser::NegateContext *context) = 0;

    virtual antlrcpp::Any visitPlus_sub(CalcParser::Plus_subContext *context) = 0;

    virtual antlrcpp::Any visitProd_div(CalcParser::Prod_divContext *context) = 0;

    virtual antlrcpp::Any visitSum(CalcParser::SumContext *context) = 0;

    virtual antlrcpp::Any visitId(CalcParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitInt(CalcParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitArg(CalcParser::ArgContext *context) = 0;


};

