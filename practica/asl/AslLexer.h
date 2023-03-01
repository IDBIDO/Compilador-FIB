
// Generated from Asl.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, ASSIGN = 3, EQUAL = 4, NEQ = 5, GT = 6, LT = 7, 
    GE = 8, LE = 9, PLUS = 10, MUL = 11, SUB = 12, DIV = 13, AND = 14, OR = 15, 
    NOT = 16, LPAR = 17, RPAR = 18, VAR = 19, INT = 20, BOOL = 21, FLOAT = 22, 
    CHAR = 23, IF = 24, THEN = 25, ELSE = 26, ENDIF = 27, FUNC = 28, ENDFUNC = 29, 
    READ = 30, WRITE = 31, ID = 32, INTVAL = 33, FLOATVAL = 34, CHARVAL = 35, 
    STRING = 36, COMMENT = 37, WS = 38
  };

  AslLexer(antlr4::CharStream *input);
  ~AslLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

