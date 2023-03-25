
// Generated from Asl.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, ARRAY = 6, OF = 7, 
    ASSIGN = 8, EQUAL = 9, NEQ = 10, GT = 11, LT = 12, GE = 13, LE = 14, 
    PLUS = 15, MUL = 16, SUB = 17, DIV = 18, AND = 19, OR = 20, NOT = 21, 
    LPAR = 22, RPAR = 23, VAR = 24, INT = 25, BOOL = 26, FLOAT = 27, CHAR = 28, 
    IF = 29, THEN = 30, ELSE = 31, ENDIF = 32, WHILE = 33, DO = 34, ENDWHILE = 35, 
    RETURN = 36, FUNC = 37, ENDFUNC = 38, READ = 39, WRITE = 40, BOOLVAL = 41, 
    ID = 42, INTVAL = 43, FLOATVAL = 44, CHARVAL = 45, STRING = 46, COMMENT = 47, 
    WS = 48
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

