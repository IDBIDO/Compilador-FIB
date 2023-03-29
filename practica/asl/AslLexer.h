
// Generated from Asl.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, ARRAY = 6, OF = 7, 
    ASSIGN = 8, EQUAL = 9, NEQ = 10, GT = 11, LT = 12, GE = 13, LE = 14, 
    PLUS = 15, MUL = 16, SUB = 17, DIV = 18, MOD = 19, AND = 20, OR = 21, 
    NOT = 22, LPAR = 23, RPAR = 24, VAR = 25, INT = 26, BOOL = 27, FLOAT = 28, 
    CHAR = 29, IF = 30, THEN = 31, ELSE = 32, ENDIF = 33, WHILE = 34, DO = 35, 
    ENDWHILE = 36, RETURN = 37, FUNC = 38, ENDFUNC = 39, READ = 40, WRITE = 41, 
    BOOLVAL = 42, ID = 43, INTVAL = 44, FLOATVAL = 45, CHARVAL = 46, STRING = 47, 
    COMMENT = 48, WS = 49
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

