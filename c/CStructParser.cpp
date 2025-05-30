
// Generated from ./CStruct.g4 by ANTLR 4.13.2


#include "CStructVisitor.h"

#include "CStructParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CStructParserStaticData final {
  CStructParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CStructParserStaticData(const CStructParserStaticData&) = delete;
  CStructParserStaticData(CStructParserStaticData&&) = delete;
  CStructParserStaticData& operator=(const CStructParserStaticData&) = delete;
  CStructParserStaticData& operator=(CStructParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cstructParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CStructParserStaticData> cstructParserStaticData = nullptr;

void cstructParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cstructParserStaticData != nullptr) {
    return;
  }
#else
  assert(cstructParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CStructParserStaticData>(
    std::vector<std::string>{
      "primaryExpression", "postfixExpression", "unaryExpression", "unaryOperator", 
      "castExpression", "multiplicativeExpression", "additiveExpression", 
      "shiftExpression", "andExpression", "exclusiveOrExpression", "inclusiveOrExpression", 
      "assignmentExpressionDef", "assignmentExpression", "declaration", 
      "declarationSpecifiers", "declarationSpecifiers2", "declarationSpecifier", 
      "typeSpecifier", "structOrUnionSpecifier", "structOrUnion", "structDeclarationList", 
      "structDeclaration", "specifierQualifierList", "structDeclaratorList", 
      "structDeclarator", "enumSpecifier", "enumeratorList", "enumerator", 
      "enumerationConstant", "typeQualifier", "declarator", "directDeclarator", 
      "pointer", "typeQualifierList", "identifierList", "typeName", "abstractDeclarator", 
      "directAbstractDeclarator", "typedefName", "compilationUnit", "translationUnit", 
      "externalDeclaration", "defineDecl"
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
  	4,1,54,399,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,1,0,1,0,1,0,1,0,1,0,1,0,3,0,93,8,0,1,1,1,1,5,1,97,8,1,10,1,12,1,100,
  	9,1,1,2,5,2,103,8,2,10,2,12,2,106,9,2,1,2,1,2,1,2,1,2,3,2,112,8,2,1,3,
  	1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,123,8,4,1,5,1,5,1,5,5,5,128,8,5,10,
  	5,12,5,131,9,5,1,6,1,6,1,6,5,6,136,8,6,10,6,12,6,139,9,6,1,7,1,7,1,7,
  	5,7,144,8,7,10,7,12,7,147,9,7,1,8,1,8,1,8,5,8,152,8,8,10,8,12,8,155,9,
  	8,1,9,1,9,1,9,5,9,160,8,9,10,9,12,9,163,9,9,1,10,1,10,1,10,5,10,168,8,
  	10,10,10,12,10,171,9,10,1,11,1,11,5,11,175,8,11,10,11,12,11,178,9,11,
  	1,11,1,11,1,12,1,12,3,12,184,8,12,1,13,1,13,1,13,1,14,4,14,190,8,14,11,
  	14,12,14,191,1,15,4,15,195,8,15,11,15,12,15,196,1,16,1,16,3,16,201,8,
  	16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,215,
  	8,17,1,18,1,18,3,18,219,8,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,
  	228,8,18,1,19,1,19,1,20,4,20,233,8,20,11,20,12,20,234,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,3,21,244,8,21,1,22,1,22,3,22,248,8,22,1,22,3,22,251,
  	8,22,1,23,1,23,1,23,5,23,256,8,23,10,23,12,23,259,9,23,1,24,1,24,3,24,
  	263,8,24,1,24,1,24,3,24,267,8,24,1,25,1,25,3,25,271,8,25,1,25,1,25,1,
  	25,3,25,276,8,25,1,25,1,25,1,25,1,25,3,25,282,8,25,1,26,1,26,1,26,5,26,
  	287,8,26,10,26,12,26,290,9,26,1,27,1,27,1,27,3,27,295,8,27,1,28,1,28,
  	1,29,1,29,1,30,3,30,302,8,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,
  	1,31,1,31,1,31,3,31,315,8,31,1,31,1,31,1,31,1,31,1,31,5,31,322,8,31,10,
  	31,12,31,325,9,31,1,32,1,32,3,32,329,8,32,4,32,331,8,32,11,32,12,32,332,
  	1,33,4,33,336,8,33,11,33,12,33,337,1,34,1,34,1,34,5,34,343,8,34,10,34,
  	12,34,346,9,34,1,35,1,35,3,35,350,8,35,1,36,1,36,3,36,354,8,36,1,36,3,
  	36,357,8,36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,3,37,368,8,37,
  	1,37,1,37,1,37,1,37,1,37,5,37,375,8,37,10,37,12,37,378,9,37,1,38,1,38,
  	1,39,3,39,383,8,39,1,39,1,39,1,40,4,40,388,8,40,11,40,12,40,389,1,41,
  	1,41,1,41,3,41,395,8,41,1,42,1,42,1,42,0,2,62,74,43,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,
  	62,64,66,68,70,72,74,76,78,80,82,84,0,8,2,0,31,31,33,33,3,0,30,30,32,
  	32,40,40,1,0,34,36,2,0,30,30,32,32,1,0,28,29,2,0,16,16,18,18,3,0,4,4,
  	12,12,21,21,2,0,46,46,48,48,415,0,92,1,0,0,0,2,94,1,0,0,0,4,104,1,0,0,
  	0,6,113,1,0,0,0,8,122,1,0,0,0,10,124,1,0,0,0,12,132,1,0,0,0,14,140,1,
  	0,0,0,16,148,1,0,0,0,18,156,1,0,0,0,20,164,1,0,0,0,22,172,1,0,0,0,24,
  	183,1,0,0,0,26,185,1,0,0,0,28,189,1,0,0,0,30,194,1,0,0,0,32,200,1,0,0,
  	0,34,214,1,0,0,0,36,227,1,0,0,0,38,229,1,0,0,0,40,232,1,0,0,0,42,243,
  	1,0,0,0,44,247,1,0,0,0,46,252,1,0,0,0,48,266,1,0,0,0,50,281,1,0,0,0,52,
  	283,1,0,0,0,54,291,1,0,0,0,56,296,1,0,0,0,58,298,1,0,0,0,60,301,1,0,0,
  	0,62,314,1,0,0,0,64,330,1,0,0,0,66,335,1,0,0,0,68,339,1,0,0,0,70,347,
  	1,0,0,0,72,356,1,0,0,0,74,367,1,0,0,0,76,379,1,0,0,0,78,382,1,0,0,0,80,
  	387,1,0,0,0,82,394,1,0,0,0,84,396,1,0,0,0,86,93,5,44,0,0,87,93,5,45,0,
  	0,88,89,5,22,0,0,89,90,3,24,12,0,90,91,5,23,0,0,91,93,1,0,0,0,92,86,1,
  	0,0,0,92,87,1,0,0,0,92,88,1,0,0,0,93,1,1,0,0,0,94,98,3,0,0,0,95,97,7,
  	0,0,0,96,95,1,0,0,0,97,100,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,3,1,
  	0,0,0,100,98,1,0,0,0,101,103,7,0,0,0,102,101,1,0,0,0,103,106,1,0,0,0,
  	104,102,1,0,0,0,104,105,1,0,0,0,105,111,1,0,0,0,106,104,1,0,0,0,107,112,
  	3,2,1,0,108,109,3,6,3,0,109,110,3,8,4,0,110,112,1,0,0,0,111,107,1,0,0,
  	0,111,108,1,0,0,0,112,5,1,0,0,0,113,114,7,1,0,0,114,7,1,0,0,0,115,116,
  	5,22,0,0,116,117,3,70,35,0,117,118,5,23,0,0,118,119,3,8,4,0,119,123,1,
  	0,0,0,120,123,3,4,2,0,121,123,5,45,0,0,122,115,1,0,0,0,122,120,1,0,0,
  	0,122,121,1,0,0,0,123,9,1,0,0,0,124,129,3,8,4,0,125,126,7,2,0,0,126,128,
  	3,8,4,0,127,125,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,
  	0,130,11,1,0,0,0,131,129,1,0,0,0,132,137,3,10,5,0,133,134,7,3,0,0,134,
  	136,3,10,5,0,135,133,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,
  	1,0,0,0,138,13,1,0,0,0,139,137,1,0,0,0,140,145,3,12,6,0,141,142,7,4,0,
  	0,142,144,3,12,6,0,143,141,1,0,0,0,144,147,1,0,0,0,145,143,1,0,0,0,145,
  	146,1,0,0,0,146,15,1,0,0,0,147,145,1,0,0,0,148,153,3,14,7,0,149,150,5,
  	37,0,0,150,152,3,14,7,0,151,149,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,
  	0,153,154,1,0,0,0,154,17,1,0,0,0,155,153,1,0,0,0,156,161,3,16,8,0,157,
  	158,5,39,0,0,158,160,3,16,8,0,159,157,1,0,0,0,160,163,1,0,0,0,161,159,
  	1,0,0,0,161,162,1,0,0,0,162,19,1,0,0,0,163,161,1,0,0,0,164,169,3,18,9,
  	0,165,166,5,38,0,0,166,168,3,18,9,0,167,165,1,0,0,0,168,171,1,0,0,0,169,
  	167,1,0,0,0,169,170,1,0,0,0,170,21,1,0,0,0,171,169,1,0,0,0,172,176,3,
  	24,12,0,173,175,5,42,0,0,174,173,1,0,0,0,175,178,1,0,0,0,176,174,1,0,
  	0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,176,1,0,0,0,179,180,5,0,0,1,180,
  	23,1,0,0,0,181,184,5,45,0,0,182,184,3,20,10,0,183,181,1,0,0,0,183,182,
  	1,0,0,0,184,25,1,0,0,0,185,186,3,28,14,0,186,187,5,42,0,0,187,27,1,0,
  	0,0,188,190,3,32,16,0,189,188,1,0,0,0,190,191,1,0,0,0,191,189,1,0,0,0,
  	191,192,1,0,0,0,192,29,1,0,0,0,193,195,3,32,16,0,194,193,1,0,0,0,195,
  	196,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,31,1,0,0,0,198,201,3,
  	34,17,0,199,201,3,58,29,0,200,198,1,0,0,0,200,199,1,0,0,0,201,33,1,0,
  	0,0,202,215,5,20,0,0,203,215,5,3,0,0,204,215,5,13,0,0,205,215,5,9,0,0,
  	206,215,5,10,0,0,207,215,5,8,0,0,208,215,5,5,0,0,209,215,5,14,0,0,210,
  	215,5,19,0,0,211,215,3,36,18,0,212,215,3,50,25,0,213,215,3,76,38,0,214,
  	202,1,0,0,0,214,203,1,0,0,0,214,204,1,0,0,0,214,205,1,0,0,0,214,206,1,
  	0,0,0,214,207,1,0,0,0,214,208,1,0,0,0,214,209,1,0,0,0,214,210,1,0,0,0,
  	214,211,1,0,0,0,214,212,1,0,0,0,214,213,1,0,0,0,215,35,1,0,0,0,216,218,
  	3,38,19,0,217,219,5,44,0,0,218,217,1,0,0,0,218,219,1,0,0,0,219,220,1,
  	0,0,0,220,221,5,26,0,0,221,222,3,40,20,0,222,223,5,27,0,0,223,228,1,0,
  	0,0,224,225,3,38,19,0,225,226,5,44,0,0,226,228,1,0,0,0,227,216,1,0,0,
  	0,227,224,1,0,0,0,228,37,1,0,0,0,229,230,7,5,0,0,230,39,1,0,0,0,231,233,
  	3,42,21,0,232,231,1,0,0,0,233,234,1,0,0,0,234,232,1,0,0,0,234,235,1,0,
  	0,0,235,41,1,0,0,0,236,237,3,44,22,0,237,238,3,46,23,0,238,239,5,42,0,
  	0,239,244,1,0,0,0,240,241,3,44,22,0,241,242,5,42,0,0,242,244,1,0,0,0,
  	243,236,1,0,0,0,243,240,1,0,0,0,244,43,1,0,0,0,245,248,3,34,17,0,246,
  	248,3,58,29,0,247,245,1,0,0,0,247,246,1,0,0,0,248,250,1,0,0,0,249,251,
  	3,44,22,0,250,249,1,0,0,0,250,251,1,0,0,0,251,45,1,0,0,0,252,257,3,48,
  	24,0,253,254,5,43,0,0,254,256,3,48,24,0,255,253,1,0,0,0,256,259,1,0,0,
  	0,257,255,1,0,0,0,257,258,1,0,0,0,258,47,1,0,0,0,259,257,1,0,0,0,260,
  	267,3,60,30,0,261,263,3,60,30,0,262,261,1,0,0,0,262,263,1,0,0,0,263,264,
  	1,0,0,0,264,265,5,41,0,0,265,267,5,45,0,0,266,260,1,0,0,0,266,262,1,0,
  	0,0,267,49,1,0,0,0,268,270,5,6,0,0,269,271,5,44,0,0,270,269,1,0,0,0,270,
  	271,1,0,0,0,271,272,1,0,0,0,272,273,5,26,0,0,273,275,3,52,26,0,274,276,
  	5,43,0,0,275,274,1,0,0,0,275,276,1,0,0,0,276,277,1,0,0,0,277,278,5,27,
  	0,0,278,282,1,0,0,0,279,280,5,6,0,0,280,282,5,44,0,0,281,268,1,0,0,0,
  	281,279,1,0,0,0,282,51,1,0,0,0,283,288,3,54,27,0,284,285,5,43,0,0,285,
  	287,3,54,27,0,286,284,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,288,289,
  	1,0,0,0,289,53,1,0,0,0,290,288,1,0,0,0,291,294,3,56,28,0,292,293,5,1,
  	0,0,293,295,3,24,12,0,294,292,1,0,0,0,294,295,1,0,0,0,295,55,1,0,0,0,
  	296,297,5,44,0,0,297,57,1,0,0,0,298,299,7,6,0,0,299,59,1,0,0,0,300,302,
  	3,64,32,0,301,300,1,0,0,0,301,302,1,0,0,0,302,303,1,0,0,0,303,304,3,62,
  	31,0,304,61,1,0,0,0,305,306,6,31,-1,0,306,315,5,44,0,0,307,308,5,22,0,
  	0,308,309,3,60,30,0,309,310,5,23,0,0,310,315,1,0,0,0,311,312,5,44,0,0,
  	312,313,5,41,0,0,313,315,5,45,0,0,314,305,1,0,0,0,314,307,1,0,0,0,314,
  	311,1,0,0,0,315,323,1,0,0,0,316,317,10,2,0,0,317,318,5,24,0,0,318,319,
  	3,24,12,0,319,320,5,25,0,0,320,322,1,0,0,0,321,316,1,0,0,0,322,325,1,
  	0,0,0,323,321,1,0,0,0,323,324,1,0,0,0,324,63,1,0,0,0,325,323,1,0,0,0,
  	326,328,5,34,0,0,327,329,3,66,33,0,328,327,1,0,0,0,328,329,1,0,0,0,329,
  	331,1,0,0,0,330,326,1,0,0,0,331,332,1,0,0,0,332,330,1,0,0,0,332,333,1,
  	0,0,0,333,65,1,0,0,0,334,336,3,58,29,0,335,334,1,0,0,0,336,337,1,0,0,
  	0,337,335,1,0,0,0,337,338,1,0,0,0,338,67,1,0,0,0,339,344,5,44,0,0,340,
  	341,5,43,0,0,341,343,5,44,0,0,342,340,1,0,0,0,343,346,1,0,0,0,344,342,
  	1,0,0,0,344,345,1,0,0,0,345,69,1,0,0,0,346,344,1,0,0,0,347,349,3,44,22,
  	0,348,350,3,72,36,0,349,348,1,0,0,0,349,350,1,0,0,0,350,71,1,0,0,0,351,
  	357,3,64,32,0,352,354,3,64,32,0,353,352,1,0,0,0,353,354,1,0,0,0,354,355,
  	1,0,0,0,355,357,3,74,37,0,356,351,1,0,0,0,356,353,1,0,0,0,357,73,1,0,
  	0,0,358,359,6,37,-1,0,359,360,5,22,0,0,360,361,3,72,36,0,361,362,5,23,
  	0,0,362,368,1,0,0,0,363,364,5,24,0,0,364,365,3,24,12,0,365,366,5,25,0,
  	0,366,368,1,0,0,0,367,358,1,0,0,0,367,363,1,0,0,0,368,376,1,0,0,0,369,
  	370,10,1,0,0,370,371,5,24,0,0,371,372,3,24,12,0,372,373,5,25,0,0,373,
  	375,1,0,0,0,374,369,1,0,0,0,375,378,1,0,0,0,376,374,1,0,0,0,376,377,1,
  	0,0,0,377,75,1,0,0,0,378,376,1,0,0,0,379,380,5,44,0,0,380,77,1,0,0,0,
  	381,383,3,80,40,0,382,381,1,0,0,0,382,383,1,0,0,0,383,384,1,0,0,0,384,
  	385,5,0,0,1,385,79,1,0,0,0,386,388,3,82,41,0,387,386,1,0,0,0,388,389,
  	1,0,0,0,389,387,1,0,0,0,389,390,1,0,0,0,390,81,1,0,0,0,391,395,3,26,13,
  	0,392,395,3,84,42,0,393,395,5,42,0,0,394,391,1,0,0,0,394,392,1,0,0,0,
  	394,393,1,0,0,0,395,83,1,0,0,0,396,397,7,7,0,0,397,85,1,0,0,0,46,92,98,
  	104,111,122,129,137,145,153,161,169,176,183,191,196,200,214,218,227,234,
  	243,247,250,257,262,266,270,275,281,288,294,301,314,323,328,332,337,344,
  	349,353,356,367,376,382,389,394
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cstructParserStaticData = std::move(staticData);
}

}

CStructParser::CStructParser(TokenStream *input) : CStructParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CStructParser::CStructParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CStructParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cstructParserStaticData->atn, cstructParserStaticData->decisionToDFA, cstructParserStaticData->sharedContextCache, options);
}

CStructParser::~CStructParser() {
  delete _interpreter;
}

const atn::ATN& CStructParser::getATN() const {
  return *cstructParserStaticData->atn;
}

std::string CStructParser::getGrammarFileName() const {
  return "CStruct.g4";
}

const std::vector<std::string>& CStructParser::getRuleNames() const {
  return cstructParserStaticData->ruleNames;
}

const dfa::Vocabulary& CStructParser::getVocabulary() const {
  return cstructParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CStructParser::getSerializedATN() const {
  return cstructParserStaticData->serializedATN;
}


//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CStructParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::PrimaryExpressionContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}

tree::TerminalNode* CStructParser::PrimaryExpressionContext::IntegerConstant() {
  return getToken(CStructParser::IntegerConstant, 0);
}

tree::TerminalNode* CStructParser::PrimaryExpressionContext::LeftParen() {
  return getToken(CStructParser::LeftParen, 0);
}

CStructParser::AssignmentExpressionContext* CStructParser::PrimaryExpressionContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CStructParser::PrimaryExpressionContext::RightParen() {
  return getToken(CStructParser::RightParen, 0);
}


size_t CStructParser::PrimaryExpressionContext::getRuleIndex() const {
  return CStructParser::RulePrimaryExpression;
}


std::any CStructParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::PrimaryExpressionContext* CStructParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, CStructParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(86);
        match(CStructParser::Identifier);
        break;
      }

      case CStructParser::IntegerConstant: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        match(CStructParser::IntegerConstant);
        break;
      }

      case CStructParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(88);
        match(CStructParser::LeftParen);
        setState(89);
        assignmentExpression();
        setState(90);
        match(CStructParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CStructParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::PrimaryExpressionContext* CStructParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CStructParser::PrimaryExpressionContext>(0);
}

std::vector<tree::TerminalNode *> CStructParser::PostfixExpressionContext::PlusPlus() {
  return getTokens(CStructParser::PlusPlus);
}

tree::TerminalNode* CStructParser::PostfixExpressionContext::PlusPlus(size_t i) {
  return getToken(CStructParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CStructParser::PostfixExpressionContext::MinusMinus() {
  return getTokens(CStructParser::MinusMinus);
}

tree::TerminalNode* CStructParser::PostfixExpressionContext::MinusMinus(size_t i) {
  return getToken(CStructParser::MinusMinus, i);
}


size_t CStructParser::PostfixExpressionContext::getRuleIndex() const {
  return CStructParser::RulePostfixExpression;
}


std::any CStructParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::PostfixExpressionContext* CStructParser::postfixExpression() {
  PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, CStructParser::RulePostfixExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    primaryExpression();
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(95);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CStructParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::PostfixExpressionContext* CStructParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CStructParser::PostfixExpressionContext>(0);
}

CStructParser::UnaryOperatorContext* CStructParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CStructParser::UnaryOperatorContext>(0);
}

CStructParser::CastExpressionContext* CStructParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<CStructParser::CastExpressionContext>(0);
}

std::vector<tree::TerminalNode *> CStructParser::UnaryExpressionContext::PlusPlus() {
  return getTokens(CStructParser::PlusPlus);
}

tree::TerminalNode* CStructParser::UnaryExpressionContext::PlusPlus(size_t i) {
  return getToken(CStructParser::PlusPlus, i);
}

std::vector<tree::TerminalNode *> CStructParser::UnaryExpressionContext::MinusMinus() {
  return getTokens(CStructParser::MinusMinus);
}

tree::TerminalNode* CStructParser::UnaryExpressionContext::MinusMinus(size_t i) {
  return getToken(CStructParser::MinusMinus, i);
}


size_t CStructParser::UnaryExpressionContext::getRuleIndex() const {
  return CStructParser::RuleUnaryExpression;
}


std::any CStructParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::UnaryExpressionContext* CStructParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, CStructParser::RuleUnaryExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(101);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(106);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::LeftParen:
      case CStructParser::Identifier:
      case CStructParser::IntegerConstant: {
        setState(107);
        postfixExpression();
        break;
      }

      case CStructParser::Plus:
      case CStructParser::Minus:
      case CStructParser::Tilde: {
        setState(108);
        unaryOperator();
        setState(109);
        castExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CStructParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::UnaryOperatorContext::Plus() {
  return getToken(CStructParser::Plus, 0);
}

tree::TerminalNode* CStructParser::UnaryOperatorContext::Minus() {
  return getToken(CStructParser::Minus, 0);
}

tree::TerminalNode* CStructParser::UnaryOperatorContext::Tilde() {
  return getToken(CStructParser::Tilde, 0);
}


size_t CStructParser::UnaryOperatorContext::getRuleIndex() const {
  return CStructParser::RuleUnaryOperator;
}


std::any CStructParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::UnaryOperatorContext* CStructParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, CStructParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1104880336896) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CStructParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::CastExpressionContext::LeftParen() {
  return getToken(CStructParser::LeftParen, 0);
}

CStructParser::TypeNameContext* CStructParser::CastExpressionContext::typeName() {
  return getRuleContext<CStructParser::TypeNameContext>(0);
}

tree::TerminalNode* CStructParser::CastExpressionContext::RightParen() {
  return getToken(CStructParser::RightParen, 0);
}

CStructParser::CastExpressionContext* CStructParser::CastExpressionContext::castExpression() {
  return getRuleContext<CStructParser::CastExpressionContext>(0);
}

CStructParser::UnaryExpressionContext* CStructParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CStructParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CStructParser::CastExpressionContext::IntegerConstant() {
  return getToken(CStructParser::IntegerConstant, 0);
}


size_t CStructParser::CastExpressionContext::getRuleIndex() const {
  return CStructParser::RuleCastExpression;
}


std::any CStructParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::CastExpressionContext* CStructParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, CStructParser::RuleCastExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      match(CStructParser::LeftParen);
      setState(116);
      typeName();
      setState(117);
      match(CStructParser::RightParen);
      setState(118);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(121);
      match(CStructParser::IntegerConstant);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CStructParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::CastExpressionContext *> CStructParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContexts<CStructParser::CastExpressionContext>();
}

CStructParser::CastExpressionContext* CStructParser::MultiplicativeExpressionContext::castExpression(size_t i) {
  return getRuleContext<CStructParser::CastExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::MultiplicativeExpressionContext::Star() {
  return getTokens(CStructParser::Star);
}

tree::TerminalNode* CStructParser::MultiplicativeExpressionContext::Star(size_t i) {
  return getToken(CStructParser::Star, i);
}

std::vector<tree::TerminalNode *> CStructParser::MultiplicativeExpressionContext::Div() {
  return getTokens(CStructParser::Div);
}

tree::TerminalNode* CStructParser::MultiplicativeExpressionContext::Div(size_t i) {
  return getToken(CStructParser::Div, i);
}

std::vector<tree::TerminalNode *> CStructParser::MultiplicativeExpressionContext::Mod() {
  return getTokens(CStructParser::Mod);
}

tree::TerminalNode* CStructParser::MultiplicativeExpressionContext::Mod(size_t i) {
  return getToken(CStructParser::Mod, i);
}


size_t CStructParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CStructParser::RuleMultiplicativeExpression;
}


std::any CStructParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::MultiplicativeExpressionContext* CStructParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, CStructParser::RuleMultiplicativeExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    castExpression();
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 120259084288) != 0)) {
      setState(125);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 120259084288) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(126);
      castExpression();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CStructParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::MultiplicativeExpressionContext *> CStructParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<CStructParser::MultiplicativeExpressionContext>();
}

CStructParser::MultiplicativeExpressionContext* CStructParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<CStructParser::MultiplicativeExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::AdditiveExpressionContext::Plus() {
  return getTokens(CStructParser::Plus);
}

tree::TerminalNode* CStructParser::AdditiveExpressionContext::Plus(size_t i) {
  return getToken(CStructParser::Plus, i);
}

std::vector<tree::TerminalNode *> CStructParser::AdditiveExpressionContext::Minus() {
  return getTokens(CStructParser::Minus);
}

tree::TerminalNode* CStructParser::AdditiveExpressionContext::Minus(size_t i) {
  return getToken(CStructParser::Minus, i);
}


size_t CStructParser::AdditiveExpressionContext::getRuleIndex() const {
  return CStructParser::RuleAdditiveExpression;
}


std::any CStructParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::AdditiveExpressionContext* CStructParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CStructParser::RuleAdditiveExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    multiplicativeExpression();
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Plus

    || _la == CStructParser::Minus) {
      setState(133);
      _la = _input->LA(1);
      if (!(_la == CStructParser::Plus

      || _la == CStructParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(134);
      multiplicativeExpression();
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CStructParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::AdditiveExpressionContext *> CStructParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContexts<CStructParser::AdditiveExpressionContext>();
}

CStructParser::AdditiveExpressionContext* CStructParser::ShiftExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<CStructParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::ShiftExpressionContext::LeftShift() {
  return getTokens(CStructParser::LeftShift);
}

tree::TerminalNode* CStructParser::ShiftExpressionContext::LeftShift(size_t i) {
  return getToken(CStructParser::LeftShift, i);
}

std::vector<tree::TerminalNode *> CStructParser::ShiftExpressionContext::RightShift() {
  return getTokens(CStructParser::RightShift);
}

tree::TerminalNode* CStructParser::ShiftExpressionContext::RightShift(size_t i) {
  return getToken(CStructParser::RightShift, i);
}


size_t CStructParser::ShiftExpressionContext::getRuleIndex() const {
  return CStructParser::RuleShiftExpression;
}


std::any CStructParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ShiftExpressionContext* CStructParser::shiftExpression() {
  ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, CStructParser::RuleShiftExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    additiveExpression();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::LeftShift

    || _la == CStructParser::RightShift) {
      setState(141);
      _la = _input->LA(1);
      if (!(_la == CStructParser::LeftShift

      || _la == CStructParser::RightShift)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(142);
      additiveExpression();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CStructParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::ShiftExpressionContext *> CStructParser::AndExpressionContext::shiftExpression() {
  return getRuleContexts<CStructParser::ShiftExpressionContext>();
}

CStructParser::ShiftExpressionContext* CStructParser::AndExpressionContext::shiftExpression(size_t i) {
  return getRuleContext<CStructParser::ShiftExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::AndExpressionContext::And() {
  return getTokens(CStructParser::And);
}

tree::TerminalNode* CStructParser::AndExpressionContext::And(size_t i) {
  return getToken(CStructParser::And, i);
}


size_t CStructParser::AndExpressionContext::getRuleIndex() const {
  return CStructParser::RuleAndExpression;
}


std::any CStructParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::AndExpressionContext* CStructParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, CStructParser::RuleAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    shiftExpression();
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::And) {
      setState(149);
      match(CStructParser::And);
      setState(150);
      shiftExpression();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CStructParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::AndExpressionContext *> CStructParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContexts<CStructParser::AndExpressionContext>();
}

CStructParser::AndExpressionContext* CStructParser::ExclusiveOrExpressionContext::andExpression(size_t i) {
  return getRuleContext<CStructParser::AndExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::ExclusiveOrExpressionContext::Caret() {
  return getTokens(CStructParser::Caret);
}

tree::TerminalNode* CStructParser::ExclusiveOrExpressionContext::Caret(size_t i) {
  return getToken(CStructParser::Caret, i);
}


size_t CStructParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CStructParser::RuleExclusiveOrExpression;
}


std::any CStructParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ExclusiveOrExpressionContext* CStructParser::exclusiveOrExpression() {
  ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CStructParser::RuleExclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    andExpression();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Caret) {
      setState(157);
      match(CStructParser::Caret);
      setState(158);
      andExpression();
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CStructParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::ExclusiveOrExpressionContext *> CStructParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContexts<CStructParser::ExclusiveOrExpressionContext>();
}

CStructParser::ExclusiveOrExpressionContext* CStructParser::InclusiveOrExpressionContext::exclusiveOrExpression(size_t i) {
  return getRuleContext<CStructParser::ExclusiveOrExpressionContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::InclusiveOrExpressionContext::Or() {
  return getTokens(CStructParser::Or);
}

tree::TerminalNode* CStructParser::InclusiveOrExpressionContext::Or(size_t i) {
  return getToken(CStructParser::Or, i);
}


size_t CStructParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CStructParser::RuleInclusiveOrExpression;
}


std::any CStructParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::InclusiveOrExpressionContext* CStructParser::inclusiveOrExpression() {
  InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, CStructParser::RuleInclusiveOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    exclusiveOrExpression();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Or) {
      setState(165);
      match(CStructParser::Or);
      setState(166);
      exclusiveOrExpression();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionDefContext ------------------------------------------------------------------

CStructParser::AssignmentExpressionDefContext::AssignmentExpressionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::AssignmentExpressionContext* CStructParser::AssignmentExpressionDefContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CStructParser::AssignmentExpressionDefContext::EOF() {
  return getToken(CStructParser::EOF, 0);
}

std::vector<tree::TerminalNode *> CStructParser::AssignmentExpressionDefContext::Semi() {
  return getTokens(CStructParser::Semi);
}

tree::TerminalNode* CStructParser::AssignmentExpressionDefContext::Semi(size_t i) {
  return getToken(CStructParser::Semi, i);
}


size_t CStructParser::AssignmentExpressionDefContext::getRuleIndex() const {
  return CStructParser::RuleAssignmentExpressionDef;
}


std::any CStructParser::AssignmentExpressionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpressionDef(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::AssignmentExpressionDefContext* CStructParser::assignmentExpressionDef() {
  AssignmentExpressionDefContext *_localctx = _tracker.createInstance<AssignmentExpressionDefContext>(_ctx, getState());
  enterRule(_localctx, 22, CStructParser::RuleAssignmentExpressionDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    assignmentExpression();
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Semi) {
      setState(173);
      match(CStructParser::Semi);
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(CStructParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CStructParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::AssignmentExpressionContext::IntegerConstant() {
  return getToken(CStructParser::IntegerConstant, 0);
}

CStructParser::InclusiveOrExpressionContext* CStructParser::AssignmentExpressionContext::inclusiveOrExpression() {
  return getRuleContext<CStructParser::InclusiveOrExpressionContext>(0);
}


size_t CStructParser::AssignmentExpressionContext::getRuleIndex() const {
  return CStructParser::RuleAssignmentExpression;
}


std::any CStructParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::AssignmentExpressionContext* CStructParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CStructParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(181);
      match(CStructParser::IntegerConstant);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(182);
      inclusiveOrExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CStructParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DeclarationSpecifiersContext* CStructParser::DeclarationContext::declarationSpecifiers() {
  return getRuleContext<CStructParser::DeclarationSpecifiersContext>(0);
}

tree::TerminalNode* CStructParser::DeclarationContext::Semi() {
  return getToken(CStructParser::Semi, 0);
}


size_t CStructParser::DeclarationContext::getRuleIndex() const {
  return CStructParser::RuleDeclaration;
}


std::any CStructParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclarationContext* CStructParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, CStructParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    declarationSpecifiers();
    setState(186);
    match(CStructParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

CStructParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::DeclarationSpecifierContext *> CStructParser::DeclarationSpecifiersContext::declarationSpecifier() {
  return getRuleContexts<CStructParser::DeclarationSpecifierContext>();
}

CStructParser::DeclarationSpecifierContext* CStructParser::DeclarationSpecifiersContext::declarationSpecifier(size_t i) {
  return getRuleContext<CStructParser::DeclarationSpecifierContext>(i);
}


size_t CStructParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return CStructParser::RuleDeclarationSpecifiers;
}


std::any CStructParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclarationSpecifiersContext* CStructParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 28, CStructParser::RuleDeclarationSpecifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(188);
      declarationSpecifier();
      setState(191); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592190072696) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiers2Context ------------------------------------------------------------------

CStructParser::DeclarationSpecifiers2Context::DeclarationSpecifiers2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::DeclarationSpecifierContext *> CStructParser::DeclarationSpecifiers2Context::declarationSpecifier() {
  return getRuleContexts<CStructParser::DeclarationSpecifierContext>();
}

CStructParser::DeclarationSpecifierContext* CStructParser::DeclarationSpecifiers2Context::declarationSpecifier(size_t i) {
  return getRuleContext<CStructParser::DeclarationSpecifierContext>(i);
}


size_t CStructParser::DeclarationSpecifiers2Context::getRuleIndex() const {
  return CStructParser::RuleDeclarationSpecifiers2;
}


std::any CStructParser::DeclarationSpecifiers2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers2(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclarationSpecifiers2Context* CStructParser::declarationSpecifiers2() {
  DeclarationSpecifiers2Context *_localctx = _tracker.createInstance<DeclarationSpecifiers2Context>(_ctx, getState());
  enterRule(_localctx, 30, CStructParser::RuleDeclarationSpecifiers2);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(193);
      declarationSpecifier();
      setState(196); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592190072696) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CStructParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::TypeSpecifierContext* CStructParser::DeclarationSpecifierContext::typeSpecifier() {
  return getRuleContext<CStructParser::TypeSpecifierContext>(0);
}

CStructParser::TypeQualifierContext* CStructParser::DeclarationSpecifierContext::typeQualifier() {
  return getRuleContext<CStructParser::TypeQualifierContext>(0);
}


size_t CStructParser::DeclarationSpecifierContext::getRuleIndex() const {
  return CStructParser::RuleDeclarationSpecifier;
}


std::any CStructParser::DeclarationSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclarationSpecifierContext* CStructParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 32, CStructParser::RuleDeclarationSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Char:
      case CStructParser::Double:
      case CStructParser::Enum:
      case CStructParser::Float:
      case CStructParser::Int:
      case CStructParser::Long:
      case CStructParser::Short:
      case CStructParser::Signed:
      case CStructParser::Struct:
      case CStructParser::Union:
      case CStructParser::Unsigned:
      case CStructParser::Void:
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(198);
        typeSpecifier();
        break;
      }

      case CStructParser::Const:
      case CStructParser::Restrict:
      case CStructParser::Volatile: {
        enterOuterAlt(_localctx, 2);
        setState(199);
        typeQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CStructParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Void() {
  return getToken(CStructParser::Void, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Char() {
  return getToken(CStructParser::Char, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Short() {
  return getToken(CStructParser::Short, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Int() {
  return getToken(CStructParser::Int, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Long() {
  return getToken(CStructParser::Long, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Float() {
  return getToken(CStructParser::Float, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Double() {
  return getToken(CStructParser::Double, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Signed() {
  return getToken(CStructParser::Signed, 0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Unsigned() {
  return getToken(CStructParser::Unsigned, 0);
}

CStructParser::StructOrUnionSpecifierContext* CStructParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CStructParser::StructOrUnionSpecifierContext>(0);
}

CStructParser::EnumSpecifierContext* CStructParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CStructParser::EnumSpecifierContext>(0);
}

CStructParser::TypedefNameContext* CStructParser::TypeSpecifierContext::typedefName() {
  return getRuleContext<CStructParser::TypedefNameContext>(0);
}


size_t CStructParser::TypeSpecifierContext::getRuleIndex() const {
  return CStructParser::RuleTypeSpecifier;
}


std::any CStructParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TypeSpecifierContext* CStructParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 34, CStructParser::RuleTypeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Void: {
        enterOuterAlt(_localctx, 1);
        setState(202);
        match(CStructParser::Void);
        break;
      }

      case CStructParser::Char: {
        enterOuterAlt(_localctx, 2);
        setState(203);
        match(CStructParser::Char);
        break;
      }

      case CStructParser::Short: {
        enterOuterAlt(_localctx, 3);
        setState(204);
        match(CStructParser::Short);
        break;
      }

      case CStructParser::Int: {
        enterOuterAlt(_localctx, 4);
        setState(205);
        match(CStructParser::Int);
        break;
      }

      case CStructParser::Long: {
        enterOuterAlt(_localctx, 5);
        setState(206);
        match(CStructParser::Long);
        break;
      }

      case CStructParser::Float: {
        enterOuterAlt(_localctx, 6);
        setState(207);
        match(CStructParser::Float);
        break;
      }

      case CStructParser::Double: {
        enterOuterAlt(_localctx, 7);
        setState(208);
        match(CStructParser::Double);
        break;
      }

      case CStructParser::Signed: {
        enterOuterAlt(_localctx, 8);
        setState(209);
        match(CStructParser::Signed);
        break;
      }

      case CStructParser::Unsigned: {
        enterOuterAlt(_localctx, 9);
        setState(210);
        match(CStructParser::Unsigned);
        break;
      }

      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 10);
        setState(211);
        structOrUnionSpecifier();
        break;
      }

      case CStructParser::Enum: {
        enterOuterAlt(_localctx, 11);
        setState(212);
        enumSpecifier();
        break;
      }

      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 12);
        setState(213);
        typedefName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionSpecifierContext ------------------------------------------------------------------

CStructParser::StructOrUnionSpecifierContext::StructOrUnionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::StructOrUnionContext* CStructParser::StructOrUnionSpecifierContext::structOrUnion() {
  return getRuleContext<CStructParser::StructOrUnionContext>(0);
}

tree::TerminalNode* CStructParser::StructOrUnionSpecifierContext::LeftBrace() {
  return getToken(CStructParser::LeftBrace, 0);
}

CStructParser::StructDeclarationListContext* CStructParser::StructOrUnionSpecifierContext::structDeclarationList() {
  return getRuleContext<CStructParser::StructDeclarationListContext>(0);
}

tree::TerminalNode* CStructParser::StructOrUnionSpecifierContext::RightBrace() {
  return getToken(CStructParser::RightBrace, 0);
}

tree::TerminalNode* CStructParser::StructOrUnionSpecifierContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}


size_t CStructParser::StructOrUnionSpecifierContext::getRuleIndex() const {
  return CStructParser::RuleStructOrUnionSpecifier;
}


std::any CStructParser::StructOrUnionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructOrUnionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructOrUnionSpecifierContext* CStructParser::structOrUnionSpecifier() {
  StructOrUnionSpecifierContext *_localctx = _tracker.createInstance<StructOrUnionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 36, CStructParser::RuleStructOrUnionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      structOrUnion();
      setState(218);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(217);
        match(CStructParser::Identifier);
      }
      setState(220);
      match(CStructParser::LeftBrace);
      setState(221);
      structDeclarationList();
      setState(222);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      structOrUnion();
      setState(225);
      match(CStructParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionContext ------------------------------------------------------------------

CStructParser::StructOrUnionContext::StructOrUnionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::StructOrUnionContext::Struct() {
  return getToken(CStructParser::Struct, 0);
}

tree::TerminalNode* CStructParser::StructOrUnionContext::Union() {
  return getToken(CStructParser::Union, 0);
}


size_t CStructParser::StructOrUnionContext::getRuleIndex() const {
  return CStructParser::RuleStructOrUnion;
}


std::any CStructParser::StructOrUnionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructOrUnion(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructOrUnionContext* CStructParser::structOrUnion() {
  StructOrUnionContext *_localctx = _tracker.createInstance<StructOrUnionContext>(_ctx, getState());
  enterRule(_localctx, 38, CStructParser::RuleStructOrUnion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _la = _input->LA(1);
    if (!(_la == CStructParser::Struct

    || _la == CStructParser::Union)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationListContext ------------------------------------------------------------------

CStructParser::StructDeclarationListContext::StructDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::StructDeclarationContext *> CStructParser::StructDeclarationListContext::structDeclaration() {
  return getRuleContexts<CStructParser::StructDeclarationContext>();
}

CStructParser::StructDeclarationContext* CStructParser::StructDeclarationListContext::structDeclaration(size_t i) {
  return getRuleContext<CStructParser::StructDeclarationContext>(i);
}


size_t CStructParser::StructDeclarationListContext::getRuleIndex() const {
  return CStructParser::RuleStructDeclarationList;
}


std::any CStructParser::StructDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructDeclarationListContext* CStructParser::structDeclarationList() {
  StructDeclarationListContext *_localctx = _tracker.createInstance<StructDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 40, CStructParser::RuleStructDeclarationList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(231);
      structDeclaration();
      setState(234); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17592190072696) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

CStructParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::SpecifierQualifierListContext* CStructParser::StructDeclarationContext::specifierQualifierList() {
  return getRuleContext<CStructParser::SpecifierQualifierListContext>(0);
}

CStructParser::StructDeclaratorListContext* CStructParser::StructDeclarationContext::structDeclaratorList() {
  return getRuleContext<CStructParser::StructDeclaratorListContext>(0);
}

tree::TerminalNode* CStructParser::StructDeclarationContext::Semi() {
  return getToken(CStructParser::Semi, 0);
}


size_t CStructParser::StructDeclarationContext::getRuleIndex() const {
  return CStructParser::RuleStructDeclaration;
}


std::any CStructParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructDeclarationContext* CStructParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, CStructParser::RuleStructDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(236);
      specifierQualifierList();
      setState(237);
      structDeclaratorList();
      setState(238);
      match(CStructParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(240);
      specifierQualifierList();
      setState(241);
      match(CStructParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

CStructParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::TypeSpecifierContext* CStructParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContext<CStructParser::TypeSpecifierContext>(0);
}

CStructParser::TypeQualifierContext* CStructParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContext<CStructParser::TypeQualifierContext>(0);
}

CStructParser::SpecifierQualifierListContext* CStructParser::SpecifierQualifierListContext::specifierQualifierList() {
  return getRuleContext<CStructParser::SpecifierQualifierListContext>(0);
}


size_t CStructParser::SpecifierQualifierListContext::getRuleIndex() const {
  return CStructParser::RuleSpecifierQualifierList;
}


std::any CStructParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::SpecifierQualifierListContext* CStructParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 44, CStructParser::RuleSpecifierQualifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Char:
      case CStructParser::Double:
      case CStructParser::Enum:
      case CStructParser::Float:
      case CStructParser::Int:
      case CStructParser::Long:
      case CStructParser::Short:
      case CStructParser::Signed:
      case CStructParser::Struct:
      case CStructParser::Union:
      case CStructParser::Unsigned:
      case CStructParser::Void:
      case CStructParser::Identifier: {
        setState(245);
        typeSpecifier();
        break;
      }

      case CStructParser::Const:
      case CStructParser::Restrict:
      case CStructParser::Volatile: {
        setState(246);
        typeQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(250);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(249);
      specifierQualifierList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorListContext ------------------------------------------------------------------

CStructParser::StructDeclaratorListContext::StructDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::StructDeclaratorContext *> CStructParser::StructDeclaratorListContext::structDeclarator() {
  return getRuleContexts<CStructParser::StructDeclaratorContext>();
}

CStructParser::StructDeclaratorContext* CStructParser::StructDeclaratorListContext::structDeclarator(size_t i) {
  return getRuleContext<CStructParser::StructDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::StructDeclaratorListContext::Comma() {
  return getTokens(CStructParser::Comma);
}

tree::TerminalNode* CStructParser::StructDeclaratorListContext::Comma(size_t i) {
  return getToken(CStructParser::Comma, i);
}


size_t CStructParser::StructDeclaratorListContext::getRuleIndex() const {
  return CStructParser::RuleStructDeclaratorList;
}


std::any CStructParser::StructDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructDeclaratorListContext* CStructParser::structDeclaratorList() {
  StructDeclaratorListContext *_localctx = _tracker.createInstance<StructDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 46, CStructParser::RuleStructDeclaratorList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    structDeclarator();
    setState(257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(253);
      match(CStructParser::Comma);
      setState(254);
      structDeclarator();
      setState(259);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclaratorContext ------------------------------------------------------------------

CStructParser::StructDeclaratorContext::StructDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DeclaratorContext* CStructParser::StructDeclaratorContext::declarator() {
  return getRuleContext<CStructParser::DeclaratorContext>(0);
}

tree::TerminalNode* CStructParser::StructDeclaratorContext::Colon() {
  return getToken(CStructParser::Colon, 0);
}

tree::TerminalNode* CStructParser::StructDeclaratorContext::IntegerConstant() {
  return getToken(CStructParser::IntegerConstant, 0);
}


size_t CStructParser::StructDeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleStructDeclarator;
}


std::any CStructParser::StructDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStructDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StructDeclaratorContext* CStructParser::structDeclarator() {
  StructDeclaratorContext *_localctx = _tracker.createInstance<StructDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 48, CStructParser::RuleStructDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(260);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 17609370107904) != 0)) {
        setState(261);
        declarator();
      }
      setState(264);
      match(CStructParser::Colon);
      setState(265);
      match(CStructParser::IntegerConstant);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CStructParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::EnumSpecifierContext::Enum() {
  return getToken(CStructParser::Enum, 0);
}

tree::TerminalNode* CStructParser::EnumSpecifierContext::LeftBrace() {
  return getToken(CStructParser::LeftBrace, 0);
}

CStructParser::EnumeratorListContext* CStructParser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<CStructParser::EnumeratorListContext>(0);
}

tree::TerminalNode* CStructParser::EnumSpecifierContext::RightBrace() {
  return getToken(CStructParser::RightBrace, 0);
}

tree::TerminalNode* CStructParser::EnumSpecifierContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}

tree::TerminalNode* CStructParser::EnumSpecifierContext::Comma() {
  return getToken(CStructParser::Comma, 0);
}


size_t CStructParser::EnumSpecifierContext::getRuleIndex() const {
  return CStructParser::RuleEnumSpecifier;
}


std::any CStructParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::EnumSpecifierContext* CStructParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 50, CStructParser::RuleEnumSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(268);
      match(CStructParser::Enum);
      setState(270);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(269);
        match(CStructParser::Identifier);
      }
      setState(272);
      match(CStructParser::LeftBrace);
      setState(273);
      enumeratorList();
      setState(275);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Comma) {
        setState(274);
        match(CStructParser::Comma);
      }
      setState(277);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(279);
      match(CStructParser::Enum);
      setState(280);
      match(CStructParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

CStructParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::EnumeratorContext *> CStructParser::EnumeratorListContext::enumerator() {
  return getRuleContexts<CStructParser::EnumeratorContext>();
}

CStructParser::EnumeratorContext* CStructParser::EnumeratorListContext::enumerator(size_t i) {
  return getRuleContext<CStructParser::EnumeratorContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::EnumeratorListContext::Comma() {
  return getTokens(CStructParser::Comma);
}

tree::TerminalNode* CStructParser::EnumeratorListContext::Comma(size_t i) {
  return getToken(CStructParser::Comma, i);
}


size_t CStructParser::EnumeratorListContext::getRuleIndex() const {
  return CStructParser::RuleEnumeratorList;
}


std::any CStructParser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::EnumeratorListContext* CStructParser::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 52, CStructParser::RuleEnumeratorList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(283);
    enumerator();
    setState(288);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        match(CStructParser::Comma);
        setState(285);
        enumerator(); 
      }
      setState(290);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CStructParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::EnumerationConstantContext* CStructParser::EnumeratorContext::enumerationConstant() {
  return getRuleContext<CStructParser::EnumerationConstantContext>(0);
}

CStructParser::AssignmentExpressionContext* CStructParser::EnumeratorContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
}


size_t CStructParser::EnumeratorContext::getRuleIndex() const {
  return CStructParser::RuleEnumerator;
}


std::any CStructParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::EnumeratorContext* CStructParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 54, CStructParser::RuleEnumerator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    enumerationConstant();
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::T__0) {
      setState(292);
      match(CStructParser::T__0);
      setState(293);
      assignmentExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationConstantContext ------------------------------------------------------------------

CStructParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::EnumerationConstantContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}


size_t CStructParser::EnumerationConstantContext::getRuleIndex() const {
  return CStructParser::RuleEnumerationConstant;
}


std::any CStructParser::EnumerationConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitEnumerationConstant(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::EnumerationConstantContext* CStructParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 56, CStructParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(CStructParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

CStructParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::TypeQualifierContext::Const() {
  return getToken(CStructParser::Const, 0);
}

tree::TerminalNode* CStructParser::TypeQualifierContext::Restrict() {
  return getToken(CStructParser::Restrict, 0);
}

tree::TerminalNode* CStructParser::TypeQualifierContext::Volatile() {
  return getToken(CStructParser::Volatile, 0);
}


size_t CStructParser::TypeQualifierContext::getRuleIndex() const {
  return CStructParser::RuleTypeQualifier;
}


std::any CStructParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TypeQualifierContext* CStructParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 58, CStructParser::RuleTypeQualifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2101264) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CStructParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DirectDeclaratorContext* CStructParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<CStructParser::DirectDeclaratorContext>(0);
}

CStructParser::PointerContext* CStructParser::DeclaratorContext::pointer() {
  return getRuleContext<CStructParser::PointerContext>(0);
}


size_t CStructParser::DeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleDeclarator;
}


std::any CStructParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclaratorContext* CStructParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 60, CStructParser::RuleDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::Star) {
      setState(300);
      pointer();
    }
    setState(303);
    directDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

CStructParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::LeftParen() {
  return getToken(CStructParser::LeftParen, 0);
}

CStructParser::DeclaratorContext* CStructParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<CStructParser::DeclaratorContext>(0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::RightParen() {
  return getToken(CStructParser::RightParen, 0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::Colon() {
  return getToken(CStructParser::Colon, 0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::IntegerConstant() {
  return getToken(CStructParser::IntegerConstant, 0);
}

CStructParser::DirectDeclaratorContext* CStructParser::DirectDeclaratorContext::directDeclarator() {
  return getRuleContext<CStructParser::DirectDeclaratorContext>(0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::LeftBracket() {
  return getToken(CStructParser::LeftBracket, 0);
}

CStructParser::AssignmentExpressionContext* CStructParser::DirectDeclaratorContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CStructParser::DirectDeclaratorContext::RightBracket() {
  return getToken(CStructParser::RightBracket, 0);
}


size_t CStructParser::DirectDeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleDirectDeclarator;
}


std::any CStructParser::DirectDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDirectDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CStructParser::DirectDeclaratorContext* CStructParser::directDeclarator() {
   return directDeclarator(0);
}

CStructParser::DirectDeclaratorContext* CStructParser::directDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CStructParser::DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, parentState);
  CStructParser::DirectDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, CStructParser::RuleDirectDeclarator, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(306);
      match(CStructParser::Identifier);
      break;
    }

    case 2: {
      setState(307);
      match(CStructParser::LeftParen);
      setState(308);
      declarator();
      setState(309);
      match(CStructParser::RightParen);
      break;
    }

    case 3: {
      setState(311);
      match(CStructParser::Identifier);
      setState(312);
      match(CStructParser::Colon);
      setState(313);
      match(CStructParser::IntegerConstant);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(323);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
        setState(316);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(317);
        match(CStructParser::LeftBracket);
        setState(318);
        assignmentExpression();
        setState(319);
        match(CStructParser::RightBracket); 
      }
      setState(325);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

CStructParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CStructParser::PointerContext::Star() {
  return getTokens(CStructParser::Star);
}

tree::TerminalNode* CStructParser::PointerContext::Star(size_t i) {
  return getToken(CStructParser::Star, i);
}

std::vector<CStructParser::TypeQualifierListContext *> CStructParser::PointerContext::typeQualifierList() {
  return getRuleContexts<CStructParser::TypeQualifierListContext>();
}

CStructParser::TypeQualifierListContext* CStructParser::PointerContext::typeQualifierList(size_t i) {
  return getRuleContext<CStructParser::TypeQualifierListContext>(i);
}


size_t CStructParser::PointerContext::getRuleIndex() const {
  return CStructParser::RulePointer;
}


std::any CStructParser::PointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitPointer(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::PointerContext* CStructParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 64, CStructParser::RulePointer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(326);
      match(CStructParser::Star);
      setState(328);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2101264) != 0)) {
        setState(327);
        typeQualifierList();
      }
      setState(332); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == CStructParser::Star);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierListContext ------------------------------------------------------------------

CStructParser::TypeQualifierListContext::TypeQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::TypeQualifierContext *> CStructParser::TypeQualifierListContext::typeQualifier() {
  return getRuleContexts<CStructParser::TypeQualifierContext>();
}

CStructParser::TypeQualifierContext* CStructParser::TypeQualifierListContext::typeQualifier(size_t i) {
  return getRuleContext<CStructParser::TypeQualifierContext>(i);
}


size_t CStructParser::TypeQualifierListContext::getRuleIndex() const {
  return CStructParser::RuleTypeQualifierList;
}


std::any CStructParser::TypeQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTypeQualifierList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TypeQualifierListContext* CStructParser::typeQualifierList() {
  TypeQualifierListContext *_localctx = _tracker.createInstance<TypeQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 66, CStructParser::RuleTypeQualifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(334);
      typeQualifier();
      setState(337); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2101264) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

CStructParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CStructParser::IdentifierListContext::Identifier() {
  return getTokens(CStructParser::Identifier);
}

tree::TerminalNode* CStructParser::IdentifierListContext::Identifier(size_t i) {
  return getToken(CStructParser::Identifier, i);
}

std::vector<tree::TerminalNode *> CStructParser::IdentifierListContext::Comma() {
  return getTokens(CStructParser::Comma);
}

tree::TerminalNode* CStructParser::IdentifierListContext::Comma(size_t i) {
  return getToken(CStructParser::Comma, i);
}


size_t CStructParser::IdentifierListContext::getRuleIndex() const {
  return CStructParser::RuleIdentifierList;
}


std::any CStructParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::IdentifierListContext* CStructParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 68, CStructParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(CStructParser::Identifier);
    setState(344);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(340);
      match(CStructParser::Comma);
      setState(341);
      match(CStructParser::Identifier);
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

CStructParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::SpecifierQualifierListContext* CStructParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<CStructParser::SpecifierQualifierListContext>(0);
}

CStructParser::AbstractDeclaratorContext* CStructParser::TypeNameContext::abstractDeclarator() {
  return getRuleContext<CStructParser::AbstractDeclaratorContext>(0);
}


size_t CStructParser::TypeNameContext::getRuleIndex() const {
  return CStructParser::RuleTypeName;
}


std::any CStructParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TypeNameContext* CStructParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 70, CStructParser::RuleTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    specifierQualifierList();
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17200840704) != 0)) {
      setState(348);
      abstractDeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CStructParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::PointerContext* CStructParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<CStructParser::PointerContext>(0);
}

CStructParser::DirectAbstractDeclaratorContext* CStructParser::AbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CStructParser::DirectAbstractDeclaratorContext>(0);
}


size_t CStructParser::AbstractDeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleAbstractDeclarator;
}


std::any CStructParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::AbstractDeclaratorContext* CStructParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 72, CStructParser::RuleAbstractDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(351);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(353);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Star) {
        setState(352);
        pointer();
      }
      setState(355);
      directAbstractDeclarator(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectAbstractDeclaratorContext ------------------------------------------------------------------

CStructParser::DirectAbstractDeclaratorContext::DirectAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::DirectAbstractDeclaratorContext::LeftParen() {
  return getToken(CStructParser::LeftParen, 0);
}

CStructParser::AbstractDeclaratorContext* CStructParser::DirectAbstractDeclaratorContext::abstractDeclarator() {
  return getRuleContext<CStructParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* CStructParser::DirectAbstractDeclaratorContext::RightParen() {
  return getToken(CStructParser::RightParen, 0);
}

tree::TerminalNode* CStructParser::DirectAbstractDeclaratorContext::LeftBracket() {
  return getToken(CStructParser::LeftBracket, 0);
}

CStructParser::AssignmentExpressionContext* CStructParser::DirectAbstractDeclaratorContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* CStructParser::DirectAbstractDeclaratorContext::RightBracket() {
  return getToken(CStructParser::RightBracket, 0);
}

CStructParser::DirectAbstractDeclaratorContext* CStructParser::DirectAbstractDeclaratorContext::directAbstractDeclarator() {
  return getRuleContext<CStructParser::DirectAbstractDeclaratorContext>(0);
}


size_t CStructParser::DirectAbstractDeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleDirectAbstractDeclarator;
}


std::any CStructParser::DirectAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDirectAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CStructParser::DirectAbstractDeclaratorContext* CStructParser::directAbstractDeclarator() {
   return directAbstractDeclarator(0);
}

CStructParser::DirectAbstractDeclaratorContext* CStructParser::directAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CStructParser::DirectAbstractDeclaratorContext *_localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(_ctx, parentState);
  CStructParser::DirectAbstractDeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CStructParser::RuleDirectAbstractDeclarator, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::LeftParen: {
        setState(359);
        match(CStructParser::LeftParen);
        setState(360);
        abstractDeclarator();
        setState(361);
        match(CStructParser::RightParen);
        break;
      }

      case CStructParser::LeftBracket: {
        setState(363);
        match(CStructParser::LeftBracket);
        setState(364);
        assignmentExpression();
        setState(365);
        match(CStructParser::RightBracket);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(376);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
        setState(369);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(370);
        match(CStructParser::LeftBracket);
        setState(371);
        assignmentExpression();
        setState(372);
        match(CStructParser::RightBracket); 
      }
      setState(378);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypedefNameContext ------------------------------------------------------------------

CStructParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::TypedefNameContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
}


size_t CStructParser::TypedefNameContext::getRuleIndex() const {
  return CStructParser::RuleTypedefName;
}


std::any CStructParser::TypedefNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTypedefName(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TypedefNameContext* CStructParser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 76, CStructParser::RuleTypedefName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(379);
    match(CStructParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

CStructParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::CompilationUnitContext::EOF() {
  return getToken(CStructParser::EOF, 0);
}

CStructParser::TranslationUnitContext* CStructParser::CompilationUnitContext::translationUnit() {
  return getRuleContext<CStructParser::TranslationUnitContext>(0);
}


size_t CStructParser::CompilationUnitContext::getRuleIndex() const {
  return CStructParser::RuleCompilationUnit;
}


std::any CStructParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::CompilationUnitContext* CStructParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 78, CStructParser::RuleCompilationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 373833957472120) != 0)) {
      setState(381);
      translationUnit();
    }
    setState(384);
    match(CStructParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

CStructParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::ExternalDeclarationContext *> CStructParser::TranslationUnitContext::externalDeclaration() {
  return getRuleContexts<CStructParser::ExternalDeclarationContext>();
}

CStructParser::ExternalDeclarationContext* CStructParser::TranslationUnitContext::externalDeclaration(size_t i) {
  return getRuleContext<CStructParser::ExternalDeclarationContext>(i);
}


size_t CStructParser::TranslationUnitContext::getRuleIndex() const {
  return CStructParser::RuleTranslationUnit;
}


std::any CStructParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::TranslationUnitContext* CStructParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 80, CStructParser::RuleTranslationUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(386);
      externalDeclaration();
      setState(389); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 373833957472120) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

CStructParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DeclarationContext* CStructParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<CStructParser::DeclarationContext>(0);
}

CStructParser::DefineDeclContext* CStructParser::ExternalDeclarationContext::defineDecl() {
  return getRuleContext<CStructParser::DefineDeclContext>(0);
}

tree::TerminalNode* CStructParser::ExternalDeclarationContext::Semi() {
  return getToken(CStructParser::Semi, 0);
}


size_t CStructParser::ExternalDeclarationContext::getRuleIndex() const {
  return CStructParser::RuleExternalDeclaration;
}


std::any CStructParser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ExternalDeclarationContext* CStructParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 82, CStructParser::RuleExternalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Char:
      case CStructParser::Const:
      case CStructParser::Double:
      case CStructParser::Enum:
      case CStructParser::Float:
      case CStructParser::Int:
      case CStructParser::Long:
      case CStructParser::Restrict:
      case CStructParser::Short:
      case CStructParser::Signed:
      case CStructParser::Struct:
      case CStructParser::Union:
      case CStructParser::Unsigned:
      case CStructParser::Void:
      case CStructParser::Volatile:
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(391);
        declaration();
        break;
      }

      case CStructParser::MultiLineMacroDefine:
      case CStructParser::DirectiveDefine: {
        enterOuterAlt(_localctx, 2);
        setState(392);
        defineDecl();
        break;
      }

      case CStructParser::Semi: {
        enterOuterAlt(_localctx, 3);
        setState(393);
        match(CStructParser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineDeclContext ------------------------------------------------------------------

CStructParser::DefineDeclContext::DefineDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::DefineDeclContext::DirectiveDefine() {
  return getToken(CStructParser::DirectiveDefine, 0);
}

tree::TerminalNode* CStructParser::DefineDeclContext::MultiLineMacroDefine() {
  return getToken(CStructParser::MultiLineMacroDefine, 0);
}


size_t CStructParser::DefineDeclContext::getRuleIndex() const {
  return CStructParser::RuleDefineDecl;
}


std::any CStructParser::DefineDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDefineDecl(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DefineDeclContext* CStructParser::defineDecl() {
  DefineDeclContext *_localctx = _tracker.createInstance<DefineDeclContext>(_ctx, getState());
  enterRule(_localctx, 84, CStructParser::RuleDefineDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    _la = _input->LA(1);
    if (!(_la == CStructParser::MultiLineMacroDefine

    || _la == CStructParser::DirectiveDefine)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CStructParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 31: return directDeclaratorSempred(antlrcpp::downCast<DirectDeclaratorContext *>(context), predicateIndex);
    case 37: return directAbstractDeclaratorSempred(antlrcpp::downCast<DirectAbstractDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CStructParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CStructParser::directAbstractDeclaratorSempred(DirectAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void CStructParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cstructParserInitialize();
#else
  ::antlr4::internal::call_once(cstructParserOnceFlag, cstructParserInitialize);
#endif
}
