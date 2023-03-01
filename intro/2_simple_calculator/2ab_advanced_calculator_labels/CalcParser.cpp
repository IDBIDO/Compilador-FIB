
// Generated from Calc.g4 by ANTLR 4.7.2


#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;
using namespace antlr4;

CalcParser::CalcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CalcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

CalcParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::ProgContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

std::vector<CalcParser::StatContext *> CalcParser::ProgContext::stat() {
  return getRuleContexts<CalcParser::StatContext>();
}

CalcParser::StatContext* CalcParser::ProgContext::stat(size_t i) {
  return getRuleContext<CalcParser::StatContext>(i);
}


size_t CalcParser::ProgContext::getRuleIndex() const {
  return CalcParser::RuleProg;
}

antlrcpp::Any CalcParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ProgContext* CalcParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(9); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      stat();
      setState(11); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CalcParser::IF)
      | (1ULL << CalcParser::SUM)
      | (1ULL << CalcParser::LPAR)
      | (1ULL << CalcParser::SUB)
      | (1ULL << CalcParser::ID)
      | (1ULL << CalcParser::INT)
      | (1ULL << CalcParser::NEWLINE))) != 0));
    setState(13);
    match(CalcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

CalcParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::StatContext::getRuleIndex() const {
  return CalcParser::RuleStat;
}

void CalcParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BlankContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IfContext::IF() {
  return getToken(CalcParser::IF, 0);
}

CalcParser::ExprContext* CalcParser::IfContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::IfContext::THEN() {
  return getToken(CalcParser::THEN, 0);
}

CalcParser::StatContext* CalcParser::IfContext::stat() {
  return getRuleContext<CalcParser::StatContext>(0);
}

tree::TerminalNode* CalcParser::IfContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

tree::TerminalNode* CalcParser::IfContext::ENDIF() {
  return getToken(CalcParser::ENDIF, 0);
}

CalcParser::IfContext::IfContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::PrintExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::AssignContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::ExprContext* CalcParser::AssignContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AssignContext::NEWLINE() {
  return getToken(CalcParser::NEWLINE, 0);
}

CalcParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::StatContext* CalcParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::PrintExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(15);
      expr(0);
      setState(16);
      match(CalcParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(18);
      match(CalcParser::ID);
      setState(19);
      match(CalcParser::T__0);
      setState(20);
      expr(0);
      setState(21);
      match(CalcParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(23);
      match(CalcParser::IF);
      setState(24);
      expr(0);
      setState(25);
      match(CalcParser::THEN);
      setState(26);
      stat();
      setState(27);
      match(CalcParser::NEWLINE);
      setState(28);
      match(CalcParser::ENDIF);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatContext *>(_tracker.createInstance<CalcParser::BlankContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(30);
      match(CalcParser::NEWLINE);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParsContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::ParsContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ExprContext* CalcParser::ParsContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::ParsContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

CalcParser::ParsContext::ParsContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::ParsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPars(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegateContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::NegateContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::ExprContext* CalcParser::NegateContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::NegateContext::NegateContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::NegateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNegate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Plus_subContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::Plus_subContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::Plus_subContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::Plus_subContext::ADD() {
  return getToken(CalcParser::ADD, 0);
}

tree::TerminalNode* CalcParser::Plus_subContext::SUB() {
  return getToken(CalcParser::SUB, 0);
}

CalcParser::Plus_subContext::Plus_subContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::Plus_subContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPlus_sub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Prod_divContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::Prod_divContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::Prod_divContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

tree::TerminalNode* CalcParser::Prod_divContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

tree::TerminalNode* CalcParser::Prod_divContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

CalcParser::Prod_divContext::Prod_divContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::Prod_divContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProd_div(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SumContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::SumContext::SUM() {
  return getToken(CalcParser::SUM, 0);
}

tree::TerminalNode* CalcParser::SumContext::LPAR() {
  return getToken(CalcParser::LPAR, 0);
}

CalcParser::ArgsContext* CalcParser::SumContext::args() {
  return getRuleContext<CalcParser::ArgsContext>(0);
}

tree::TerminalNode* CalcParser::SumContext::RPAR() {
  return getToken(CalcParser::RPAR, 0);
}

CalcParser::SumContext::SumContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IdContext::ID() {
  return getToken(CalcParser::ID, 0);
}

CalcParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::LPAR: {
        _localctx = _tracker.createInstance<ParsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(34);
        match(CalcParser::LPAR);
        setState(35);
        expr(0);
        setState(36);
        match(CalcParser::RPAR);
        break;
      }

      case CalcParser::SUM: {
        _localctx = _tracker.createInstance<SumContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(38);
        match(CalcParser::SUM);
        setState(39);
        match(CalcParser::LPAR);
        setState(40);
        args();
        setState(41);
        match(CalcParser::RPAR);
        break;
      }

      case CalcParser::SUB: {
        _localctx = _tracker.createInstance<NegateContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(43);
        match(CalcParser::SUB);
        setState(44);
        expr(5);
        break;
      }

      case CalcParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(45);
        match(CalcParser::INT);
        break;
      }

      case CalcParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(46);
        match(CalcParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(57);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(55);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Prod_divContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(50);
          _la = _input->LA(1);
          if (!(_la == CalcParser::MUL

          || _la == CalcParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(51);
          expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Plus_subContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(52);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(53);
          _la = _input->LA(1);
          if (!(_la == CalcParser::ADD

          || _la == CalcParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(54);
          expr(4);
          break;
        }

        } 
      }
      setState(59);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

CalcParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ArgsContext::getRuleIndex() const {
  return CalcParser::RuleArgs;
}

void CalcParser::ArgsContext::copyFrom(ArgsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgContext ------------------------------------------------------------------

std::vector<CalcParser::ExprContext *> CalcParser::ArgContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ArgContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::ArgContext::COMA() {
  return getTokens(CalcParser::COMA);
}

tree::TerminalNode* CalcParser::ArgContext::COMA(size_t i) {
  return getToken(CalcParser::COMA, i);
}

CalcParser::ArgContext::ArgContext(ArgsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any CalcParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::ArgsContext* CalcParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ArgsContext *>(_tracker.createInstance<CalcParser::ArgContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(60);
    expr(0);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::COMA) {
      setState(61);
      match(CalcParser::COMA);
      setState(62);
      expr(0);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CalcParser::_decisionToDFA;
atn::PredictionContextCache CalcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CalcParser::_atn;
std::vector<uint16_t> CalcParser::_serializedATN;

std::vector<std::string> CalcParser::_ruleNames = {
  "prog", "stat", "expr", "args"
};

std::vector<std::string> CalcParser::_literalNames = {
  "", "'='", "'if'", "'then'", "'endif'", "','", "'sum'", "'('", "')'", 
  "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> CalcParser::_symbolicNames = {
  "", "", "IF", "THEN", "ENDIF", "COMA", "SUM", "LPAR", "RPAR", "MUL", "DIV", 
  "ADD", "SUB", "ID", "INT", "NEWLINE", "WS"
};

dfa::Vocabulary CalcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CalcParser::_tokenNames;

CalcParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x12, 0x47, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x6, 0x2, 0xc, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x22, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x32, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x3a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x3d, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x42, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x45, 0xb, 0x5, 0x3, 0x5, 0x2, 0x3, 0x6, 0x6, 0x2, 
    0x4, 0x6, 0x8, 0x2, 0x4, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0xd, 0xe, 0x2, 
    0x4d, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x21, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 
    0x4, 0x3, 0x2, 0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x7, 0x2, 0x2, 0x3, 0x10, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x11, 0x12, 0x5, 0x6, 0x4, 0x2, 0x12, 0x13, 0x7, 0x11, 
    0x2, 0x2, 0x13, 0x22, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x7, 0xf, 0x2, 
    0x2, 0x15, 0x16, 0x7, 0x3, 0x2, 0x2, 0x16, 0x17, 0x5, 0x6, 0x4, 0x2, 
    0x17, 0x18, 0x7, 0x11, 0x2, 0x2, 0x18, 0x22, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x1a, 0x7, 0x4, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x1b, 0x1c, 
    0x7, 0x5, 0x2, 0x2, 0x1c, 0x1d, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1e, 0x7, 
    0x11, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x6, 0x2, 0x2, 0x1f, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x22, 0x7, 0x11, 0x2, 0x2, 0x21, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x21, 0x14, 0x3, 0x2, 0x2, 0x2, 0x21, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x24, 0x8, 0x4, 0x1, 0x2, 0x24, 0x25, 0x7, 0x9, 0x2, 0x2, 0x25, 0x26, 
    0x5, 0x6, 0x4, 0x2, 0x26, 0x27, 0x7, 0xa, 0x2, 0x2, 0x27, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x8, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x9, 
    0x2, 0x2, 0x2a, 0x2b, 0x5, 0x8, 0x5, 0x2, 0x2b, 0x2c, 0x7, 0xa, 0x2, 
    0x2, 0x2c, 0x32, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0xe, 0x2, 0x2, 
    0x2e, 0x32, 0x5, 0x6, 0x4, 0x7, 0x2f, 0x32, 0x7, 0x10, 0x2, 0x2, 0x30, 
    0x32, 0x7, 0xf, 0x2, 0x2, 0x31, 0x23, 0x3, 0x2, 0x2, 0x2, 0x31, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0xc, 0x6, 0x2, 0x2, 0x34, 0x35, 0x9, 0x2, 0x2, 
    0x2, 0x35, 0x3a, 0x5, 0x6, 0x4, 0x7, 0x36, 0x37, 0xc, 0x5, 0x2, 0x2, 
    0x37, 0x38, 0x9, 0x3, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x6, 0x4, 0x6, 0x39, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x39, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x43, 0x5, 0x6, 0x4, 0x2, 0x3f, 0x40, 0x7, 0x7, 0x2, 
    0x2, 0x40, 0x42, 0x5, 0x6, 0x4, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x9, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xd, 0x21, 0x31, 0x39, 0x3b, 0x43, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CalcParser::Initializer CalcParser::_init;
