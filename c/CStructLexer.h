
// Generated from ./CStruct.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CStructLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, Char = 2, Const = 3, Double = 4, Enum = 5, Float = 6, Int = 7, 
    Long = 8, TypeDef = 9, SizeOf = 10, Short = 11, Signed = 12, Struct = 13, 
    Union = 14, Unsigned = 15, Void = 16, LeftParen = 17, RightParen = 18, 
    LeftBracket = 19, RightBracket = 20, LeftBrace = 21, RightBrace = 22, 
    LeftShift = 23, RightShift = 24, Plus = 25, PlusPlus = 26, Minus = 27, 
    MinusMinus = 28, Star = 29, Div = 30, Mod = 31, And = 32, Or = 33, Caret = 34, 
    Tilde = 35, Colon = 36, Semi = 37, Comma = 38, Identifier = 39, IntegerConstant = 40, 
    MultiLineMacroDefine = 41, MultiLineMacro = 42, DirectiveDefine = 43, 
    Directive = 44, Whitespace = 45, Newline = 46, LINE_CONTINUATION = 47, 
    BlockComment = 48, LineComment = 49
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

