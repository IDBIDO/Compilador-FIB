
// Generated from Asl.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, ASSIGN = 6, EQUAL = 7, 
    NEQ = 8, GT = 9, LT = 10, GE = 11, LE = 12, PLUS = 13, MUL = 14, SUB = 15, 
    DIV = 16, AND = 17, OR = 18, NOT = 19, LPAR = 20, RPAR = 21, VAR = 22, 
    INT = 23, BOOL = 24, FLOAT = 25, CHAR = 26, IF = 27, THEN = 28, ELSE = 29, 
    ENDIF = 30, WHILE = 31, DO = 32, ENDWHILE = 33, RETURN = 34, FUNC = 35, 
    ENDFUNC = 36, READ = 37, WRITE = 38, BOOLVAL = 39, ID = 40, INTVAL = 41, 
    FLOATVAL = 42, CHARVAL = 43, STRING = 44, COMMENT = 45, WS = 46
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

