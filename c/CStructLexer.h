
// Generated from ./CStruct.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CStructLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, Auto = 2, Char = 3, Const = 4, Double = 5, Enum = 6, Extern = 7, 
    Float = 8, Int = 9, Long = 10, Register = 11, Restrict = 12, Short = 13, 
    Signed = 14, Static = 15, Struct = 16, Typedef = 17, Union = 18, Unsigned = 19, 
    Void = 20, Volatile = 21, LeftParen = 22, RightParen = 23, LeftBracket = 24, 
    RightBracket = 25, LeftBrace = 26, RightBrace = 27, LeftShift = 28, 
    RightShift = 29, Plus = 30, PlusPlus = 31, Minus = 32, MinusMinus = 33, 
    Star = 34, Div = 35, Mod = 36, And = 37, Or = 38, Caret = 39, Tilde = 40, 
    Colon = 41, Semi = 42, Comma = 43, Identifier = 44, IntegerConstant = 45, 
    MultiLineMacroDefine = 46, MultiLineMacro = 47, DirectiveDefine = 48, 
    Directive = 49, Whitespace = 50, Newline = 51, LINE_CONTINUATION = 52, 
    BlockComment = 53, LineComment = 54
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

