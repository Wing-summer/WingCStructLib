
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
      "internalBasicTypes", "signOrUnsigned", "primaryExpression", "postfixExpression", 
      "unaryExpression", "unaryOperator", "castExpression", "multiplicativeExpression", 
      "additiveExpression", "shiftExpression", "andExpression", "exclusiveOrExpression", 
      "inclusiveOrExpression", "assignmentExpressionDef", "assignmentExpression", 
      "declaration", "declarationSpecifier", "typeSpecifier", "structOrUnionSpecifier", 
      "structOrUnion", "structDeclarationList", "structDeclaration", "specifierQualifierList", 
      "structDeclaratorList", "structDeclarator", "enumSpecifier", "enumeratorList", 
      "enumerator", "enumerationConstant", "declarator", "directDeclarator", 
      "pointer", "identifierList", "typeName", "abstractDeclarator", "directAbstractDeclarator", 
      "compilationUnit", "translationUnit", "externalDeclaration", "defineDecl"
    },
    std::vector<std::string>{
      "", "'='", "'char'", "'const'", "'double'", "'enum'", "'float'", "'int'", 
      "'long'", "'typedef'", "'sizeof'", "'short'", "'signed'", "'struct'", 
      "'union'", "'unsigned'", "'void'", "'('", "')'", "'['", "']'", "'{'", 
      "'}'", "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", 
      "'%'", "'&'", "'|'", "'^'", "'~'", "':'", "';'", "','"
    },
    std::vector<std::string>{
      "", "", "Char", "Const", "Double", "Enum", "Float", "Int", "Long", 
      "TypeDef", "SizeOf", "Short", "Signed", "Struct", "Union", "Unsigned", 
      "Void", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
      "LeftBrace", "RightBrace", "LeftShift", "RightShift", "Plus", "PlusPlus", 
      "Minus", "MinusMinus", "Star", "Div", "Mod", "And", "Or", "Caret", 
      "Tilde", "Colon", "Semi", "Comma", "Identifier", "IntegerConstant", 
      "MultiLineMacroDefine", "MultiLineMacro", "DirectiveDefine", "Directive", 
      "Whitespace", "Newline", "LINE_CONTINUATION", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,412,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,3,0,82,8,0,1,0,3,0,85,
  	8,0,1,0,1,0,1,0,3,0,90,8,0,1,0,3,0,93,8,0,1,0,3,0,96,8,0,1,0,3,0,99,8,
  	0,1,0,1,0,1,0,1,0,1,0,3,0,106,8,0,1,0,3,0,109,8,0,1,0,1,0,3,0,113,8,0,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,128,8,2,1,3,1,
  	3,5,3,132,8,3,10,3,12,3,135,9,3,1,4,5,4,138,8,4,10,4,12,4,141,9,4,1,4,
  	1,4,1,4,1,4,3,4,147,8,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,158,8,
  	6,1,7,1,7,1,7,5,7,163,8,7,10,7,12,7,166,9,7,1,8,1,8,1,8,5,8,171,8,8,10,
  	8,12,8,174,9,8,1,9,1,9,1,9,5,9,179,8,9,10,9,12,9,182,9,9,1,10,1,10,1,
  	10,5,10,187,8,10,10,10,12,10,190,9,10,1,11,1,11,1,11,5,11,195,8,11,10,
  	11,12,11,198,9,11,1,12,1,12,1,12,5,12,203,8,12,10,12,12,12,206,9,12,1,
  	13,1,13,5,13,210,8,13,10,13,12,13,213,9,13,1,13,1,13,1,14,1,14,3,14,219,
  	8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,229,8,15,1,16,1,16,
  	3,16,233,8,16,1,17,1,17,1,17,1,17,1,17,3,17,240,8,17,1,18,1,18,3,18,244,
  	8,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,253,8,18,1,19,1,19,1,20,
  	4,20,258,8,20,11,20,12,20,259,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,
  	269,8,21,1,22,3,22,272,8,22,1,22,1,22,3,22,276,8,22,1,23,1,23,1,23,5,
  	23,281,8,23,10,23,12,23,284,9,23,1,24,1,24,3,24,288,8,24,1,24,1,24,3,
  	24,292,8,24,1,25,1,25,3,25,296,8,25,1,25,1,25,1,25,3,25,301,8,25,1,25,
  	1,25,1,25,1,25,3,25,307,8,25,1,26,1,26,1,26,5,26,312,8,26,10,26,12,26,
  	315,9,26,1,27,1,27,1,27,3,27,320,8,27,1,28,1,28,1,29,3,29,325,8,29,1,
  	29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,3,30,335,8,30,1,30,1,30,1,30,1,
  	30,1,30,5,30,342,8,30,10,30,12,30,345,9,30,1,31,1,31,3,31,349,8,31,4,
  	31,351,8,31,11,31,12,31,352,1,32,1,32,1,32,5,32,358,8,32,10,32,12,32,
  	361,9,32,1,33,1,33,3,33,365,8,33,1,34,1,34,3,34,369,8,34,1,34,3,34,372,
  	8,34,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,1,35,3,35,383,8,35,1,35,
  	1,35,1,35,1,35,1,35,5,35,390,8,35,10,35,12,35,393,9,35,1,36,3,36,396,
  	8,36,1,36,1,36,1,37,4,37,401,8,37,11,37,12,37,402,1,38,1,38,1,38,3,38,
  	408,8,38,1,39,1,39,1,39,0,2,60,70,40,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,0,9,3,0,2,2,7,8,11,11,2,0,12,12,15,15,2,0,26,26,28,28,3,0,
  	25,25,27,27,35,35,1,0,29,31,2,0,25,25,27,27,1,0,23,24,1,0,13,14,2,0,41,
  	41,43,43,435,0,112,1,0,0,0,2,114,1,0,0,0,4,127,1,0,0,0,6,129,1,0,0,0,
  	8,139,1,0,0,0,10,148,1,0,0,0,12,157,1,0,0,0,14,159,1,0,0,0,16,167,1,0,
  	0,0,18,175,1,0,0,0,20,183,1,0,0,0,22,191,1,0,0,0,24,199,1,0,0,0,26,207,
  	1,0,0,0,28,218,1,0,0,0,30,228,1,0,0,0,32,232,1,0,0,0,34,239,1,0,0,0,36,
  	252,1,0,0,0,38,254,1,0,0,0,40,257,1,0,0,0,42,268,1,0,0,0,44,271,1,0,0,
  	0,46,277,1,0,0,0,48,291,1,0,0,0,50,306,1,0,0,0,52,308,1,0,0,0,54,316,
  	1,0,0,0,56,321,1,0,0,0,58,324,1,0,0,0,60,334,1,0,0,0,62,350,1,0,0,0,64,
  	354,1,0,0,0,66,362,1,0,0,0,68,371,1,0,0,0,70,382,1,0,0,0,72,395,1,0,0,
  	0,74,400,1,0,0,0,76,407,1,0,0,0,78,409,1,0,0,0,80,82,3,2,1,0,81,80,1,
  	0,0,0,81,82,1,0,0,0,82,84,1,0,0,0,83,85,5,3,0,0,84,83,1,0,0,0,84,85,1,
  	0,0,0,85,86,1,0,0,0,86,113,7,0,0,0,87,89,7,0,0,0,88,90,5,3,0,0,89,88,
  	1,0,0,0,89,90,1,0,0,0,90,92,1,0,0,0,91,93,3,2,1,0,92,91,1,0,0,0,92,93,
  	1,0,0,0,93,113,1,0,0,0,94,96,3,2,1,0,95,94,1,0,0,0,95,96,1,0,0,0,96,98,
  	1,0,0,0,97,99,5,3,0,0,98,97,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,
  	101,5,8,0,0,101,113,5,8,0,0,102,103,5,8,0,0,103,105,5,8,0,0,104,106,5,
  	3,0,0,105,104,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,109,3,2,1,0,
  	108,107,1,0,0,0,108,109,1,0,0,0,109,113,1,0,0,0,110,113,5,6,0,0,111,113,
  	5,4,0,0,112,81,1,0,0,0,112,87,1,0,0,0,112,95,1,0,0,0,112,102,1,0,0,0,
  	112,110,1,0,0,0,112,111,1,0,0,0,113,1,1,0,0,0,114,115,7,1,0,0,115,3,1,
  	0,0,0,116,128,5,39,0,0,117,128,5,40,0,0,118,119,5,17,0,0,119,120,3,28,
  	14,0,120,121,5,18,0,0,121,128,1,0,0,0,122,123,5,10,0,0,123,124,5,17,0,
  	0,124,125,3,44,22,0,125,126,5,18,0,0,126,128,1,0,0,0,127,116,1,0,0,0,
  	127,117,1,0,0,0,127,118,1,0,0,0,127,122,1,0,0,0,128,5,1,0,0,0,129,133,
  	3,4,2,0,130,132,7,2,0,0,131,130,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,
  	0,133,134,1,0,0,0,134,7,1,0,0,0,135,133,1,0,0,0,136,138,7,2,0,0,137,136,
  	1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,146,1,0,0,
  	0,141,139,1,0,0,0,142,147,3,6,3,0,143,144,3,10,5,0,144,145,3,12,6,0,145,
  	147,1,0,0,0,146,142,1,0,0,0,146,143,1,0,0,0,147,9,1,0,0,0,148,149,7,3,
  	0,0,149,11,1,0,0,0,150,151,5,17,0,0,151,152,3,66,33,0,152,153,5,18,0,
  	0,153,154,3,12,6,0,154,158,1,0,0,0,155,158,3,8,4,0,156,158,5,40,0,0,157,
  	150,1,0,0,0,157,155,1,0,0,0,157,156,1,0,0,0,158,13,1,0,0,0,159,164,3,
  	12,6,0,160,161,7,4,0,0,161,163,3,12,6,0,162,160,1,0,0,0,163,166,1,0,0,
  	0,164,162,1,0,0,0,164,165,1,0,0,0,165,15,1,0,0,0,166,164,1,0,0,0,167,
  	172,3,14,7,0,168,169,7,5,0,0,169,171,3,14,7,0,170,168,1,0,0,0,171,174,
  	1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,17,1,0,0,0,174,172,1,0,0,
  	0,175,180,3,16,8,0,176,177,7,6,0,0,177,179,3,16,8,0,178,176,1,0,0,0,179,
  	182,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,19,1,0,0,0,182,180,1,
  	0,0,0,183,188,3,18,9,0,184,185,5,32,0,0,185,187,3,18,9,0,186,184,1,0,
  	0,0,187,190,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,21,1,0,0,0,190,
  	188,1,0,0,0,191,196,3,20,10,0,192,193,5,34,0,0,193,195,3,20,10,0,194,
  	192,1,0,0,0,195,198,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,23,1,
  	0,0,0,198,196,1,0,0,0,199,204,3,22,11,0,200,201,5,33,0,0,201,203,3,22,
  	11,0,202,200,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,
  	205,25,1,0,0,0,206,204,1,0,0,0,207,211,3,28,14,0,208,210,5,37,0,0,209,
  	208,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,214,1,
  	0,0,0,213,211,1,0,0,0,214,215,5,0,0,1,215,27,1,0,0,0,216,219,5,40,0,0,
  	217,219,3,24,12,0,218,216,1,0,0,0,218,217,1,0,0,0,219,29,1,0,0,0,220,
  	221,3,32,16,0,221,222,5,37,0,0,222,229,1,0,0,0,223,224,5,9,0,0,224,225,
  	3,34,17,0,225,226,5,39,0,0,226,227,5,37,0,0,227,229,1,0,0,0,228,220,1,
  	0,0,0,228,223,1,0,0,0,229,31,1,0,0,0,230,233,3,36,18,0,231,233,3,50,25,
  	0,232,230,1,0,0,0,232,231,1,0,0,0,233,33,1,0,0,0,234,240,5,16,0,0,235,
  	240,3,0,0,0,236,240,3,36,18,0,237,240,3,50,25,0,238,240,5,39,0,0,239,
  	234,1,0,0,0,239,235,1,0,0,0,239,236,1,0,0,0,239,237,1,0,0,0,239,238,1,
  	0,0,0,240,35,1,0,0,0,241,243,3,38,19,0,242,244,5,39,0,0,243,242,1,0,0,
  	0,243,244,1,0,0,0,244,245,1,0,0,0,245,246,5,21,0,0,246,247,3,40,20,0,
  	247,248,5,22,0,0,248,253,1,0,0,0,249,250,3,38,19,0,250,251,5,39,0,0,251,
  	253,1,0,0,0,252,241,1,0,0,0,252,249,1,0,0,0,253,37,1,0,0,0,254,255,7,
  	7,0,0,255,39,1,0,0,0,256,258,3,42,21,0,257,256,1,0,0,0,258,259,1,0,0,
  	0,259,257,1,0,0,0,259,260,1,0,0,0,260,41,1,0,0,0,261,262,3,44,22,0,262,
  	263,3,46,23,0,263,264,5,37,0,0,264,269,1,0,0,0,265,266,3,44,22,0,266,
  	267,5,37,0,0,267,269,1,0,0,0,268,261,1,0,0,0,268,265,1,0,0,0,269,43,1,
  	0,0,0,270,272,5,3,0,0,271,270,1,0,0,0,271,272,1,0,0,0,272,273,1,0,0,0,
  	273,275,3,34,17,0,274,276,5,3,0,0,275,274,1,0,0,0,275,276,1,0,0,0,276,
  	45,1,0,0,0,277,282,3,48,24,0,278,279,5,38,0,0,279,281,3,48,24,0,280,278,
  	1,0,0,0,281,284,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,47,1,0,0,
  	0,284,282,1,0,0,0,285,292,3,58,29,0,286,288,3,58,29,0,287,286,1,0,0,0,
  	287,288,1,0,0,0,288,289,1,0,0,0,289,290,5,36,0,0,290,292,3,28,14,0,291,
  	285,1,0,0,0,291,287,1,0,0,0,292,49,1,0,0,0,293,295,5,5,0,0,294,296,5,
  	39,0,0,295,294,1,0,0,0,295,296,1,0,0,0,296,297,1,0,0,0,297,298,5,21,0,
  	0,298,300,3,52,26,0,299,301,5,38,0,0,300,299,1,0,0,0,300,301,1,0,0,0,
  	301,302,1,0,0,0,302,303,5,22,0,0,303,307,1,0,0,0,304,305,5,5,0,0,305,
  	307,5,39,0,0,306,293,1,0,0,0,306,304,1,0,0,0,307,51,1,0,0,0,308,313,3,
  	54,27,0,309,310,5,38,0,0,310,312,3,54,27,0,311,309,1,0,0,0,312,315,1,
  	0,0,0,313,311,1,0,0,0,313,314,1,0,0,0,314,53,1,0,0,0,315,313,1,0,0,0,
  	316,319,3,56,28,0,317,318,5,1,0,0,318,320,3,28,14,0,319,317,1,0,0,0,319,
  	320,1,0,0,0,320,55,1,0,0,0,321,322,5,39,0,0,322,57,1,0,0,0,323,325,3,
  	62,31,0,324,323,1,0,0,0,324,325,1,0,0,0,325,326,1,0,0,0,326,327,3,60,
  	30,0,327,59,1,0,0,0,328,329,6,30,-1,0,329,335,5,39,0,0,330,331,5,17,0,
  	0,331,332,3,58,29,0,332,333,5,18,0,0,333,335,1,0,0,0,334,328,1,0,0,0,
  	334,330,1,0,0,0,335,343,1,0,0,0,336,337,10,1,0,0,337,338,5,19,0,0,338,
  	339,3,28,14,0,339,340,5,20,0,0,340,342,1,0,0,0,341,336,1,0,0,0,342,345,
  	1,0,0,0,343,341,1,0,0,0,343,344,1,0,0,0,344,61,1,0,0,0,345,343,1,0,0,
  	0,346,348,5,29,0,0,347,349,5,3,0,0,348,347,1,0,0,0,348,349,1,0,0,0,349,
  	351,1,0,0,0,350,346,1,0,0,0,351,352,1,0,0,0,352,350,1,0,0,0,352,353,1,
  	0,0,0,353,63,1,0,0,0,354,359,5,39,0,0,355,356,5,38,0,0,356,358,5,39,0,
  	0,357,355,1,0,0,0,358,361,1,0,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,
  	65,1,0,0,0,361,359,1,0,0,0,362,364,3,44,22,0,363,365,3,68,34,0,364,363,
  	1,0,0,0,364,365,1,0,0,0,365,67,1,0,0,0,366,372,3,62,31,0,367,369,3,62,
  	31,0,368,367,1,0,0,0,368,369,1,0,0,0,369,370,1,0,0,0,370,372,3,70,35,
  	0,371,366,1,0,0,0,371,368,1,0,0,0,372,69,1,0,0,0,373,374,6,35,-1,0,374,
  	375,5,17,0,0,375,376,3,68,34,0,376,377,5,18,0,0,377,383,1,0,0,0,378,379,
  	5,19,0,0,379,380,3,28,14,0,380,381,5,20,0,0,381,383,1,0,0,0,382,373,1,
  	0,0,0,382,378,1,0,0,0,383,391,1,0,0,0,384,385,10,1,0,0,385,386,5,19,0,
  	0,386,387,3,28,14,0,387,388,5,20,0,0,388,390,1,0,0,0,389,384,1,0,0,0,
  	390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,0,392,71,1,0,0,0,393,391,
  	1,0,0,0,394,396,3,74,37,0,395,394,1,0,0,0,395,396,1,0,0,0,396,397,1,0,
  	0,0,397,398,5,0,0,1,398,73,1,0,0,0,399,401,3,76,38,0,400,399,1,0,0,0,
  	401,402,1,0,0,0,402,400,1,0,0,0,402,403,1,0,0,0,403,75,1,0,0,0,404,408,
  	3,30,15,0,405,408,3,78,39,0,406,408,5,37,0,0,407,404,1,0,0,0,407,405,
  	1,0,0,0,407,406,1,0,0,0,408,77,1,0,0,0,409,410,7,8,0,0,410,79,1,0,0,0,
  	53,81,84,89,92,95,98,105,108,112,127,133,139,146,157,164,172,180,188,
  	196,204,211,218,228,232,239,243,252,259,268,271,275,282,287,291,295,300,
  	306,313,319,324,334,343,348,352,359,364,368,371,382,391,395,402,407
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


//----------------- InternalBasicTypesContext ------------------------------------------------------------------

CStructParser::InternalBasicTypesContext::InternalBasicTypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Char() {
  return getToken(CStructParser::Char, 0);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Short() {
  return getToken(CStructParser::Short, 0);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Int() {
  return getToken(CStructParser::Int, 0);
}

std::vector<tree::TerminalNode *> CStructParser::InternalBasicTypesContext::Long() {
  return getTokens(CStructParser::Long);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Long(size_t i) {
  return getToken(CStructParser::Long, i);
}

CStructParser::SignOrUnsignedContext* CStructParser::InternalBasicTypesContext::signOrUnsigned() {
  return getRuleContext<CStructParser::SignOrUnsignedContext>(0);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Const() {
  return getToken(CStructParser::Const, 0);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Float() {
  return getToken(CStructParser::Float, 0);
}

tree::TerminalNode* CStructParser::InternalBasicTypesContext::Double() {
  return getToken(CStructParser::Double, 0);
}


size_t CStructParser::InternalBasicTypesContext::getRuleIndex() const {
  return CStructParser::RuleInternalBasicTypes;
}


std::any CStructParser::InternalBasicTypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitInternalBasicTypes(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::InternalBasicTypesContext* CStructParser::internalBasicTypes() {
  InternalBasicTypesContext *_localctx = _tracker.createInstance<InternalBasicTypesContext>(_ctx, getState());
  enterRule(_localctx, 0, CStructParser::RuleInternalBasicTypes);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Signed

      || _la == CStructParser::Unsigned) {
        setState(80);
        signOrUnsigned();
      }
      setState(84);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Const) {
        setState(83);
        match(CStructParser::Const);
      }
      setState(86);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2436) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2436) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(89);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(88);
        match(CStructParser::Const);
        break;
      }

      default:
        break;
      }
      setState(92);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Signed

      || _la == CStructParser::Unsigned) {
        setState(91);
        signOrUnsigned();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Signed

      || _la == CStructParser::Unsigned) {
        setState(94);
        signOrUnsigned();
      }
      setState(98);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Const) {
        setState(97);
        match(CStructParser::Const);
      }
      setState(100);
      match(CStructParser::Long);
      setState(101);
      match(CStructParser::Long);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(102);
      match(CStructParser::Long);
      setState(103);
      match(CStructParser::Long);
      setState(105);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(104);
        match(CStructParser::Const);
        break;
      }

      default:
        break;
      }
      setState(108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Signed

      || _la == CStructParser::Unsigned) {
        setState(107);
        signOrUnsigned();
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(110);
      match(CStructParser::Float);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(111);
      match(CStructParser::Double);
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

//----------------- SignOrUnsignedContext ------------------------------------------------------------------

CStructParser::SignOrUnsignedContext::SignOrUnsignedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::SignOrUnsignedContext::Signed() {
  return getToken(CStructParser::Signed, 0);
}

tree::TerminalNode* CStructParser::SignOrUnsignedContext::Unsigned() {
  return getToken(CStructParser::Unsigned, 0);
}


size_t CStructParser::SignOrUnsignedContext::getRuleIndex() const {
  return CStructParser::RuleSignOrUnsigned;
}


std::any CStructParser::SignOrUnsignedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitSignOrUnsigned(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::SignOrUnsignedContext* CStructParser::signOrUnsigned() {
  SignOrUnsignedContext *_localctx = _tracker.createInstance<SignOrUnsignedContext>(_ctx, getState());
  enterRule(_localctx, 2, CStructParser::RuleSignOrUnsigned);
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
    setState(114);
    _la = _input->LA(1);
    if (!(_la == CStructParser::Signed

    || _la == CStructParser::Unsigned)) {
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

tree::TerminalNode* CStructParser::PrimaryExpressionContext::SizeOf() {
  return getToken(CStructParser::SizeOf, 0);
}

CStructParser::SpecifierQualifierListContext* CStructParser::PrimaryExpressionContext::specifierQualifierList() {
  return getRuleContext<CStructParser::SpecifierQualifierListContext>(0);
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
  enterRule(_localctx, 4, CStructParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(116);
        match(CStructParser::Identifier);
        break;
      }

      case CStructParser::IntegerConstant: {
        enterOuterAlt(_localctx, 2);
        setState(117);
        match(CStructParser::IntegerConstant);
        break;
      }

      case CStructParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(118);
        match(CStructParser::LeftParen);
        setState(119);
        assignmentExpression();
        setState(120);
        match(CStructParser::RightParen);
        break;
      }

      case CStructParser::SizeOf: {
        enterOuterAlt(_localctx, 4);
        setState(122);
        match(CStructParser::SizeOf);
        setState(123);
        match(CStructParser::LeftParen);
        setState(124);
        specifierQualifierList();
        setState(125);
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
  enterRule(_localctx, 6, CStructParser::RulePostfixExpression);
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
    setState(129);
    primaryExpression();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(130);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(135);
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
  enterRule(_localctx, 8, CStructParser::RuleUnaryExpression);
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
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(136);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::SizeOf:
      case CStructParser::LeftParen:
      case CStructParser::Identifier:
      case CStructParser::IntegerConstant: {
        setState(142);
        postfixExpression();
        break;
      }

      case CStructParser::Plus:
      case CStructParser::Minus:
      case CStructParser::Tilde: {
        setState(143);
        unaryOperator();
        setState(144);
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
  enterRule(_localctx, 10, CStructParser::RuleUnaryOperator);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34527510528) != 0))) {
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
  enterRule(_localctx, 12, CStructParser::RuleCastExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      match(CStructParser::LeftParen);
      setState(151);
      typeName();
      setState(152);
      match(CStructParser::RightParen);
      setState(153);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(155);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(156);
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
  enterRule(_localctx, 14, CStructParser::RuleMultiplicativeExpression);
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
    setState(159);
    castExpression();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3758096384) != 0)) {
      setState(160);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 3758096384) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(161);
      castExpression();
      setState(166);
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
  enterRule(_localctx, 16, CStructParser::RuleAdditiveExpression);
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
    setState(167);
    multiplicativeExpression();
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Plus

    || _la == CStructParser::Minus) {
      setState(168);
      _la = _input->LA(1);
      if (!(_la == CStructParser::Plus

      || _la == CStructParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(169);
      multiplicativeExpression();
      setState(174);
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
  enterRule(_localctx, 18, CStructParser::RuleShiftExpression);
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
    setState(175);
    additiveExpression();
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::LeftShift

    || _la == CStructParser::RightShift) {
      setState(176);
      _la = _input->LA(1);
      if (!(_la == CStructParser::LeftShift

      || _la == CStructParser::RightShift)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(177);
      additiveExpression();
      setState(182);
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
  enterRule(_localctx, 20, CStructParser::RuleAndExpression);
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
    setState(183);
    shiftExpression();
    setState(188);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::And) {
      setState(184);
      match(CStructParser::And);
      setState(185);
      shiftExpression();
      setState(190);
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
  enterRule(_localctx, 22, CStructParser::RuleExclusiveOrExpression);
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
    setState(191);
    andExpression();
    setState(196);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Caret) {
      setState(192);
      match(CStructParser::Caret);
      setState(193);
      andExpression();
      setState(198);
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
  enterRule(_localctx, 24, CStructParser::RuleInclusiveOrExpression);
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
    setState(199);
    exclusiveOrExpression();
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Or) {
      setState(200);
      match(CStructParser::Or);
      setState(201);
      exclusiveOrExpression();
      setState(206);
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
  enterRule(_localctx, 26, CStructParser::RuleAssignmentExpressionDef);
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
    setState(207);
    assignmentExpression();
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Semi) {
      setState(208);
      match(CStructParser::Semi);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
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
  enterRule(_localctx, 28, CStructParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      match(CStructParser::IntegerConstant);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(217);
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

CStructParser::DeclarationSpecifierContext* CStructParser::DeclarationContext::declarationSpecifier() {
  return getRuleContext<CStructParser::DeclarationSpecifierContext>(0);
}

tree::TerminalNode* CStructParser::DeclarationContext::Semi() {
  return getToken(CStructParser::Semi, 0);
}

tree::TerminalNode* CStructParser::DeclarationContext::TypeDef() {
  return getToken(CStructParser::TypeDef, 0);
}

CStructParser::TypeSpecifierContext* CStructParser::DeclarationContext::typeSpecifier() {
  return getRuleContext<CStructParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* CStructParser::DeclarationContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
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
  enterRule(_localctx, 30, CStructParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Enum:
      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        declarationSpecifier();
        setState(221);
        match(CStructParser::Semi);
        break;
      }

      case CStructParser::TypeDef: {
        enterOuterAlt(_localctx, 2);
        setState(223);
        match(CStructParser::TypeDef);
        setState(224);
        typeSpecifier();
        setState(225);
        match(CStructParser::Identifier);
        setState(226);
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

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CStructParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::StructOrUnionSpecifierContext* CStructParser::DeclarationSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CStructParser::StructOrUnionSpecifierContext>(0);
}

CStructParser::EnumSpecifierContext* CStructParser::DeclarationSpecifierContext::enumSpecifier() {
  return getRuleContext<CStructParser::EnumSpecifierContext>(0);
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
    setState(232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 1);
        setState(230);
        structOrUnionSpecifier();
        break;
      }

      case CStructParser::Enum: {
        enterOuterAlt(_localctx, 2);
        setState(231);
        enumSpecifier();
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

CStructParser::InternalBasicTypesContext* CStructParser::TypeSpecifierContext::internalBasicTypes() {
  return getRuleContext<CStructParser::InternalBasicTypesContext>(0);
}

CStructParser::StructOrUnionSpecifierContext* CStructParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<CStructParser::StructOrUnionSpecifierContext>(0);
}

CStructParser::EnumSpecifierContext* CStructParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CStructParser::EnumSpecifierContext>(0);
}

tree::TerminalNode* CStructParser::TypeSpecifierContext::Identifier() {
  return getToken(CStructParser::Identifier, 0);
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
    setState(239);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Void: {
        enterOuterAlt(_localctx, 1);
        setState(234);
        match(CStructParser::Void);
        break;
      }

      case CStructParser::Char:
      case CStructParser::Const:
      case CStructParser::Double:
      case CStructParser::Float:
      case CStructParser::Int:
      case CStructParser::Long:
      case CStructParser::Short:
      case CStructParser::Signed:
      case CStructParser::Unsigned: {
        enterOuterAlt(_localctx, 2);
        setState(235);
        internalBasicTypes();
        break;
      }

      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 3);
        setState(236);
        structOrUnionSpecifier();
        break;
      }

      case CStructParser::Enum: {
        enterOuterAlt(_localctx, 4);
        setState(237);
        enumSpecifier();
        break;
      }

      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 5);
        setState(238);
        match(CStructParser::Identifier);
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
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      structOrUnion();
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(242);
        match(CStructParser::Identifier);
      }
      setState(245);
      match(CStructParser::LeftBrace);
      setState(246);
      structDeclarationList();
      setState(247);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      structOrUnion();
      setState(250);
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
    setState(254);
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
    setState(257); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(256);
      structDeclaration();
      setState(259); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 549755943420) != 0));
   
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
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(261);
      specifierQualifierList();
      setState(262);
      structDeclaratorList();
      setState(263);
      match(CStructParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      specifierQualifierList();
      setState(266);
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

std::vector<tree::TerminalNode *> CStructParser::SpecifierQualifierListContext::Const() {
  return getTokens(CStructParser::Const);
}

tree::TerminalNode* CStructParser::SpecifierQualifierListContext::Const(size_t i) {
  return getToken(CStructParser::Const, i);
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
    setState(271);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(270);
      match(CStructParser::Const);
      break;
    }

    default:
      break;
    }
    setState(273);
    typeSpecifier();
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::Const) {
      setState(274);
      match(CStructParser::Const);
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
    setState(277);
    structDeclarator();
    setState(282);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(278);
      match(CStructParser::Comma);
      setState(279);
      structDeclarator();
      setState(284);
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

CStructParser::AssignmentExpressionContext* CStructParser::StructDeclaratorContext::assignmentExpression() {
  return getRuleContext<CStructParser::AssignmentExpressionContext>(0);
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
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(285);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 550292815872) != 0)) {
        setState(286);
        declarator();
      }
      setState(289);
      match(CStructParser::Colon);
      setState(290);
      assignmentExpression();
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
    setState(306);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(293);
      match(CStructParser::Enum);
      setState(295);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(294);
        match(CStructParser::Identifier);
      }
      setState(297);
      match(CStructParser::LeftBrace);
      setState(298);
      enumeratorList();
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Comma) {
        setState(299);
        match(CStructParser::Comma);
      }
      setState(302);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(304);
      match(CStructParser::Enum);
      setState(305);
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
    setState(308);
    enumerator();
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(309);
        match(CStructParser::Comma);
        setState(310);
        enumerator(); 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
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
    setState(316);
    enumerationConstant();
    setState(319);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::T__0) {
      setState(317);
      match(CStructParser::T__0);
      setState(318);
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
    setState(321);
    match(CStructParser::Identifier);
   
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
  enterRule(_localctx, 58, CStructParser::RuleDeclarator);
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
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::Star) {
      setState(323);
      pointer();
    }
    setState(326);
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
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, CStructParser::RuleDirectDeclarator, precedence);

    

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
    setState(334);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Identifier: {
        setState(329);
        match(CStructParser::Identifier);
        break;
      }

      case CStructParser::LeftParen: {
        setState(330);
        match(CStructParser::LeftParen);
        setState(331);
        declarator();
        setState(332);
        match(CStructParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(343);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
        setState(336);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(337);
        match(CStructParser::LeftBracket);
        setState(338);
        assignmentExpression();
        setState(339);
        match(CStructParser::RightBracket); 
      }
      setState(345);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
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

std::vector<tree::TerminalNode *> CStructParser::PointerContext::Const() {
  return getTokens(CStructParser::Const);
}

tree::TerminalNode* CStructParser::PointerContext::Const(size_t i) {
  return getToken(CStructParser::Const, i);
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
  enterRule(_localctx, 62, CStructParser::RulePointer);
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
    setState(350); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(346);
      match(CStructParser::Star);
      setState(348);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Const) {
        setState(347);
        match(CStructParser::Const);
      }
      setState(352); 
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
  enterRule(_localctx, 64, CStructParser::RuleIdentifierList);
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
    setState(354);
    match(CStructParser::Identifier);
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(355);
      match(CStructParser::Comma);
      setState(356);
      match(CStructParser::Identifier);
      setState(361);
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
  enterRule(_localctx, 66, CStructParser::RuleTypeName);
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
    setState(362);
    specifierQualifierList();
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 537526272) != 0)) {
      setState(363);
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
  enterRule(_localctx, 68, CStructParser::RuleAbstractDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(366);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(368);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Star) {
        setState(367);
        pointer();
      }
      setState(370);
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
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, CStructParser::RuleDirectAbstractDeclarator, precedence);

    

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
    setState(382);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::LeftParen: {
        setState(374);
        match(CStructParser::LeftParen);
        setState(375);
        abstractDeclarator();
        setState(376);
        match(CStructParser::RightParen);
        break;
      }

      case CStructParser::LeftBracket: {
        setState(378);
        match(CStructParser::LeftBracket);
        setState(379);
        assignmentExpression();
        setState(380);
        match(CStructParser::RightBracket);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
        setState(384);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(385);
        match(CStructParser::LeftBracket);
        setState(386);
        assignmentExpression();
        setState(387);
        match(CStructParser::RightBracket); 
      }
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
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
  enterRule(_localctx, 72, CStructParser::RuleCompilationUnit);
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
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 11132555256352) != 0)) {
      setState(394);
      translationUnit();
    }
    setState(397);
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
  enterRule(_localctx, 74, CStructParser::RuleTranslationUnit);
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
    setState(400); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(399);
      externalDeclaration();
      setState(402); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 11132555256352) != 0));
   
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
  enterRule(_localctx, 76, CStructParser::RuleExternalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(407);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Enum:
      case CStructParser::TypeDef:
      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 1);
        setState(404);
        declaration();
        break;
      }

      case CStructParser::MultiLineMacroDefine:
      case CStructParser::DirectiveDefine: {
        enterOuterAlt(_localctx, 2);
        setState(405);
        defineDecl();
        break;
      }

      case CStructParser::Semi: {
        enterOuterAlt(_localctx, 3);
        setState(406);
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
  enterRule(_localctx, 78, CStructParser::RuleDefineDecl);
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
    setState(409);
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
    case 30: return directDeclaratorSempred(antlrcpp::downCast<DirectDeclaratorContext *>(context), predicateIndex);
    case 35: return directAbstractDeclaratorSempred(antlrcpp::downCast<DirectAbstractDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CStructParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

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
