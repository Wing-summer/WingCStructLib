
// Generated from ./CStruct.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CStructLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, Char = 2, Const = 3, Double = 4, Enum = 5, Float = 6, Int = 7, 
    Long = 8, TypeDef = 9, AlignAs = 10, SizeOf = 11, Short = 12, Signed = 13, 
    Struct = 14, Union = 15, Unsigned = 16, Void = 17, LeftParen = 18, RightParen = 19, 
    LeftBracket = 20, RightBracket = 21, LeftBrace = 22, RightBrace = 23, 
    LeftShift = 24, RightShift = 25, Plus = 26, PlusPlus = 27, Minus = 28, 
    MinusMinus = 29, Star = 30, Div = 31, Mod = 32, And = 33, Or = 34, Caret = 35, 
    Tilde = 36, Colon = 37, Semi = 38, Comma = 39, Identifier = 40, IntegerConstant = 41, 
    StringLiteral = 42, MultiLineMacroDefine = 43, MultiLineMacro = 44, 
    DirectiveInclude = 45, DirectiveDefine = 46, Directive = 47, Whitespace = 48, 
    Newline = 49, LINE_CONTINUATION = 50, BlockComment = 51, LineComment = 52
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

