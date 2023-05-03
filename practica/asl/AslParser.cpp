
// Generated from Asl.g4 by ANTLR 4.7.2


#include "AslVisitor.h"

#include "AslParser.h"


using namespace antlrcpp;
using namespace antlr4;

AslParser::AslParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

AslParser::~AslParser() {
  delete _interpreter;
}

std::string AslParser::getGrammarFileName() const {
  return "Asl.g4";
}

const std::vector<std::string>& AslParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& AslParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

AslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ProgramContext::EOF() {
  return getToken(AslParser::EOF, 0);
}

std::vector<AslParser::FunctionContext *> AslParser::ProgramContext::function() {
  return getRuleContexts<AslParser::FunctionContext>();
}

AslParser::FunctionContext* AslParser::ProgramContext::function(size_t i) {
  return getRuleContext<AslParser::FunctionContext>(i);
}


size_t AslParser::ProgramContext::getRuleIndex() const {
  return AslParser::RuleProgram;
}

antlrcpp::Any AslParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ProgramContext* AslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AslParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      function();
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AslParser::FUNC);
    setState(35);
    match(AslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

AslParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::FunctionContext::FUNC() {
  return getToken(AslParser::FUNC, 0);
}

tree::TerminalNode* AslParser::FunctionContext::ID() {
  return getToken(AslParser::ID, 0);
}

AslParser::ParamsContext* AslParser::FunctionContext::params() {
  return getRuleContext<AslParser::ParamsContext>(0);
}

AslParser::DeclarationsContext* AslParser::FunctionContext::declarations() {
  return getRuleContext<AslParser::DeclarationsContext>(0);
}

AslParser::StatementsContext* AslParser::FunctionContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::FunctionContext::ENDFUNC() {
  return getToken(AslParser::ENDFUNC, 0);
}

AslParser::TypeContext* AslParser::FunctionContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::FunctionContext::getRuleIndex() const {
  return AslParser::RuleFunction;
}

antlrcpp::Any AslParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

AslParser::FunctionContext* AslParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, AslParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(AslParser::FUNC);
    setState(38);
    match(AslParser::ID);
    setState(39);
    params();
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::T__0) {
      setState(40);
      match(AslParser::T__0);
      setState(41);
      type();
    }
    setState(44);
    declarations();
    setState(45);
    statements();
    setState(46);
    match(AslParser::ENDFUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

AslParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ParamsContext::LPAR() {
  return getToken(AslParser::LPAR, 0);
}

tree::TerminalNode* AslParser::ParamsContext::RPAR() {
  return getToken(AslParser::RPAR, 0);
}

std::vector<tree::TerminalNode *> AslParser::ParamsContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::ParamsContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

std::vector<AslParser::TypeContext *> AslParser::ParamsContext::type() {
  return getRuleContexts<AslParser::TypeContext>();
}

AslParser::TypeContext* AslParser::ParamsContext::type(size_t i) {
  return getRuleContext<AslParser::TypeContext>(i);
}


size_t AslParser::ParamsContext::getRuleIndex() const {
  return AslParser::RuleParams;
}

antlrcpp::Any AslParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ParamsContext* AslParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 4, AslParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(AslParser::LPAR);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::ID) {
      setState(49);
      match(AslParser::ID);
      setState(50);
      match(AslParser::T__0);
      setState(51);
      type();
    }
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__1) {
      setState(54);
      match(AslParser::T__1);
      setState(55);
      match(AslParser::ID);
      setState(56);
      match(AslParser::T__0);
      setState(57);
      type();
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    match(AslParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

AslParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Variable_declContext *> AslParser::DeclarationsContext::variable_decl() {
  return getRuleContexts<AslParser::Variable_declContext>();
}

AslParser::Variable_declContext* AslParser::DeclarationsContext::variable_decl(size_t i) {
  return getRuleContext<AslParser::Variable_declContext>(i);
}


size_t AslParser::DeclarationsContext::getRuleIndex() const {
  return AslParser::RuleDeclarations;
}

antlrcpp::Any AslParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

AslParser::DeclarationsContext* AslParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, AslParser::RuleDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::VAR) {
      setState(65);
      variable_decl();
      setState(70);
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

//----------------- Variable_declContext ------------------------------------------------------------------

AslParser::Variable_declContext::Variable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Variable_declContext::VAR() {
  return getToken(AslParser::VAR, 0);
}

std::vector<tree::TerminalNode *> AslParser::Variable_declContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Variable_declContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

AslParser::TypeContext* AslParser::Variable_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::Variable_declContext::getRuleIndex() const {
  return AslParser::RuleVariable_decl;
}

antlrcpp::Any AslParser::Variable_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitVariable_decl(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Variable_declContext* AslParser::variable_decl() {
  Variable_declContext *_localctx = _tracker.createInstance<Variable_declContext>(_ctx, getState());
  enterRule(_localctx, 8, AslParser::RuleVariable_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(AslParser::VAR);
    setState(72);
    match(AslParser::ID);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__1) {
      setState(73);
      match(AslParser::T__1);
      setState(74);
      match(AslParser::ID);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    match(AslParser::T__0);
    setState(81);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

AslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::Simple_typeContext* AslParser::TypeContext::simple_type() {
  return getRuleContext<AslParser::Simple_typeContext>(0);
}

AslParser::Array_typeContext* AslParser::TypeContext::array_type() {
  return getRuleContext<AslParser::Array_typeContext>(0);
}

AslParser::Struct_typeContext* AslParser::TypeContext::struct_type() {
  return getRuleContext<AslParser::Struct_typeContext>(0);
}


size_t AslParser::TypeContext::getRuleIndex() const {
  return AslParser::RuleType;
}

antlrcpp::Any AslParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

AslParser::TypeContext* AslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, AslParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::BOOL:
      case AslParser::FLOAT:
      case AslParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(83);
        simple_type();
        break;
      }

      case AslParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(84);
        array_type();
        break;
      }

      case AslParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(85);
        struct_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_typeContext ------------------------------------------------------------------

AslParser::Struct_typeContext::Struct_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AslParser::Struct_typeContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Struct_typeContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

std::vector<AslParser::Simple_typeContext *> AslParser::Struct_typeContext::simple_type() {
  return getRuleContexts<AslParser::Simple_typeContext>();
}

AslParser::Simple_typeContext* AslParser::Struct_typeContext::simple_type(size_t i) {
  return getRuleContext<AslParser::Simple_typeContext>(i);
}


size_t AslParser::Struct_typeContext::getRuleIndex() const {
  return AslParser::RuleStruct_type;
}

antlrcpp::Any AslParser::Struct_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitStruct_type(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Struct_typeContext* AslParser::struct_type() {
  Struct_typeContext *_localctx = _tracker.createInstance<Struct_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, AslParser::RuleStruct_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(AslParser::T__2);
    setState(89);
    match(AslParser::T__3);

    setState(90);
    match(AslParser::ID);
    setState(91);
    match(AslParser::T__0);
    setState(92);
    simple_type();
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::T__1) {
      setState(94);
      match(AslParser::T__1);
      setState(95);
      match(AslParser::ID);
      setState(96);
      match(AslParser::T__0);
      setState(97);
      simple_type();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(AslParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

AslParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Array_typeContext::ARRAY() {
  return getToken(AslParser::ARRAY, 0);
}

tree::TerminalNode* AslParser::Array_typeContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::Array_typeContext::OF() {
  return getToken(AslParser::OF, 0);
}

AslParser::Simple_typeContext* AslParser::Array_typeContext::simple_type() {
  return getRuleContext<AslParser::Simple_typeContext>(0);
}


size_t AslParser::Array_typeContext::getRuleIndex() const {
  return AslParser::RuleArray_type;
}

antlrcpp::Any AslParser::Array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArray_type(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Array_typeContext* AslParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, AslParser::RuleArray_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(AslParser::ARRAY);
    setState(106);
    match(AslParser::T__5);
    setState(107);
    match(AslParser::INTVAL);
    setState(108);
    match(AslParser::T__6);
    setState(109);
    match(AslParser::OF);
    setState(110);
    simple_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Simple_typeContext ------------------------------------------------------------------

AslParser::Simple_typeContext::Simple_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Simple_typeContext::INT() {
  return getToken(AslParser::INT, 0);
}

tree::TerminalNode* AslParser::Simple_typeContext::BOOL() {
  return getToken(AslParser::BOOL, 0);
}

tree::TerminalNode* AslParser::Simple_typeContext::FLOAT() {
  return getToken(AslParser::FLOAT, 0);
}

tree::TerminalNode* AslParser::Simple_typeContext::CHAR() {
  return getToken(AslParser::CHAR, 0);
}


size_t AslParser::Simple_typeContext::getRuleIndex() const {
  return AslParser::RuleSimple_type;
}

antlrcpp::Any AslParser::Simple_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitSimple_type(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Simple_typeContext* AslParser::simple_type() {
  Simple_typeContext *_localctx = _tracker.createInstance<Simple_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, AslParser::RuleSimple_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::INT)
      | (1ULL << AslParser::BOOL)
      | (1ULL << AslParser::FLOAT)
      | (1ULL << AslParser::CHAR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

AslParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::StatementContext *> AslParser::StatementsContext::statement() {
  return getRuleContexts<AslParser::StatementContext>();
}

AslParser::StatementContext* AslParser::StatementsContext::statement(size_t i) {
  return getRuleContext<AslParser::StatementContext>(i);
}


size_t AslParser::StatementsContext::getRuleIndex() const {
  return AslParser::RuleStatements;
}

antlrcpp::Any AslParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

AslParser::StatementsContext* AslParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 18, AslParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::IF)
      | (1ULL << AslParser::WHILE)
      | (1ULL << AslParser::RETURN)
      | (1ULL << AslParser::READ)
      | (1ULL << AslParser::WRITE)
      | (1ULL << AslParser::ID))) != 0)) {
      setState(114);
      statement();
      setState(119);
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

//----------------- Array_mapContext ------------------------------------------------------------------

AslParser::Array_mapContext::Array_mapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::ExprContext *> AslParser::Array_mapContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::Array_mapContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

std::vector<AslParser::IdentContext *> AslParser::Array_mapContext::ident() {
  return getRuleContexts<AslParser::IdentContext>();
}

AslParser::IdentContext* AslParser::Array_mapContext::ident(size_t i) {
  return getRuleContext<AslParser::IdentContext>(i);
}


size_t AslParser::Array_mapContext::getRuleIndex() const {
  return AslParser::RuleArray_map;
}

antlrcpp::Any AslParser::Array_mapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArray_map(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Array_mapContext* AslParser::array_map() {
  Array_mapContext *_localctx = _tracker.createInstance<Array_mapContext>(_ctx, getState());
  enterRule(_localctx, 20, AslParser::RuleArray_map);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(AslParser::T__5);
    setState(121);
    expr(0);
    setState(122);
    match(AslParser::T__7);
    setState(123);
    expr(0);
    setState(124);
    match(AslParser::T__0);
    setState(125);
    expr(0);
    setState(126);
    match(AslParser::T__8);
    setState(127);
    ident();
    setState(128);
    match(AslParser::T__9);
    setState(129);
    ident();
    setState(130);
    match(AslParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::StatementContext::getRuleIndex() const {
  return AslParser::RuleStatement;
}

void AslParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProcCallContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::ProcCallContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::ProcCallContext::LPAR() {
  return getToken(AslParser::LPAR, 0);
}

tree::TerminalNode* AslParser::ProcCallContext::RPAR() {
  return getToken(AslParser::RPAR, 0);
}

std::vector<AslParser::ExprContext *> AslParser::ProcCallContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ProcCallContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::ProcCallContext::ProcCallContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ProcCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitProcCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteExprContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteExprContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

AslParser::ExprContext* AslParser::WriteExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::WriteExprContext::WriteExprContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WriteExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWriteExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WhileStmtContext::WHILE() {
  return getToken(AslParser::WHILE, 0);
}

AslParser::ExprContext* AslParser::WhileStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::DO() {
  return getToken(AslParser::DO, 0);
}

AslParser::StatementsContext* AslParser::WhileStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::WhileStmtContext::ENDWHILE() {
  return getToken(AslParser::ENDWHILE, 0);
}

AslParser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::IfStmtContext::IF() {
  return getToken(AslParser::IF, 0);
}

AslParser::ExprContext* AslParser::IfStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::THEN() {
  return getToken(AslParser::THEN, 0);
}

std::vector<AslParser::StatementsContext *> AslParser::IfStmtContext::statements() {
  return getRuleContexts<AslParser::StatementsContext>();
}

AslParser::StatementsContext* AslParser::IfStmtContext::statements(size_t i) {
  return getRuleContext<AslParser::StatementsContext>(i);
}

tree::TerminalNode* AslParser::IfStmtContext::ENDIF() {
  return getToken(AslParser::ENDIF, 0);
}

tree::TerminalNode* AslParser::IfStmtContext::ELSE() {
  return getToken(AslParser::ELSE, 0);
}

AslParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReadStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReadStmtContext::READ() {
  return getToken(AslParser::READ, 0);
}

AslParser::Left_exprContext* AslParser::ReadStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

AslParser::ReadStmtContext::ReadStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ReadStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitReadStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

AslParser::Left_exprContext* AslParser::AssignStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

tree::TerminalNode* AslParser::AssignStmtContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::ExprContext* AslParser::AssignStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::AssignStmtContext::AssignStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReturnStmtContext::RETURN() {
  return getToken(AslParser::RETURN, 0);
}

AslParser::ExprContext* AslParser::ReturnStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayMapContext ------------------------------------------------------------------

AslParser::Left_exprContext* AslParser::ArrayMapContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

tree::TerminalNode* AslParser::ArrayMapContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::Array_mapContext* AslParser::ArrayMapContext::array_map() {
  return getRuleContext<AslParser::Array_mapContext>(0);
}

AslParser::ArrayMapContext::ArrayMapContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ArrayMapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArrayMap(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteStringContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteStringContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

tree::TerminalNode* AslParser::WriteStringContext::STRING() {
  return getToken(AslParser::STRING, 0);
}

AslParser::WriteStringContext::WriteStringContext(StatementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::WriteStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitWriteString(this);
  else
    return visitor->visitChildren(this);
}
AslParser::StatementContext* AslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, AslParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(132);
      left_expr();
      setState(133);
      match(AslParser::ASSIGN);
      setState(134);
      expr(0);
      setState(135);
      match(AslParser::T__10);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ArrayMapContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(137);
      left_expr();
      setState(138);
      match(AslParser::ASSIGN);
      setState(139);
      array_map();
      setState(140);
      match(AslParser::T__10);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WhileStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(142);
      match(AslParser::WHILE);
      setState(143);
      expr(0);
      setState(144);
      match(AslParser::DO);
      setState(145);
      statements();
      setState(146);
      match(AslParser::ENDWHILE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(148);
      match(AslParser::IF);
      setState(149);
      expr(0);
      setState(150);
      match(AslParser::THEN);
      setState(151);
      statements();
      setState(154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::ELSE) {
        setState(152);
        match(AslParser::ELSE);
        setState(153);
        statements();
      }
      setState(156);
      match(AslParser::ENDIF);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ProcCallContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(158);
      ident();
      setState(159);
      match(AslParser::LPAR);
      setState(168);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::PLUS)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::LPAR)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::ID)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL))) != 0)) {
        setState(160);
        expr(0);
        setState(165);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__1) {
          setState(161);
          match(AslParser::T__1);
          setState(162);
          expr(0);
          setState(167);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(170);
      match(AslParser::RPAR);
      setState(171);
      match(AslParser::T__10);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReadStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(173);
      match(AslParser::READ);
      setState(174);
      left_expr();
      setState(175);
      match(AslParser::T__10);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteExprContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(177);
      match(AslParser::WRITE);
      setState(178);
      expr(0);
      setState(179);
      match(AslParser::T__10);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteStringContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(181);
      match(AslParser::WRITE);
      setState(182);
      match(AslParser::STRING);
      setState(183);
      match(AslParser::T__10);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReturnStmtContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(184);
      match(AslParser::RETURN);
      setState(186);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::PLUS)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::LPAR)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::ID)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL))) != 0)) {
        setState(185);
        expr(0);
      }
      setState(188);
      match(AslParser::T__10);
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

//----------------- Left_exprContext ------------------------------------------------------------------

AslParser::Left_exprContext::Left_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::Left_exprContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprContext* AslParser::Left_exprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::Left_exprContext::ID() {
  return getToken(AslParser::ID, 0);
}


size_t AslParser::Left_exprContext::getRuleIndex() const {
  return AslParser::RuleLeft_expr;
}

antlrcpp::Any AslParser::Left_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitLeft_expr(this);
  else
    return visitor->visitChildren(this);
}

AslParser::Left_exprContext* AslParser::left_expr() {
  Left_exprContext *_localctx = _tracker.createInstance<Left_exprContext>(_ctx, getState());
  enterRule(_localctx, 24, AslParser::RuleLeft_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      ident();
      setState(196);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == AslParser::T__5) {
        setState(192);
        match(AslParser::T__5);
        setState(193);
        expr(0);
        setState(194);
        match(AslParser::T__6);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(198);
      ident();
      setState(199);
      match(AslParser::T__11);
      setState(200);
      match(AslParser::ID);
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

AslParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::ExprContext::getRuleIndex() const {
  return AslParser::RuleExpr;
}

void AslParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ParenContext::LPAR() {
  return getToken(AslParser::LPAR, 0);
}

AslParser::ExprContext* AslParser::ParenContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::ParenContext::RPAR() {
  return getToken(AslParser::RPAR, 0);
}

AslParser::ParenContext::ParenContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Function_callContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::Function_callContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::Function_callContext::LPAR() {
  return getToken(AslParser::LPAR, 0);
}

tree::TerminalNode* AslParser::Function_callContext::RPAR() {
  return getToken(AslParser::RPAR, 0);
}

std::vector<AslParser::ExprContext *> AslParser::Function_callContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::Function_callContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

AslParser::Function_callContext::Function_callContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Array_acessContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::Array_acessContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprContext* AslParser::Array_acessContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::Array_acessContext::Array_acessContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::Array_acessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArray_acess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIdentContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::ExprIdentContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

AslParser::ExprIdentContext::ExprIdentContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ExprIdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitExprIdent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::ArithmeticContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ArithmeticContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::ArithmeticContext::MUL() {
  return getToken(AslParser::MUL, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::DIV() {
  return getToken(AslParser::DIV, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::MOD() {
  return getToken(AslParser::MOD, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::PLUS() {
  return getToken(AslParser::PLUS, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::SUB() {
  return getToken(AslParser::SUB, 0);
}

AslParser::ArithmeticContext::ArithmeticContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ArithmeticContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitArithmetic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::RelationalContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::RelationalContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::RelationalContext::EQUAL() {
  return getToken(AslParser::EQUAL, 0);
}

tree::TerminalNode* AslParser::RelationalContext::NEQ() {
  return getToken(AslParser::NEQ, 0);
}

tree::TerminalNode* AslParser::RelationalContext::GT() {
  return getToken(AslParser::GT, 0);
}

tree::TerminalNode* AslParser::RelationalContext::LT() {
  return getToken(AslParser::LT, 0);
}

tree::TerminalNode* AslParser::RelationalContext::GE() {
  return getToken(AslParser::GE, 0);
}

tree::TerminalNode* AslParser::RelationalContext::LE() {
  return getToken(AslParser::LE, 0);
}

AslParser::RelationalContext::RelationalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::RelationalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitRelational(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Struct_acessContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::Struct_acessContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::Struct_acessContext::ID() {
  return getToken(AslParser::ID, 0);
}

AslParser::Struct_acessContext::Struct_acessContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::Struct_acessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitStruct_acess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::UnaryContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::UnaryContext::NOT() {
  return getToken(AslParser::NOT, 0);
}

tree::TerminalNode* AslParser::UnaryContext::SUB() {
  return getToken(AslParser::SUB, 0);
}

tree::TerminalNode* AslParser::UnaryContext::PLUS() {
  return getToken(AslParser::PLUS, 0);
}

AslParser::UnaryContext::UnaryContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::LogicContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::LogicContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::LogicContext::AND() {
  return getToken(AslParser::AND, 0);
}

tree::TerminalNode* AslParser::LogicContext::OR() {
  return getToken(AslParser::OR, 0);
}

AslParser::LogicContext::LogicContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::LogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitLogic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ValueContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::FLOATVAL() {
  return getToken(AslParser::FLOATVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::BOOLVAL() {
  return getToken(AslParser::BOOLVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::CHARVAL() {
  return getToken(AslParser::CHARVAL, 0);
}

AslParser::ValueContext::ValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any AslParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

AslParser::ExprContext* AslParser::expr() {
   return expr(0);
}

AslParser::ExprContext* AslParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AslParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  AslParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, AslParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(205);
      match(AslParser::LPAR);
      setState(206);
      expr(0);
      setState(207);
      match(AslParser::RPAR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Array_acessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      ident();

      setState(210);
      match(AslParser::T__5);
      setState(211);
      expr(0);
      setState(212);
      match(AslParser::T__6);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Struct_acessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(214);
      ident();
      setState(215);
      match(AslParser::T__11);
      setState(216);
      match(AslParser::ID);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Function_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      ident();
      setState(219);
      match(AslParser::LPAR);
      setState(228);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::PLUS)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT)
        | (1ULL << AslParser::LPAR)
        | (1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::ID)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL))) != 0)) {
        setState(220);
        expr(0);
        setState(225);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == AslParser::T__1) {
          setState(221);
          match(AslParser::T__1);
          setState(222);
          expr(0);
          setState(227);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(230);
      match(AslParser::RPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(232);
      dynamic_cast<UnaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::PLUS)
        | (1ULL << AslParser::SUB)
        | (1ULL << AslParser::NOT))) != 0))) {
        dynamic_cast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(233);
      expr(8);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(234);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << AslParser::BOOLVAL)
        | (1ULL << AslParser::INTVAL)
        | (1ULL << AslParser::FLOATVAL)
        | (1ULL << AslParser::CHARVAL))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ExprIdentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(235);
      ident();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(255);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(253);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(238);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(239);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::MUL)
            | (1ULL << AslParser::DIV)
            | (1ULL << AslParser::MOD))) != 0))) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(240);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(241);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(242);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == AslParser::PLUS

          || _la == AslParser::SUB)) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(243);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(244);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(245);
          dynamic_cast<RelationalContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << AslParser::EQUAL)
            | (1ULL << AslParser::NEQ)
            | (1ULL << AslParser::GT)
            | (1ULL << AslParser::LT)
            | (1ULL << AslParser::GE)
            | (1ULL << AslParser::LE))) != 0))) {
            dynamic_cast<RelationalContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(246);
          expr(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(247);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(248);
          dynamic_cast<LogicContext *>(_localctx)->op = match(AslParser::AND);
          setState(249);
          expr(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<LogicContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(250);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(251);
          dynamic_cast<LogicContext *>(_localctx)->op = match(AslParser::OR);
          setState(252);
          expr(4);
          break;
        }

        } 
      }
      setState(257);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

AslParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::IdentContext::ID() {
  return getToken(AslParser::ID, 0);
}


size_t AslParser::IdentContext::getRuleIndex() const {
  return AslParser::RuleIdent;
}

antlrcpp::Any AslParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AslVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

AslParser::IdentContext* AslParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 28, AslParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(AslParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> AslParser::_decisionToDFA;
atn::PredictionContextCache AslParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN AslParser::_atn;
std::vector<uint16_t> AslParser::_serializedATN;

std::vector<std::string> AslParser::_ruleNames = {
  "program", "function", "params", "declarations", "variable_decl", "type", 
  "struct_type", "array_type", "simple_type", "statements", "array_map", 
  "statement", "left_expr", "expr", "ident"
};

std::vector<std::string> AslParser::_literalNames = {
  "", "':'", "','", "'struct'", "'{'", "'}'", "'['", "']'", "'?'", "'for'", 
  "'in'", "';'", "'.'", "'array'", "'of'", "'='", "'=='", "'!='", "'>'", 
  "'<'", "'>='", "'<='", "'+'", "'*'", "'-'", "'/'", "'%'", "'and'", "'or'", 
  "'not'", "'('", "')'", "'var'", "'int'", "'bool'", "'float'", "'char'", 
  "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", 
  "'return'", "'func'", "'endfunc'", "'read'", "'write'"
};

std::vector<std::string> AslParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "ARRAY", "OF", "ASSIGN", 
  "EQUAL", "NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", "SUB", "DIV", "MOD", 
  "AND", "OR", "NOT", "LPAR", "RPAR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", 
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", 
  "ENDFUNC", "READ", "WRITE", "BOOLVAL", "ID", "INTVAL", "FLOATVAL", "CHARVAL", 
  "STRING", "COMMENT", "WS"
};

dfa::Vocabulary AslParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> AslParser::_tokenNames;

AslParser::Initializer::Initializer() {
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
    0x3, 0x3a, 0x107, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x6, 0x2, 0x22, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x23, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x37, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x3d, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x40, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x7, 0x5, 0x45, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x48, 0xb, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x4e, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x51, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x59, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x65, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x68, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 0xb, 0x76, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x79, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x9d, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa6, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xa9, 0xb, 0xd, 0x5, 0xd, 0xab, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbd, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc0, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0xc7, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xcd, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
    0xe2, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xe5, 0xb, 0xf, 0x5, 0xf, 0xe7, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0xef, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x100, 0xa, 0xf, 0xc, 0xf, 
    0xe, 0xf, 0x103, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x2, 0x3, 
    0x1c, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x8, 0x3, 0x2, 0x23, 0x26, 0x5, 0x2, 0x18, 
    0x18, 0x1a, 0x1a, 0x1f, 0x1f, 0x4, 0x2, 0x33, 0x33, 0x35, 0x37, 0x4, 
    0x2, 0x19, 0x19, 0x1b, 0x1c, 0x4, 0x2, 0x18, 0x18, 0x1a, 0x1a, 0x3, 
    0x2, 0x12, 0x17, 0x2, 0x11c, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x32, 0x3, 0x2, 0x2, 0x2, 0x8, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x49, 0x3, 0x2, 0x2, 0x2, 0xc, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x14, 0x77, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xee, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x7, 0x2, 0x2, 0x3, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x7, 0x2f, 0x2, 0x2, 0x28, 0x29, 0x7, 0x34, 0x2, 0x2, 0x29, 0x2c, 0x5, 
    0x6, 0x4, 0x2, 0x2a, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2d, 0x5, 0xc, 
    0x7, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0x8, 0x5, 0x2, 
    0x2f, 0x30, 0x5, 0x14, 0xb, 0x2, 0x30, 0x31, 0x7, 0x30, 0x2, 0x2, 0x31, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x36, 0x7, 0x20, 0x2, 0x2, 0x33, 0x34, 
    0x7, 0x34, 0x2, 0x2, 0x34, 0x35, 0x7, 0x3, 0x2, 0x2, 0x35, 0x37, 0x5, 
    0xc, 0x7, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x4, 0x2, 
    0x2, 0x39, 0x3a, 0x7, 0x34, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x3, 0x2, 0x2, 
    0x3b, 0x3d, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x21, 0x2, 0x2, 0x42, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x43, 0x45, 0x5, 0xa, 0x6, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x22, 0x2, 0x2, 0x4a, 0x4f, 
    0x7, 0x34, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x4, 0x2, 0x2, 0x4c, 0x4e, 0x7, 
    0x34, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 0x53, 0x54, 0x5, 0xc, 0x7, 0x2, 0x54, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x55, 0x59, 0x5, 0x12, 0xa, 0x2, 0x56, 0x59, 
    0x5, 0x10, 0x9, 0x2, 0x57, 0x59, 0x5, 0xe, 0x8, 0x2, 0x58, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x5, 0x2, 
    0x2, 0x5b, 0x5c, 0x7, 0x6, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x34, 0x2, 0x2, 
    0x5d, 0x5e, 0x7, 0x3, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x12, 0xa, 0x2, 0x5f, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x4, 0x2, 0x2, 0x61, 0x62, 
    0x7, 0x34, 0x2, 0x2, 0x62, 0x63, 0x7, 0x3, 0x2, 0x2, 0x63, 0x65, 0x5, 
    0x12, 0xa, 0x2, 0x64, 0x60, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6a, 0x7, 0x7, 0x2, 0x2, 0x6a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0xf, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x8, 0x2, 0x2, 0x6d, 0x6e, 
    0x7, 0x35, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x9, 0x2, 0x2, 0x6f, 0x70, 0x7, 
    0x10, 0x2, 0x2, 0x70, 0x71, 0x5, 0x12, 0xa, 0x2, 0x71, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x73, 0x9, 0x2, 0x2, 0x2, 0x73, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x76, 0x5, 0x18, 0xd, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x15, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x8, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
    0x1c, 0xf, 0x2, 0x7c, 0x7d, 0x7, 0xa, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x1c, 
    0xf, 0x2, 0x7e, 0x7f, 0x7, 0x3, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x1c, 0xf, 
    0x2, 0x80, 0x81, 0x7, 0xb, 0x2, 0x2, 0x81, 0x82, 0x5, 0x1e, 0x10, 0x2, 
    0x82, 0x83, 0x7, 0xc, 0x2, 0x2, 0x83, 0x84, 0x5, 0x1e, 0x10, 0x2, 0x84, 
    0x85, 0x7, 0x9, 0x2, 0x2, 0x85, 0x17, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
    0x5, 0x1a, 0xe, 0x2, 0x87, 0x88, 0x7, 0x11, 0x2, 0x2, 0x88, 0x89, 0x5, 
    0x1c, 0xf, 0x2, 0x89, 0x8a, 0x7, 0xd, 0x2, 0x2, 0x8a, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8c, 0x5, 0x1a, 0xe, 0x2, 0x8c, 0x8d, 0x7, 0x11, 0x2, 
    0x2, 0x8d, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x8f, 0x7, 0xd, 0x2, 0x2, 
    0x8f, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x2b, 0x2, 0x2, 0x91, 
    0x92, 0x5, 0x1c, 0xf, 0x2, 0x92, 0x93, 0x7, 0x2c, 0x2, 0x2, 0x93, 0x94, 
    0x5, 0x14, 0xb, 0x2, 0x94, 0x95, 0x7, 0x2d, 0x2, 0x2, 0x95, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x27, 0x2, 0x2, 0x97, 0x98, 0x5, 0x1c, 
    0xf, 0x2, 0x98, 0x99, 0x7, 0x28, 0x2, 0x2, 0x99, 0x9c, 0x5, 0x14, 0xb, 
    0x2, 0x9a, 0x9b, 0x7, 0x29, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x14, 0xb, 0x2, 
    0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x2a, 0x2, 0x2, 0x9f, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1e, 0x10, 0x2, 0xa1, 0xaa, 0x7, 
    0x20, 0x2, 0x2, 0xa2, 0xa7, 0x5, 0x1c, 0xf, 0x2, 0xa3, 0xa4, 0x7, 0x4, 
    0x2, 0x2, 0xa4, 0xa6, 0x5, 0x1c, 0xf, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 
    0x21, 0x2, 0x2, 0xad, 0xae, 0x7, 0xd, 0x2, 0x2, 0xae, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x7, 0x31, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x1a, 0xe, 
    0x2, 0xb1, 0xb2, 0x7, 0xd, 0x2, 0x2, 0xb2, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb4, 0x7, 0x32, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x1c, 0xf, 0x2, 0xb5, 
    0xb6, 0x7, 0xd, 0x2, 0x2, 0xb6, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x7, 0x32, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x38, 0x2, 0x2, 0xb9, 0xc0, 0x7, 
    0xd, 0x2, 0x2, 0xba, 0xbc, 0x7, 0x2e, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x1c, 
    0xf, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0xd, 0x2, 0x2, 
    0xbf, 0x86, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x8b, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x96, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc6, 0x5, 0x1e, 0x10, 
    0x2, 0xc2, 0xc3, 0x7, 0x8, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x1c, 0xf, 0x2, 
    0xc4, 0xc5, 0x7, 0x9, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x1e, 0x10, 0x2, 0xc9, 0xca, 0x7, 
    0xe, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x34, 0x2, 0x2, 0xcb, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x8, 0xf, 0x1, 0x2, 
    0xcf, 0xd0, 0x7, 0x20, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x1c, 0xf, 0x2, 0xd1, 
    0xd2, 0x7, 0x21, 0x2, 0x2, 0xd2, 0xef, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
    0x5, 0x1e, 0x10, 0x2, 0xd4, 0xd5, 0x7, 0x8, 0x2, 0x2, 0xd5, 0xd6, 0x5, 
    0x1c, 0xf, 0x2, 0xd6, 0xd7, 0x7, 0x9, 0x2, 0x2, 0xd7, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xd9, 0x5, 0x1e, 0x10, 0x2, 0xd9, 0xda, 0x7, 0xe, 0x2, 
    0x2, 0xda, 0xdb, 0x7, 0x34, 0x2, 0x2, 0xdb, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xdd, 0x5, 0x1e, 0x10, 0x2, 0xdd, 0xe6, 0x7, 0x20, 0x2, 0x2, 0xde, 
    0xe3, 0x5, 0x1c, 0xf, 0x2, 0xdf, 0xe0, 0x7, 0x4, 0x2, 0x2, 0xe0, 0xe2, 
    0x5, 0x1c, 0xf, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x21, 0x2, 0x2, 0xe9, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x9, 0x3, 0x2, 0x2, 0xeb, 0xef, 
    0x5, 0x1c, 0xf, 0xa, 0xec, 0xef, 0x9, 0x4, 0x2, 0x2, 0xed, 0xef, 0x5, 
    0x1e, 0x10, 0x2, 0xee, 0xce, 0x3, 0x2, 0x2, 0x2, 0xee, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xee, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xea, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0x101, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xf1, 0xc, 0x9, 0x2, 0x2, 0xf1, 0xf2, 0x9, 0x5, 0x2, 0x2, 0xf2, 0x100, 
    0x5, 0x1c, 0xf, 0xa, 0xf3, 0xf4, 0xc, 0x8, 0x2, 0x2, 0xf4, 0xf5, 0x9, 
    0x6, 0x2, 0x2, 0xf5, 0x100, 0x5, 0x1c, 0xf, 0x9, 0xf6, 0xf7, 0xc, 0x7, 
    0x2, 0x2, 0xf7, 0xf8, 0x9, 0x7, 0x2, 0x2, 0xf8, 0x100, 0x5, 0x1c, 0xf, 
    0x8, 0xf9, 0xfa, 0xc, 0x6, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x1d, 0x2, 0x2, 
    0xfb, 0x100, 0x5, 0x1c, 0xf, 0x7, 0xfc, 0xfd, 0xc, 0x5, 0x2, 0x2, 0xfd, 
    0xfe, 0x7, 0x1e, 0x2, 0x2, 0xfe, 0x100, 0x5, 0x1c, 0xf, 0x6, 0xff, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xff, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x34, 0x2, 0x2, 
    0x105, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x17, 0x23, 0x2c, 0x36, 0x3e, 0x46, 
    0x4f, 0x58, 0x66, 0x77, 0x9c, 0xa7, 0xaa, 0xbc, 0xbf, 0xc6, 0xcc, 0xe3, 
    0xe6, 0xee, 0xff, 0x101, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

AslParser::Initializer AslParser::_init;
