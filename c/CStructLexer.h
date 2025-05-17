
// Generated from ./CStruct.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CStructLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, Auto = 3, Char = 4, Const = 5, Double = 6, Enum = 7, 
    Extern = 8, Float = 9, Int = 10, Long = 11, Register = 12, Restrict = 13, 
    Short = 14, Signed = 15, Static = 16, Struct = 17, Typedef = 18, Union = 19, 
    Unsigned = 20, Void = 21, Volatile = 22, LeftParen = 23, RightParen = 24, 
    LeftBracket = 25, RightBracket = 26, LeftBrace = 27, RightBrace = 28, 
    LeftShift = 29, RightShift = 30, Plus = 31, PlusPlus = 32, Minus = 33, 
    MinusMinus = 34, Star = 35, Div = 36, Mod = 37, And = 38, Or = 39, Caret = 40, 
    Tilde = 41, Colon = 42, Semi = 43, Comma = 44, Ellipsis = 45, Identifier = 46, 
    IntegerConstant = 47, MultiLineMacro = 48, Directive = 49, Whitespace = 50, 
    Newline = 51, BlockComment = 52, LineComment = 53
  };

  explicit CStructLexer(antlr4::CharStream *input);

  ~CStructLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

