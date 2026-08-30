// SPDX-License-Identifier: Apache-2.0


// Generated from SubstraitType.g4 by ANTLR 4.13.2


#include "SubstraitTypeListener.h"
#include "SubstraitTypeVisitor.h"

#include "SubstraitTypeParser.h"


using namespace antlrcpp;
using namespace substraittype;

using namespace antlr4;

namespace {

struct SubstraitTypeParserStaticData final {
  SubstraitTypeParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SubstraitTypeParserStaticData(const SubstraitTypeParserStaticData&) = delete;
  SubstraitTypeParserStaticData(SubstraitTypeParserStaticData&&) = delete;
  SubstraitTypeParserStaticData& operator=(const SubstraitTypeParserStaticData&) = delete;
  SubstraitTypeParserStaticData& operator=(SubstraitTypeParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag substraittypeParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<SubstraitTypeParserStaticData> substraittypeParserStaticData = nullptr;

void substraittypeParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (substraittypeParserStaticData != nullptr) {
    return;
  }
#else
  assert(substraittypeParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SubstraitTypeParserStaticData>(
    std::vector<std::string>{
      "startRule", "typeStatement", "scalarType", "parameterizedType", "funcParams", 
      "numericParameter", "anyType", "typeDef", "expr"
    },
    std::vector<std::string>{
      "", "", "", "", "'IF'", "'THEN'", "'ELSE'", "'FUNC'", "'BOOLEAN'", 
      "'I8'", "'I16'", "'I32'", "'I64'", "'FP32'", "'FP64'", "'STRING'", 
      "'BINARY'", "'DATE'", "'INTERVAL_YEAR'", "'INTERVAL_DAY'", "'INTERVAL_COMPOUND'", 
      "'UUID'", "'DECIMAL'", "'PRECISION_TIME'", "'PRECISION_TIMESTAMP'", 
      "'PRECISION_TIMESTAMP_TZ'", "'FIXEDCHAR'", "'VARCHAR'", "'FIXEDBINARY'", 
      "'STRUCT'", "'NSTRUCT'", "'LIST'", "'MAP'", "'U!'", "'BOOL'", "'STR'", 
      "'VBIN'", "'IYEAR'", "'IDAY'", "'ICOMPOUND'", "'DEC'", "'PT'", "'PTS'", 
      "'PTSTZ'", "'FCHAR'", "'VCHAR'", "'FBIN'", "'ANY'", "", "'::'", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'='", "'!='", "'>='", "'<='", "'>'", 
      "'<'", "'!'", "", "", "'('", "')'", "'['", "']'", "','", "':'", "'\\u003F'", 
      "'#'", "'.'", "'AND'", "'OR'", "':='", "'->'"
    },
    std::vector<std::string>{
      "", "LineComment", "BlockComment", "Whitespace", "If", "Then", "Else", 
      "Func", "Boolean", "I8", "I16", "I32", "I64", "FP32", "FP64", "String", 
      "Binary", "Date", "Interval_Year", "Interval_Day", "Interval_Compound", 
      "UUID", "Decimal", "Precision_Time", "Precision_Timestamp", "Precision_Timestamp_TZ", 
      "FixedChar", "VarChar", "FixedBinary", "Struct", "NStruct", "List", 
      "Map", "UserDefined", "Bool", "Str", "VBin", "IYear", "IDay", "ICompound", 
      "Dec", "PT", "PTs", "PTsTZ", "FChar", "VChar", "FBin", "Any", "AnyVar", 
      "DoubleColon", "Plus", "Minus", "Asterisk", "ForwardSlash", "Percent", 
      "Eq", "Ne", "Gte", "Lte", "Gt", "Lt", "Bang", "OAngleBracket", "CAngleBracket", 
      "OParen", "CParen", "OBracket", "CBracket", "Comma", "Colon", "QMark", 
      "Hash", "Dot", "And", "Or", "Assign", "Arrow", "Number", "Identifier", 
      "Newline"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,79,328,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,3,2,37,8,2,1,3,1,3,3,3,41,8,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	3,3,49,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,57,8,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	3,3,65,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,75,8,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,83,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,91,8,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,99,8,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,107,8,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,3,3,115,8,3,1,3,1,3,1,3,1,3,5,3,121,8,3,10,3,12,3,124,9,3,1,
  	3,1,3,1,3,1,3,3,3,130,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,140,8,3,
  	10,3,12,3,143,9,3,1,3,1,3,1,3,1,3,3,3,149,8,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	3,3,157,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,167,8,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,3,3,177,8,3,1,3,1,3,1,3,3,3,182,8,3,1,3,1,3,1,3,1,3,
  	5,3,188,8,3,10,3,12,3,191,9,3,1,3,1,3,3,3,195,8,3,3,3,197,8,3,1,4,1,4,
  	1,4,1,4,1,4,5,4,204,8,4,10,4,12,4,207,9,4,1,4,1,4,3,4,211,8,4,1,5,1,5,
  	1,5,3,5,216,8,5,1,6,1,6,3,6,220,8,6,1,6,1,6,3,6,224,8,6,3,6,226,8,6,1,
  	7,1,7,3,7,230,8,7,1,7,1,7,3,7,234,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,4,8,245,8,8,11,8,12,8,246,1,8,1,8,1,8,1,8,4,8,253,8,8,11,8,12,8,254,
  	5,8,257,8,8,10,8,12,8,260,9,8,1,8,1,8,5,8,264,8,8,10,8,12,8,267,9,8,1,
  	8,1,8,1,8,1,8,3,8,273,8,8,1,8,1,8,1,8,1,8,1,8,5,8,280,8,8,10,8,12,8,283,
  	9,8,3,8,285,8,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,297,8,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,5,8,323,8,8,10,8,12,8,326,9,8,1,8,0,1,16,9,0,
  	2,4,6,8,10,12,14,16,0,4,1,0,52,53,1,0,50,51,1,0,57,60,1,0,55,56,394,0,
  	18,1,0,0,0,2,21,1,0,0,0,4,36,1,0,0,0,6,196,1,0,0,0,8,210,1,0,0,0,10,215,
  	1,0,0,0,12,225,1,0,0,0,14,233,1,0,0,0,16,296,1,0,0,0,18,19,3,16,8,0,19,
  	20,5,0,0,1,20,1,1,0,0,0,21,22,3,14,7,0,22,23,5,0,0,1,23,3,1,0,0,0,24,
  	37,5,8,0,0,25,37,5,9,0,0,26,37,5,10,0,0,27,37,5,11,0,0,28,37,5,12,0,0,
  	29,37,5,13,0,0,30,37,5,14,0,0,31,37,5,15,0,0,32,37,5,16,0,0,33,37,5,17,
  	0,0,34,37,5,18,0,0,35,37,5,21,0,0,36,24,1,0,0,0,36,25,1,0,0,0,36,26,1,
  	0,0,0,36,27,1,0,0,0,36,28,1,0,0,0,36,29,1,0,0,0,36,30,1,0,0,0,36,31,1,
  	0,0,0,36,32,1,0,0,0,36,33,1,0,0,0,36,34,1,0,0,0,36,35,1,0,0,0,37,5,1,
  	0,0,0,38,40,5,26,0,0,39,41,5,70,0,0,40,39,1,0,0,0,40,41,1,0,0,0,41,42,
  	1,0,0,0,42,43,5,60,0,0,43,44,3,10,5,0,44,45,5,59,0,0,45,197,1,0,0,0,46,
  	48,5,27,0,0,47,49,5,70,0,0,48,47,1,0,0,0,48,49,1,0,0,0,49,50,1,0,0,0,
  	50,51,5,60,0,0,51,52,3,10,5,0,52,53,5,59,0,0,53,197,1,0,0,0,54,56,5,28,
  	0,0,55,57,5,70,0,0,56,55,1,0,0,0,56,57,1,0,0,0,57,58,1,0,0,0,58,59,5,
  	60,0,0,59,60,3,10,5,0,60,61,5,59,0,0,61,197,1,0,0,0,62,64,5,22,0,0,63,
  	65,5,70,0,0,64,63,1,0,0,0,64,65,1,0,0,0,65,66,1,0,0,0,66,67,5,60,0,0,
  	67,68,3,10,5,0,68,69,5,68,0,0,69,70,3,10,5,0,70,71,5,59,0,0,71,197,1,
  	0,0,0,72,74,5,19,0,0,73,75,5,70,0,0,74,73,1,0,0,0,74,75,1,0,0,0,75,76,
  	1,0,0,0,76,77,5,60,0,0,77,78,3,10,5,0,78,79,5,59,0,0,79,197,1,0,0,0,80,
  	82,5,20,0,0,81,83,5,70,0,0,82,81,1,0,0,0,82,83,1,0,0,0,83,84,1,0,0,0,
  	84,85,5,60,0,0,85,86,3,10,5,0,86,87,5,59,0,0,87,197,1,0,0,0,88,90,5,23,
  	0,0,89,91,5,70,0,0,90,89,1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,0,92,93,5,
  	60,0,0,93,94,3,10,5,0,94,95,5,59,0,0,95,197,1,0,0,0,96,98,5,24,0,0,97,
  	99,5,70,0,0,98,97,1,0,0,0,98,99,1,0,0,0,99,100,1,0,0,0,100,101,5,60,0,
  	0,101,102,3,10,5,0,102,103,5,59,0,0,103,197,1,0,0,0,104,106,5,25,0,0,
  	105,107,5,70,0,0,106,105,1,0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,
  	109,5,60,0,0,109,110,3,10,5,0,110,111,5,59,0,0,111,197,1,0,0,0,112,114,
  	5,29,0,0,113,115,5,70,0,0,114,113,1,0,0,0,114,115,1,0,0,0,115,116,1,0,
  	0,0,116,117,5,60,0,0,117,122,3,16,8,0,118,119,5,68,0,0,119,121,3,16,8,
  	0,120,118,1,0,0,0,121,124,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,
  	125,1,0,0,0,124,122,1,0,0,0,125,126,5,59,0,0,126,197,1,0,0,0,127,129,
  	5,30,0,0,128,130,5,70,0,0,129,128,1,0,0,0,129,130,1,0,0,0,130,131,1,0,
  	0,0,131,132,5,60,0,0,132,133,5,78,0,0,133,134,5,69,0,0,134,141,3,16,8,
  	0,135,136,5,68,0,0,136,137,5,78,0,0,137,138,5,69,0,0,138,140,3,16,8,0,
  	139,135,1,0,0,0,140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,144,
  	1,0,0,0,143,141,1,0,0,0,144,145,5,59,0,0,145,197,1,0,0,0,146,148,5,31,
  	0,0,147,149,5,70,0,0,148,147,1,0,0,0,148,149,1,0,0,0,149,150,1,0,0,0,
  	150,151,5,60,0,0,151,152,3,16,8,0,152,153,5,59,0,0,153,197,1,0,0,0,154,
  	156,5,32,0,0,155,157,5,70,0,0,156,155,1,0,0,0,156,157,1,0,0,0,157,158,
  	1,0,0,0,158,159,5,60,0,0,159,160,3,16,8,0,160,161,5,68,0,0,161,162,3,
  	16,8,0,162,163,5,59,0,0,163,197,1,0,0,0,164,166,5,7,0,0,165,167,5,70,
  	0,0,166,165,1,0,0,0,166,167,1,0,0,0,167,168,1,0,0,0,168,169,5,60,0,0,
  	169,170,3,8,4,0,170,171,5,76,0,0,171,172,3,16,8,0,172,173,5,59,0,0,173,
  	197,1,0,0,0,174,175,5,78,0,0,175,177,5,72,0,0,176,174,1,0,0,0,176,177,
  	1,0,0,0,177,178,1,0,0,0,178,179,5,33,0,0,179,181,5,78,0,0,180,182,5,70,
  	0,0,181,180,1,0,0,0,181,182,1,0,0,0,182,194,1,0,0,0,183,184,5,60,0,0,
  	184,189,3,16,8,0,185,186,5,68,0,0,186,188,3,16,8,0,187,185,1,0,0,0,188,
  	191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,189,1,
  	0,0,0,192,193,5,59,0,0,193,195,1,0,0,0,194,183,1,0,0,0,194,195,1,0,0,
  	0,195,197,1,0,0,0,196,38,1,0,0,0,196,46,1,0,0,0,196,54,1,0,0,0,196,62,
  	1,0,0,0,196,72,1,0,0,0,196,80,1,0,0,0,196,88,1,0,0,0,196,96,1,0,0,0,196,
  	104,1,0,0,0,196,112,1,0,0,0,196,127,1,0,0,0,196,146,1,0,0,0,196,154,1,
  	0,0,0,196,164,1,0,0,0,196,176,1,0,0,0,197,7,1,0,0,0,198,211,3,16,8,0,
  	199,200,5,64,0,0,200,205,3,16,8,0,201,202,5,68,0,0,202,204,3,16,8,0,203,
  	201,1,0,0,0,204,207,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,208,1,
  	0,0,0,207,205,1,0,0,0,208,209,5,65,0,0,209,211,1,0,0,0,210,198,1,0,0,
  	0,210,199,1,0,0,0,211,9,1,0,0,0,212,216,5,77,0,0,213,216,5,78,0,0,214,
  	216,3,16,8,0,215,212,1,0,0,0,215,213,1,0,0,0,215,214,1,0,0,0,216,11,1,
  	0,0,0,217,219,5,47,0,0,218,220,5,70,0,0,219,218,1,0,0,0,219,220,1,0,0,
  	0,220,226,1,0,0,0,221,223,5,48,0,0,222,224,5,70,0,0,223,222,1,0,0,0,223,
  	224,1,0,0,0,224,226,1,0,0,0,225,217,1,0,0,0,225,221,1,0,0,0,226,13,1,
  	0,0,0,227,229,3,4,2,0,228,230,5,70,0,0,229,228,1,0,0,0,229,230,1,0,0,
  	0,230,234,1,0,0,0,231,234,3,6,3,0,232,234,3,12,6,0,233,227,1,0,0,0,233,
  	231,1,0,0,0,233,232,1,0,0,0,234,15,1,0,0,0,235,236,6,8,-1,0,236,237,5,
  	64,0,0,237,238,3,16,8,0,238,239,5,65,0,0,239,297,1,0,0,0,240,241,5,78,
  	0,0,241,242,5,55,0,0,242,244,3,16,8,0,243,245,5,79,0,0,244,243,1,0,0,
  	0,245,246,1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,0,247,258,1,0,0,0,248,
  	249,5,78,0,0,249,250,5,55,0,0,250,252,3,16,8,0,251,253,5,79,0,0,252,251,
  	1,0,0,0,253,254,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,255,257,1,0,0,
  	0,256,248,1,0,0,0,257,260,1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,
  	261,1,0,0,0,260,258,1,0,0,0,261,265,3,14,7,0,262,264,5,79,0,0,263,262,
  	1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,297,1,0,0,
  	0,267,265,1,0,0,0,268,297,3,14,7,0,269,297,5,77,0,0,270,272,5,78,0,0,
  	271,273,5,70,0,0,272,271,1,0,0,0,272,273,1,0,0,0,273,297,1,0,0,0,274,
  	275,5,78,0,0,275,284,5,64,0,0,276,281,3,16,8,0,277,278,5,68,0,0,278,280,
  	3,16,8,0,279,277,1,0,0,0,280,283,1,0,0,0,281,279,1,0,0,0,281,282,1,0,
  	0,0,282,285,1,0,0,0,283,281,1,0,0,0,284,276,1,0,0,0,284,285,1,0,0,0,285,
  	286,1,0,0,0,286,297,5,65,0,0,287,288,5,4,0,0,288,289,3,16,8,0,289,290,
  	5,5,0,0,290,291,3,16,8,0,291,292,5,6,0,0,292,293,3,16,8,3,293,297,1,0,
  	0,0,294,295,5,61,0,0,295,297,3,16,8,2,296,235,1,0,0,0,296,240,1,0,0,0,
  	296,268,1,0,0,0,296,269,1,0,0,0,296,270,1,0,0,0,296,274,1,0,0,0,296,287,
  	1,0,0,0,296,294,1,0,0,0,297,324,1,0,0,0,298,299,10,9,0,0,299,300,7,0,
  	0,0,300,323,3,16,8,10,301,302,10,8,0,0,302,303,7,1,0,0,303,323,3,16,8,
  	9,304,305,10,7,0,0,305,306,7,2,0,0,306,323,3,16,8,8,307,308,10,6,0,0,
  	308,309,7,3,0,0,309,323,3,16,8,7,310,311,10,5,0,0,311,312,5,73,0,0,312,
  	323,3,16,8,6,313,314,10,4,0,0,314,315,5,74,0,0,315,323,3,16,8,5,316,317,
  	10,1,0,0,317,318,5,70,0,0,318,319,3,16,8,0,319,320,5,69,0,0,320,321,3,
  	16,8,2,321,323,1,0,0,0,322,298,1,0,0,0,322,301,1,0,0,0,322,304,1,0,0,
  	0,322,307,1,0,0,0,322,310,1,0,0,0,322,313,1,0,0,0,322,316,1,0,0,0,323,
  	326,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,17,1,0,0,0,326,324,1,
  	0,0,0,40,36,40,48,56,64,74,82,90,98,106,114,122,129,141,148,156,166,176,
  	181,189,194,196,205,210,215,219,223,225,229,233,246,254,258,265,272,281,
  	284,296,322,324
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  substraittypeParserStaticData = std::move(staticData);
}

}

SubstraitTypeParser::SubstraitTypeParser(TokenStream *input) : SubstraitTypeParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SubstraitTypeParser::SubstraitTypeParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SubstraitTypeParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *substraittypeParserStaticData->atn, substraittypeParserStaticData->decisionToDFA, substraittypeParserStaticData->sharedContextCache, options);
}

SubstraitTypeParser::~SubstraitTypeParser() {
  delete _interpreter;
}

const atn::ATN& SubstraitTypeParser::getATN() const {
  return *substraittypeParserStaticData->atn;
}

std::string SubstraitTypeParser::getGrammarFileName() const {
  return "SubstraitType.g4";
}

const std::vector<std::string>& SubstraitTypeParser::getRuleNames() const {
  return substraittypeParserStaticData->ruleNames;
}

const dfa::Vocabulary& SubstraitTypeParser::getVocabulary() const {
  return substraittypeParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SubstraitTypeParser::getSerializedATN() const {
  return substraittypeParserStaticData->serializedATN;
}


//----------------- StartRuleContext ------------------------------------------------------------------

SubstraitTypeParser::StartRuleContext::StartRuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::StartRuleContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::StartRuleContext::EOF() {
  return getToken(SubstraitTypeParser::EOF, 0);
}


size_t SubstraitTypeParser::StartRuleContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleStartRule;
}

void SubstraitTypeParser::StartRuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStartRule(this);
}

void SubstraitTypeParser::StartRuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStartRule(this);
}


std::any SubstraitTypeParser::StartRuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitStartRule(this);
  else
    return visitor->visitChildren(this);
}

SubstraitTypeParser::StartRuleContext* SubstraitTypeParser::startRule() {
  StartRuleContext *_localctx = _tracker.createInstance<StartRuleContext>(_ctx, getState());
  enterRule(_localctx, 0, SubstraitTypeParser::RuleStartRule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    expr(0);
    setState(19);
    match(SubstraitTypeParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeStatementContext ------------------------------------------------------------------

SubstraitTypeParser::TypeStatementContext::TypeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SubstraitTypeParser::TypeDefContext* SubstraitTypeParser::TypeStatementContext::typeDef() {
  return getRuleContext<SubstraitTypeParser::TypeDefContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::TypeStatementContext::EOF() {
  return getToken(SubstraitTypeParser::EOF, 0);
}


size_t SubstraitTypeParser::TypeStatementContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleTypeStatement;
}

void SubstraitTypeParser::TypeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeStatement(this);
}

void SubstraitTypeParser::TypeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeStatement(this);
}


std::any SubstraitTypeParser::TypeStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitTypeStatement(this);
  else
    return visitor->visitChildren(this);
}

SubstraitTypeParser::TypeStatementContext* SubstraitTypeParser::typeStatement() {
  TypeStatementContext *_localctx = _tracker.createInstance<TypeStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SubstraitTypeParser::RuleTypeStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    typeDef();
    setState(22);
    match(SubstraitTypeParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarTypeContext ------------------------------------------------------------------

SubstraitTypeParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SubstraitTypeParser::ScalarTypeContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleScalarType;
}

void SubstraitTypeParser::ScalarTypeContext::copyFrom(ScalarTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DateContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::DateContext::Date() {
  return getToken(SubstraitTypeParser::Date, 0);
}

SubstraitTypeParser::DateContext::DateContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::DateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDate(this);
}
void SubstraitTypeParser::DateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDate(this);
}

std::any SubstraitTypeParser::DateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitDate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::BooleanContext::Boolean() {
  return getToken(SubstraitTypeParser::Boolean, 0);
}

SubstraitTypeParser::BooleanContext::BooleanContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::BooleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean(this);
}
void SubstraitTypeParser::BooleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean(this);
}

std::any SubstraitTypeParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::StringContext::String() {
  return getToken(SubstraitTypeParser::String, 0);
}

SubstraitTypeParser::StringContext::StringContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void SubstraitTypeParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

std::any SubstraitTypeParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- I64Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::I64Context::I64() {
  return getToken(SubstraitTypeParser::I64, 0);
}

SubstraitTypeParser::I64Context::I64Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::I64Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI64(this);
}
void SubstraitTypeParser::I64Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI64(this);
}

std::any SubstraitTypeParser::I64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitI64(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::BinaryContext::Binary() {
  return getToken(SubstraitTypeParser::Binary, 0);
}

SubstraitTypeParser::BinaryContext::BinaryContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::BinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary(this);
}
void SubstraitTypeParser::BinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary(this);
}

std::any SubstraitTypeParser::BinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fp64Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::Fp64Context::FP64() {
  return getToken(SubstraitTypeParser::FP64, 0);
}

SubstraitTypeParser::Fp64Context::Fp64Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::Fp64Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFp64(this);
}
void SubstraitTypeParser::Fp64Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFp64(this);
}

std::any SubstraitTypeParser::Fp64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFp64(this);
  else
    return visitor->visitChildren(this);
}
//----------------- I32Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::I32Context::I32() {
  return getToken(SubstraitTypeParser::I32, 0);
}

SubstraitTypeParser::I32Context::I32Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::I32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI32(this);
}
void SubstraitTypeParser::I32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI32(this);
}

std::any SubstraitTypeParser::I32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitI32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fp32Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::Fp32Context::FP32() {
  return getToken(SubstraitTypeParser::FP32, 0);
}

SubstraitTypeParser::Fp32Context::Fp32Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::Fp32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFp32(this);
}
void SubstraitTypeParser::Fp32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFp32(this);
}

std::any SubstraitTypeParser::Fp32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFp32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntervalYearContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::IntervalYearContext::Interval_Year() {
  return getToken(SubstraitTypeParser::Interval_Year, 0);
}

SubstraitTypeParser::IntervalYearContext::IntervalYearContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::IntervalYearContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntervalYear(this);
}
void SubstraitTypeParser::IntervalYearContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntervalYear(this);
}

std::any SubstraitTypeParser::IntervalYearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitIntervalYear(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UuidContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::UuidContext::UUID() {
  return getToken(SubstraitTypeParser::UUID, 0);
}

SubstraitTypeParser::UuidContext::UuidContext(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::UuidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUuid(this);
}
void SubstraitTypeParser::UuidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUuid(this);
}

std::any SubstraitTypeParser::UuidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitUuid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- I8Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::I8Context::I8() {
  return getToken(SubstraitTypeParser::I8, 0);
}

SubstraitTypeParser::I8Context::I8Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::I8Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI8(this);
}
void SubstraitTypeParser::I8Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI8(this);
}

std::any SubstraitTypeParser::I8Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitI8(this);
  else
    return visitor->visitChildren(this);
}
//----------------- I16Context ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::I16Context::I16() {
  return getToken(SubstraitTypeParser::I16, 0);
}

SubstraitTypeParser::I16Context::I16Context(ScalarTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::I16Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI16(this);
}
void SubstraitTypeParser::I16Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI16(this);
}

std::any SubstraitTypeParser::I16Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitI16(this);
  else
    return visitor->visitChildren(this);
}
SubstraitTypeParser::ScalarTypeContext* SubstraitTypeParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 4, SubstraitTypeParser::RuleScalarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SubstraitTypeParser::Boolean: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::BooleanContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(24);
        match(SubstraitTypeParser::Boolean);
        break;
      }

      case SubstraitTypeParser::I8: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::I8Context>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(25);
        match(SubstraitTypeParser::I8);
        break;
      }

      case SubstraitTypeParser::I16: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::I16Context>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(26);
        match(SubstraitTypeParser::I16);
        break;
      }

      case SubstraitTypeParser::I32: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::I32Context>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(27);
        match(SubstraitTypeParser::I32);
        break;
      }

      case SubstraitTypeParser::I64: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::I64Context>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(28);
        match(SubstraitTypeParser::I64);
        break;
      }

      case SubstraitTypeParser::FP32: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::Fp32Context>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(29);
        match(SubstraitTypeParser::FP32);
        break;
      }

      case SubstraitTypeParser::FP64: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::Fp64Context>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(30);
        match(SubstraitTypeParser::FP64);
        break;
      }

      case SubstraitTypeParser::String: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(31);
        match(SubstraitTypeParser::String);
        break;
      }

      case SubstraitTypeParser::Binary: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::BinaryContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(32);
        match(SubstraitTypeParser::Binary);
        break;
      }

      case SubstraitTypeParser::Date: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::DateContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(33);
        match(SubstraitTypeParser::Date);
        break;
      }

      case SubstraitTypeParser::Interval_Year: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::IntervalYearContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(34);
        match(SubstraitTypeParser::Interval_Year);
        break;
      }

      case SubstraitTypeParser::UUID: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::UuidContext>(_localctx);
        enterOuterAlt(_localctx, 12);
        setState(35);
        match(SubstraitTypeParser::UUID);
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

//----------------- ParameterizedTypeContext ------------------------------------------------------------------

SubstraitTypeParser::ParameterizedTypeContext::ParameterizedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SubstraitTypeParser::ParameterizedTypeContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleParameterizedType;
}

void SubstraitTypeParser::ParameterizedTypeContext::copyFrom(ParameterizedTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StructContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::StructContext::Struct() {
  return getToken(SubstraitTypeParser::Struct, 0);
}

tree::TerminalNode* SubstraitTypeParser::StructContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::StructContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::StructContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::StructContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::StructContext::Comma() {
  return getTokens(SubstraitTypeParser::Comma);
}

tree::TerminalNode* SubstraitTypeParser::StructContext::Comma(size_t i) {
  return getToken(SubstraitTypeParser::Comma, i);
}

tree::TerminalNode* SubstraitTypeParser::StructContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::StructContext::StructContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::StructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct(this);
}
void SubstraitTypeParser::StructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct(this);
}

std::any SubstraitTypeParser::StructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitStruct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrecisionTimestampTZContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampTZContext::Precision_Timestamp_TZ() {
  return getToken(SubstraitTypeParser::Precision_Timestamp_TZ, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampTZContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampTZContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::PrecisionTimestampTZContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampTZContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::PrecisionTimestampTZContext::PrecisionTimestampTZContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::PrecisionTimestampTZContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrecisionTimestampTZ(this);
}
void SubstraitTypeParser::PrecisionTimestampTZContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrecisionTimestampTZ(this);
}

std::any SubstraitTypeParser::PrecisionTimestampTZContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestampTZ(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NStructContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::NStructContext::NStruct() {
  return getToken(SubstraitTypeParser::NStruct, 0);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::NStructContext::Identifier() {
  return getTokens(SubstraitTypeParser::Identifier);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::Identifier(size_t i) {
  return getToken(SubstraitTypeParser::Identifier, i);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::NStructContext::Colon() {
  return getTokens(SubstraitTypeParser::Colon);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::Colon(size_t i) {
  return getToken(SubstraitTypeParser::Colon, i);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::NStructContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::NStructContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::NStructContext::Comma() {
  return getTokens(SubstraitTypeParser::Comma);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::Comma(size_t i) {
  return getToken(SubstraitTypeParser::Comma, i);
}

tree::TerminalNode* SubstraitTypeParser::NStructContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::NStructContext::NStructContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::NStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNStruct(this);
}
void SubstraitTypeParser::NStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNStruct(this);
}

std::any SubstraitTypeParser::NStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitNStruct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FixedBinaryContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::FixedBinaryContext::FixedBinary() {
  return getToken(SubstraitTypeParser::FixedBinary, 0);
}

tree::TerminalNode* SubstraitTypeParser::FixedBinaryContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::FixedBinaryContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::FixedBinaryContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::FixedBinaryContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::FixedBinaryContext::FixedBinaryContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::FixedBinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedBinary(this);
}
void SubstraitTypeParser::FixedBinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedBinary(this);
}

std::any SubstraitTypeParser::FixedBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFixedBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UserDefinedContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::UserDefined() {
  return getToken(SubstraitTypeParser::UserDefined, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::UserDefinedContext::Identifier() {
  return getTokens(SubstraitTypeParser::Identifier);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::Identifier(size_t i) {
  return getToken(SubstraitTypeParser::Identifier, i);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::Dot() {
  return getToken(SubstraitTypeParser::Dot, 0);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::UserDefinedContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::UserDefinedContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::UserDefinedContext::Comma() {
  return getTokens(SubstraitTypeParser::Comma);
}

tree::TerminalNode* SubstraitTypeParser::UserDefinedContext::Comma(size_t i) {
  return getToken(SubstraitTypeParser::Comma, i);
}

SubstraitTypeParser::UserDefinedContext::UserDefinedContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::UserDefinedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserDefined(this);
}
void SubstraitTypeParser::UserDefinedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserDefined(this);
}

std::any SubstraitTypeParser::UserDefinedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitUserDefined(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FixedCharContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::FixedCharContext::FixedChar() {
  return getToken(SubstraitTypeParser::FixedChar, 0);
}

tree::TerminalNode* SubstraitTypeParser::FixedCharContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::FixedCharContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::FixedCharContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::FixedCharContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::FixedCharContext::FixedCharContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::FixedCharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedChar(this);
}
void SubstraitTypeParser::FixedCharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedChar(this);
}

std::any SubstraitTypeParser::FixedCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFixedChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::ListContext::List() {
  return getToken(SubstraitTypeParser::List, 0);
}

tree::TerminalNode* SubstraitTypeParser::ListContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::ListContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::ListContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

tree::TerminalNode* SubstraitTypeParser::ListContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::ListContext::ListContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}
void SubstraitTypeParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

std::any SubstraitTypeParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrecisionIntervalDayContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalDayContext::Interval_Day() {
  return getToken(SubstraitTypeParser::Interval_Day, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalDayContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalDayContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::PrecisionIntervalDayContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalDayContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::PrecisionIntervalDayContext::PrecisionIntervalDayContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::PrecisionIntervalDayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrecisionIntervalDay(this);
}
void SubstraitTypeParser::PrecisionIntervalDayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrecisionIntervalDay(this);
}

std::any SubstraitTypeParser::PrecisionIntervalDayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitPrecisionIntervalDay(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::FuncContext::Func() {
  return getToken(SubstraitTypeParser::Func, 0);
}

tree::TerminalNode* SubstraitTypeParser::FuncContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::FuncContext::Arrow() {
  return getToken(SubstraitTypeParser::Arrow, 0);
}

tree::TerminalNode* SubstraitTypeParser::FuncContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::FuncParamsContext* SubstraitTypeParser::FuncContext::funcParams() {
  return getRuleContext<SubstraitTypeParser::FuncParamsContext>(0);
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::FuncContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::FuncContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::FuncContext::FuncContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::FuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc(this);
}
void SubstraitTypeParser::FuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc(this);
}

std::any SubstraitTypeParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarCharContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::VarCharContext::VarChar() {
  return getToken(SubstraitTypeParser::VarChar, 0);
}

tree::TerminalNode* SubstraitTypeParser::VarCharContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::VarCharContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::VarCharContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::VarCharContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::VarCharContext::VarCharContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::VarCharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarChar(this);
}
void SubstraitTypeParser::VarCharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarChar(this);
}

std::any SubstraitTypeParser::VarCharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitVarChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrecisionIntervalCompoundContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalCompoundContext::Interval_Compound() {
  return getToken(SubstraitTypeParser::Interval_Compound, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalCompoundContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalCompoundContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::PrecisionIntervalCompoundContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionIntervalCompoundContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::PrecisionIntervalCompoundContext::PrecisionIntervalCompoundContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::PrecisionIntervalCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrecisionIntervalCompound(this);
}
void SubstraitTypeParser::PrecisionIntervalCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrecisionIntervalCompound(this);
}

std::any SubstraitTypeParser::PrecisionIntervalCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitPrecisionIntervalCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrecisionTimestampContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampContext::Precision_Timestamp() {
  return getToken(SubstraitTypeParser::Precision_Timestamp, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::PrecisionTimestampContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimestampContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::PrecisionTimestampContext::PrecisionTimestampContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::PrecisionTimestampContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrecisionTimestamp(this);
}
void SubstraitTypeParser::PrecisionTimestampContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrecisionTimestamp(this);
}

std::any SubstraitTypeParser::PrecisionTimestampContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestamp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecimalContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::DecimalContext::Decimal() {
  return getToken(SubstraitTypeParser::Decimal, 0);
}

tree::TerminalNode* SubstraitTypeParser::DecimalContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::DecimalContext::Comma() {
  return getToken(SubstraitTypeParser::Comma, 0);
}

tree::TerminalNode* SubstraitTypeParser::DecimalContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

std::vector<SubstraitTypeParser::NumericParameterContext *> SubstraitTypeParser::DecimalContext::numericParameter() {
  return getRuleContexts<SubstraitTypeParser::NumericParameterContext>();
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::DecimalContext::numericParameter(size_t i) {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::DecimalContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::DecimalContext::DecimalContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::DecimalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimal(this);
}
void SubstraitTypeParser::DecimalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimal(this);
}

std::any SubstraitTypeParser::DecimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitDecimal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrecisionTimeContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::PrecisionTimeContext::Precision_Time() {
  return getToken(SubstraitTypeParser::Precision_Time, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimeContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimeContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::PrecisionTimeContext::numericParameter() {
  return getRuleContext<SubstraitTypeParser::NumericParameterContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::PrecisionTimeContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::PrecisionTimeContext::PrecisionTimeContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::PrecisionTimeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrecisionTime(this);
}
void SubstraitTypeParser::PrecisionTimeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrecisionTime(this);
}

std::any SubstraitTypeParser::PrecisionTimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitPrecisionTime(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MapContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::MapContext::Map() {
  return getToken(SubstraitTypeParser::Map, 0);
}

tree::TerminalNode* SubstraitTypeParser::MapContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::MapContext::Comma() {
  return getToken(SubstraitTypeParser::Comma, 0);
}

tree::TerminalNode* SubstraitTypeParser::MapContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::MapContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::MapContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::MapContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::MapContext::MapContext(ParameterizedTypeContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::MapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMap(this);
}
void SubstraitTypeParser::MapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMap(this);
}

std::any SubstraitTypeParser::MapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitMap(this);
  else
    return visitor->visitChildren(this);
}
SubstraitTypeParser::ParameterizedTypeContext* SubstraitTypeParser::parameterizedType() {
  ParameterizedTypeContext *_localctx = _tracker.createInstance<ParameterizedTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, SubstraitTypeParser::RuleParameterizedType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SubstraitTypeParser::FixedChar: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::FixedCharContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(38);
        match(SubstraitTypeParser::FixedChar);
        setState(40);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(39);
          antlrcpp::downCast<FixedCharContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(42);
        match(SubstraitTypeParser::Lt);
        setState(43);
        antlrcpp::downCast<FixedCharContext *>(_localctx)->length = numericParameter();
        setState(44);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::VarChar: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::VarCharContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(46);
        match(SubstraitTypeParser::VarChar);
        setState(48);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(47);
          antlrcpp::downCast<VarCharContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(50);
        match(SubstraitTypeParser::Lt);
        setState(51);
        antlrcpp::downCast<VarCharContext *>(_localctx)->length = numericParameter();
        setState(52);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::FixedBinary: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::FixedBinaryContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(54);
        match(SubstraitTypeParser::FixedBinary);
        setState(56);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(55);
          antlrcpp::downCast<FixedBinaryContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(58);
        match(SubstraitTypeParser::Lt);
        setState(59);
        antlrcpp::downCast<FixedBinaryContext *>(_localctx)->length = numericParameter();
        setState(60);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Decimal: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::DecimalContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(62);
        match(SubstraitTypeParser::Decimal);
        setState(64);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(63);
          antlrcpp::downCast<DecimalContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(66);
        match(SubstraitTypeParser::Lt);
        setState(67);
        antlrcpp::downCast<DecimalContext *>(_localctx)->precision = numericParameter();
        setState(68);
        match(SubstraitTypeParser::Comma);
        setState(69);
        antlrcpp::downCast<DecimalContext *>(_localctx)->scale = numericParameter();
        setState(70);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Interval_Day: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::PrecisionIntervalDayContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(72);
        match(SubstraitTypeParser::Interval_Day);
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(73);
          antlrcpp::downCast<PrecisionIntervalDayContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(76);
        match(SubstraitTypeParser::Lt);
        setState(77);
        antlrcpp::downCast<PrecisionIntervalDayContext *>(_localctx)->precision = numericParameter();
        setState(78);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Interval_Compound: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::PrecisionIntervalCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(80);
        match(SubstraitTypeParser::Interval_Compound);
        setState(82);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(81);
          antlrcpp::downCast<PrecisionIntervalCompoundContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(84);
        match(SubstraitTypeParser::Lt);
        setState(85);
        antlrcpp::downCast<PrecisionIntervalCompoundContext *>(_localctx)->precision = numericParameter();
        setState(86);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Precision_Time: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::PrecisionTimeContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(88);
        match(SubstraitTypeParser::Precision_Time);
        setState(90);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(89);
          antlrcpp::downCast<PrecisionTimeContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(92);
        match(SubstraitTypeParser::Lt);
        setState(93);
        antlrcpp::downCast<PrecisionTimeContext *>(_localctx)->precision = numericParameter();
        setState(94);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Precision_Timestamp: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::PrecisionTimestampContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(96);
        match(SubstraitTypeParser::Precision_Timestamp);
        setState(98);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(97);
          antlrcpp::downCast<PrecisionTimestampContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(100);
        match(SubstraitTypeParser::Lt);
        setState(101);
        antlrcpp::downCast<PrecisionTimestampContext *>(_localctx)->precision = numericParameter();
        setState(102);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Precision_Timestamp_TZ: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::PrecisionTimestampTZContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(104);
        match(SubstraitTypeParser::Precision_Timestamp_TZ);
        setState(106);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(105);
          antlrcpp::downCast<PrecisionTimestampTZContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(108);
        match(SubstraitTypeParser::Lt);
        setState(109);
        antlrcpp::downCast<PrecisionTimestampTZContext *>(_localctx)->precision = numericParameter();
        setState(110);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Struct: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::StructContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(112);
        match(SubstraitTypeParser::Struct);
        setState(114);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(113);
          antlrcpp::downCast<StructContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(116);
        match(SubstraitTypeParser::Lt);
        setState(117);
        expr(0);
        setState(122);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SubstraitTypeParser::Comma) {
          setState(118);
          match(SubstraitTypeParser::Comma);
          setState(119);
          expr(0);
          setState(124);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(125);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::NStruct: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::NStructContext>(_localctx);
        enterOuterAlt(_localctx, 11);
        setState(127);
        match(SubstraitTypeParser::NStruct);
        setState(129);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(128);
          antlrcpp::downCast<NStructContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(131);
        match(SubstraitTypeParser::Lt);
        setState(132);
        match(SubstraitTypeParser::Identifier);
        setState(133);
        match(SubstraitTypeParser::Colon);
        setState(134);
        expr(0);
        setState(141);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SubstraitTypeParser::Comma) {
          setState(135);
          match(SubstraitTypeParser::Comma);
          setState(136);
          match(SubstraitTypeParser::Identifier);
          setState(137);
          match(SubstraitTypeParser::Colon);
          setState(138);
          expr(0);
          setState(143);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(144);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::List: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::ListContext>(_localctx);
        enterOuterAlt(_localctx, 12);
        setState(146);
        match(SubstraitTypeParser::List);
        setState(148);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(147);
          antlrcpp::downCast<ListContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(150);
        match(SubstraitTypeParser::Lt);
        setState(151);
        expr(0);
        setState(152);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Map: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::MapContext>(_localctx);
        enterOuterAlt(_localctx, 13);
        setState(154);
        match(SubstraitTypeParser::Map);
        setState(156);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(155);
          antlrcpp::downCast<MapContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(158);
        match(SubstraitTypeParser::Lt);
        setState(159);
        antlrcpp::downCast<MapContext *>(_localctx)->key = expr(0);
        setState(160);
        match(SubstraitTypeParser::Comma);
        setState(161);
        antlrcpp::downCast<MapContext *>(_localctx)->value = expr(0);
        setState(162);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::Func: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::FuncContext>(_localctx);
        enterOuterAlt(_localctx, 14);
        setState(164);
        match(SubstraitTypeParser::Func);
        setState(166);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::QMark) {
          setState(165);
          antlrcpp::downCast<FuncContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        }
        setState(168);
        match(SubstraitTypeParser::Lt);
        setState(169);
        antlrcpp::downCast<FuncContext *>(_localctx)->params = funcParams();
        setState(170);
        match(SubstraitTypeParser::Arrow);
        setState(171);
        antlrcpp::downCast<FuncContext *>(_localctx)->returnType = expr(0);
        setState(172);
        match(SubstraitTypeParser::Gt);
        break;
      }

      case SubstraitTypeParser::UserDefined:
      case SubstraitTypeParser::Identifier: {
        _localctx = _tracker.createInstance<SubstraitTypeParser::UserDefinedContext>(_localctx);
        enterOuterAlt(_localctx, 15);
        setState(176);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SubstraitTypeParser::Identifier) {
          setState(174);
          antlrcpp::downCast<UserDefinedContext *>(_localctx)->dependencyAlias = match(SubstraitTypeParser::Identifier);
          setState(175);
          match(SubstraitTypeParser::Dot);
        }
        setState(178);
        match(SubstraitTypeParser::UserDefined);
        setState(179);
        match(SubstraitTypeParser::Identifier);
        setState(181);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          setState(180);
          antlrcpp::downCast<UserDefinedContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
          break;
        }

        default:
          break;
        }
        setState(194);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          setState(183);
          match(SubstraitTypeParser::Lt);
          setState(184);
          expr(0);
          setState(189);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SubstraitTypeParser::Comma) {
            setState(185);
            match(SubstraitTypeParser::Comma);
            setState(186);
            expr(0);
            setState(191);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(192);
          match(SubstraitTypeParser::Gt);
          break;
        }

        default:
          break;
        }
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

//----------------- FuncParamsContext ------------------------------------------------------------------

SubstraitTypeParser::FuncParamsContext::FuncParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SubstraitTypeParser::FuncParamsContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleFuncParams;
}

void SubstraitTypeParser::FuncParamsContext::copyFrom(FuncParamsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleFuncParamContext ------------------------------------------------------------------

SubstraitTypeParser::ExprContext* SubstraitTypeParser::SingleFuncParamContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

SubstraitTypeParser::SingleFuncParamContext::SingleFuncParamContext(FuncParamsContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::SingleFuncParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleFuncParam(this);
}
void SubstraitTypeParser::SingleFuncParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleFuncParam(this);
}

std::any SubstraitTypeParser::SingleFuncParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitSingleFuncParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncParamsWithParensContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::FuncParamsWithParensContext::OParen() {
  return getToken(SubstraitTypeParser::OParen, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::FuncParamsWithParensContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::FuncParamsWithParensContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::FuncParamsWithParensContext::CParen() {
  return getToken(SubstraitTypeParser::CParen, 0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::FuncParamsWithParensContext::Comma() {
  return getTokens(SubstraitTypeParser::Comma);
}

tree::TerminalNode* SubstraitTypeParser::FuncParamsWithParensContext::Comma(size_t i) {
  return getToken(SubstraitTypeParser::Comma, i);
}

SubstraitTypeParser::FuncParamsWithParensContext::FuncParamsWithParensContext(FuncParamsContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::FuncParamsWithParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncParamsWithParens(this);
}
void SubstraitTypeParser::FuncParamsWithParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncParamsWithParens(this);
}

std::any SubstraitTypeParser::FuncParamsWithParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFuncParamsWithParens(this);
  else
    return visitor->visitChildren(this);
}
SubstraitTypeParser::FuncParamsContext* SubstraitTypeParser::funcParams() {
  FuncParamsContext *_localctx = _tracker.createInstance<FuncParamsContext>(_ctx, getState());
  enterRule(_localctx, 8, SubstraitTypeParser::RuleFuncParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SubstraitTypeParser::SingleFuncParamContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(198);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SubstraitTypeParser::FuncParamsWithParensContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(199);
      match(SubstraitTypeParser::OParen);
      setState(200);
      expr(0);
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SubstraitTypeParser::Comma) {
        setState(201);
        match(SubstraitTypeParser::Comma);
        setState(202);
        expr(0);
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(208);
      match(SubstraitTypeParser::CParen);
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

//----------------- NumericParameterContext ------------------------------------------------------------------

SubstraitTypeParser::NumericParameterContext::NumericParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SubstraitTypeParser::NumericParameterContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleNumericParameter;
}

void SubstraitTypeParser::NumericParameterContext::copyFrom(NumericParameterContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumericParameterNameContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::NumericParameterNameContext::Identifier() {
  return getToken(SubstraitTypeParser::Identifier, 0);
}

SubstraitTypeParser::NumericParameterNameContext::NumericParameterNameContext(NumericParameterContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::NumericParameterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericParameterName(this);
}
void SubstraitTypeParser::NumericParameterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericParameterName(this);
}

std::any SubstraitTypeParser::NumericParameterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitNumericParameterName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumericLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::NumericLiteralContext::Number() {
  return getToken(SubstraitTypeParser::Number, 0);
}

SubstraitTypeParser::NumericLiteralContext::NumericLiteralContext(NumericParameterContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}
void SubstraitTypeParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}

std::any SubstraitTypeParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumericExpressionContext ------------------------------------------------------------------

SubstraitTypeParser::ExprContext* SubstraitTypeParser::NumericExpressionContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

SubstraitTypeParser::NumericExpressionContext::NumericExpressionContext(NumericParameterContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::NumericExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericExpression(this);
}
void SubstraitTypeParser::NumericExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericExpression(this);
}

std::any SubstraitTypeParser::NumericExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitNumericExpression(this);
  else
    return visitor->visitChildren(this);
}
SubstraitTypeParser::NumericParameterContext* SubstraitTypeParser::numericParameter() {
  NumericParameterContext *_localctx = _tracker.createInstance<NumericParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, SubstraitTypeParser::RuleNumericParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SubstraitTypeParser::NumericLiteralContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(212);
      match(SubstraitTypeParser::Number);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SubstraitTypeParser::NumericParameterNameContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(213);
      match(SubstraitTypeParser::Identifier);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SubstraitTypeParser::NumericExpressionContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(214);
      expr(0);
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

//----------------- AnyTypeContext ------------------------------------------------------------------

SubstraitTypeParser::AnyTypeContext::AnyTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SubstraitTypeParser::AnyTypeContext::Any() {
  return getToken(SubstraitTypeParser::Any, 0);
}

tree::TerminalNode* SubstraitTypeParser::AnyTypeContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

tree::TerminalNode* SubstraitTypeParser::AnyTypeContext::AnyVar() {
  return getToken(SubstraitTypeParser::AnyVar, 0);
}


size_t SubstraitTypeParser::AnyTypeContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleAnyType;
}

void SubstraitTypeParser::AnyTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyType(this);
}

void SubstraitTypeParser::AnyTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyType(this);
}


std::any SubstraitTypeParser::AnyTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitAnyType(this);
  else
    return visitor->visitChildren(this);
}

SubstraitTypeParser::AnyTypeContext* SubstraitTypeParser::anyType() {
  AnyTypeContext *_localctx = _tracker.createInstance<AnyTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, SubstraitTypeParser::RuleAnyType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SubstraitTypeParser::Any: {
        enterOuterAlt(_localctx, 1);
        setState(217);
        match(SubstraitTypeParser::Any);
        setState(219);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(218);
          antlrcpp::downCast<AnyTypeContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
          break;
        }

        default:
          break;
        }
        break;
      }

      case SubstraitTypeParser::AnyVar: {
        enterOuterAlt(_localctx, 2);
        setState(221);
        match(SubstraitTypeParser::AnyVar);
        setState(223);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(222);
          antlrcpp::downCast<AnyTypeContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
          break;
        }

        default:
          break;
        }
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

//----------------- TypeDefContext ------------------------------------------------------------------

SubstraitTypeParser::TypeDefContext::TypeDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SubstraitTypeParser::ScalarTypeContext* SubstraitTypeParser::TypeDefContext::scalarType() {
  return getRuleContext<SubstraitTypeParser::ScalarTypeContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::TypeDefContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::ParameterizedTypeContext* SubstraitTypeParser::TypeDefContext::parameterizedType() {
  return getRuleContext<SubstraitTypeParser::ParameterizedTypeContext>(0);
}

SubstraitTypeParser::AnyTypeContext* SubstraitTypeParser::TypeDefContext::anyType() {
  return getRuleContext<SubstraitTypeParser::AnyTypeContext>(0);
}


size_t SubstraitTypeParser::TypeDefContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleTypeDef;
}

void SubstraitTypeParser::TypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDef(this);
}

void SubstraitTypeParser::TypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDef(this);
}


std::any SubstraitTypeParser::TypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitTypeDef(this);
  else
    return visitor->visitChildren(this);
}

SubstraitTypeParser::TypeDefContext* SubstraitTypeParser::typeDef() {
  TypeDefContext *_localctx = _tracker.createInstance<TypeDefContext>(_ctx, getState());
  enterRule(_localctx, 14, SubstraitTypeParser::RuleTypeDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SubstraitTypeParser::Boolean:
      case SubstraitTypeParser::I8:
      case SubstraitTypeParser::I16:
      case SubstraitTypeParser::I32:
      case SubstraitTypeParser::I64:
      case SubstraitTypeParser::FP32:
      case SubstraitTypeParser::FP64:
      case SubstraitTypeParser::String:
      case SubstraitTypeParser::Binary:
      case SubstraitTypeParser::Date:
      case SubstraitTypeParser::Interval_Year:
      case SubstraitTypeParser::UUID: {
        enterOuterAlt(_localctx, 1);
        setState(227);
        scalarType();
        setState(229);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          setState(228);
          antlrcpp::downCast<TypeDefContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
          break;
        }

        default:
          break;
        }
        break;
      }

      case SubstraitTypeParser::Func:
      case SubstraitTypeParser::Interval_Day:
      case SubstraitTypeParser::Interval_Compound:
      case SubstraitTypeParser::Decimal:
      case SubstraitTypeParser::Precision_Time:
      case SubstraitTypeParser::Precision_Timestamp:
      case SubstraitTypeParser::Precision_Timestamp_TZ:
      case SubstraitTypeParser::FixedChar:
      case SubstraitTypeParser::VarChar:
      case SubstraitTypeParser::FixedBinary:
      case SubstraitTypeParser::Struct:
      case SubstraitTypeParser::NStruct:
      case SubstraitTypeParser::List:
      case SubstraitTypeParser::Map:
      case SubstraitTypeParser::UserDefined:
      case SubstraitTypeParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(231);
        parameterizedType();
        break;
      }

      case SubstraitTypeParser::Any:
      case SubstraitTypeParser::AnyVar: {
        enterOuterAlt(_localctx, 3);
        setState(232);
        anyType();
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

//----------------- ExprContext ------------------------------------------------------------------

SubstraitTypeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SubstraitTypeParser::ExprContext::getRuleIndex() const {
  return SubstraitTypeParser::RuleExpr;
}

void SubstraitTypeParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfExprContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::IfExprContext::If() {
  return getToken(SubstraitTypeParser::If, 0);
}

tree::TerminalNode* SubstraitTypeParser::IfExprContext::Then() {
  return getToken(SubstraitTypeParser::Then, 0);
}

tree::TerminalNode* SubstraitTypeParser::IfExprContext::Else() {
  return getToken(SubstraitTypeParser::Else, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::IfExprContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::IfExprContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

SubstraitTypeParser::IfExprContext::IfExprContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::IfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfExpr(this);
}
void SubstraitTypeParser::IfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfExpr(this);
}

std::any SubstraitTypeParser::IfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitIfExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::OrContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::OrContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::OrContext::Or() {
  return getToken(SubstraitTypeParser::Or, 0);
}

SubstraitTypeParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void SubstraitTypeParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

std::any SubstraitTypeParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultilineDefinitionContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> SubstraitTypeParser::MultilineDefinitionContext::Identifier() {
  return getTokens(SubstraitTypeParser::Identifier);
}

tree::TerminalNode* SubstraitTypeParser::MultilineDefinitionContext::Identifier(size_t i) {
  return getToken(SubstraitTypeParser::Identifier, i);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::MultilineDefinitionContext::Eq() {
  return getTokens(SubstraitTypeParser::Eq);
}

tree::TerminalNode* SubstraitTypeParser::MultilineDefinitionContext::Eq(size_t i) {
  return getToken(SubstraitTypeParser::Eq, i);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::MultilineDefinitionContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::MultilineDefinitionContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

SubstraitTypeParser::TypeDefContext* SubstraitTypeParser::MultilineDefinitionContext::typeDef() {
  return getRuleContext<SubstraitTypeParser::TypeDefContext>(0);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::MultilineDefinitionContext::Newline() {
  return getTokens(SubstraitTypeParser::Newline);
}

tree::TerminalNode* SubstraitTypeParser::MultilineDefinitionContext::Newline(size_t i) {
  return getToken(SubstraitTypeParser::Newline, i);
}

SubstraitTypeParser::MultilineDefinitionContext::MultilineDefinitionContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::MultilineDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultilineDefinition(this);
}
void SubstraitTypeParser::MultilineDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultilineDefinition(this);
}

std::any SubstraitTypeParser::MultilineDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitMultilineDefinition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::MulDivContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::MulDivContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::MulDivContext::Asterisk() {
  return getToken(SubstraitTypeParser::Asterisk, 0);
}

tree::TerminalNode* SubstraitTypeParser::MulDivContext::ForwardSlash() {
  return getToken(SubstraitTypeParser::ForwardSlash, 0);
}

SubstraitTypeParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void SubstraitTypeParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}

std::any SubstraitTypeParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::AddSubContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::AddSubContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::AddSubContext::Plus() {
  return getToken(SubstraitTypeParser::Plus, 0);
}

tree::TerminalNode* SubstraitTypeParser::AddSubContext::Minus() {
  return getToken(SubstraitTypeParser::Minus, 0);
}

SubstraitTypeParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void SubstraitTypeParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

std::any SubstraitTypeParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::TernaryContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

tree::TerminalNode* SubstraitTypeParser::TernaryContext::Colon() {
  return getToken(SubstraitTypeParser::Colon, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::TernaryContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::TernaryContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

SubstraitTypeParser::TernaryContext::TernaryContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::TernaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernary(this);
}
void SubstraitTypeParser::TernaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernary(this);
}

std::any SubstraitTypeParser::TernaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitTernary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParameterNameContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::ParameterNameContext::Identifier() {
  return getToken(SubstraitTypeParser::Identifier, 0);
}

tree::TerminalNode* SubstraitTypeParser::ParameterNameContext::QMark() {
  return getToken(SubstraitTypeParser::QMark, 0);
}

SubstraitTypeParser::ParameterNameContext::ParameterNameContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::ParameterNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterName(this);
}
void SubstraitTypeParser::ParameterNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterName(this);
}

std::any SubstraitTypeParser::ParameterNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitParameterName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeLiteralContext ------------------------------------------------------------------

SubstraitTypeParser::TypeDefContext* SubstraitTypeParser::TypeLiteralContext::typeDef() {
  return getRuleContext<SubstraitTypeParser::TypeDefContext>(0);
}

SubstraitTypeParser::TypeLiteralContext::TypeLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::TypeLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeLiteral(this);
}
void SubstraitTypeParser::TypeLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeLiteral(this);
}

std::any SubstraitTypeParser::TypeLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitTypeLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::ComparisonContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::ComparisonContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::ComparisonContext::Lt() {
  return getToken(SubstraitTypeParser::Lt, 0);
}

tree::TerminalNode* SubstraitTypeParser::ComparisonContext::Gt() {
  return getToken(SubstraitTypeParser::Gt, 0);
}

tree::TerminalNode* SubstraitTypeParser::ComparisonContext::Lte() {
  return getToken(SubstraitTypeParser::Lte, 0);
}

tree::TerminalNode* SubstraitTypeParser::ComparisonContext::Gte() {
  return getToken(SubstraitTypeParser::Gte, 0);
}

SubstraitTypeParser::ComparisonContext::ComparisonContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}
void SubstraitTypeParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

std::any SubstraitTypeParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::AndContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::AndContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::AndContext::And() {
  return getToken(SubstraitTypeParser::And, 0);
}

SubstraitTypeParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void SubstraitTypeParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

std::any SubstraitTypeParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::ParenExpressionContext::OParen() {
  return getToken(SubstraitTypeParser::OParen, 0);
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::ParenExpressionContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::ParenExpressionContext::CParen() {
  return getToken(SubstraitTypeParser::CParen, 0);
}

SubstraitTypeParser::ParenExpressionContext::ParenExpressionContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::ParenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpression(this);
}
void SubstraitTypeParser::ParenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpression(this);
}

std::any SubstraitTypeParser::ParenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitParenExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::FunctionCallContext::Identifier() {
  return getToken(SubstraitTypeParser::Identifier, 0);
}

tree::TerminalNode* SubstraitTypeParser::FunctionCallContext::OParen() {
  return getToken(SubstraitTypeParser::OParen, 0);
}

tree::TerminalNode* SubstraitTypeParser::FunctionCallContext::CParen() {
  return getToken(SubstraitTypeParser::CParen, 0);
}

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::FunctionCallContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::FunctionCallContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> SubstraitTypeParser::FunctionCallContext::Comma() {
  return getTokens(SubstraitTypeParser::Comma);
}

tree::TerminalNode* SubstraitTypeParser::FunctionCallContext::Comma(size_t i) {
  return getToken(SubstraitTypeParser::Comma, i);
}

SubstraitTypeParser::FunctionCallContext::FunctionCallContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void SubstraitTypeParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

std::any SubstraitTypeParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

SubstraitTypeParser::ExprContext* SubstraitTypeParser::NotExprContext::expr() {
  return getRuleContext<SubstraitTypeParser::ExprContext>(0);
}

tree::TerminalNode* SubstraitTypeParser::NotExprContext::Bang() {
  return getToken(SubstraitTypeParser::Bang, 0);
}

SubstraitTypeParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::NotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpr(this);
}
void SubstraitTypeParser::NotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpr(this);
}

std::any SubstraitTypeParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<SubstraitTypeParser::ExprContext *> SubstraitTypeParser::EqualityContext::expr() {
  return getRuleContexts<SubstraitTypeParser::ExprContext>();
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::EqualityContext::expr(size_t i) {
  return getRuleContext<SubstraitTypeParser::ExprContext>(i);
}

tree::TerminalNode* SubstraitTypeParser::EqualityContext::Eq() {
  return getToken(SubstraitTypeParser::Eq, 0);
}

tree::TerminalNode* SubstraitTypeParser::EqualityContext::Ne() {
  return getToken(SubstraitTypeParser::Ne, 0);
}

SubstraitTypeParser::EqualityContext::EqualityContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}
void SubstraitTypeParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}

std::any SubstraitTypeParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralNumberContext ------------------------------------------------------------------

tree::TerminalNode* SubstraitTypeParser::LiteralNumberContext::Number() {
  return getToken(SubstraitTypeParser::Number, 0);
}

SubstraitTypeParser::LiteralNumberContext::LiteralNumberContext(ExprContext *ctx) { copyFrom(ctx); }

void SubstraitTypeParser::LiteralNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralNumber(this);
}
void SubstraitTypeParser::LiteralNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SubstraitTypeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralNumber(this);
}

std::any SubstraitTypeParser::LiteralNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SubstraitTypeVisitor*>(visitor))
    return parserVisitor->visitLiteralNumber(this);
  else
    return visitor->visitChildren(this);
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::expr() {
   return expr(0);
}

SubstraitTypeParser::ExprContext* SubstraitTypeParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SubstraitTypeParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SubstraitTypeParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, SubstraitTypeParser::RuleExpr, precedence);

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
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(236);
      match(SubstraitTypeParser::OParen);
      setState(237);
      expr(0);
      setState(238);
      match(SubstraitTypeParser::CParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MultilineDefinitionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(240);
      match(SubstraitTypeParser::Identifier);
      setState(241);
      match(SubstraitTypeParser::Eq);
      setState(242);
      expr(0);
      setState(244); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(243);
        match(SubstraitTypeParser::Newline);
        setState(246); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == SubstraitTypeParser::Newline);
      setState(258);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(248);
          match(SubstraitTypeParser::Identifier);
          setState(249);
          match(SubstraitTypeParser::Eq);
          setState(250);
          expr(0);
          setState(252); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(251);
            match(SubstraitTypeParser::Newline);
            setState(254); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == SubstraitTypeParser::Newline); 
        }
        setState(260);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      }
      setState(261);
      antlrcpp::downCast<MultilineDefinitionContext *>(_localctx)->finalType = typeDef();
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(262);
          match(SubstraitTypeParser::Newline); 
        }
        setState(267);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<TypeLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(268);
      typeDef();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<LiteralNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(269);
      match(SubstraitTypeParser::Number);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ParameterNameContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(270);
      match(SubstraitTypeParser::Identifier);
      setState(272);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(271);
        antlrcpp::downCast<ParameterNameContext *>(_localctx)->isnull = match(SubstraitTypeParser::QMark);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(274);
      match(SubstraitTypeParser::Identifier);
      setState(275);
      match(SubstraitTypeParser::OParen);
      setState(284);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2306265238858629008) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & 24577) != 0)) {
        setState(276);
        expr(0);
        setState(281);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SubstraitTypeParser::Comma) {
          setState(277);
          match(SubstraitTypeParser::Comma);
          setState(278);
          expr(0);
          setState(283);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(286);
      match(SubstraitTypeParser::CParen);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<IfExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(287);
      match(SubstraitTypeParser::If);
      setState(288);
      antlrcpp::downCast<IfExprContext *>(_localctx)->ifExpr = expr(0);
      setState(289);
      match(SubstraitTypeParser::Then);
      setState(290);
      antlrcpp::downCast<IfExprContext *>(_localctx)->thenExpr = expr(0);
      setState(291);
      match(SubstraitTypeParser::Else);
      setState(292);
      antlrcpp::downCast<IfExprContext *>(_localctx)->elseExpr = expr(3);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(294);
      match(SubstraitTypeParser::Bang);
      setState(295);
      expr(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(322);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(298);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(299);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SubstraitTypeParser::Asterisk

          || _la == SubstraitTypeParser::ForwardSlash)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(300);
          antlrcpp::downCast<MulDivContext *>(_localctx)->right = expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(301);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(302);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SubstraitTypeParser::Plus

          || _la == SubstraitTypeParser::Minus)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(303);
          antlrcpp::downCast<AddSubContext *>(_localctx)->right = expr(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(304);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(305);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2161727821137838080) != 0))) {
            antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(306);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->right = expr(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(307);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(308);
          antlrcpp::downCast<EqualityContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SubstraitTypeParser::Eq

          || _la == SubstraitTypeParser::Ne)) {
            antlrcpp::downCast<EqualityContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(309);
          antlrcpp::downCast<EqualityContext *>(_localctx)->right = expr(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(310);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(311);
          antlrcpp::downCast<AndContext *>(_localctx)->op = match(SubstraitTypeParser::And);
          setState(312);
          antlrcpp::downCast<AndContext *>(_localctx)->right = expr(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(313);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(314);
          antlrcpp::downCast<OrContext *>(_localctx)->op = match(SubstraitTypeParser::Or);
          setState(315);
          antlrcpp::downCast<OrContext *>(_localctx)->right = expr(5);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<TernaryContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->ifExpr = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(316);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(317);
          match(SubstraitTypeParser::QMark);
          setState(318);
          antlrcpp::downCast<TernaryContext *>(_localctx)->thenExpr = expr(0);
          setState(319);
          match(SubstraitTypeParser::Colon);
          setState(320);
          antlrcpp::downCast<TernaryContext *>(_localctx)->elseExpr = expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool SubstraitTypeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SubstraitTypeParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void SubstraitTypeParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  substraittypeParserInitialize();
#else
  ::antlr4::internal::call_once(substraittypeParserOnceFlag, substraittypeParserInitialize);
#endif
}
