
// Generated from ./CStruct.g4 by ANTLR 4.13.2


#include "CStructLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CStructLexerStaticData final {
  CStructLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CStructLexerStaticData(const CStructLexerStaticData&) = delete;
  CStructLexerStaticData(CStructLexerStaticData&&) = delete;
  CStructLexerStaticData& operator=(const CStructLexerStaticData&) = delete;
  CStructLexerStaticData& operator=(CStructLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cstructlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CStructLexerStaticData> cstructlexerLexerStaticData = nullptr;

void cstructlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cstructlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(cstructlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CStructLexerStaticData>(
    std::vector<std::string>{
      "T__0", "Auto", "Char", "Const", "Double", "Enum", "Extern", "Float", 
      "Int", "Long", "Register", "Restrict", "Short", "Signed", "Static", 
      "Struct", "Typedef", "Union", "Unsigned", "Void", "Volatile", "LeftParen", 
      "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
      "LeftShift", "RightShift", "Plus", "PlusPlus", "Minus", "MinusMinus", 
      "Star", "Div", "Mod", "And", "Or", "Caret", "Tilde", "Colon", "Semi", 
      "Comma", "Identifier", "IdentifierNondigit", "Nondigit", "Digit", 
      "UniversalCharacterName", "HexQuad", "IntegerConstant", "BinaryConstant", 
      "DecimalConstant", "OctalConstant", "HexadecimalConstant", "HexadecimalPrefix", 
      "NonzeroDigit", "OctalDigit", "HexadecimalDigit", "IntegerSuffix", 
      "UnsignedSuffix", "LongSuffix", "LongLongSuffix", "FractionalConstant", 
      "ExponentPart", "Sign", "DigitSequence", "BinaryExponentPart", "HexadecimalDigitSequence", 
      "CChar", "EscapeSequence", "SimpleEscapeSequence", "OctalEscapeSequence", 
      "HexadecimalEscapeSequence", "MultiLineMacroDefine", "MultiLineMacro", 
      "DirectiveDefine", "Directive", "Whitespace", "Newline", "LINE_CONTINUATION", 
      "BlockComment", "LineComment"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'auto'", "'char'", "'const'", "'double'", "'enum'", "'extern'", 
      "'float'", "'int'", "'long'", "'register'", "'restrict'", "'short'", 
      "'signed'", "'static'", "'struct'", "'typedef'", "'union'", "'unsigned'", 
      "'void'", "'volatile'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", 
      "'&'", "'|'", "'^'", "'~'", "':'", "';'", "','"
    },
    std::vector<std::string>{
      "", "", "Auto", "Char", "Const", "Double", "Enum", "Extern", "Float", 
      "Int", "Long", "Register", "Restrict", "Short", "Signed", "Static", 
      "Struct", "Typedef", "Union", "Unsigned", "Void", "Volatile", "LeftParen", 
      "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
      "LeftShift", "RightShift", "Plus", "PlusPlus", "Minus", "MinusMinus", 
      "Star", "Div", "Mod", "And", "Or", "Caret", "Tilde", "Colon", "Semi", 
      "Comma", "Identifier", "IntegerConstant", "MultiLineMacroDefine", 
      "MultiLineMacro", "DirectiveDefine", "Directive", "Whitespace", "Newline", 
      "LINE_CONTINUATION", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,54,650,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,
  	7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,
  	7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,
  	1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,30,
  	1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,
  	1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,
  	1,43,1,43,5,43,351,8,43,10,43,12,43,354,9,43,1,44,1,44,3,44,358,8,44,
  	1,45,1,45,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,
  	3,47,374,8,47,1,48,1,48,1,48,1,48,1,48,1,49,1,49,3,49,383,8,49,1,49,1,
  	49,3,49,387,8,49,1,49,1,49,3,49,391,8,49,1,49,1,49,1,49,1,49,1,49,3,49,
  	398,8,49,1,50,1,50,1,50,4,50,403,8,50,11,50,12,50,404,1,51,1,51,5,51,
  	409,8,51,10,51,12,51,412,9,51,1,52,1,52,5,52,416,8,52,10,52,12,52,419,
  	9,52,1,53,1,53,4,53,423,8,53,11,53,12,53,424,1,54,1,54,1,54,1,55,1,55,
  	1,56,1,56,1,57,1,57,1,58,1,58,3,58,438,8,58,1,58,1,58,1,58,1,58,1,58,
  	3,58,445,8,58,1,58,1,58,3,58,449,8,58,3,58,451,8,58,1,59,1,59,1,60,1,
  	60,1,61,1,61,1,61,1,61,3,61,461,8,61,1,62,3,62,464,8,62,1,62,1,62,1,62,
  	1,62,1,62,3,62,471,8,62,1,63,1,63,3,63,475,8,63,1,63,1,63,1,64,1,64,1,
  	65,4,65,482,8,65,11,65,12,65,483,1,66,1,66,3,66,488,8,66,1,66,1,66,1,
  	67,4,67,493,8,67,11,67,12,67,494,1,68,1,68,3,68,499,8,68,1,69,1,69,1,
  	69,1,69,3,69,505,8,69,1,70,1,70,1,70,1,71,1,71,1,71,3,71,513,8,71,1,71,
  	3,71,516,8,71,1,72,1,72,1,72,1,72,4,72,522,8,72,11,72,12,72,523,1,73,
  	1,73,1,73,1,73,1,73,1,73,1,73,1,73,1,73,5,73,535,8,73,10,73,12,73,538,
  	9,73,1,73,1,73,3,73,542,8,73,1,73,4,73,545,8,73,11,73,12,73,546,1,73,
  	4,73,550,8,73,11,73,12,73,551,1,74,1,74,1,74,5,74,557,8,74,10,74,12,74,
  	560,9,74,1,74,1,74,3,74,564,8,74,1,74,4,74,567,8,74,11,74,12,74,568,1,
  	74,4,74,572,8,74,11,74,12,74,573,1,74,1,74,1,75,1,75,1,75,1,75,1,75,1,
  	75,1,75,1,75,1,75,5,75,587,8,75,10,75,12,75,590,9,75,1,76,1,76,1,76,5,
  	76,595,8,76,10,76,12,76,598,9,76,1,76,1,76,1,77,4,77,603,8,77,11,77,12,
  	77,604,1,77,1,77,1,78,1,78,3,78,611,8,78,1,78,3,78,614,8,78,1,78,1,78,
  	1,79,1,79,3,79,620,8,79,1,79,1,79,1,79,1,79,1,80,1,80,1,80,1,80,5,80,
  	630,8,80,10,80,12,80,633,9,80,1,80,1,80,1,80,1,80,1,80,1,81,1,81,1,81,
  	1,81,5,81,644,8,81,10,81,12,81,647,9,81,1,81,1,81,3,536,558,631,0,82,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,
  	75,38,77,39,79,40,81,41,83,42,85,43,87,44,89,0,91,0,93,0,95,0,97,0,99,
  	45,101,0,103,0,105,0,107,0,109,0,111,0,113,0,115,0,117,0,119,0,121,0,
  	123,0,125,0,127,0,129,0,131,0,133,0,135,0,137,0,139,0,141,0,143,0,145,
  	0,147,46,149,47,151,48,153,49,155,50,157,51,159,52,161,53,163,54,1,0,
  	19,3,0,65,90,95,95,97,122,1,0,48,57,2,0,66,66,98,98,1,0,48,49,2,0,88,
  	88,120,120,1,0,49,57,1,0,48,55,3,0,48,57,65,70,97,102,2,0,85,85,117,117,
  	2,0,76,76,108,108,2,0,69,69,101,101,2,0,43,43,45,45,2,0,80,80,112,112,
  	4,0,10,10,13,13,39,39,92,92,10,0,34,34,39,39,63,63,92,92,97,98,102,102,
  	110,110,114,114,116,116,118,118,1,0,10,10,2,0,9,9,32,32,1,0,13,13,2,0,
  	10,10,13,13,672,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,
  	0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,
  	63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,
  	0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,
  	0,0,85,1,0,0,0,0,87,1,0,0,0,0,99,1,0,0,0,0,147,1,0,0,0,0,149,1,0,0,0,
  	0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,0,0,159,1,0,0,0,
  	0,161,1,0,0,0,0,163,1,0,0,0,1,165,1,0,0,0,3,167,1,0,0,0,5,172,1,0,0,0,
  	7,177,1,0,0,0,9,183,1,0,0,0,11,190,1,0,0,0,13,195,1,0,0,0,15,202,1,0,
  	0,0,17,208,1,0,0,0,19,212,1,0,0,0,21,217,1,0,0,0,23,226,1,0,0,0,25,235,
  	1,0,0,0,27,241,1,0,0,0,29,248,1,0,0,0,31,255,1,0,0,0,33,262,1,0,0,0,35,
  	270,1,0,0,0,37,276,1,0,0,0,39,285,1,0,0,0,41,290,1,0,0,0,43,299,1,0,0,
  	0,45,301,1,0,0,0,47,303,1,0,0,0,49,305,1,0,0,0,51,307,1,0,0,0,53,309,
  	1,0,0,0,55,311,1,0,0,0,57,314,1,0,0,0,59,317,1,0,0,0,61,319,1,0,0,0,63,
  	322,1,0,0,0,65,324,1,0,0,0,67,327,1,0,0,0,69,329,1,0,0,0,71,331,1,0,0,
  	0,73,333,1,0,0,0,75,335,1,0,0,0,77,337,1,0,0,0,79,339,1,0,0,0,81,341,
  	1,0,0,0,83,343,1,0,0,0,85,345,1,0,0,0,87,347,1,0,0,0,89,357,1,0,0,0,91,
  	359,1,0,0,0,93,361,1,0,0,0,95,373,1,0,0,0,97,375,1,0,0,0,99,397,1,0,0,
  	0,101,399,1,0,0,0,103,406,1,0,0,0,105,413,1,0,0,0,107,420,1,0,0,0,109,
  	426,1,0,0,0,111,429,1,0,0,0,113,431,1,0,0,0,115,433,1,0,0,0,117,450,1,
  	0,0,0,119,452,1,0,0,0,121,454,1,0,0,0,123,460,1,0,0,0,125,470,1,0,0,0,
  	127,472,1,0,0,0,129,478,1,0,0,0,131,481,1,0,0,0,133,485,1,0,0,0,135,492,
  	1,0,0,0,137,498,1,0,0,0,139,504,1,0,0,0,141,506,1,0,0,0,143,509,1,0,0,
  	0,145,517,1,0,0,0,147,525,1,0,0,0,149,553,1,0,0,0,151,577,1,0,0,0,153,
  	591,1,0,0,0,155,602,1,0,0,0,157,613,1,0,0,0,159,617,1,0,0,0,161,625,1,
  	0,0,0,163,639,1,0,0,0,165,166,5,61,0,0,166,2,1,0,0,0,167,168,5,97,0,0,
  	168,169,5,117,0,0,169,170,5,116,0,0,170,171,5,111,0,0,171,4,1,0,0,0,172,
  	173,5,99,0,0,173,174,5,104,0,0,174,175,5,97,0,0,175,176,5,114,0,0,176,
  	6,1,0,0,0,177,178,5,99,0,0,178,179,5,111,0,0,179,180,5,110,0,0,180,181,
  	5,115,0,0,181,182,5,116,0,0,182,8,1,0,0,0,183,184,5,100,0,0,184,185,5,
  	111,0,0,185,186,5,117,0,0,186,187,5,98,0,0,187,188,5,108,0,0,188,189,
  	5,101,0,0,189,10,1,0,0,0,190,191,5,101,0,0,191,192,5,110,0,0,192,193,
  	5,117,0,0,193,194,5,109,0,0,194,12,1,0,0,0,195,196,5,101,0,0,196,197,
  	5,120,0,0,197,198,5,116,0,0,198,199,5,101,0,0,199,200,5,114,0,0,200,201,
  	5,110,0,0,201,14,1,0,0,0,202,203,5,102,0,0,203,204,5,108,0,0,204,205,
  	5,111,0,0,205,206,5,97,0,0,206,207,5,116,0,0,207,16,1,0,0,0,208,209,5,
  	105,0,0,209,210,5,110,0,0,210,211,5,116,0,0,211,18,1,0,0,0,212,213,5,
  	108,0,0,213,214,5,111,0,0,214,215,5,110,0,0,215,216,5,103,0,0,216,20,
  	1,0,0,0,217,218,5,114,0,0,218,219,5,101,0,0,219,220,5,103,0,0,220,221,
  	5,105,0,0,221,222,5,115,0,0,222,223,5,116,0,0,223,224,5,101,0,0,224,225,
  	5,114,0,0,225,22,1,0,0,0,226,227,5,114,0,0,227,228,5,101,0,0,228,229,
  	5,115,0,0,229,230,5,116,0,0,230,231,5,114,0,0,231,232,5,105,0,0,232,233,
  	5,99,0,0,233,234,5,116,0,0,234,24,1,0,0,0,235,236,5,115,0,0,236,237,5,
  	104,0,0,237,238,5,111,0,0,238,239,5,114,0,0,239,240,5,116,0,0,240,26,
  	1,0,0,0,241,242,5,115,0,0,242,243,5,105,0,0,243,244,5,103,0,0,244,245,
  	5,110,0,0,245,246,5,101,0,0,246,247,5,100,0,0,247,28,1,0,0,0,248,249,
  	5,115,0,0,249,250,5,116,0,0,250,251,5,97,0,0,251,252,5,116,0,0,252,253,
  	5,105,0,0,253,254,5,99,0,0,254,30,1,0,0,0,255,256,5,115,0,0,256,257,5,
  	116,0,0,257,258,5,114,0,0,258,259,5,117,0,0,259,260,5,99,0,0,260,261,
  	5,116,0,0,261,32,1,0,0,0,262,263,5,116,0,0,263,264,5,121,0,0,264,265,
  	5,112,0,0,265,266,5,101,0,0,266,267,5,100,0,0,267,268,5,101,0,0,268,269,
  	5,102,0,0,269,34,1,0,0,0,270,271,5,117,0,0,271,272,5,110,0,0,272,273,
  	5,105,0,0,273,274,5,111,0,0,274,275,5,110,0,0,275,36,1,0,0,0,276,277,
  	5,117,0,0,277,278,5,110,0,0,278,279,5,115,0,0,279,280,5,105,0,0,280,281,
  	5,103,0,0,281,282,5,110,0,0,282,283,5,101,0,0,283,284,5,100,0,0,284,38,
  	1,0,0,0,285,286,5,118,0,0,286,287,5,111,0,0,287,288,5,105,0,0,288,289,
  	5,100,0,0,289,40,1,0,0,0,290,291,5,118,0,0,291,292,5,111,0,0,292,293,
  	5,108,0,0,293,294,5,97,0,0,294,295,5,116,0,0,295,296,5,105,0,0,296,297,
  	5,108,0,0,297,298,5,101,0,0,298,42,1,0,0,0,299,300,5,40,0,0,300,44,1,
  	0,0,0,301,302,5,41,0,0,302,46,1,0,0,0,303,304,5,91,0,0,304,48,1,0,0,0,
  	305,306,5,93,0,0,306,50,1,0,0,0,307,308,5,123,0,0,308,52,1,0,0,0,309,
  	310,5,125,0,0,310,54,1,0,0,0,311,312,5,60,0,0,312,313,5,60,0,0,313,56,
  	1,0,0,0,314,315,5,62,0,0,315,316,5,62,0,0,316,58,1,0,0,0,317,318,5,43,
  	0,0,318,60,1,0,0,0,319,320,5,43,0,0,320,321,5,43,0,0,321,62,1,0,0,0,322,
  	323,5,45,0,0,323,64,1,0,0,0,324,325,5,45,0,0,325,326,5,45,0,0,326,66,
  	1,0,0,0,327,328,5,42,0,0,328,68,1,0,0,0,329,330,5,47,0,0,330,70,1,0,0,
  	0,331,332,5,37,0,0,332,72,1,0,0,0,333,334,5,38,0,0,334,74,1,0,0,0,335,
  	336,5,124,0,0,336,76,1,0,0,0,337,338,5,94,0,0,338,78,1,0,0,0,339,340,
  	5,126,0,0,340,80,1,0,0,0,341,342,5,58,0,0,342,82,1,0,0,0,343,344,5,59,
  	0,0,344,84,1,0,0,0,345,346,5,44,0,0,346,86,1,0,0,0,347,352,3,89,44,0,
  	348,351,3,89,44,0,349,351,3,93,46,0,350,348,1,0,0,0,350,349,1,0,0,0,351,
  	354,1,0,0,0,352,350,1,0,0,0,352,353,1,0,0,0,353,88,1,0,0,0,354,352,1,
  	0,0,0,355,358,3,91,45,0,356,358,3,95,47,0,357,355,1,0,0,0,357,356,1,0,
  	0,0,358,90,1,0,0,0,359,360,7,0,0,0,360,92,1,0,0,0,361,362,7,1,0,0,362,
  	94,1,0,0,0,363,364,5,92,0,0,364,365,5,117,0,0,365,366,1,0,0,0,366,374,
  	3,97,48,0,367,368,5,92,0,0,368,369,5,85,0,0,369,370,1,0,0,0,370,371,3,
  	97,48,0,371,372,3,97,48,0,372,374,1,0,0,0,373,363,1,0,0,0,373,367,1,0,
  	0,0,374,96,1,0,0,0,375,376,3,115,57,0,376,377,3,115,57,0,377,378,3,115,
  	57,0,378,379,3,115,57,0,379,98,1,0,0,0,380,382,3,103,51,0,381,383,3,117,
  	58,0,382,381,1,0,0,0,382,383,1,0,0,0,383,398,1,0,0,0,384,386,3,105,52,
  	0,385,387,3,117,58,0,386,385,1,0,0,0,386,387,1,0,0,0,387,398,1,0,0,0,
  	388,390,3,107,53,0,389,391,3,117,58,0,390,389,1,0,0,0,390,391,1,0,0,0,
  	391,398,1,0,0,0,392,398,3,101,50,0,393,394,5,39,0,0,394,395,3,137,68,
  	0,395,396,5,39,0,0,396,398,1,0,0,0,397,380,1,0,0,0,397,384,1,0,0,0,397,
  	388,1,0,0,0,397,392,1,0,0,0,397,393,1,0,0,0,398,100,1,0,0,0,399,400,5,
  	48,0,0,400,402,7,2,0,0,401,403,7,3,0,0,402,401,1,0,0,0,403,404,1,0,0,
  	0,404,402,1,0,0,0,404,405,1,0,0,0,405,102,1,0,0,0,406,410,3,111,55,0,
  	407,409,3,93,46,0,408,407,1,0,0,0,409,412,1,0,0,0,410,408,1,0,0,0,410,
  	411,1,0,0,0,411,104,1,0,0,0,412,410,1,0,0,0,413,417,5,48,0,0,414,416,
  	3,113,56,0,415,414,1,0,0,0,416,419,1,0,0,0,417,415,1,0,0,0,417,418,1,
  	0,0,0,418,106,1,0,0,0,419,417,1,0,0,0,420,422,3,109,54,0,421,423,3,115,
  	57,0,422,421,1,0,0,0,423,424,1,0,0,0,424,422,1,0,0,0,424,425,1,0,0,0,
  	425,108,1,0,0,0,426,427,5,48,0,0,427,428,7,4,0,0,428,110,1,0,0,0,429,
  	430,7,5,0,0,430,112,1,0,0,0,431,432,7,6,0,0,432,114,1,0,0,0,433,434,7,
  	7,0,0,434,116,1,0,0,0,435,437,3,119,59,0,436,438,3,121,60,0,437,436,1,
  	0,0,0,437,438,1,0,0,0,438,451,1,0,0,0,439,440,3,119,59,0,440,441,3,123,
  	61,0,441,451,1,0,0,0,442,444,3,121,60,0,443,445,3,119,59,0,444,443,1,
  	0,0,0,444,445,1,0,0,0,445,451,1,0,0,0,446,448,3,123,61,0,447,449,3,119,
  	59,0,448,447,1,0,0,0,448,449,1,0,0,0,449,451,1,0,0,0,450,435,1,0,0,0,
  	450,439,1,0,0,0,450,442,1,0,0,0,450,446,1,0,0,0,451,118,1,0,0,0,452,453,
  	7,8,0,0,453,120,1,0,0,0,454,455,7,9,0,0,455,122,1,0,0,0,456,457,5,108,
  	0,0,457,461,5,108,0,0,458,459,5,76,0,0,459,461,5,76,0,0,460,456,1,0,0,
  	0,460,458,1,0,0,0,461,124,1,0,0,0,462,464,3,131,65,0,463,462,1,0,0,0,
  	463,464,1,0,0,0,464,465,1,0,0,0,465,466,5,46,0,0,466,471,3,131,65,0,467,
  	468,3,131,65,0,468,469,5,46,0,0,469,471,1,0,0,0,470,463,1,0,0,0,470,467,
  	1,0,0,0,471,126,1,0,0,0,472,474,7,10,0,0,473,475,3,129,64,0,474,473,1,
  	0,0,0,474,475,1,0,0,0,475,476,1,0,0,0,476,477,3,131,65,0,477,128,1,0,
  	0,0,478,479,7,11,0,0,479,130,1,0,0,0,480,482,3,93,46,0,481,480,1,0,0,
  	0,482,483,1,0,0,0,483,481,1,0,0,0,483,484,1,0,0,0,484,132,1,0,0,0,485,
  	487,7,12,0,0,486,488,3,129,64,0,487,486,1,0,0,0,487,488,1,0,0,0,488,489,
  	1,0,0,0,489,490,3,131,65,0,490,134,1,0,0,0,491,493,3,115,57,0,492,491,
  	1,0,0,0,493,494,1,0,0,0,494,492,1,0,0,0,494,495,1,0,0,0,495,136,1,0,0,
  	0,496,499,8,13,0,0,497,499,3,139,69,0,498,496,1,0,0,0,498,497,1,0,0,0,
  	499,138,1,0,0,0,500,505,3,141,70,0,501,505,3,143,71,0,502,505,3,145,72,
  	0,503,505,3,95,47,0,504,500,1,0,0,0,504,501,1,0,0,0,504,502,1,0,0,0,504,
  	503,1,0,0,0,505,140,1,0,0,0,506,507,5,92,0,0,507,508,7,14,0,0,508,142,
  	1,0,0,0,509,510,5,92,0,0,510,512,3,113,56,0,511,513,3,113,56,0,512,511,
  	1,0,0,0,512,513,1,0,0,0,513,515,1,0,0,0,514,516,3,113,56,0,515,514,1,
  	0,0,0,515,516,1,0,0,0,516,144,1,0,0,0,517,518,5,92,0,0,518,519,5,120,
  	0,0,519,521,1,0,0,0,520,522,3,115,57,0,521,520,1,0,0,0,522,523,1,0,0,
  	0,523,521,1,0,0,0,523,524,1,0,0,0,524,146,1,0,0,0,525,526,5,35,0,0,526,
  	527,5,100,0,0,527,528,5,101,0,0,528,529,5,102,0,0,529,530,5,105,0,0,530,
  	531,5,110,0,0,531,532,5,101,0,0,532,544,1,0,0,0,533,535,8,15,0,0,534,
  	533,1,0,0,0,535,538,1,0,0,0,536,537,1,0,0,0,536,534,1,0,0,0,537,539,1,
  	0,0,0,538,536,1,0,0,0,539,541,5,92,0,0,540,542,5,13,0,0,541,540,1,0,0,
  	0,541,542,1,0,0,0,542,543,1,0,0,0,543,545,5,10,0,0,544,536,1,0,0,0,545,
  	546,1,0,0,0,546,544,1,0,0,0,546,547,1,0,0,0,547,549,1,0,0,0,548,550,8,
  	15,0,0,549,548,1,0,0,0,550,551,1,0,0,0,551,549,1,0,0,0,551,552,1,0,0,
  	0,552,148,1,0,0,0,553,554,5,35,0,0,554,566,3,87,43,0,555,557,8,15,0,0,
  	556,555,1,0,0,0,557,560,1,0,0,0,558,559,1,0,0,0,558,556,1,0,0,0,559,561,
  	1,0,0,0,560,558,1,0,0,0,561,563,5,92,0,0,562,564,5,13,0,0,563,562,1,0,
  	0,0,563,564,1,0,0,0,564,565,1,0,0,0,565,567,5,10,0,0,566,558,1,0,0,0,
  	567,568,1,0,0,0,568,566,1,0,0,0,568,569,1,0,0,0,569,571,1,0,0,0,570,572,
  	8,15,0,0,571,570,1,0,0,0,572,573,1,0,0,0,573,571,1,0,0,0,573,574,1,0,
  	0,0,574,575,1,0,0,0,575,576,6,74,0,0,576,150,1,0,0,0,577,578,5,35,0,0,
  	578,579,5,100,0,0,579,580,5,101,0,0,580,581,5,102,0,0,581,582,5,105,0,
  	0,582,583,5,110,0,0,583,584,5,101,0,0,584,588,1,0,0,0,585,587,8,15,0,
  	0,586,585,1,0,0,0,587,590,1,0,0,0,588,586,1,0,0,0,588,589,1,0,0,0,589,
  	152,1,0,0,0,590,588,1,0,0,0,591,592,5,35,0,0,592,596,3,87,43,0,593,595,
  	8,15,0,0,594,593,1,0,0,0,595,598,1,0,0,0,596,594,1,0,0,0,596,597,1,0,
  	0,0,597,599,1,0,0,0,598,596,1,0,0,0,599,600,6,76,0,0,600,154,1,0,0,0,
  	601,603,7,16,0,0,602,601,1,0,0,0,603,604,1,0,0,0,604,602,1,0,0,0,604,
  	605,1,0,0,0,605,606,1,0,0,0,606,607,6,77,0,0,607,156,1,0,0,0,608,610,
  	5,13,0,0,609,611,5,10,0,0,610,609,1,0,0,0,610,611,1,0,0,0,611,614,1,0,
  	0,0,612,614,5,10,0,0,613,608,1,0,0,0,613,612,1,0,0,0,614,615,1,0,0,0,
  	615,616,6,78,0,0,616,158,1,0,0,0,617,619,5,92,0,0,618,620,7,17,0,0,619,
  	618,1,0,0,0,619,620,1,0,0,0,620,621,1,0,0,0,621,622,5,10,0,0,622,623,
  	1,0,0,0,623,624,6,79,0,0,624,160,1,0,0,0,625,626,5,47,0,0,626,627,5,42,
  	0,0,627,631,1,0,0,0,628,630,9,0,0,0,629,628,1,0,0,0,630,633,1,0,0,0,631,
  	632,1,0,0,0,631,629,1,0,0,0,632,634,1,0,0,0,633,631,1,0,0,0,634,635,5,
  	42,0,0,635,636,5,47,0,0,636,637,1,0,0,0,637,638,6,80,0,0,638,162,1,0,
  	0,0,639,640,5,47,0,0,640,641,5,47,0,0,641,645,1,0,0,0,642,644,8,18,0,
  	0,643,642,1,0,0,0,644,647,1,0,0,0,645,643,1,0,0,0,645,646,1,0,0,0,646,
  	648,1,0,0,0,647,645,1,0,0,0,648,649,6,81,0,0,649,164,1,0,0,0,45,0,350,
  	352,357,373,382,386,390,397,404,410,417,424,437,444,448,450,460,463,470,
  	474,483,487,494,498,504,512,515,523,536,541,546,551,558,563,568,573,588,
  	596,604,610,613,619,631,645,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cstructlexerLexerStaticData = std::move(staticData);
}

}

CStructLexer::CStructLexer(CharStream *input) : Lexer(input) {
  CStructLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *cstructlexerLexerStaticData->atn, cstructlexerLexerStaticData->decisionToDFA, cstructlexerLexerStaticData->sharedContextCache);
}

CStructLexer::~CStructLexer() {
  delete _interpreter;
}

std::string CStructLexer::getGrammarFileName() const {
  return "CStruct.g4";
}

const std::vector<std::string>& CStructLexer::getRuleNames() const {
  return cstructlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CStructLexer::getChannelNames() const {
  return cstructlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CStructLexer::getModeNames() const {
  return cstructlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CStructLexer::getVocabulary() const {
  return cstructlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CStructLexer::getSerializedATN() const {
  return cstructlexerLexerStaticData->serializedATN;
}

const atn::ATN& CStructLexer::getATN() const {
  return *cstructlexerLexerStaticData->atn;
}




void CStructLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cstructlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(cstructlexerLexerOnceFlag, cstructlexerLexerInitialize);
#endif
}
