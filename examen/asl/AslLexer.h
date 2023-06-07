
// Generated from Asl.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, MAP = 6, INTO = 7, 
    USING = 8, ARRAY = 9, OF = 10, ASSIGN = 11, EQUAL = 12, NEQ = 13, GT = 14, 
    LT = 15, GE = 16, LE = 17, PLUS = 18, MUL = 19, SUB = 20, DIV = 21, 
    MOD = 22, POW = 23, AND = 24, OR = 25, NOT = 26, LPAR = 27, RPAR = 28, 
    VAR = 29, INT = 30, BOOL = 31, FLOAT = 32, CHAR = 33, IF = 34, THEN = 35, 
    ELSE = 36, ENDIF = 37, WHILE = 38, DO = 39, ENDWHILE = 40, RETURN = 41, 
    FUNC = 42, ENDFUNC = 43, READ = 44, WRITE = 45, BOOLVAL = 46, TRUE = 47, 
    FALSE = 48, ID = 49, INTVAL = 50, FLOATVAL = 51, CHARVAL = 52, STRING = 53, 
    COMMENT = 54, WS = 55
  };

  explicit AslLexer(antlr4::CharStream *input);
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

