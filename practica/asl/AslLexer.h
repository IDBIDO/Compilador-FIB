
// Generated from Asl.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, ASSIGN = 4, EQUAL = 5, NEQ = 6, GT = 7, 
    LT = 8, GE = 9, LE = 10, PLUS = 11, MUL = 12, SUB = 13, DIV = 14, AND = 15, 
    OR = 16, NOT = 17, LPAR = 18, RPAR = 19, VAR = 20, INT = 21, BOOL = 22, 
    FLOAT = 23, CHAR = 24, IF = 25, THEN = 26, ELSE = 27, ENDIF = 28, WHILE = 29, 
    DO = 30, ENDWHILE = 31, RETURN = 32, FUNC = 33, ENDFUNC = 34, READ = 35, 
    WRITE = 36, BOOLVAL = 37, ID = 38, INTVAL = 39, FLOATVAL = 40, CHARVAL = 41, 
    STRING = 42, COMMENT = 43, WS = 44
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

