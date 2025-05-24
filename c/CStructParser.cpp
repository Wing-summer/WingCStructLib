
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
      "initDeclaratorList", "initDeclarator", "storageClassSpecifier", "typeSpecifier", 
      "structOrUnionSpecifier", "structOrUnion", "structDeclarationList", 
      "structDeclaration", "specifierQualifierList", "structDeclaratorList", 
      "structDeclarator", "enumSpecifier", "enumeratorList", "enumerator", 
      "enumerationConstant", "typeQualifier", "declarator", "directDeclarator", 
      "pointer", "typeQualifierList", "parameterTypeList", "parameterList", 
      "parameterDeclaration", "identifierList", "typeName", "abstractDeclarator", 
      "directAbstractDeclarator", "typedefName", "compilationUnit", "translationUnit", 
      "externalDeclaration", "defineDecl", "declarationList"
    },
    std::vector<std::string>{
      "", "'='", "'auto'", "'char'", "'const'", "'double'", "'enum'", "'extern'", 
      "'float'", "'int'", "'long'", "'register'", "'restrict'", "'short'", 
      "'signed'", "'static'", "'struct'", "'typedef'", "'union'", "'unsigned'", 
      "'void'", "'volatile'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", 
      "'&'", "'|'", "'^'", "'~'", "':'", "';'", "','", "'...'"
    },
    std::vector<std::string>{
      "", "", "Auto", "Char", "Const", "Double", "Enum", "Extern", "Float", 
      "Int", "Long", "Register", "Restrict", "Short", "Signed", "Static", 
      "Struct", "Typedef", "Union", "Unsigned", "Void", "Volatile", "LeftParen", 
      "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
      "LeftShift", "RightShift", "Plus", "PlusPlus", "Minus", "MinusMinus", 
      "Star", "Div", "Mod", "And", "Or", "Caret", "Tilde", "Colon", "Semi", 
      "Comma", "Ellipsis", "Identifier", "IntegerConstant", "MultiLineMacroDefine", 
      "MultiLineMacro", "DirectiveDefine", "Directive", "Whitespace", "Newline", 
      "LINE_CONTINUATION", "BlockComment", "LineComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,55,478,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,1,0,1,0,1,0,1,0,1,0,1,0,3,0,107,8,0,1,1,1,1,5,1,111,8,1,10,1,12,1,
  	114,9,1,1,2,5,2,117,8,2,10,2,12,2,120,9,2,1,2,1,2,1,2,1,2,3,2,126,8,2,
  	1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,137,8,4,1,5,1,5,1,5,5,5,142,8,
  	5,10,5,12,5,145,9,5,1,6,1,6,1,6,5,6,150,8,6,10,6,12,6,153,9,6,1,7,1,7,
  	1,7,5,7,158,8,7,10,7,12,7,161,9,7,1,8,1,8,1,8,5,8,166,8,8,10,8,12,8,169,
  	9,8,1,9,1,9,1,9,5,9,174,8,9,10,9,12,9,177,9,9,1,10,1,10,1,10,5,10,182,
  	8,10,10,10,12,10,185,9,10,1,11,1,11,5,11,189,8,11,10,11,12,11,192,9,11,
  	1,11,1,11,1,12,1,12,3,12,198,8,12,1,13,1,13,3,13,202,8,13,1,13,1,13,1,
  	14,4,14,207,8,14,11,14,12,14,208,1,15,4,15,212,8,15,11,15,12,15,213,1,
  	16,1,16,1,16,3,16,219,8,16,1,17,1,17,1,17,5,17,224,8,17,10,17,12,17,227,
  	9,17,1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,3,20,245,8,20,1,21,1,21,3,21,249,8,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,3,21,258,8,21,1,22,1,22,1,23,4,23,263,8,23,11,23,12,
  	23,264,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,274,8,24,1,25,1,25,3,25,
  	278,8,25,1,25,3,25,281,8,25,1,26,1,26,1,26,5,26,286,8,26,10,26,12,26,
  	289,9,26,1,27,1,27,3,27,293,8,27,1,27,1,27,3,27,297,8,27,1,28,1,28,3,
  	28,301,8,28,1,28,1,28,1,28,3,28,306,8,28,1,28,1,28,1,28,1,28,3,28,312,
  	8,28,1,29,1,29,1,29,5,29,317,8,29,10,29,12,29,320,9,29,1,30,1,30,1,30,
  	3,30,325,8,30,1,31,1,31,1,32,1,32,1,33,3,33,332,8,33,1,33,1,33,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,345,8,34,1,34,1,34,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,360,8,34,1,34,5,
  	34,363,8,34,10,34,12,34,366,9,34,1,35,1,35,3,35,370,8,35,4,35,372,8,35,
  	11,35,12,35,373,1,36,4,36,377,8,36,11,36,12,36,378,1,37,1,37,1,37,3,37,
  	384,8,37,1,38,1,38,1,38,5,38,389,8,38,10,38,12,38,392,9,38,1,39,1,39,
  	1,39,1,39,1,39,3,39,399,8,39,3,39,401,8,39,1,40,1,40,1,40,5,40,406,8,
  	40,10,40,12,40,409,9,40,1,41,1,41,3,41,413,8,41,1,42,1,42,3,42,417,8,
  	42,1,42,3,42,420,8,42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,
  	43,1,43,3,43,433,8,43,1,43,3,43,436,8,43,1,43,1,43,1,43,1,43,1,43,1,43,
  	1,43,1,43,3,43,446,8,43,1,43,5,43,449,8,43,10,43,12,43,452,9,43,1,44,
  	1,44,1,45,3,45,457,8,45,1,45,1,45,1,46,4,46,462,8,46,11,46,12,46,463,
  	1,47,1,47,1,47,3,47,469,8,47,1,48,1,48,1,49,4,49,474,8,49,11,49,12,49,
  	475,1,49,0,2,68,86,50,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,
  	82,84,86,88,90,92,94,96,98,0,9,2,0,31,31,33,33,3,0,30,30,32,32,40,40,
  	1,0,34,36,2,0,30,30,32,32,1,0,28,29,5,0,2,2,7,7,11,11,15,15,17,17,2,0,
  	16,16,18,18,3,0,4,4,12,12,21,21,2,0,47,47,49,49,502,0,106,1,0,0,0,2,108,
  	1,0,0,0,4,118,1,0,0,0,6,127,1,0,0,0,8,136,1,0,0,0,10,138,1,0,0,0,12,146,
  	1,0,0,0,14,154,1,0,0,0,16,162,1,0,0,0,18,170,1,0,0,0,20,178,1,0,0,0,22,
  	186,1,0,0,0,24,197,1,0,0,0,26,199,1,0,0,0,28,206,1,0,0,0,30,211,1,0,0,
  	0,32,218,1,0,0,0,34,220,1,0,0,0,36,228,1,0,0,0,38,230,1,0,0,0,40,244,
  	1,0,0,0,42,257,1,0,0,0,44,259,1,0,0,0,46,262,1,0,0,0,48,273,1,0,0,0,50,
  	277,1,0,0,0,52,282,1,0,0,0,54,296,1,0,0,0,56,311,1,0,0,0,58,313,1,0,0,
  	0,60,321,1,0,0,0,62,326,1,0,0,0,64,328,1,0,0,0,66,331,1,0,0,0,68,344,
  	1,0,0,0,70,371,1,0,0,0,72,376,1,0,0,0,74,380,1,0,0,0,76,385,1,0,0,0,78,
  	400,1,0,0,0,80,402,1,0,0,0,82,410,1,0,0,0,84,419,1,0,0,0,86,435,1,0,0,
  	0,88,453,1,0,0,0,90,456,1,0,0,0,92,461,1,0,0,0,94,468,1,0,0,0,96,470,
  	1,0,0,0,98,473,1,0,0,0,100,107,5,45,0,0,101,107,5,46,0,0,102,103,5,22,
  	0,0,103,104,3,24,12,0,104,105,5,23,0,0,105,107,1,0,0,0,106,100,1,0,0,
  	0,106,101,1,0,0,0,106,102,1,0,0,0,107,1,1,0,0,0,108,112,3,0,0,0,109,111,
  	7,0,0,0,110,109,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,
  	0,113,3,1,0,0,0,114,112,1,0,0,0,115,117,7,0,0,0,116,115,1,0,0,0,117,120,
  	1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,125,1,0,0,0,120,118,1,0,0,
  	0,121,126,3,2,1,0,122,123,3,6,3,0,123,124,3,8,4,0,124,126,1,0,0,0,125,
  	121,1,0,0,0,125,122,1,0,0,0,126,5,1,0,0,0,127,128,7,1,0,0,128,7,1,0,0,
  	0,129,130,5,22,0,0,130,131,3,82,41,0,131,132,5,23,0,0,132,133,3,8,4,0,
  	133,137,1,0,0,0,134,137,3,4,2,0,135,137,5,46,0,0,136,129,1,0,0,0,136,
  	134,1,0,0,0,136,135,1,0,0,0,137,9,1,0,0,0,138,143,3,8,4,0,139,140,7,2,
  	0,0,140,142,3,8,4,0,141,139,1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,143,
  	144,1,0,0,0,144,11,1,0,0,0,145,143,1,0,0,0,146,151,3,10,5,0,147,148,7,
  	3,0,0,148,150,3,10,5,0,149,147,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,
  	0,151,152,1,0,0,0,152,13,1,0,0,0,153,151,1,0,0,0,154,159,3,12,6,0,155,
  	156,7,4,0,0,156,158,3,12,6,0,157,155,1,0,0,0,158,161,1,0,0,0,159,157,
  	1,0,0,0,159,160,1,0,0,0,160,15,1,0,0,0,161,159,1,0,0,0,162,167,3,14,7,
  	0,163,164,5,37,0,0,164,166,3,14,7,0,165,163,1,0,0,0,166,169,1,0,0,0,167,
  	165,1,0,0,0,167,168,1,0,0,0,168,17,1,0,0,0,169,167,1,0,0,0,170,175,3,
  	16,8,0,171,172,5,39,0,0,172,174,3,16,8,0,173,171,1,0,0,0,174,177,1,0,
  	0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,19,1,0,0,0,177,175,1,0,0,0,178,
  	183,3,18,9,0,179,180,5,38,0,0,180,182,3,18,9,0,181,179,1,0,0,0,182,185,
  	1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,21,1,0,0,0,185,183,1,0,0,
  	0,186,190,3,24,12,0,187,189,5,42,0,0,188,187,1,0,0,0,189,192,1,0,0,0,
  	190,188,1,0,0,0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,
  	5,0,0,1,194,23,1,0,0,0,195,198,5,46,0,0,196,198,3,20,10,0,197,195,1,0,
  	0,0,197,196,1,0,0,0,198,25,1,0,0,0,199,201,3,28,14,0,200,202,3,34,17,
  	0,201,200,1,0,0,0,201,202,1,0,0,0,202,203,1,0,0,0,203,204,5,42,0,0,204,
  	27,1,0,0,0,205,207,3,32,16,0,206,205,1,0,0,0,207,208,1,0,0,0,208,206,
  	1,0,0,0,208,209,1,0,0,0,209,29,1,0,0,0,210,212,3,32,16,0,211,210,1,0,
  	0,0,212,213,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,31,1,0,0,0,215,
  	219,3,38,19,0,216,219,3,40,20,0,217,219,3,64,32,0,218,215,1,0,0,0,218,
  	216,1,0,0,0,218,217,1,0,0,0,219,33,1,0,0,0,220,225,3,36,18,0,221,222,
  	5,43,0,0,222,224,3,36,18,0,223,221,1,0,0,0,224,227,1,0,0,0,225,223,1,
  	0,0,0,225,226,1,0,0,0,226,35,1,0,0,0,227,225,1,0,0,0,228,229,3,66,33,
  	0,229,37,1,0,0,0,230,231,7,5,0,0,231,39,1,0,0,0,232,245,5,20,0,0,233,
  	245,5,3,0,0,234,245,5,13,0,0,235,245,5,9,0,0,236,245,5,10,0,0,237,245,
  	5,8,0,0,238,245,5,5,0,0,239,245,5,14,0,0,240,245,5,19,0,0,241,245,3,42,
  	21,0,242,245,3,56,28,0,243,245,3,88,44,0,244,232,1,0,0,0,244,233,1,0,
  	0,0,244,234,1,0,0,0,244,235,1,0,0,0,244,236,1,0,0,0,244,237,1,0,0,0,244,
  	238,1,0,0,0,244,239,1,0,0,0,244,240,1,0,0,0,244,241,1,0,0,0,244,242,1,
  	0,0,0,244,243,1,0,0,0,245,41,1,0,0,0,246,248,3,44,22,0,247,249,5,45,0,
  	0,248,247,1,0,0,0,248,249,1,0,0,0,249,250,1,0,0,0,250,251,5,26,0,0,251,
  	252,3,46,23,0,252,253,5,27,0,0,253,258,1,0,0,0,254,255,3,44,22,0,255,
  	256,5,45,0,0,256,258,1,0,0,0,257,246,1,0,0,0,257,254,1,0,0,0,258,43,1,
  	0,0,0,259,260,7,6,0,0,260,45,1,0,0,0,261,263,3,48,24,0,262,261,1,0,0,
  	0,263,264,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,47,1,0,0,0,266,
  	267,3,50,25,0,267,268,3,52,26,0,268,269,5,42,0,0,269,274,1,0,0,0,270,
  	271,3,50,25,0,271,272,5,42,0,0,272,274,1,0,0,0,273,266,1,0,0,0,273,270,
  	1,0,0,0,274,49,1,0,0,0,275,278,3,40,20,0,276,278,3,64,32,0,277,275,1,
  	0,0,0,277,276,1,0,0,0,278,280,1,0,0,0,279,281,3,50,25,0,280,279,1,0,0,
  	0,280,281,1,0,0,0,281,51,1,0,0,0,282,287,3,54,27,0,283,284,5,43,0,0,284,
  	286,3,54,27,0,285,283,1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,
  	1,0,0,0,288,53,1,0,0,0,289,287,1,0,0,0,290,297,3,66,33,0,291,293,3,66,
  	33,0,292,291,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,0,294,295,5,41,0,0,
  	295,297,5,46,0,0,296,290,1,0,0,0,296,292,1,0,0,0,297,55,1,0,0,0,298,300,
  	5,6,0,0,299,301,5,45,0,0,300,299,1,0,0,0,300,301,1,0,0,0,301,302,1,0,
  	0,0,302,303,5,26,0,0,303,305,3,58,29,0,304,306,5,43,0,0,305,304,1,0,0,
  	0,305,306,1,0,0,0,306,307,1,0,0,0,307,308,5,27,0,0,308,312,1,0,0,0,309,
  	310,5,6,0,0,310,312,5,45,0,0,311,298,1,0,0,0,311,309,1,0,0,0,312,57,1,
  	0,0,0,313,318,3,60,30,0,314,315,5,43,0,0,315,317,3,60,30,0,316,314,1,
  	0,0,0,317,320,1,0,0,0,318,316,1,0,0,0,318,319,1,0,0,0,319,59,1,0,0,0,
  	320,318,1,0,0,0,321,324,3,62,31,0,322,323,5,1,0,0,323,325,3,24,12,0,324,
  	322,1,0,0,0,324,325,1,0,0,0,325,61,1,0,0,0,326,327,5,45,0,0,327,63,1,
  	0,0,0,328,329,7,7,0,0,329,65,1,0,0,0,330,332,3,70,35,0,331,330,1,0,0,
  	0,331,332,1,0,0,0,332,333,1,0,0,0,333,334,3,68,34,0,334,67,1,0,0,0,335,
  	336,6,34,-1,0,336,345,5,45,0,0,337,338,5,22,0,0,338,339,3,66,33,0,339,
  	340,5,23,0,0,340,345,1,0,0,0,341,342,5,45,0,0,342,343,5,41,0,0,343,345,
  	5,46,0,0,344,335,1,0,0,0,344,337,1,0,0,0,344,341,1,0,0,0,345,364,1,0,
  	0,0,346,347,10,4,0,0,347,348,5,24,0,0,348,349,3,24,12,0,349,350,5,25,
  	0,0,350,363,1,0,0,0,351,352,10,3,0,0,352,353,5,22,0,0,353,354,3,74,37,
  	0,354,355,5,23,0,0,355,363,1,0,0,0,356,357,10,2,0,0,357,359,5,22,0,0,
  	358,360,3,80,40,0,359,358,1,0,0,0,359,360,1,0,0,0,360,361,1,0,0,0,361,
  	363,5,23,0,0,362,346,1,0,0,0,362,351,1,0,0,0,362,356,1,0,0,0,363,366,
  	1,0,0,0,364,362,1,0,0,0,364,365,1,0,0,0,365,69,1,0,0,0,366,364,1,0,0,
  	0,367,369,5,34,0,0,368,370,3,72,36,0,369,368,1,0,0,0,369,370,1,0,0,0,
  	370,372,1,0,0,0,371,367,1,0,0,0,372,373,1,0,0,0,373,371,1,0,0,0,373,374,
  	1,0,0,0,374,71,1,0,0,0,375,377,3,64,32,0,376,375,1,0,0,0,377,378,1,0,
  	0,0,378,376,1,0,0,0,378,379,1,0,0,0,379,73,1,0,0,0,380,383,3,76,38,0,
  	381,382,5,43,0,0,382,384,5,44,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,
  	75,1,0,0,0,385,390,3,78,39,0,386,387,5,43,0,0,387,389,3,78,39,0,388,386,
  	1,0,0,0,389,392,1,0,0,0,390,388,1,0,0,0,390,391,1,0,0,0,391,77,1,0,0,
  	0,392,390,1,0,0,0,393,394,3,28,14,0,394,395,3,66,33,0,395,401,1,0,0,0,
  	396,398,3,30,15,0,397,399,3,84,42,0,398,397,1,0,0,0,398,399,1,0,0,0,399,
  	401,1,0,0,0,400,393,1,0,0,0,400,396,1,0,0,0,401,79,1,0,0,0,402,407,5,
  	45,0,0,403,404,5,43,0,0,404,406,5,45,0,0,405,403,1,0,0,0,406,409,1,0,
  	0,0,407,405,1,0,0,0,407,408,1,0,0,0,408,81,1,0,0,0,409,407,1,0,0,0,410,
  	412,3,50,25,0,411,413,3,84,42,0,412,411,1,0,0,0,412,413,1,0,0,0,413,83,
  	1,0,0,0,414,420,3,70,35,0,415,417,3,70,35,0,416,415,1,0,0,0,416,417,1,
  	0,0,0,417,418,1,0,0,0,418,420,3,86,43,0,419,414,1,0,0,0,419,416,1,0,0,
  	0,420,85,1,0,0,0,421,422,6,43,-1,0,422,423,5,22,0,0,423,424,3,84,42,0,
  	424,425,5,23,0,0,425,436,1,0,0,0,426,427,5,24,0,0,427,428,3,24,12,0,428,
  	429,5,25,0,0,429,436,1,0,0,0,430,432,5,22,0,0,431,433,3,74,37,0,432,431,
  	1,0,0,0,432,433,1,0,0,0,433,434,1,0,0,0,434,436,5,23,0,0,435,421,1,0,
  	0,0,435,426,1,0,0,0,435,430,1,0,0,0,436,450,1,0,0,0,437,438,10,2,0,0,
  	438,439,5,24,0,0,439,440,3,24,12,0,440,441,5,25,0,0,441,449,1,0,0,0,442,
  	443,10,1,0,0,443,445,5,22,0,0,444,446,3,74,37,0,445,444,1,0,0,0,445,446,
  	1,0,0,0,446,447,1,0,0,0,447,449,5,23,0,0,448,437,1,0,0,0,448,442,1,0,
  	0,0,449,452,1,0,0,0,450,448,1,0,0,0,450,451,1,0,0,0,451,87,1,0,0,0,452,
  	450,1,0,0,0,453,454,5,45,0,0,454,89,1,0,0,0,455,457,3,92,46,0,456,455,
  	1,0,0,0,456,457,1,0,0,0,457,458,1,0,0,0,458,459,5,0,0,1,459,91,1,0,0,
  	0,460,462,3,94,47,0,461,460,1,0,0,0,462,463,1,0,0,0,463,461,1,0,0,0,463,
  	464,1,0,0,0,464,93,1,0,0,0,465,469,3,26,13,0,466,469,3,96,48,0,467,469,
  	5,42,0,0,468,465,1,0,0,0,468,466,1,0,0,0,468,467,1,0,0,0,469,95,1,0,0,
  	0,470,471,7,8,0,0,471,97,1,0,0,0,472,474,3,26,13,0,473,472,1,0,0,0,474,
  	475,1,0,0,0,475,473,1,0,0,0,475,476,1,0,0,0,476,99,1,0,0,0,58,106,112,
  	118,125,136,143,151,159,167,175,183,190,197,201,208,213,218,225,244,248,
  	257,264,273,277,280,287,292,296,300,305,311,318,324,331,344,359,362,364,
  	369,373,378,383,390,398,400,407,412,416,419,432,435,445,448,450,456,463,
  	468,475
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
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(100);
        match(CStructParser::Identifier);
        break;
      }

      case CStructParser::IntegerConstant: {
        enterOuterAlt(_localctx, 2);
        setState(101);
        match(CStructParser::IntegerConstant);
        break;
      }

      case CStructParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(102);
        match(CStructParser::LeftParen);
        setState(103);
        assignmentExpression();
        setState(104);
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
    setState(108);
    primaryExpression();
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(109);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(114);
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
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::PlusPlus

    || _la == CStructParser::MinusMinus) {
      setState(115);
      _la = _input->LA(1);
      if (!(_la == CStructParser::PlusPlus

      || _la == CStructParser::MinusMinus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::LeftParen:
      case CStructParser::Identifier:
      case CStructParser::IntegerConstant: {
        setState(121);
        postfixExpression();
        break;
      }

      case CStructParser::Plus:
      case CStructParser::Minus:
      case CStructParser::Tilde: {
        setState(122);
        unaryOperator();
        setState(123);
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
    setState(127);
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
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(129);
      match(CStructParser::LeftParen);
      setState(130);
      typeName();
      setState(131);
      match(CStructParser::RightParen);
      setState(132);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(134);
      unaryExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(135);
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
    setState(138);
    castExpression();
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 120259084288) != 0)) {
      setState(139);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 120259084288) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(140);
      castExpression();
      setState(145);
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
    setState(146);
    multiplicativeExpression();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Plus

    || _la == CStructParser::Minus) {
      setState(147);
      _la = _input->LA(1);
      if (!(_la == CStructParser::Plus

      || _la == CStructParser::Minus)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(148);
      multiplicativeExpression();
      setState(153);
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
    setState(154);
    additiveExpression();
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::LeftShift

    || _la == CStructParser::RightShift) {
      setState(155);
      _la = _input->LA(1);
      if (!(_la == CStructParser::LeftShift

      || _la == CStructParser::RightShift)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(156);
      additiveExpression();
      setState(161);
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
    setState(162);
    shiftExpression();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::And) {
      setState(163);
      match(CStructParser::And);
      setState(164);
      shiftExpression();
      setState(169);
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
    setState(170);
    andExpression();
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Caret) {
      setState(171);
      match(CStructParser::Caret);
      setState(172);
      andExpression();
      setState(177);
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
    setState(178);
    exclusiveOrExpression();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Or) {
      setState(179);
      match(CStructParser::Or);
      setState(180);
      exclusiveOrExpression();
      setState(185);
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
    setState(186);
    assignmentExpression();
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Semi) {
      setState(187);
      match(CStructParser::Semi);
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
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
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(CStructParser::IntegerConstant);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
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

CStructParser::InitDeclaratorListContext* CStructParser::DeclarationContext::initDeclaratorList() {
  return getRuleContext<CStructParser::InitDeclaratorListContext>(0);
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
    declarationSpecifiers();
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35201556152320) != 0)) {
      setState(200);
      initDeclaratorList();
    }
    setState(203);
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
    setState(206); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(205);
              declarationSpecifier();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(208); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
    setState(211); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(210);
      declarationSpecifier();
      setState(213); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184376283132) != 0));
   
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

CStructParser::StorageClassSpecifierContext* CStructParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CStructParser::StorageClassSpecifierContext>(0);
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
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Auto:
      case CStructParser::Extern:
      case CStructParser::Register:
      case CStructParser::Static:
      case CStructParser::Typedef: {
        enterOuterAlt(_localctx, 1);
        setState(215);
        storageClassSpecifier();
        break;
      }

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
        enterOuterAlt(_localctx, 2);
        setState(216);
        typeSpecifier();
        break;
      }

      case CStructParser::Const:
      case CStructParser::Restrict:
      case CStructParser::Volatile: {
        enterOuterAlt(_localctx, 3);
        setState(217);
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

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

CStructParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::InitDeclaratorContext *> CStructParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<CStructParser::InitDeclaratorContext>();
}

CStructParser::InitDeclaratorContext* CStructParser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<CStructParser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::InitDeclaratorListContext::Comma() {
  return getTokens(CStructParser::Comma);
}

tree::TerminalNode* CStructParser::InitDeclaratorListContext::Comma(size_t i) {
  return getToken(CStructParser::Comma, i);
}


size_t CStructParser::InitDeclaratorListContext::getRuleIndex() const {
  return CStructParser::RuleInitDeclaratorList;
}


std::any CStructParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::InitDeclaratorListContext* CStructParser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 34, CStructParser::RuleInitDeclaratorList);
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
    setState(220);
    initDeclarator();
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(221);
      match(CStructParser::Comma);
      setState(222);
      initDeclarator();
      setState(227);
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

//----------------- InitDeclaratorContext ------------------------------------------------------------------

CStructParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DeclaratorContext* CStructParser::InitDeclaratorContext::declarator() {
  return getRuleContext<CStructParser::DeclaratorContext>(0);
}


size_t CStructParser::InitDeclaratorContext::getRuleIndex() const {
  return CStructParser::RuleInitDeclarator;
}


std::any CStructParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::InitDeclaratorContext* CStructParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 36, CStructParser::RuleInitDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CStructParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CStructParser::StorageClassSpecifierContext::Typedef() {
  return getToken(CStructParser::Typedef, 0);
}

tree::TerminalNode* CStructParser::StorageClassSpecifierContext::Extern() {
  return getToken(CStructParser::Extern, 0);
}

tree::TerminalNode* CStructParser::StorageClassSpecifierContext::Static() {
  return getToken(CStructParser::Static, 0);
}

tree::TerminalNode* CStructParser::StorageClassSpecifierContext::Auto() {
  return getToken(CStructParser::Auto, 0);
}

tree::TerminalNode* CStructParser::StorageClassSpecifierContext::Register() {
  return getToken(CStructParser::Register, 0);
}


size_t CStructParser::StorageClassSpecifierContext::getRuleIndex() const {
  return CStructParser::RuleStorageClassSpecifier;
}


std::any CStructParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::StorageClassSpecifierContext* CStructParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 38, CStructParser::RuleStorageClassSpecifier);
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
    setState(230);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 166020) != 0))) {
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
  enterRule(_localctx, 40, CStructParser::RuleTypeSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Void: {
        enterOuterAlt(_localctx, 1);
        setState(232);
        match(CStructParser::Void);
        break;
      }

      case CStructParser::Char: {
        enterOuterAlt(_localctx, 2);
        setState(233);
        match(CStructParser::Char);
        break;
      }

      case CStructParser::Short: {
        enterOuterAlt(_localctx, 3);
        setState(234);
        match(CStructParser::Short);
        break;
      }

      case CStructParser::Int: {
        enterOuterAlt(_localctx, 4);
        setState(235);
        match(CStructParser::Int);
        break;
      }

      case CStructParser::Long: {
        enterOuterAlt(_localctx, 5);
        setState(236);
        match(CStructParser::Long);
        break;
      }

      case CStructParser::Float: {
        enterOuterAlt(_localctx, 6);
        setState(237);
        match(CStructParser::Float);
        break;
      }

      case CStructParser::Double: {
        enterOuterAlt(_localctx, 7);
        setState(238);
        match(CStructParser::Double);
        break;
      }

      case CStructParser::Signed: {
        enterOuterAlt(_localctx, 8);
        setState(239);
        match(CStructParser::Signed);
        break;
      }

      case CStructParser::Unsigned: {
        enterOuterAlt(_localctx, 9);
        setState(240);
        match(CStructParser::Unsigned);
        break;
      }

      case CStructParser::Struct:
      case CStructParser::Union: {
        enterOuterAlt(_localctx, 10);
        setState(241);
        structOrUnionSpecifier();
        break;
      }

      case CStructParser::Enum: {
        enterOuterAlt(_localctx, 11);
        setState(242);
        enumSpecifier();
        break;
      }

      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 12);
        setState(243);
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
  enterRule(_localctx, 42, CStructParser::RuleStructOrUnionSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      structOrUnion();
      setState(248);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(247);
        match(CStructParser::Identifier);
      }
      setState(250);
      match(CStructParser::LeftBrace);
      setState(251);
      structDeclarationList();
      setState(252);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(254);
      structOrUnion();
      setState(255);
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
  enterRule(_localctx, 44, CStructParser::RuleStructOrUnion);
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
    setState(259);
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
  enterRule(_localctx, 46, CStructParser::RuleStructDeclarationList);
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
    setState(262); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(261);
      structDeclaration();
      setState(264); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184376117112) != 0));
   
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
  enterRule(_localctx, 48, CStructParser::RuleStructDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(266);
      specifierQualifierList();
      setState(267);
      structDeclaratorList();
      setState(268);
      match(CStructParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(270);
      specifierQualifierList();
      setState(271);
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
  enterRule(_localctx, 50, CStructParser::RuleSpecifierQualifierList);

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
        setState(275);
        typeSpecifier();
        break;
      }

      case CStructParser::Const:
      case CStructParser::Restrict:
      case CStructParser::Volatile: {
        setState(276);
        typeQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(280);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(279);
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
  enterRule(_localctx, 52, CStructParser::RuleStructDeclaratorList);
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
    setState(282);
    structDeclarator();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(283);
      match(CStructParser::Comma);
      setState(284);
      structDeclarator();
      setState(289);
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
  enterRule(_localctx, 54, CStructParser::RuleStructDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(290);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(292);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 35201556152320) != 0)) {
        setState(291);
        declarator();
      }
      setState(294);
      match(CStructParser::Colon);
      setState(295);
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
  enterRule(_localctx, 56, CStructParser::RuleEnumSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(311);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(298);
      match(CStructParser::Enum);
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Identifier) {
        setState(299);
        match(CStructParser::Identifier);
      }
      setState(302);
      match(CStructParser::LeftBrace);
      setState(303);
      enumeratorList();
      setState(305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Comma) {
        setState(304);
        match(CStructParser::Comma);
      }
      setState(307);
      match(CStructParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(309);
      match(CStructParser::Enum);
      setState(310);
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
  enterRule(_localctx, 58, CStructParser::RuleEnumeratorList);

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
    setState(313);
    enumerator();
    setState(318);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(314);
        match(CStructParser::Comma);
        setState(315);
        enumerator(); 
      }
      setState(320);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
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
  enterRule(_localctx, 60, CStructParser::RuleEnumerator);
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
    setState(321);
    enumerationConstant();
    setState(324);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::T__0) {
      setState(322);
      match(CStructParser::T__0);
      setState(323);
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
  enterRule(_localctx, 62, CStructParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
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
  enterRule(_localctx, 64, CStructParser::RuleTypeQualifier);
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
    setState(328);
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
  enterRule(_localctx, 66, CStructParser::RuleDeclarator);
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
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::Star) {
      setState(330);
      pointer();
    }
    setState(333);
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

CStructParser::ParameterTypeListContext* CStructParser::DirectDeclaratorContext::parameterTypeList() {
  return getRuleContext<CStructParser::ParameterTypeListContext>(0);
}

CStructParser::IdentifierListContext* CStructParser::DirectDeclaratorContext::identifierList() {
  return getRuleContext<CStructParser::IdentifierListContext>(0);
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
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, CStructParser::RuleDirectDeclarator, precedence);

    size_t _la = 0;

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
    setState(344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(336);
      match(CStructParser::Identifier);
      break;
    }

    case 2: {
      setState(337);
      match(CStructParser::LeftParen);
      setState(338);
      declarator();
      setState(339);
      match(CStructParser::RightParen);
      break;
    }

    case 3: {
      setState(341);
      match(CStructParser::Identifier);
      setState(342);
      match(CStructParser::Colon);
      setState(343);
      match(CStructParser::IntegerConstant);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(364);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(362);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(346);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(347);
          match(CStructParser::LeftBracket);
          setState(348);
          assignmentExpression();
          setState(349);
          match(CStructParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(351);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(352);
          match(CStructParser::LeftParen);
          setState(353);
          parameterTypeList();
          setState(354);
          match(CStructParser::RightParen);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(356);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(357);
          match(CStructParser::LeftParen);
          setState(359);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CStructParser::Identifier) {
            setState(358);
            identifierList();
          }
          setState(361);
          match(CStructParser::RightParen);
          break;
        }

        default:
          break;
        } 
      }
      setState(366);
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
  enterRule(_localctx, 70, CStructParser::RulePointer);
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
    setState(371); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(367);
      match(CStructParser::Star);
      setState(369);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2101264) != 0)) {
        setState(368);
        typeQualifierList();
      }
      setState(373); 
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
  enterRule(_localctx, 72, CStructParser::RuleTypeQualifierList);
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
    setState(376); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(375);
      typeQualifier();
      setState(378); 
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

//----------------- ParameterTypeListContext ------------------------------------------------------------------

CStructParser::ParameterTypeListContext::ParameterTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::ParameterListContext* CStructParser::ParameterTypeListContext::parameterList() {
  return getRuleContext<CStructParser::ParameterListContext>(0);
}

tree::TerminalNode* CStructParser::ParameterTypeListContext::Comma() {
  return getToken(CStructParser::Comma, 0);
}

tree::TerminalNode* CStructParser::ParameterTypeListContext::Ellipsis() {
  return getToken(CStructParser::Ellipsis, 0);
}


size_t CStructParser::ParameterTypeListContext::getRuleIndex() const {
  return CStructParser::RuleParameterTypeList;
}


std::any CStructParser::ParameterTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitParameterTypeList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ParameterTypeListContext* CStructParser::parameterTypeList() {
  ParameterTypeListContext *_localctx = _tracker.createInstance<ParameterTypeListContext>(_ctx, getState());
  enterRule(_localctx, 74, CStructParser::RuleParameterTypeList);
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
    setState(380);
    parameterList();
    setState(383);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CStructParser::Comma) {
      setState(381);
      match(CStructParser::Comma);
      setState(382);
      match(CStructParser::Ellipsis);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

CStructParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::ParameterDeclarationContext *> CStructParser::ParameterListContext::parameterDeclaration() {
  return getRuleContexts<CStructParser::ParameterDeclarationContext>();
}

CStructParser::ParameterDeclarationContext* CStructParser::ParameterListContext::parameterDeclaration(size_t i) {
  return getRuleContext<CStructParser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> CStructParser::ParameterListContext::Comma() {
  return getTokens(CStructParser::Comma);
}

tree::TerminalNode* CStructParser::ParameterListContext::Comma(size_t i) {
  return getToken(CStructParser::Comma, i);
}


size_t CStructParser::ParameterListContext::getRuleIndex() const {
  return CStructParser::RuleParameterList;
}


std::any CStructParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ParameterListContext* CStructParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 76, CStructParser::RuleParameterList);

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
    setState(385);
    parameterDeclaration();
    setState(390);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(386);
        match(CStructParser::Comma);
        setState(387);
        parameterDeclaration(); 
      }
      setState(392);
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

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CStructParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CStructParser::DeclarationSpecifiersContext* CStructParser::ParameterDeclarationContext::declarationSpecifiers() {
  return getRuleContext<CStructParser::DeclarationSpecifiersContext>(0);
}

CStructParser::DeclaratorContext* CStructParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CStructParser::DeclaratorContext>(0);
}

CStructParser::DeclarationSpecifiers2Context* CStructParser::ParameterDeclarationContext::declarationSpecifiers2() {
  return getRuleContext<CStructParser::DeclarationSpecifiers2Context>(0);
}

CStructParser::AbstractDeclaratorContext* CStructParser::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<CStructParser::AbstractDeclaratorContext>(0);
}


size_t CStructParser::ParameterDeclarationContext::getRuleIndex() const {
  return CStructParser::RuleParameterDeclaration;
}


std::any CStructParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::ParameterDeclarationContext* CStructParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, CStructParser::RuleParameterDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(393);
      declarationSpecifiers();
      setState(394);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(396);
      declarationSpecifiers2();
      setState(398);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 17200840704) != 0)) {
        setState(397);
        abstractDeclarator();
      }
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
  enterRule(_localctx, 80, CStructParser::RuleIdentifierList);
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
    setState(402);
    match(CStructParser::Identifier);
    setState(407);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CStructParser::Comma) {
      setState(403);
      match(CStructParser::Comma);
      setState(404);
      match(CStructParser::Identifier);
      setState(409);
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
  enterRule(_localctx, 82, CStructParser::RuleTypeName);
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
    setState(410);
    specifierQualifierList();
    setState(412);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17200840704) != 0)) {
      setState(411);
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
  enterRule(_localctx, 84, CStructParser::RuleAbstractDeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(414);
      pointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CStructParser::Star) {
        setState(415);
        pointer();
      }
      setState(418);
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

CStructParser::ParameterTypeListContext* CStructParser::DirectAbstractDeclaratorContext::parameterTypeList() {
  return getRuleContext<CStructParser::ParameterTypeListContext>(0);
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
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, CStructParser::RuleDirectAbstractDeclarator, precedence);

    size_t _la = 0;

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
    setState(435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(422);
      match(CStructParser::LeftParen);
      setState(423);
      abstractDeclarator();
      setState(424);
      match(CStructParser::RightParen);
      break;
    }

    case 2: {
      setState(426);
      match(CStructParser::LeftBracket);
      setState(427);
      assignmentExpression();
      setState(428);
      match(CStructParser::RightBracket);
      break;
    }

    case 3: {
      setState(430);
      match(CStructParser::LeftParen);
      setState(432);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 35184376283132) != 0)) {
        setState(431);
        parameterTypeList();
      }
      setState(434);
      match(CStructParser::RightParen);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(450);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(448);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(437);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(438);
          match(CStructParser::LeftBracket);
          setState(439);
          assignmentExpression();
          setState(440);
          match(CStructParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectAbstractDeclarator);
          setState(442);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(443);
          match(CStructParser::LeftParen);
          setState(445);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 35184376283132) != 0)) {
            setState(444);
            parameterTypeList();
          }
          setState(447);
          match(CStructParser::RightParen);
          break;
        }

        default:
          break;
        } 
      }
      setState(452);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
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
  enterRule(_localctx, 88, CStructParser::RuleTypedefName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
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
  enterRule(_localctx, 90, CStructParser::RuleCompilationUnit);
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
    setState(456);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 743269864570876) != 0)) {
      setState(455);
      translationUnit();
    }
    setState(458);
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
  enterRule(_localctx, 92, CStructParser::RuleTranslationUnit);
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
    setState(461); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(460);
      externalDeclaration();
      setState(463); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 743269864570876) != 0));
   
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
  enterRule(_localctx, 94, CStructParser::RuleExternalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CStructParser::Auto:
      case CStructParser::Char:
      case CStructParser::Const:
      case CStructParser::Double:
      case CStructParser::Enum:
      case CStructParser::Extern:
      case CStructParser::Float:
      case CStructParser::Int:
      case CStructParser::Long:
      case CStructParser::Register:
      case CStructParser::Restrict:
      case CStructParser::Short:
      case CStructParser::Signed:
      case CStructParser::Static:
      case CStructParser::Struct:
      case CStructParser::Typedef:
      case CStructParser::Union:
      case CStructParser::Unsigned:
      case CStructParser::Void:
      case CStructParser::Volatile:
      case CStructParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(465);
        declaration();
        break;
      }

      case CStructParser::MultiLineMacroDefine:
      case CStructParser::DirectiveDefine: {
        enterOuterAlt(_localctx, 2);
        setState(466);
        defineDecl();
        break;
      }

      case CStructParser::Semi: {
        enterOuterAlt(_localctx, 3);
        setState(467);
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
  enterRule(_localctx, 96, CStructParser::RuleDefineDecl);
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
    setState(470);
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

//----------------- DeclarationListContext ------------------------------------------------------------------

CStructParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CStructParser::DeclarationContext *> CStructParser::DeclarationListContext::declaration() {
  return getRuleContexts<CStructParser::DeclarationContext>();
}

CStructParser::DeclarationContext* CStructParser::DeclarationListContext::declaration(size_t i) {
  return getRuleContext<CStructParser::DeclarationContext>(i);
}


size_t CStructParser::DeclarationListContext::getRuleIndex() const {
  return CStructParser::RuleDeclarationList;
}


std::any CStructParser::DeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CStructVisitor*>(visitor))
    return parserVisitor->visitDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

CStructParser::DeclarationListContext* CStructParser::declarationList() {
  DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 98, CStructParser::RuleDeclarationList);
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
    setState(473); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(472);
      declaration();
      setState(475); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35184376283132) != 0));
   
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
    case 34: return directDeclaratorSempred(antlrcpp::downCast<DirectDeclaratorContext *>(context), predicateIndex);
    case 43: return directAbstractDeclaratorSempred(antlrcpp::downCast<DirectAbstractDeclaratorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CStructParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CStructParser::directAbstractDeclaratorSempred(DirectAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

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
