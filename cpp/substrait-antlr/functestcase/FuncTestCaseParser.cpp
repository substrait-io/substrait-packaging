// SPDX-License-Identifier: Apache-2.0


// Generated from FuncTestCaseParser.g4 by ANTLR 4.13.2


#include "FuncTestCaseParserVisitor.h"

#include "FuncTestCaseParser.h"


using namespace antlrcpp;
using namespace functestcase;

using namespace antlr4;

namespace {

struct FuncTestCaseParserStaticData final {
  FuncTestCaseParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FuncTestCaseParserStaticData(const FuncTestCaseParserStaticData&) = delete;
  FuncTestCaseParserStaticData(FuncTestCaseParserStaticData&&) = delete;
  FuncTestCaseParserStaticData& operator=(const FuncTestCaseParserStaticData&) = delete;
  FuncTestCaseParserStaticData& operator=(FuncTestCaseParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag functestcaseparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<FuncTestCaseParserStaticData> functestcaseparserParserStaticData = nullptr;

void functestcaseparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (functestcaseparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(functestcaseparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FuncTestCaseParserStaticData>(
    std::vector<std::string>{
      "doc", "header", "version", "include", "dependency", "testGroupDescription", 
      "testCase", "testGroup", "arguments", "result", "argument", "aggFuncTestCase", 
      "aggFuncCall", "windowFuncTestCase", "windowFuncCall", "windowResult", 
      "tableData", "tableRows", "dataColumn", "columnValues", "literal", 
      "qualifiedAggregateFuncArgs", "aggregateFuncArgs", "qualifiedAggregateFuncArg", 
      "aggregateFuncArg", "windowFuncArgs", "windowFuncArg", "numericLiteral", 
      "floatLiteral", "nullArg", "intArg", "floatArg", "decimalArg", "booleanArg", 
      "stringArg", "dateArg", "intervalYearArg", "intervalDayArg", "intervalCompoundArg", 
      "fixedCharArg", "varCharArg", "fixedBinaryArg", "precisionTimeArg", 
      "precisionTimestampArg", "precisionTimestampTZArg", "listArg", "structArg", 
      "mapArg", "userDefinedArg", "lambdaArg", "funcCallArg", "enumArg", 
      "literalList", "literalStruct", "literalMap", "mapEntry", "compoundLiteral", 
      "literalLambda", "lambdaParameters", "lambdaBody", "dataType", "scalarType", 
      "userDefinedType", "booleanType", "stringType", "binaryType", "intType", 
      "floatType", "dateType", "intervalYearType", "intervalDayType", "intervalCompoundType", 
      "fixedCharType", "varCharType", "fixedBinaryType", "decimalType", 
      "precisionTimeType", "precisionTimestampType", "precisionTimestampTZType", 
      "listType", "structType", "mapType", "funcType", "funcParameters", 
      "parameterizedType", "numericParameter", "substraitError", "funcOption", 
      "optionName", "optionValue", "funcOptions", "nonReserved", "identifier"
    },
    std::vector<std::string>{
      "", "", "'###'", "'SUBSTRAIT_SCALAR_TEST'", "'SUBSTRAIT_AGGREGATE_TEST'", 
      "'SUBSTRAIT_WINDOW_TEST'", "'SUBSTRAIT_INCLUDE'", "'SUBSTRAIT_DEPENDENCY'", 
      "", "", "", "'DEFINE'", "'<!ERROR>'", "'<!UNDEFINED>'", "'OVERFLOW'", 
      "'ROUNDING'", "'ERROR'", "'SATURATE'", "'SILENT'", "'TIE_TO_EVEN'", 
      "'NAN'", "'ACCEPT_NULLS'", "'IGNORE_NULLS'", "'NULL_HANDLING'", "'SPACES_ONLY'", 
      "'TRUNCATE'", "'OVER'", "", "", "", "", "", "", "", "", "'P'", "'T'", 
      "'Y'", "'M'", "'D'", "'H'", "'S'", "'F'", "", "", "", "", "", "'null'", 
      "", "'enum'", "'{'", "'}'", "", "", "", "'IF'", "'THEN'", "'ELSE'", 
      "'FUNC'", "'BOOLEAN'", "'I8'", "'I16'", "'I32'", "'I64'", "'FP32'", 
      "'FP64'", "'STRING'", "'BINARY'", "'DATE'", "'INTERVAL_YEAR'", "'INTERVAL_DAY'", 
      "'INTERVAL_COMPOUND'", "'UUID'", "'DECIMAL'", "'PRECISION_TIME'", 
      "'PRECISION_TIMESTAMP'", "'PRECISION_TIMESTAMP_TZ'", "'FIXEDCHAR'", 
      "'VARCHAR'", "'FIXEDBINARY'", "'STRUCT'", "'NSTRUCT'", "'LIST'", "'MAP'", 
      "'U!'", "'BOOL'", "'STR'", "'VBIN'", "'IYEAR'", "'IDAY'", "'ICOMPOUND'", 
      "'DEC'", "'PT'", "'PTS'", "'PTSTZ'", "'FCHAR'", "'VCHAR'", "'FBIN'", 
      "'ANY'", "", "'::'", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'!='", 
      "'>='", "'<='", "'>'", "'<'", "'!'", "'('", "')'", "'['", "']'", "','", 
      "':'", "'\\u003F'", "'#'", "'.'", "'AND'", "'OR'", "':='", "'->'"
    },
    std::vector<std::string>{
      "", "Whitespace", "TripleHash", "SubstraitScalarTest", "SubstraitAggregateTest", 
      "SubstraitWindowTest", "SubstraitInclude", "SubstraitDependency", 
      "ExtensionUrn", "FormatVersion", "DescriptionLine", "Define", "ErrorResult", 
      "UndefineResult", "Overflow", "Rounding", "Error", "Saturate", "Silent", 
      "TieToEven", "NaN", "AcceptNulls", "IgnoreNulls", "NullHandling", 
      "SpacesOnly", "Truncate", "Over", "IntegerLiteral", "DecimalLiteral", 
      "FloatLiteral", "BooleanLiteral", "TimestampTzLiteral", "TimestampLiteral", 
      "TimeLiteral", "DateLiteral", "PeriodPrefix", "TimePrefix", "YearSuffix", 
      "MSuffix", "DaySuffix", "HourSuffix", "SecondSuffix", "FractionalSecondSuffix", 
      "OAngleBracket", "CAngleBracket", "IntervalYearLiteral", "IntervalDayLiteral", 
      "IntervalCompoundLiteral", "NullLiteral", "StringLiteral", "EnumType", 
      "OBrace", "CBrace", "ColumnName", "LineComment", "BlockComment", "If", 
      "Then", "Else", "Func", "Boolean", "I8", "I16", "I32", "I64", "FP32", 
      "FP64", "String", "Binary", "Date", "Interval_Year", "Interval_Day", 
      "Interval_Compound", "UUID", "Decimal", "Precision_Time", "Precision_Timestamp", 
      "Precision_Timestamp_TZ", "FixedChar", "VarChar", "FixedBinary", "Struct", 
      "NStruct", "List", "Map", "UserDefined", "Bool", "Str", "VBin", "IYear", 
      "IDay", "ICompound", "Dec", "PT", "PTs", "PTsTZ", "FChar", "VChar", 
      "FBin", "Any", "AnyVar", "DoubleColon", "Plus", "Minus", "Asterisk", 
      "ForwardSlash", "Percent", "Eq", "Ne", "Gte", "Lte", "Gt", "Lt", "Bang", 
      "OParen", "CParen", "OBracket", "CBracket", "Comma", "Colon", "QMark", 
      "Hash", "Dot", "And", "Or", "Assign", "Arrow", "Number", "Identifier", 
      "Newline"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,129,855,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,7,
  	91,2,92,7,92,1,0,1,0,4,0,189,8,0,11,0,12,0,190,1,0,1,0,1,1,1,1,1,1,5,
  	1,198,8,1,10,1,12,1,201,9,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,228,8,6,
  	1,6,1,6,1,6,1,7,3,7,234,8,7,1,7,4,7,237,8,7,11,7,12,7,238,1,7,3,7,242,
  	8,7,1,7,4,7,245,8,7,11,7,12,7,246,1,7,3,7,250,8,7,1,7,4,7,253,8,7,11,
  	7,12,7,254,3,7,257,8,7,1,8,1,8,1,8,5,8,262,8,8,10,8,12,8,265,9,8,1,9,
  	1,9,3,9,269,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,
  	295,8,10,1,11,1,11,1,11,1,11,1,11,3,11,302,8,11,1,11,1,11,1,11,1,12,1,
  	12,1,12,1,12,3,12,311,8,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,319,8,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,328,8,12,1,13,1,13,1,13,1,13,
  	1,13,3,13,335,8,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,3,14,344,8,14,1,
  	14,1,14,1,14,1,14,1,15,1,15,3,15,352,8,15,1,16,1,16,1,16,1,16,1,16,1,
  	16,5,16,360,8,16,10,16,12,16,363,9,16,1,16,1,16,1,16,1,16,1,17,1,17,1,
  	17,1,17,5,17,373,8,17,10,17,12,17,376,9,17,3,17,378,8,17,1,17,1,17,1,
  	18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,5,19,390,8,19,10,19,12,19,393,9,
  	19,3,19,395,8,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,3,20,410,8,20,1,21,1,21,1,21,5,21,415,8,21,10,21,12,21,418,
  	9,21,1,22,1,22,1,22,5,22,423,8,22,10,22,12,22,426,9,22,1,23,1,23,1,23,
  	1,23,3,23,432,8,23,1,24,1,24,1,24,1,24,3,24,438,8,24,1,25,1,25,1,25,5,
  	25,443,8,25,10,25,12,25,446,9,25,1,26,1,26,3,26,450,8,26,1,27,1,27,1,
  	27,3,27,455,8,27,1,28,1,28,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,
  	31,1,31,1,31,1,31,1,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,34,1,34,1,
  	34,1,34,1,35,1,35,1,35,1,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,
  	38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,1,41,1,
  	41,1,41,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,
  	45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,48,1,48,1,
  	48,1,48,1,49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,51,1,51,1,51,1,
  	51,1,52,1,52,1,52,1,52,5,52,556,8,52,10,52,12,52,559,9,52,3,52,561,8,
  	52,1,52,1,52,1,53,1,53,1,53,1,53,5,53,569,8,53,10,53,12,53,572,9,53,3,
  	53,574,8,53,1,53,1,53,1,54,1,54,1,54,1,54,5,54,582,8,54,10,54,12,54,585,
  	9,54,3,54,587,8,54,1,54,1,54,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,
  	3,56,599,8,56,1,57,1,57,1,57,1,57,1,57,1,57,1,58,1,58,1,58,1,58,1,58,
  	4,58,612,8,58,11,58,12,58,613,1,58,3,58,617,8,58,1,59,1,59,1,59,1,59,
  	1,59,1,60,1,60,3,60,626,8,60,1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,61,
  	1,61,3,61,637,8,61,1,61,3,61,640,8,61,1,62,1,62,1,62,3,62,645,8,62,1,
  	63,1,63,3,63,649,8,63,1,64,1,64,3,64,653,8,64,1,65,1,65,3,65,657,8,65,
  	1,66,1,66,3,66,661,8,66,1,67,1,67,3,67,665,8,67,1,68,1,68,3,68,669,8,
  	68,1,69,1,69,3,69,673,8,69,1,70,1,70,3,70,677,8,70,1,70,1,70,1,70,1,70,
  	3,70,683,8,70,1,71,1,71,3,71,687,8,71,1,71,1,71,1,71,1,71,3,71,693,8,
  	71,1,72,1,72,3,72,697,8,72,1,72,1,72,1,72,1,72,1,73,1,73,3,73,705,8,73,
  	1,73,1,73,1,73,1,73,1,74,1,74,3,74,713,8,74,1,74,1,74,1,74,1,74,1,75,
  	1,75,3,75,721,8,75,1,75,1,75,1,75,1,75,1,75,1,75,3,75,729,8,75,1,76,1,
  	76,3,76,733,8,76,1,76,1,76,1,76,1,76,1,77,1,77,3,77,741,8,77,1,77,1,77,
  	1,77,1,77,1,78,1,78,3,78,749,8,78,1,78,1,78,1,78,1,78,1,79,1,79,3,79,
  	757,8,79,1,79,1,79,1,79,1,79,1,80,1,80,3,80,765,8,80,1,80,1,80,1,80,1,
  	80,5,80,771,8,80,10,80,12,80,774,9,80,3,80,776,8,80,1,80,1,80,1,81,1,
  	81,3,81,782,8,81,1,81,1,81,1,81,1,81,1,81,1,81,1,82,1,82,3,82,792,8,82,
  	1,82,1,82,1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,5,83,805,8,83,
  	10,83,12,83,808,9,83,1,83,1,83,3,83,812,8,83,1,84,1,84,1,84,1,84,1,84,
  	1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,3,84,827,8,84,1,85,1,85,1,86,
  	1,86,1,87,1,87,1,87,1,87,1,88,1,88,1,89,1,89,1,90,1,90,1,90,5,90,844,
  	8,90,10,90,12,90,847,9,90,1,91,1,91,1,92,1,92,3,92,853,8,92,1,92,0,0,
  	93,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,
  	94,96,98,100,102,104,106,108,110,112,114,116,118,120,122,124,126,128,
  	130,132,134,136,138,140,142,144,146,148,150,152,154,156,158,160,162,164,
  	166,168,170,172,174,176,178,180,182,184,0,21,1,0,3,5,2,0,20,20,29,29,
  	2,0,60,60,86,86,2,0,67,67,87,87,2,0,68,68,88,88,1,0,61,64,1,0,65,66,2,
  	0,70,70,89,89,2,0,71,71,90,90,2,0,72,72,91,91,2,0,78,78,96,96,2,0,79,
  	79,97,97,2,0,80,80,98,98,2,0,74,74,92,92,2,0,75,75,93,93,2,0,76,76,94,
  	94,2,0,77,77,95,95,1,0,12,13,3,0,14,15,23,24,128,128,5,0,16,22,25,25,
  	30,30,48,48,128,128,2,0,25,25,123,124,891,0,186,1,0,0,0,2,194,1,0,0,0,
  	4,202,1,0,0,0,6,207,1,0,0,0,8,212,1,0,0,0,10,217,1,0,0,0,12,219,1,0,0,
  	0,14,256,1,0,0,0,16,258,1,0,0,0,18,268,1,0,0,0,20,294,1,0,0,0,22,296,
  	1,0,0,0,24,327,1,0,0,0,26,329,1,0,0,0,28,339,1,0,0,0,30,351,1,0,0,0,32,
  	353,1,0,0,0,34,368,1,0,0,0,36,381,1,0,0,0,38,385,1,0,0,0,40,409,1,0,0,
  	0,42,411,1,0,0,0,44,419,1,0,0,0,46,431,1,0,0,0,48,437,1,0,0,0,50,439,
  	1,0,0,0,52,449,1,0,0,0,54,454,1,0,0,0,56,456,1,0,0,0,58,458,1,0,0,0,60,
  	462,1,0,0,0,62,466,1,0,0,0,64,470,1,0,0,0,66,474,1,0,0,0,68,478,1,0,0,
  	0,70,482,1,0,0,0,72,486,1,0,0,0,74,490,1,0,0,0,76,494,1,0,0,0,78,498,
  	1,0,0,0,80,502,1,0,0,0,82,506,1,0,0,0,84,510,1,0,0,0,86,514,1,0,0,0,88,
  	518,1,0,0,0,90,522,1,0,0,0,92,526,1,0,0,0,94,530,1,0,0,0,96,534,1,0,0,
  	0,98,538,1,0,0,0,100,542,1,0,0,0,102,547,1,0,0,0,104,551,1,0,0,0,106,
  	564,1,0,0,0,108,577,1,0,0,0,110,590,1,0,0,0,112,598,1,0,0,0,114,600,1,
  	0,0,0,116,616,1,0,0,0,118,618,1,0,0,0,120,625,1,0,0,0,122,639,1,0,0,0,
  	124,641,1,0,0,0,126,646,1,0,0,0,128,650,1,0,0,0,130,654,1,0,0,0,132,658,
  	1,0,0,0,134,662,1,0,0,0,136,666,1,0,0,0,138,670,1,0,0,0,140,674,1,0,0,
  	0,142,684,1,0,0,0,144,694,1,0,0,0,146,702,1,0,0,0,148,710,1,0,0,0,150,
  	718,1,0,0,0,152,730,1,0,0,0,154,738,1,0,0,0,156,746,1,0,0,0,158,754,1,
  	0,0,0,160,762,1,0,0,0,162,779,1,0,0,0,164,789,1,0,0,0,166,811,1,0,0,0,
  	168,826,1,0,0,0,170,828,1,0,0,0,172,830,1,0,0,0,174,832,1,0,0,0,176,836,
  	1,0,0,0,178,838,1,0,0,0,180,840,1,0,0,0,182,848,1,0,0,0,184,852,1,0,0,
  	0,186,188,3,2,1,0,187,189,3,14,7,0,188,187,1,0,0,0,189,190,1,0,0,0,190,
  	188,1,0,0,0,190,191,1,0,0,0,191,192,1,0,0,0,192,193,5,0,0,1,193,1,1,0,
  	0,0,194,195,3,4,2,0,195,199,3,6,3,0,196,198,3,8,4,0,197,196,1,0,0,0,198,
  	201,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,3,1,0,0,0,201,199,1,0,
  	0,0,202,203,5,2,0,0,203,204,7,0,0,0,204,205,5,119,0,0,205,206,5,9,0,0,
  	206,5,1,0,0,0,207,208,5,2,0,0,208,209,5,6,0,0,209,210,5,119,0,0,210,211,
  	5,8,0,0,211,7,1,0,0,0,212,213,5,2,0,0,213,214,5,7,0,0,214,215,5,119,0,
  	0,215,216,5,8,0,0,216,9,1,0,0,0,217,218,5,10,0,0,218,11,1,0,0,0,219,220,
  	3,184,92,0,220,221,5,114,0,0,221,222,3,16,8,0,222,227,5,115,0,0,223,224,
  	5,116,0,0,224,225,3,180,90,0,225,226,5,117,0,0,226,228,1,0,0,0,227,223,
  	1,0,0,0,227,228,1,0,0,0,228,229,1,0,0,0,229,230,5,107,0,0,230,231,3,18,
  	9,0,231,13,1,0,0,0,232,234,3,10,5,0,233,232,1,0,0,0,233,234,1,0,0,0,234,
  	236,1,0,0,0,235,237,3,12,6,0,236,235,1,0,0,0,237,238,1,0,0,0,238,236,
  	1,0,0,0,238,239,1,0,0,0,239,257,1,0,0,0,240,242,3,10,5,0,241,240,1,0,
  	0,0,241,242,1,0,0,0,242,244,1,0,0,0,243,245,3,22,11,0,244,243,1,0,0,0,
  	245,246,1,0,0,0,246,244,1,0,0,0,246,247,1,0,0,0,247,257,1,0,0,0,248,250,
  	3,10,5,0,249,248,1,0,0,0,249,250,1,0,0,0,250,252,1,0,0,0,251,253,3,26,
  	13,0,252,251,1,0,0,0,253,254,1,0,0,0,254,252,1,0,0,0,254,255,1,0,0,0,
  	255,257,1,0,0,0,256,233,1,0,0,0,256,241,1,0,0,0,256,249,1,0,0,0,257,15,
  	1,0,0,0,258,263,3,20,10,0,259,260,5,118,0,0,260,262,3,20,10,0,261,259,
  	1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,17,1,0,0,
  	0,265,263,1,0,0,0,266,269,3,20,10,0,267,269,3,172,86,0,268,266,1,0,0,
  	0,268,267,1,0,0,0,269,19,1,0,0,0,270,295,3,58,29,0,271,295,3,102,51,0,
  	272,295,3,60,30,0,273,295,3,62,31,0,274,295,3,66,33,0,275,295,3,68,34,
  	0,276,295,3,64,32,0,277,295,3,70,35,0,278,295,3,72,36,0,279,295,3,74,
  	37,0,280,295,3,76,38,0,281,295,3,78,39,0,282,295,3,80,40,0,283,295,3,
  	82,41,0,284,295,3,84,42,0,285,295,3,86,43,0,286,295,3,88,44,0,287,295,
  	3,90,45,0,288,295,3,92,46,0,289,295,3,94,47,0,290,295,3,96,48,0,291,295,
  	3,98,49,0,292,295,3,100,50,0,293,295,5,128,0,0,294,270,1,0,0,0,294,271,
  	1,0,0,0,294,272,1,0,0,0,294,273,1,0,0,0,294,274,1,0,0,0,294,275,1,0,0,
  	0,294,276,1,0,0,0,294,277,1,0,0,0,294,278,1,0,0,0,294,279,1,0,0,0,294,
  	280,1,0,0,0,294,281,1,0,0,0,294,282,1,0,0,0,294,283,1,0,0,0,294,284,1,
  	0,0,0,294,285,1,0,0,0,294,286,1,0,0,0,294,287,1,0,0,0,294,288,1,0,0,0,
  	294,289,1,0,0,0,294,290,1,0,0,0,294,291,1,0,0,0,294,292,1,0,0,0,294,293,
  	1,0,0,0,295,21,1,0,0,0,296,301,3,24,12,0,297,298,5,116,0,0,298,299,3,
  	180,90,0,299,300,5,117,0,0,300,302,1,0,0,0,301,297,1,0,0,0,301,302,1,
  	0,0,0,302,303,1,0,0,0,303,304,5,107,0,0,304,305,3,18,9,0,305,23,1,0,0,
  	0,306,307,3,32,16,0,307,308,3,184,92,0,308,310,5,114,0,0,309,311,3,42,
  	21,0,310,309,1,0,0,0,310,311,1,0,0,0,311,312,1,0,0,0,312,313,5,115,0,
  	0,313,328,1,0,0,0,314,315,3,34,17,0,315,316,3,184,92,0,316,318,5,114,
  	0,0,317,319,3,44,22,0,318,317,1,0,0,0,318,319,1,0,0,0,319,320,1,0,0,0,
  	320,321,5,115,0,0,321,328,1,0,0,0,322,323,3,184,92,0,323,324,5,114,0,
  	0,324,325,3,36,18,0,325,326,5,115,0,0,326,328,1,0,0,0,327,306,1,0,0,0,
  	327,314,1,0,0,0,327,322,1,0,0,0,328,25,1,0,0,0,329,334,3,28,14,0,330,
  	331,5,116,0,0,331,332,3,180,90,0,332,333,5,117,0,0,333,335,1,0,0,0,334,
  	330,1,0,0,0,334,335,1,0,0,0,335,336,1,0,0,0,336,337,5,107,0,0,337,338,
  	3,30,15,0,338,27,1,0,0,0,339,340,3,32,16,0,340,341,3,184,92,0,341,343,
  	5,114,0,0,342,344,3,50,25,0,343,342,1,0,0,0,343,344,1,0,0,0,344,345,1,
  	0,0,0,345,346,5,115,0,0,346,347,5,26,0,0,347,348,5,128,0,0,348,29,1,0,
  	0,0,349,352,3,36,18,0,350,352,3,172,86,0,351,349,1,0,0,0,351,350,1,0,
  	0,0,352,31,1,0,0,0,353,354,5,11,0,0,354,355,5,128,0,0,355,356,5,114,0,
  	0,356,361,3,120,60,0,357,358,5,118,0,0,358,360,3,120,60,0,359,357,1,0,
  	0,0,360,363,1,0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,364,1,0,0,0,363,
  	361,1,0,0,0,364,365,5,115,0,0,365,366,5,107,0,0,366,367,3,34,17,0,367,
  	33,1,0,0,0,368,377,5,114,0,0,369,374,3,38,19,0,370,371,5,118,0,0,371,
  	373,3,38,19,0,372,370,1,0,0,0,373,376,1,0,0,0,374,372,1,0,0,0,374,375,
  	1,0,0,0,375,378,1,0,0,0,376,374,1,0,0,0,377,369,1,0,0,0,377,378,1,0,0,
  	0,378,379,1,0,0,0,379,380,5,115,0,0,380,35,1,0,0,0,381,382,3,38,19,0,
  	382,383,5,101,0,0,383,384,3,120,60,0,384,37,1,0,0,0,385,394,5,114,0,0,
  	386,391,3,40,20,0,387,388,5,118,0,0,388,390,3,40,20,0,389,387,1,0,0,0,
  	390,393,1,0,0,0,391,389,1,0,0,0,391,392,1,0,0,0,392,395,1,0,0,0,393,391,
  	1,0,0,0,394,386,1,0,0,0,394,395,1,0,0,0,395,396,1,0,0,0,396,397,5,115,
  	0,0,397,39,1,0,0,0,398,410,5,48,0,0,399,410,3,54,27,0,400,410,5,30,0,
  	0,401,410,5,49,0,0,402,410,5,34,0,0,403,410,5,33,0,0,404,410,5,32,0,0,
  	405,410,5,31,0,0,406,410,5,45,0,0,407,410,5,46,0,0,408,410,5,47,0,0,409,
  	398,1,0,0,0,409,399,1,0,0,0,409,400,1,0,0,0,409,401,1,0,0,0,409,402,1,
  	0,0,0,409,403,1,0,0,0,409,404,1,0,0,0,409,405,1,0,0,0,409,406,1,0,0,0,
  	409,407,1,0,0,0,409,408,1,0,0,0,410,41,1,0,0,0,411,416,3,46,23,0,412,
  	413,5,118,0,0,413,415,3,46,23,0,414,412,1,0,0,0,415,418,1,0,0,0,416,414,
  	1,0,0,0,416,417,1,0,0,0,417,43,1,0,0,0,418,416,1,0,0,0,419,424,3,48,24,
  	0,420,421,5,118,0,0,421,423,3,48,24,0,422,420,1,0,0,0,423,426,1,0,0,0,
  	424,422,1,0,0,0,424,425,1,0,0,0,425,45,1,0,0,0,426,424,1,0,0,0,427,428,
  	5,128,0,0,428,429,5,122,0,0,429,432,5,53,0,0,430,432,3,20,10,0,431,427,
  	1,0,0,0,431,430,1,0,0,0,432,47,1,0,0,0,433,434,5,53,0,0,434,435,5,101,
  	0,0,435,438,3,120,60,0,436,438,3,20,10,0,437,433,1,0,0,0,437,436,1,0,
  	0,0,438,49,1,0,0,0,439,444,3,52,26,0,440,441,5,118,0,0,441,443,3,52,26,
  	0,442,440,1,0,0,0,443,446,1,0,0,0,444,442,1,0,0,0,444,445,1,0,0,0,445,
  	51,1,0,0,0,446,444,1,0,0,0,447,450,5,53,0,0,448,450,3,20,10,0,449,447,
  	1,0,0,0,449,448,1,0,0,0,450,53,1,0,0,0,451,455,5,28,0,0,452,455,5,27,
  	0,0,453,455,3,56,28,0,454,451,1,0,0,0,454,452,1,0,0,0,454,453,1,0,0,0,
  	455,55,1,0,0,0,456,457,7,1,0,0,457,57,1,0,0,0,458,459,5,48,0,0,459,460,
  	5,101,0,0,460,461,3,120,60,0,461,59,1,0,0,0,462,463,5,27,0,0,463,464,
  	5,101,0,0,464,465,3,132,66,0,465,61,1,0,0,0,466,467,3,54,27,0,467,468,
  	5,101,0,0,468,469,3,134,67,0,469,63,1,0,0,0,470,471,3,54,27,0,471,472,
  	5,101,0,0,472,473,3,150,75,0,473,65,1,0,0,0,474,475,5,30,0,0,475,476,
  	5,101,0,0,476,477,3,126,63,0,477,67,1,0,0,0,478,479,5,49,0,0,479,480,
  	5,101,0,0,480,481,3,128,64,0,481,69,1,0,0,0,482,483,5,34,0,0,483,484,
  	5,101,0,0,484,485,3,136,68,0,485,71,1,0,0,0,486,487,5,45,0,0,487,488,
  	5,101,0,0,488,489,3,138,69,0,489,73,1,0,0,0,490,491,5,46,0,0,491,492,
  	5,101,0,0,492,493,3,140,70,0,493,75,1,0,0,0,494,495,5,47,0,0,495,496,
  	5,101,0,0,496,497,3,142,71,0,497,77,1,0,0,0,498,499,5,49,0,0,499,500,
  	5,101,0,0,500,501,3,144,72,0,501,79,1,0,0,0,502,503,5,49,0,0,503,504,
  	5,101,0,0,504,505,3,146,73,0,505,81,1,0,0,0,506,507,5,49,0,0,507,508,
  	5,101,0,0,508,509,3,148,74,0,509,83,1,0,0,0,510,511,5,33,0,0,511,512,
  	5,101,0,0,512,513,3,152,76,0,513,85,1,0,0,0,514,515,5,32,0,0,515,516,
  	5,101,0,0,516,517,3,154,77,0,517,87,1,0,0,0,518,519,5,31,0,0,519,520,
  	5,101,0,0,520,521,3,156,78,0,521,89,1,0,0,0,522,523,3,104,52,0,523,524,
  	5,101,0,0,524,525,3,158,79,0,525,91,1,0,0,0,526,527,3,106,53,0,527,528,
  	5,101,0,0,528,529,3,160,80,0,529,93,1,0,0,0,530,531,3,108,54,0,531,532,
  	5,101,0,0,532,533,3,162,81,0,533,95,1,0,0,0,534,535,3,106,53,0,535,536,
  	5,101,0,0,536,537,3,124,62,0,537,97,1,0,0,0,538,539,3,114,57,0,539,540,
  	5,101,0,0,540,541,3,164,82,0,541,99,1,0,0,0,542,543,3,184,92,0,543,544,
  	5,114,0,0,544,545,3,16,8,0,545,546,5,115,0,0,546,101,1,0,0,0,547,548,
  	5,128,0,0,548,549,5,101,0,0,549,550,5,50,0,0,550,103,1,0,0,0,551,560,
  	5,116,0,0,552,557,3,112,56,0,553,554,5,118,0,0,554,556,3,112,56,0,555,
  	553,1,0,0,0,556,559,1,0,0,0,557,555,1,0,0,0,557,558,1,0,0,0,558,561,1,
  	0,0,0,559,557,1,0,0,0,560,552,1,0,0,0,560,561,1,0,0,0,561,562,1,0,0,0,
  	562,563,5,117,0,0,563,105,1,0,0,0,564,573,5,114,0,0,565,570,3,112,56,
  	0,566,567,5,118,0,0,567,569,3,112,56,0,568,566,1,0,0,0,569,572,1,0,0,
  	0,570,568,1,0,0,0,570,571,1,0,0,0,571,574,1,0,0,0,572,570,1,0,0,0,573,
  	565,1,0,0,0,573,574,1,0,0,0,574,575,1,0,0,0,575,576,5,115,0,0,576,107,
  	1,0,0,0,577,586,5,51,0,0,578,583,3,110,55,0,579,580,5,118,0,0,580,582,
  	3,110,55,0,581,579,1,0,0,0,582,585,1,0,0,0,583,581,1,0,0,0,583,584,1,
  	0,0,0,584,587,1,0,0,0,585,583,1,0,0,0,586,578,1,0,0,0,586,587,1,0,0,0,
  	587,588,1,0,0,0,588,589,5,52,0,0,589,109,1,0,0,0,590,591,3,112,56,0,591,
  	592,5,119,0,0,592,593,3,112,56,0,593,111,1,0,0,0,594,599,3,40,20,0,595,
  	599,3,104,52,0,596,599,3,106,53,0,597,599,3,108,54,0,598,594,1,0,0,0,
  	598,595,1,0,0,0,598,596,1,0,0,0,598,597,1,0,0,0,599,113,1,0,0,0,600,601,
  	5,114,0,0,601,602,3,116,58,0,602,603,5,126,0,0,603,604,3,118,59,0,604,
  	605,5,115,0,0,605,115,1,0,0,0,606,617,5,128,0,0,607,608,5,114,0,0,608,
  	611,5,128,0,0,609,610,5,118,0,0,610,612,5,128,0,0,611,609,1,0,0,0,612,
  	613,1,0,0,0,613,611,1,0,0,0,613,614,1,0,0,0,614,615,1,0,0,0,615,617,5,
  	115,0,0,616,606,1,0,0,0,616,607,1,0,0,0,617,117,1,0,0,0,618,619,3,184,
  	92,0,619,620,5,114,0,0,620,621,3,16,8,0,621,622,5,115,0,0,622,119,1,0,
  	0,0,623,626,3,122,61,0,624,626,3,168,84,0,625,623,1,0,0,0,625,624,1,0,
  	0,0,626,121,1,0,0,0,627,640,3,126,63,0,628,640,3,132,66,0,629,640,3,134,
  	67,0,630,640,3,128,64,0,631,640,3,130,65,0,632,640,3,136,68,0,633,640,
  	3,138,69,0,634,636,5,73,0,0,635,637,5,120,0,0,636,635,1,0,0,0,636,637,
  	1,0,0,0,637,640,1,0,0,0,638,640,3,124,62,0,639,627,1,0,0,0,639,628,1,
  	0,0,0,639,629,1,0,0,0,639,630,1,0,0,0,639,631,1,0,0,0,639,632,1,0,0,0,
  	639,633,1,0,0,0,639,634,1,0,0,0,639,638,1,0,0,0,640,123,1,0,0,0,641,642,
  	5,85,0,0,642,644,5,128,0,0,643,645,5,120,0,0,644,643,1,0,0,0,644,645,
  	1,0,0,0,645,125,1,0,0,0,646,648,7,2,0,0,647,649,5,120,0,0,648,647,1,0,
  	0,0,648,649,1,0,0,0,649,127,1,0,0,0,650,652,7,3,0,0,651,653,5,120,0,0,
  	652,651,1,0,0,0,652,653,1,0,0,0,653,129,1,0,0,0,654,656,7,4,0,0,655,657,
  	5,120,0,0,656,655,1,0,0,0,656,657,1,0,0,0,657,131,1,0,0,0,658,660,7,5,
  	0,0,659,661,5,120,0,0,660,659,1,0,0,0,660,661,1,0,0,0,661,133,1,0,0,0,
  	662,664,7,6,0,0,663,665,5,120,0,0,664,663,1,0,0,0,664,665,1,0,0,0,665,
  	135,1,0,0,0,666,668,5,69,0,0,667,669,5,120,0,0,668,667,1,0,0,0,668,669,
  	1,0,0,0,669,137,1,0,0,0,670,672,7,7,0,0,671,673,5,120,0,0,672,671,1,0,
  	0,0,672,673,1,0,0,0,673,139,1,0,0,0,674,676,7,8,0,0,675,677,5,120,0,0,
  	676,675,1,0,0,0,676,677,1,0,0,0,677,682,1,0,0,0,678,679,5,43,0,0,679,
  	680,3,170,85,0,680,681,5,44,0,0,681,683,1,0,0,0,682,678,1,0,0,0,682,683,
  	1,0,0,0,683,141,1,0,0,0,684,686,7,9,0,0,685,687,5,120,0,0,686,685,1,0,
  	0,0,686,687,1,0,0,0,687,692,1,0,0,0,688,689,5,43,0,0,689,690,3,170,85,
  	0,690,691,5,44,0,0,691,693,1,0,0,0,692,688,1,0,0,0,692,693,1,0,0,0,693,
  	143,1,0,0,0,694,696,7,10,0,0,695,697,5,120,0,0,696,695,1,0,0,0,696,697,
  	1,0,0,0,697,698,1,0,0,0,698,699,5,43,0,0,699,700,3,170,85,0,700,701,5,
  	44,0,0,701,145,1,0,0,0,702,704,7,11,0,0,703,705,5,120,0,0,704,703,1,0,
  	0,0,704,705,1,0,0,0,705,706,1,0,0,0,706,707,5,43,0,0,707,708,3,170,85,
  	0,708,709,5,44,0,0,709,147,1,0,0,0,710,712,7,12,0,0,711,713,5,120,0,0,
  	712,711,1,0,0,0,712,713,1,0,0,0,713,714,1,0,0,0,714,715,5,43,0,0,715,
  	716,3,170,85,0,716,717,5,44,0,0,717,149,1,0,0,0,718,720,7,13,0,0,719,
  	721,5,120,0,0,720,719,1,0,0,0,720,721,1,0,0,0,721,728,1,0,0,0,722,723,
  	5,43,0,0,723,724,3,170,85,0,724,725,5,118,0,0,725,726,3,170,85,0,726,
  	727,5,44,0,0,727,729,1,0,0,0,728,722,1,0,0,0,728,729,1,0,0,0,729,151,
  	1,0,0,0,730,732,7,14,0,0,731,733,5,120,0,0,732,731,1,0,0,0,732,733,1,
  	0,0,0,733,734,1,0,0,0,734,735,5,43,0,0,735,736,3,170,85,0,736,737,5,44,
  	0,0,737,153,1,0,0,0,738,740,7,15,0,0,739,741,5,120,0,0,740,739,1,0,0,
  	0,740,741,1,0,0,0,741,742,1,0,0,0,742,743,5,43,0,0,743,744,3,170,85,0,
  	744,745,5,44,0,0,745,155,1,0,0,0,746,748,7,16,0,0,747,749,5,120,0,0,748,
  	747,1,0,0,0,748,749,1,0,0,0,749,750,1,0,0,0,750,751,5,43,0,0,751,752,
  	3,170,85,0,752,753,5,44,0,0,753,157,1,0,0,0,754,756,5,83,0,0,755,757,
  	5,120,0,0,756,755,1,0,0,0,756,757,1,0,0,0,757,758,1,0,0,0,758,759,5,43,
  	0,0,759,760,3,120,60,0,760,761,5,44,0,0,761,159,1,0,0,0,762,764,5,81,
  	0,0,763,765,5,120,0,0,764,763,1,0,0,0,764,765,1,0,0,0,765,766,1,0,0,0,
  	766,775,5,43,0,0,767,772,3,120,60,0,768,769,5,118,0,0,769,771,3,120,60,
  	0,770,768,1,0,0,0,771,774,1,0,0,0,772,770,1,0,0,0,772,773,1,0,0,0,773,
  	776,1,0,0,0,774,772,1,0,0,0,775,767,1,0,0,0,775,776,1,0,0,0,776,777,1,
  	0,0,0,777,778,5,44,0,0,778,161,1,0,0,0,779,781,5,84,0,0,780,782,5,120,
  	0,0,781,780,1,0,0,0,781,782,1,0,0,0,782,783,1,0,0,0,783,784,5,43,0,0,
  	784,785,3,120,60,0,785,786,5,118,0,0,786,787,3,120,60,0,787,788,5,44,
  	0,0,788,163,1,0,0,0,789,791,5,59,0,0,790,792,5,120,0,0,791,790,1,0,0,
  	0,791,792,1,0,0,0,792,793,1,0,0,0,793,794,5,43,0,0,794,795,3,166,83,0,
  	795,796,5,126,0,0,796,797,3,120,60,0,797,798,5,44,0,0,798,165,1,0,0,0,
  	799,812,3,120,60,0,800,801,5,114,0,0,801,806,3,120,60,0,802,803,5,118,
  	0,0,803,805,3,120,60,0,804,802,1,0,0,0,805,808,1,0,0,0,806,804,1,0,0,
  	0,806,807,1,0,0,0,807,809,1,0,0,0,808,806,1,0,0,0,809,810,5,115,0,0,810,
  	812,1,0,0,0,811,799,1,0,0,0,811,800,1,0,0,0,812,167,1,0,0,0,813,827,3,
  	144,72,0,814,827,3,146,73,0,815,827,3,148,74,0,816,827,3,150,75,0,817,
  	827,3,140,70,0,818,827,3,142,71,0,819,827,3,152,76,0,820,827,3,154,77,
  	0,821,827,3,156,78,0,822,827,3,158,79,0,823,827,3,160,80,0,824,827,3,
  	162,81,0,825,827,3,164,82,0,826,813,1,0,0,0,826,814,1,0,0,0,826,815,1,
  	0,0,0,826,816,1,0,0,0,826,817,1,0,0,0,826,818,1,0,0,0,826,819,1,0,0,0,
  	826,820,1,0,0,0,826,821,1,0,0,0,826,822,1,0,0,0,826,823,1,0,0,0,826,824,
  	1,0,0,0,826,825,1,0,0,0,827,169,1,0,0,0,828,829,5,27,0,0,829,171,1,0,
  	0,0,830,831,7,17,0,0,831,173,1,0,0,0,832,833,3,176,88,0,833,834,5,119,
  	0,0,834,835,3,178,89,0,835,175,1,0,0,0,836,837,7,18,0,0,837,177,1,0,0,
  	0,838,839,7,19,0,0,839,179,1,0,0,0,840,845,3,174,87,0,841,842,5,118,0,
  	0,842,844,3,174,87,0,843,841,1,0,0,0,844,847,1,0,0,0,845,843,1,0,0,0,
  	845,846,1,0,0,0,846,181,1,0,0,0,847,845,1,0,0,0,848,849,7,20,0,0,849,
  	183,1,0,0,0,850,853,3,182,91,0,851,853,5,128,0,0,852,850,1,0,0,0,852,
  	851,1,0,0,0,853,185,1,0,0,0,76,190,199,227,233,238,241,246,249,254,256,
  	263,268,294,301,310,318,327,334,343,351,361,374,377,391,394,409,416,424,
  	431,437,444,449,454,557,560,570,573,583,586,598,613,616,625,636,639,644,
  	648,652,656,660,664,668,672,676,682,686,692,696,704,712,720,728,732,740,
  	748,756,764,772,775,781,791,806,811,826,845,852
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  functestcaseparserParserStaticData = std::move(staticData);
}

}

FuncTestCaseParser::FuncTestCaseParser(TokenStream *input) : FuncTestCaseParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

FuncTestCaseParser::FuncTestCaseParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  FuncTestCaseParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *functestcaseparserParserStaticData->atn, functestcaseparserParserStaticData->decisionToDFA, functestcaseparserParserStaticData->sharedContextCache, options);
}

FuncTestCaseParser::~FuncTestCaseParser() {
  delete _interpreter;
}

const atn::ATN& FuncTestCaseParser::getATN() const {
  return *functestcaseparserParserStaticData->atn;
}

std::string FuncTestCaseParser::getGrammarFileName() const {
  return "FuncTestCaseParser.g4";
}

const std::vector<std::string>& FuncTestCaseParser::getRuleNames() const {
  return functestcaseparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& FuncTestCaseParser::getVocabulary() const {
  return functestcaseparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView FuncTestCaseParser::getSerializedATN() const {
  return functestcaseparserParserStaticData->serializedATN;
}


//----------------- DocContext ------------------------------------------------------------------

FuncTestCaseParser::DocContext::DocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::HeaderContext* FuncTestCaseParser::DocContext::header() {
  return getRuleContext<FuncTestCaseParser::HeaderContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::DocContext::EOF() {
  return getToken(FuncTestCaseParser::EOF, 0);
}

std::vector<FuncTestCaseParser::TestGroupContext *> FuncTestCaseParser::DocContext::testGroup() {
  return getRuleContexts<FuncTestCaseParser::TestGroupContext>();
}

FuncTestCaseParser::TestGroupContext* FuncTestCaseParser::DocContext::testGroup(size_t i) {
  return getRuleContext<FuncTestCaseParser::TestGroupContext>(i);
}


size_t FuncTestCaseParser::DocContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDoc;
}


std::any FuncTestCaseParser::DocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDoc(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DocContext* FuncTestCaseParser::doc() {
  DocContext *_localctx = _tracker.createInstance<DocContext>(_ctx, getState());
  enterRule(_localctx, 0, FuncTestCaseParser::RuleDoc);
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
    header();
    setState(188); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(187);
      testGroup();
      setState(190); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33557504) != 0) || ((((_la - 114) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 114)) & 17921) != 0));
    setState(192);
    match(FuncTestCaseParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

FuncTestCaseParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::VersionContext* FuncTestCaseParser::HeaderContext::version() {
  return getRuleContext<FuncTestCaseParser::VersionContext>(0);
}

FuncTestCaseParser::IncludeContext* FuncTestCaseParser::HeaderContext::include() {
  return getRuleContext<FuncTestCaseParser::IncludeContext>(0);
}

std::vector<FuncTestCaseParser::DependencyContext *> FuncTestCaseParser::HeaderContext::dependency() {
  return getRuleContexts<FuncTestCaseParser::DependencyContext>();
}

FuncTestCaseParser::DependencyContext* FuncTestCaseParser::HeaderContext::dependency(size_t i) {
  return getRuleContext<FuncTestCaseParser::DependencyContext>(i);
}


size_t FuncTestCaseParser::HeaderContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleHeader;
}


std::any FuncTestCaseParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::HeaderContext* FuncTestCaseParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, FuncTestCaseParser::RuleHeader);
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
    version();
    setState(195);
    include();
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::TripleHash) {
      setState(196);
      dependency();
      setState(201);
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

//----------------- VersionContext ------------------------------------------------------------------

FuncTestCaseParser::VersionContext::VersionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::TripleHash() {
  return getToken(FuncTestCaseParser::TripleHash, 0);
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::Colon() {
  return getToken(FuncTestCaseParser::Colon, 0);
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::FormatVersion() {
  return getToken(FuncTestCaseParser::FormatVersion, 0);
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::SubstraitScalarTest() {
  return getToken(FuncTestCaseParser::SubstraitScalarTest, 0);
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::SubstraitAggregateTest() {
  return getToken(FuncTestCaseParser::SubstraitAggregateTest, 0);
}

tree::TerminalNode* FuncTestCaseParser::VersionContext::SubstraitWindowTest() {
  return getToken(FuncTestCaseParser::SubstraitWindowTest, 0);
}


size_t FuncTestCaseParser::VersionContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleVersion;
}


std::any FuncTestCaseParser::VersionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitVersion(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::VersionContext* FuncTestCaseParser::version() {
  VersionContext *_localctx = _tracker.createInstance<VersionContext>(_ctx, getState());
  enterRule(_localctx, 4, FuncTestCaseParser::RuleVersion);
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
    setState(202);
    match(FuncTestCaseParser::TripleHash);
    setState(203);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 56) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(204);
    match(FuncTestCaseParser::Colon);
    setState(205);
    match(FuncTestCaseParser::FormatVersion);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

FuncTestCaseParser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IncludeContext::TripleHash() {
  return getToken(FuncTestCaseParser::TripleHash, 0);
}

tree::TerminalNode* FuncTestCaseParser::IncludeContext::SubstraitInclude() {
  return getToken(FuncTestCaseParser::SubstraitInclude, 0);
}

tree::TerminalNode* FuncTestCaseParser::IncludeContext::Colon() {
  return getToken(FuncTestCaseParser::Colon, 0);
}

tree::TerminalNode* FuncTestCaseParser::IncludeContext::ExtensionUrn() {
  return getToken(FuncTestCaseParser::ExtensionUrn, 0);
}


size_t FuncTestCaseParser::IncludeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleInclude;
}


std::any FuncTestCaseParser::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IncludeContext* FuncTestCaseParser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 6, FuncTestCaseParser::RuleInclude);

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
    match(FuncTestCaseParser::TripleHash);
    setState(208);
    match(FuncTestCaseParser::SubstraitInclude);
    setState(209);
    match(FuncTestCaseParser::Colon);
    setState(210);
    match(FuncTestCaseParser::ExtensionUrn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DependencyContext ------------------------------------------------------------------

FuncTestCaseParser::DependencyContext::DependencyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::DependencyContext::TripleHash() {
  return getToken(FuncTestCaseParser::TripleHash, 0);
}

tree::TerminalNode* FuncTestCaseParser::DependencyContext::SubstraitDependency() {
  return getToken(FuncTestCaseParser::SubstraitDependency, 0);
}

tree::TerminalNode* FuncTestCaseParser::DependencyContext::Colon() {
  return getToken(FuncTestCaseParser::Colon, 0);
}

tree::TerminalNode* FuncTestCaseParser::DependencyContext::ExtensionUrn() {
  return getToken(FuncTestCaseParser::ExtensionUrn, 0);
}


size_t FuncTestCaseParser::DependencyContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDependency;
}


std::any FuncTestCaseParser::DependencyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDependency(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DependencyContext* FuncTestCaseParser::dependency() {
  DependencyContext *_localctx = _tracker.createInstance<DependencyContext>(_ctx, getState());
  enterRule(_localctx, 8, FuncTestCaseParser::RuleDependency);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(FuncTestCaseParser::TripleHash);
    setState(213);
    match(FuncTestCaseParser::SubstraitDependency);
    setState(214);
    match(FuncTestCaseParser::Colon);
    setState(215);
    match(FuncTestCaseParser::ExtensionUrn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestGroupDescriptionContext ------------------------------------------------------------------

FuncTestCaseParser::TestGroupDescriptionContext::TestGroupDescriptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::TestGroupDescriptionContext::DescriptionLine() {
  return getToken(FuncTestCaseParser::DescriptionLine, 0);
}


size_t FuncTestCaseParser::TestGroupDescriptionContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleTestGroupDescription;
}


std::any FuncTestCaseParser::TestGroupDescriptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitTestGroupDescription(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::TestGroupDescriptionContext* FuncTestCaseParser::testGroupDescription() {
  TestGroupDescriptionContext *_localctx = _tracker.createInstance<TestGroupDescriptionContext>(_ctx, getState());
  enterRule(_localctx, 10, FuncTestCaseParser::RuleTestGroupDescription);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(FuncTestCaseParser::DescriptionLine);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestCaseContext ------------------------------------------------------------------

FuncTestCaseParser::TestCaseContext::TestCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::TestCaseContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

FuncTestCaseParser::ArgumentsContext* FuncTestCaseParser::TestCaseContext::arguments() {
  return getRuleContext<FuncTestCaseParser::ArgumentsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::TestCaseContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::TestCaseContext::Eq() {
  return getToken(FuncTestCaseParser::Eq, 0);
}

FuncTestCaseParser::ResultContext* FuncTestCaseParser::TestCaseContext::result() {
  return getRuleContext<FuncTestCaseParser::ResultContext>(0);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::TestCaseContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::TestCaseContext::OBracket() {
  return getToken(FuncTestCaseParser::OBracket, 0);
}

FuncTestCaseParser::FuncOptionsContext* FuncTestCaseParser::TestCaseContext::funcOptions() {
  return getRuleContext<FuncTestCaseParser::FuncOptionsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::TestCaseContext::CBracket() {
  return getToken(FuncTestCaseParser::CBracket, 0);
}


size_t FuncTestCaseParser::TestCaseContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleTestCase;
}


std::any FuncTestCaseParser::TestCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitTestCase(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::TestCaseContext* FuncTestCaseParser::testCase() {
  TestCaseContext *_localctx = _tracker.createInstance<TestCaseContext>(_ctx, getState());
  enterRule(_localctx, 12, FuncTestCaseParser::RuleTestCase);
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
    setState(219);
    antlrcpp::downCast<TestCaseContext *>(_localctx)->functionName = identifier();
    setState(220);
    match(FuncTestCaseParser::OParen);
    setState(221);
    arguments();
    setState(222);
    match(FuncTestCaseParser::CParen);
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OBracket) {
      setState(223);
      match(FuncTestCaseParser::OBracket);
      setState(224);
      funcOptions();
      setState(225);
      match(FuncTestCaseParser::CBracket);
    }
    setState(229);
    match(FuncTestCaseParser::Eq);
    setState(230);
    result();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestGroupContext ------------------------------------------------------------------

FuncTestCaseParser::TestGroupContext::TestGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::TestGroupContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleTestGroup;
}

void FuncTestCaseParser::TestGroupContext::copyFrom(TestGroupContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ScalarFuncTestGroupContext ------------------------------------------------------------------

FuncTestCaseParser::TestGroupDescriptionContext* FuncTestCaseParser::ScalarFuncTestGroupContext::testGroupDescription() {
  return getRuleContext<FuncTestCaseParser::TestGroupDescriptionContext>(0);
}

std::vector<FuncTestCaseParser::TestCaseContext *> FuncTestCaseParser::ScalarFuncTestGroupContext::testCase() {
  return getRuleContexts<FuncTestCaseParser::TestCaseContext>();
}

FuncTestCaseParser::TestCaseContext* FuncTestCaseParser::ScalarFuncTestGroupContext::testCase(size_t i) {
  return getRuleContext<FuncTestCaseParser::TestCaseContext>(i);
}

FuncTestCaseParser::ScalarFuncTestGroupContext::ScalarFuncTestGroupContext(TestGroupContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::ScalarFuncTestGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitScalarFuncTestGroup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AggregateFuncTestGroupContext ------------------------------------------------------------------

FuncTestCaseParser::TestGroupDescriptionContext* FuncTestCaseParser::AggregateFuncTestGroupContext::testGroupDescription() {
  return getRuleContext<FuncTestCaseParser::TestGroupDescriptionContext>(0);
}

std::vector<FuncTestCaseParser::AggFuncTestCaseContext *> FuncTestCaseParser::AggregateFuncTestGroupContext::aggFuncTestCase() {
  return getRuleContexts<FuncTestCaseParser::AggFuncTestCaseContext>();
}

FuncTestCaseParser::AggFuncTestCaseContext* FuncTestCaseParser::AggregateFuncTestGroupContext::aggFuncTestCase(size_t i) {
  return getRuleContext<FuncTestCaseParser::AggFuncTestCaseContext>(i);
}

FuncTestCaseParser::AggregateFuncTestGroupContext::AggregateFuncTestGroupContext(TestGroupContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::AggregateFuncTestGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitAggregateFuncTestGroup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WindowFuncTestGroupContext ------------------------------------------------------------------

FuncTestCaseParser::TestGroupDescriptionContext* FuncTestCaseParser::WindowFuncTestGroupContext::testGroupDescription() {
  return getRuleContext<FuncTestCaseParser::TestGroupDescriptionContext>(0);
}

std::vector<FuncTestCaseParser::WindowFuncTestCaseContext *> FuncTestCaseParser::WindowFuncTestGroupContext::windowFuncTestCase() {
  return getRuleContexts<FuncTestCaseParser::WindowFuncTestCaseContext>();
}

FuncTestCaseParser::WindowFuncTestCaseContext* FuncTestCaseParser::WindowFuncTestGroupContext::windowFuncTestCase(size_t i) {
  return getRuleContext<FuncTestCaseParser::WindowFuncTestCaseContext>(i);
}

FuncTestCaseParser::WindowFuncTestGroupContext::WindowFuncTestGroupContext(TestGroupContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::WindowFuncTestGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowFuncTestGroup(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::TestGroupContext* FuncTestCaseParser::testGroup() {
  TestGroupContext *_localctx = _tracker.createInstance<TestGroupContext>(_ctx, getState());
  enterRule(_localctx, 14, FuncTestCaseParser::RuleTestGroup);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(256);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FuncTestCaseParser::ScalarFuncTestGroupContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(233);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FuncTestCaseParser::DescriptionLine) {
        setState(232);
        testGroupDescription();
      }
      setState(236); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(235);
                testCase();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(238); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncTestCaseParser::AggregateFuncTestGroupContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FuncTestCaseParser::DescriptionLine) {
        setState(240);
        testGroupDescription();
      }
      setState(244); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(243);
                aggFuncTestCase();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(246); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FuncTestCaseParser::WindowFuncTestGroupContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(249);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FuncTestCaseParser::DescriptionLine) {
        setState(248);
        testGroupDescription();
      }
      setState(252); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(251);
                windowFuncTestCase();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(254); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- ArgumentsContext ------------------------------------------------------------------

FuncTestCaseParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FuncTestCaseParser::ArgumentContext *> FuncTestCaseParser::ArgumentsContext::argument() {
  return getRuleContexts<FuncTestCaseParser::ArgumentContext>();
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::ArgumentsContext::argument(size_t i) {
  return getRuleContext<FuncTestCaseParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::ArgumentsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::ArgumentsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::ArgumentsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleArguments;
}


std::any FuncTestCaseParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ArgumentsContext* FuncTestCaseParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 16, FuncTestCaseParser::RuleArguments);
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
    setState(258);
    argument();
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(259);
      match(FuncTestCaseParser::Comma);
      setState(260);
      argument();
      setState(265);
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

//----------------- ResultContext ------------------------------------------------------------------

FuncTestCaseParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::ResultContext::argument() {
  return getRuleContext<FuncTestCaseParser::ArgumentContext>(0);
}

FuncTestCaseParser::SubstraitErrorContext* FuncTestCaseParser::ResultContext::substraitError() {
  return getRuleContext<FuncTestCaseParser::SubstraitErrorContext>(0);
}


size_t FuncTestCaseParser::ResultContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleResult;
}


std::any FuncTestCaseParser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ResultContext* FuncTestCaseParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 18, FuncTestCaseParser::RuleResult);

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
    switch (_input->LA(1)) {
      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral:
      case FuncTestCaseParser::BooleanLiteral:
      case FuncTestCaseParser::TimestampTzLiteral:
      case FuncTestCaseParser::TimestampLiteral:
      case FuncTestCaseParser::TimeLiteral:
      case FuncTestCaseParser::DateLiteral:
      case FuncTestCaseParser::IntervalYearLiteral:
      case FuncTestCaseParser::IntervalDayLiteral:
      case FuncTestCaseParser::IntervalCompoundLiteral:
      case FuncTestCaseParser::NullLiteral:
      case FuncTestCaseParser::StringLiteral:
      case FuncTestCaseParser::OBrace:
      case FuncTestCaseParser::OParen:
      case FuncTestCaseParser::OBracket:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or:
      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(266);
        argument();
        break;
      }

      case FuncTestCaseParser::ErrorResult:
      case FuncTestCaseParser::UndefineResult: {
        enterOuterAlt(_localctx, 2);
        setState(267);
        substraitError();
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

//----------------- ArgumentContext ------------------------------------------------------------------

FuncTestCaseParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::NullArgContext* FuncTestCaseParser::ArgumentContext::nullArg() {
  return getRuleContext<FuncTestCaseParser::NullArgContext>(0);
}

FuncTestCaseParser::EnumArgContext* FuncTestCaseParser::ArgumentContext::enumArg() {
  return getRuleContext<FuncTestCaseParser::EnumArgContext>(0);
}

FuncTestCaseParser::IntArgContext* FuncTestCaseParser::ArgumentContext::intArg() {
  return getRuleContext<FuncTestCaseParser::IntArgContext>(0);
}

FuncTestCaseParser::FloatArgContext* FuncTestCaseParser::ArgumentContext::floatArg() {
  return getRuleContext<FuncTestCaseParser::FloatArgContext>(0);
}

FuncTestCaseParser::BooleanArgContext* FuncTestCaseParser::ArgumentContext::booleanArg() {
  return getRuleContext<FuncTestCaseParser::BooleanArgContext>(0);
}

FuncTestCaseParser::StringArgContext* FuncTestCaseParser::ArgumentContext::stringArg() {
  return getRuleContext<FuncTestCaseParser::StringArgContext>(0);
}

FuncTestCaseParser::DecimalArgContext* FuncTestCaseParser::ArgumentContext::decimalArg() {
  return getRuleContext<FuncTestCaseParser::DecimalArgContext>(0);
}

FuncTestCaseParser::DateArgContext* FuncTestCaseParser::ArgumentContext::dateArg() {
  return getRuleContext<FuncTestCaseParser::DateArgContext>(0);
}

FuncTestCaseParser::IntervalYearArgContext* FuncTestCaseParser::ArgumentContext::intervalYearArg() {
  return getRuleContext<FuncTestCaseParser::IntervalYearArgContext>(0);
}

FuncTestCaseParser::IntervalDayArgContext* FuncTestCaseParser::ArgumentContext::intervalDayArg() {
  return getRuleContext<FuncTestCaseParser::IntervalDayArgContext>(0);
}

FuncTestCaseParser::IntervalCompoundArgContext* FuncTestCaseParser::ArgumentContext::intervalCompoundArg() {
  return getRuleContext<FuncTestCaseParser::IntervalCompoundArgContext>(0);
}

FuncTestCaseParser::FixedCharArgContext* FuncTestCaseParser::ArgumentContext::fixedCharArg() {
  return getRuleContext<FuncTestCaseParser::FixedCharArgContext>(0);
}

FuncTestCaseParser::VarCharArgContext* FuncTestCaseParser::ArgumentContext::varCharArg() {
  return getRuleContext<FuncTestCaseParser::VarCharArgContext>(0);
}

FuncTestCaseParser::FixedBinaryArgContext* FuncTestCaseParser::ArgumentContext::fixedBinaryArg() {
  return getRuleContext<FuncTestCaseParser::FixedBinaryArgContext>(0);
}

FuncTestCaseParser::PrecisionTimeArgContext* FuncTestCaseParser::ArgumentContext::precisionTimeArg() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimeArgContext>(0);
}

FuncTestCaseParser::PrecisionTimestampArgContext* FuncTestCaseParser::ArgumentContext::precisionTimestampArg() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampArgContext>(0);
}

FuncTestCaseParser::PrecisionTimestampTZArgContext* FuncTestCaseParser::ArgumentContext::precisionTimestampTZArg() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampTZArgContext>(0);
}

FuncTestCaseParser::ListArgContext* FuncTestCaseParser::ArgumentContext::listArg() {
  return getRuleContext<FuncTestCaseParser::ListArgContext>(0);
}

FuncTestCaseParser::StructArgContext* FuncTestCaseParser::ArgumentContext::structArg() {
  return getRuleContext<FuncTestCaseParser::StructArgContext>(0);
}

FuncTestCaseParser::MapArgContext* FuncTestCaseParser::ArgumentContext::mapArg() {
  return getRuleContext<FuncTestCaseParser::MapArgContext>(0);
}

FuncTestCaseParser::UserDefinedArgContext* FuncTestCaseParser::ArgumentContext::userDefinedArg() {
  return getRuleContext<FuncTestCaseParser::UserDefinedArgContext>(0);
}

FuncTestCaseParser::LambdaArgContext* FuncTestCaseParser::ArgumentContext::lambdaArg() {
  return getRuleContext<FuncTestCaseParser::LambdaArgContext>(0);
}

FuncTestCaseParser::FuncCallArgContext* FuncTestCaseParser::ArgumentContext::funcCallArg() {
  return getRuleContext<FuncTestCaseParser::FuncCallArgContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::ArgumentContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}


size_t FuncTestCaseParser::ArgumentContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleArgument;
}


std::any FuncTestCaseParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 20, FuncTestCaseParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(270);
      nullArg();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(271);
      enumArg();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(272);
      intArg();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(273);
      floatArg();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(274);
      booleanArg();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(275);
      stringArg();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(276);
      decimalArg();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(277);
      dateArg();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(278);
      intervalYearArg();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(279);
      intervalDayArg();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(280);
      intervalCompoundArg();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(281);
      fixedCharArg();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(282);
      varCharArg();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(283);
      fixedBinaryArg();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(284);
      precisionTimeArg();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(285);
      precisionTimestampArg();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(286);
      precisionTimestampTZArg();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(287);
      listArg();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(288);
      structArg();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(289);
      mapArg();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(290);
      userDefinedArg();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(291);
      lambdaArg();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(292);
      funcCallArg();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(293);
      match(FuncTestCaseParser::Identifier);
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

//----------------- AggFuncTestCaseContext ------------------------------------------------------------------

FuncTestCaseParser::AggFuncTestCaseContext::AggFuncTestCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::AggFuncCallContext* FuncTestCaseParser::AggFuncTestCaseContext::aggFuncCall() {
  return getRuleContext<FuncTestCaseParser::AggFuncCallContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::AggFuncTestCaseContext::Eq() {
  return getToken(FuncTestCaseParser::Eq, 0);
}

FuncTestCaseParser::ResultContext* FuncTestCaseParser::AggFuncTestCaseContext::result() {
  return getRuleContext<FuncTestCaseParser::ResultContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::AggFuncTestCaseContext::OBracket() {
  return getToken(FuncTestCaseParser::OBracket, 0);
}

FuncTestCaseParser::FuncOptionsContext* FuncTestCaseParser::AggFuncTestCaseContext::funcOptions() {
  return getRuleContext<FuncTestCaseParser::FuncOptionsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::AggFuncTestCaseContext::CBracket() {
  return getToken(FuncTestCaseParser::CBracket, 0);
}


size_t FuncTestCaseParser::AggFuncTestCaseContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleAggFuncTestCase;
}


std::any FuncTestCaseParser::AggFuncTestCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitAggFuncTestCase(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::AggFuncTestCaseContext* FuncTestCaseParser::aggFuncTestCase() {
  AggFuncTestCaseContext *_localctx = _tracker.createInstance<AggFuncTestCaseContext>(_ctx, getState());
  enterRule(_localctx, 22, FuncTestCaseParser::RuleAggFuncTestCase);
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
    setState(296);
    aggFuncCall();
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OBracket) {
      setState(297);
      match(FuncTestCaseParser::OBracket);
      setState(298);
      funcOptions();
      setState(299);
      match(FuncTestCaseParser::CBracket);
    }
    setState(303);
    match(FuncTestCaseParser::Eq);
    setState(304);
    result();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AggFuncCallContext ------------------------------------------------------------------

FuncTestCaseParser::AggFuncCallContext::AggFuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::AggFuncCallContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleAggFuncCall;
}

void FuncTestCaseParser::AggFuncCallContext::copyFrom(AggFuncCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleArgAggregateFuncCallContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::SingleArgAggregateFuncCallContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

FuncTestCaseParser::DataColumnContext* FuncTestCaseParser::SingleArgAggregateFuncCallContext::dataColumn() {
  return getRuleContext<FuncTestCaseParser::DataColumnContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::SingleArgAggregateFuncCallContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::SingleArgAggregateFuncCallContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

FuncTestCaseParser::SingleArgAggregateFuncCallContext::SingleArgAggregateFuncCallContext(AggFuncCallContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::SingleArgAggregateFuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitSingleArgAggregateFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiArgAggregateFuncCallContext ------------------------------------------------------------------

FuncTestCaseParser::TableDataContext* FuncTestCaseParser::MultiArgAggregateFuncCallContext::tableData() {
  return getRuleContext<FuncTestCaseParser::TableDataContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::MultiArgAggregateFuncCallContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::MultiArgAggregateFuncCallContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::MultiArgAggregateFuncCallContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

FuncTestCaseParser::QualifiedAggregateFuncArgsContext* FuncTestCaseParser::MultiArgAggregateFuncCallContext::qualifiedAggregateFuncArgs() {
  return getRuleContext<FuncTestCaseParser::QualifiedAggregateFuncArgsContext>(0);
}

FuncTestCaseParser::MultiArgAggregateFuncCallContext::MultiArgAggregateFuncCallContext(AggFuncCallContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::MultiArgAggregateFuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitMultiArgAggregateFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompactAggregateFuncCallContext ------------------------------------------------------------------

FuncTestCaseParser::TableRowsContext* FuncTestCaseParser::CompactAggregateFuncCallContext::tableRows() {
  return getRuleContext<FuncTestCaseParser::TableRowsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::CompactAggregateFuncCallContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::CompactAggregateFuncCallContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::CompactAggregateFuncCallContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

FuncTestCaseParser::AggregateFuncArgsContext* FuncTestCaseParser::CompactAggregateFuncCallContext::aggregateFuncArgs() {
  return getRuleContext<FuncTestCaseParser::AggregateFuncArgsContext>(0);
}

FuncTestCaseParser::CompactAggregateFuncCallContext::CompactAggregateFuncCallContext(AggFuncCallContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::CompactAggregateFuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitCompactAggregateFuncCall(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::AggFuncCallContext* FuncTestCaseParser::aggFuncCall() {
  AggFuncCallContext *_localctx = _tracker.createInstance<AggFuncCallContext>(_ctx, getState());
  enterRule(_localctx, 24, FuncTestCaseParser::RuleAggFuncCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Define: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::MultiArgAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(306);
        tableData();
        setState(307);
        antlrcpp::downCast<MultiArgAggregateFuncCallContext *>(_localctx)->funcName = identifier();
        setState(308);
        match(FuncTestCaseParser::OParen);
        setState(310);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3342549608562688) != 0) || ((((_la - 114) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 114)) & 17925) != 0)) {
          setState(309);
          qualifiedAggregateFuncArgs();
        }
        setState(312);
        match(FuncTestCaseParser::CParen);
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::CompactAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(314);
        tableRows();
        setState(315);
        antlrcpp::downCast<CompactAggregateFuncCallContext *>(_localctx)->functName = identifier();
        setState(316);
        match(FuncTestCaseParser::OParen);
        setState(318);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 12349748863303680) != 0) || ((((_la - 114) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 114)) & 17925) != 0)) {
          setState(317);
          aggregateFuncArgs();
        }
        setState(320);
        match(FuncTestCaseParser::CParen);
        break;
      }

      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or:
      case FuncTestCaseParser::Identifier: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::SingleArgAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(322);
        antlrcpp::downCast<SingleArgAggregateFuncCallContext *>(_localctx)->functName = identifier();
        setState(323);
        match(FuncTestCaseParser::OParen);
        setState(324);
        dataColumn();
        setState(325);
        match(FuncTestCaseParser::CParen);
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

//----------------- WindowFuncTestCaseContext ------------------------------------------------------------------

FuncTestCaseParser::WindowFuncTestCaseContext::WindowFuncTestCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::WindowFuncCallContext* FuncTestCaseParser::WindowFuncTestCaseContext::windowFuncCall() {
  return getRuleContext<FuncTestCaseParser::WindowFuncCallContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncTestCaseContext::Eq() {
  return getToken(FuncTestCaseParser::Eq, 0);
}

FuncTestCaseParser::WindowResultContext* FuncTestCaseParser::WindowFuncTestCaseContext::windowResult() {
  return getRuleContext<FuncTestCaseParser::WindowResultContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncTestCaseContext::OBracket() {
  return getToken(FuncTestCaseParser::OBracket, 0);
}

FuncTestCaseParser::FuncOptionsContext* FuncTestCaseParser::WindowFuncTestCaseContext::funcOptions() {
  return getRuleContext<FuncTestCaseParser::FuncOptionsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncTestCaseContext::CBracket() {
  return getToken(FuncTestCaseParser::CBracket, 0);
}


size_t FuncTestCaseParser::WindowFuncTestCaseContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleWindowFuncTestCase;
}


std::any FuncTestCaseParser::WindowFuncTestCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowFuncTestCase(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::WindowFuncTestCaseContext* FuncTestCaseParser::windowFuncTestCase() {
  WindowFuncTestCaseContext *_localctx = _tracker.createInstance<WindowFuncTestCaseContext>(_ctx, getState());
  enterRule(_localctx, 26, FuncTestCaseParser::RuleWindowFuncTestCase);
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
    setState(329);
    windowFuncCall();
    setState(334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OBracket) {
      setState(330);
      match(FuncTestCaseParser::OBracket);
      setState(331);
      funcOptions();
      setState(332);
      match(FuncTestCaseParser::CBracket);
    }
    setState(336);
    match(FuncTestCaseParser::Eq);
    setState(337);
    windowResult();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WindowFuncCallContext ------------------------------------------------------------------

FuncTestCaseParser::WindowFuncCallContext::WindowFuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::TableDataContext* FuncTestCaseParser::WindowFuncCallContext::tableData() {
  return getRuleContext<FuncTestCaseParser::TableDataContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncCallContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncCallContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncCallContext::Over() {
  return getToken(FuncTestCaseParser::Over, 0);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::WindowFuncCallContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncCallContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

FuncTestCaseParser::WindowFuncArgsContext* FuncTestCaseParser::WindowFuncCallContext::windowFuncArgs() {
  return getRuleContext<FuncTestCaseParser::WindowFuncArgsContext>(0);
}


size_t FuncTestCaseParser::WindowFuncCallContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleWindowFuncCall;
}


std::any FuncTestCaseParser::WindowFuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowFuncCall(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::WindowFuncCallContext* FuncTestCaseParser::windowFuncCall() {
  WindowFuncCallContext *_localctx = _tracker.createInstance<WindowFuncCallContext>(_ctx, getState());
  enterRule(_localctx, 28, FuncTestCaseParser::RuleWindowFuncCall);
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
    tableData();
    setState(340);
    antlrcpp::downCast<WindowFuncCallContext *>(_localctx)->funcName = identifier();
    setState(341);
    match(FuncTestCaseParser::OParen);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12349748863303680) != 0) || ((((_la - 114) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 114)) & 17925) != 0)) {
      setState(342);
      windowFuncArgs();
    }
    setState(345);
    match(FuncTestCaseParser::CParen);
    setState(346);
    match(FuncTestCaseParser::Over);
    setState(347);
    antlrcpp::downCast<WindowFuncCallContext *>(_localctx)->frameRef = match(FuncTestCaseParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WindowResultContext ------------------------------------------------------------------

FuncTestCaseParser::WindowResultContext::WindowResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::DataColumnContext* FuncTestCaseParser::WindowResultContext::dataColumn() {
  return getRuleContext<FuncTestCaseParser::DataColumnContext>(0);
}

FuncTestCaseParser::SubstraitErrorContext* FuncTestCaseParser::WindowResultContext::substraitError() {
  return getRuleContext<FuncTestCaseParser::SubstraitErrorContext>(0);
}


size_t FuncTestCaseParser::WindowResultContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleWindowResult;
}


std::any FuncTestCaseParser::WindowResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowResult(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::WindowResultContext* FuncTestCaseParser::windowResult() {
  WindowResultContext *_localctx = _tracker.createInstance<WindowResultContext>(_ctx, getState());
  enterRule(_localctx, 30, FuncTestCaseParser::RuleWindowResult);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(351);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::OParen: {
        enterOuterAlt(_localctx, 1);
        setState(349);
        dataColumn();
        break;
      }

      case FuncTestCaseParser::ErrorResult:
      case FuncTestCaseParser::UndefineResult: {
        enterOuterAlt(_localctx, 2);
        setState(350);
        substraitError();
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

//----------------- TableDataContext ------------------------------------------------------------------

FuncTestCaseParser::TableDataContext::TableDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::Define() {
  return getToken(FuncTestCaseParser::Define, 0);
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

std::vector<FuncTestCaseParser::DataTypeContext *> FuncTestCaseParser::TableDataContext::dataType() {
  return getRuleContexts<FuncTestCaseParser::DataTypeContext>();
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::TableDataContext::dataType(size_t i) {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(i);
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::Eq() {
  return getToken(FuncTestCaseParser::Eq, 0);
}

FuncTestCaseParser::TableRowsContext* FuncTestCaseParser::TableDataContext::tableRows() {
  return getRuleContext<FuncTestCaseParser::TableRowsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::TableDataContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::TableDataContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::TableDataContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleTableData;
}


std::any FuncTestCaseParser::TableDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitTableData(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::TableDataContext* FuncTestCaseParser::tableData() {
  TableDataContext *_localctx = _tracker.createInstance<TableDataContext>(_ctx, getState());
  enterRule(_localctx, 32, FuncTestCaseParser::RuleTableData);
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
    setState(353);
    match(FuncTestCaseParser::Define);
    setState(354);
    antlrcpp::downCast<TableDataContext *>(_localctx)->tableName = match(FuncTestCaseParser::Identifier);
    setState(355);
    match(FuncTestCaseParser::OParen);
    setState(356);
    dataType();
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(357);
      match(FuncTestCaseParser::Comma);
      setState(358);
      dataType();
      setState(363);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(364);
    match(FuncTestCaseParser::CParen);
    setState(365);
    match(FuncTestCaseParser::Eq);
    setState(366);
    tableRows();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableRowsContext ------------------------------------------------------------------

FuncTestCaseParser::TableRowsContext::TableRowsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::TableRowsContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::TableRowsContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

std::vector<FuncTestCaseParser::ColumnValuesContext *> FuncTestCaseParser::TableRowsContext::columnValues() {
  return getRuleContexts<FuncTestCaseParser::ColumnValuesContext>();
}

FuncTestCaseParser::ColumnValuesContext* FuncTestCaseParser::TableRowsContext::columnValues(size_t i) {
  return getRuleContext<FuncTestCaseParser::ColumnValuesContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::TableRowsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::TableRowsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::TableRowsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleTableRows;
}


std::any FuncTestCaseParser::TableRowsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitTableRows(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::TableRowsContext* FuncTestCaseParser::tableRows() {
  TableRowsContext *_localctx = _tracker.createInstance<TableRowsContext>(_ctx, getState());
  enterRule(_localctx, 34, FuncTestCaseParser::RuleTableRows);
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
    setState(368);
    match(FuncTestCaseParser::OParen);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OParen) {
      setState(369);
      columnValues();
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(370);
        match(FuncTestCaseParser::Comma);
        setState(371);
        columnValues();
        setState(376);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(379);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataColumnContext ------------------------------------------------------------------

FuncTestCaseParser::DataColumnContext::DataColumnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::ColumnValuesContext* FuncTestCaseParser::DataColumnContext::columnValues() {
  return getRuleContext<FuncTestCaseParser::ColumnValuesContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::DataColumnContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::DataColumnContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}


size_t FuncTestCaseParser::DataColumnContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDataColumn;
}


std::any FuncTestCaseParser::DataColumnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDataColumn(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DataColumnContext* FuncTestCaseParser::dataColumn() {
  DataColumnContext *_localctx = _tracker.createInstance<DataColumnContext>(_ctx, getState());
  enterRule(_localctx, 36, FuncTestCaseParser::RuleDataColumn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    columnValues();
    setState(382);
    match(FuncTestCaseParser::DoubleColon);
    setState(383);
    dataType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnValuesContext ------------------------------------------------------------------

FuncTestCaseParser::ColumnValuesContext::ColumnValuesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::ColumnValuesContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::ColumnValuesContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

std::vector<FuncTestCaseParser::LiteralContext *> FuncTestCaseParser::ColumnValuesContext::literal() {
  return getRuleContexts<FuncTestCaseParser::LiteralContext>();
}

FuncTestCaseParser::LiteralContext* FuncTestCaseParser::ColumnValuesContext::literal(size_t i) {
  return getRuleContext<FuncTestCaseParser::LiteralContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::ColumnValuesContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::ColumnValuesContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::ColumnValuesContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleColumnValues;
}


std::any FuncTestCaseParser::ColumnValuesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitColumnValues(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ColumnValuesContext* FuncTestCaseParser::columnValues() {
  ColumnValuesContext *_localctx = _tracker.createInstance<ColumnValuesContext>(_ctx, getState());
  enterRule(_localctx, 38, FuncTestCaseParser::RuleColumnValues);
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
    setState(385);
    match(FuncTestCaseParser::OParen);
    setState(394);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1090749761323008) != 0)) {
      setState(386);
      literal();
      setState(391);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(387);
        match(FuncTestCaseParser::Comma);
        setState(388);
        literal();
        setState(393);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(396);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

FuncTestCaseParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::NullLiteral() {
  return getToken(FuncTestCaseParser::NullLiteral, 0);
}

FuncTestCaseParser::NumericLiteralContext* FuncTestCaseParser::LiteralContext::numericLiteral() {
  return getRuleContext<FuncTestCaseParser::NumericLiteralContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::BooleanLiteral() {
  return getToken(FuncTestCaseParser::BooleanLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::StringLiteral() {
  return getToken(FuncTestCaseParser::StringLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::DateLiteral() {
  return getToken(FuncTestCaseParser::DateLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::TimeLiteral() {
  return getToken(FuncTestCaseParser::TimeLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::TimestampLiteral() {
  return getToken(FuncTestCaseParser::TimestampLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::TimestampTzLiteral() {
  return getToken(FuncTestCaseParser::TimestampTzLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::IntervalYearLiteral() {
  return getToken(FuncTestCaseParser::IntervalYearLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::IntervalDayLiteral() {
  return getToken(FuncTestCaseParser::IntervalDayLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralContext::IntervalCompoundLiteral() {
  return getToken(FuncTestCaseParser::IntervalCompoundLiteral, 0);
}


size_t FuncTestCaseParser::LiteralContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLiteral;
}


std::any FuncTestCaseParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LiteralContext* FuncTestCaseParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 40, FuncTestCaseParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(409);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::NullLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(398);
        match(FuncTestCaseParser::NullLiteral);
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(399);
        numericLiteral();
        break;
      }

      case FuncTestCaseParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(400);
        match(FuncTestCaseParser::BooleanLiteral);
        break;
      }

      case FuncTestCaseParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(401);
        match(FuncTestCaseParser::StringLiteral);
        break;
      }

      case FuncTestCaseParser::DateLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(402);
        match(FuncTestCaseParser::DateLiteral);
        break;
      }

      case FuncTestCaseParser::TimeLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(403);
        match(FuncTestCaseParser::TimeLiteral);
        break;
      }

      case FuncTestCaseParser::TimestampLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(404);
        match(FuncTestCaseParser::TimestampLiteral);
        break;
      }

      case FuncTestCaseParser::TimestampTzLiteral: {
        enterOuterAlt(_localctx, 8);
        setState(405);
        match(FuncTestCaseParser::TimestampTzLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalYearLiteral: {
        enterOuterAlt(_localctx, 9);
        setState(406);
        match(FuncTestCaseParser::IntervalYearLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalDayLiteral: {
        enterOuterAlt(_localctx, 10);
        setState(407);
        match(FuncTestCaseParser::IntervalDayLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalCompoundLiteral: {
        enterOuterAlt(_localctx, 11);
        setState(408);
        match(FuncTestCaseParser::IntervalCompoundLiteral);
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

//----------------- QualifiedAggregateFuncArgsContext ------------------------------------------------------------------

FuncTestCaseParser::QualifiedAggregateFuncArgsContext::QualifiedAggregateFuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FuncTestCaseParser::QualifiedAggregateFuncArgContext *> FuncTestCaseParser::QualifiedAggregateFuncArgsContext::qualifiedAggregateFuncArg() {
  return getRuleContexts<FuncTestCaseParser::QualifiedAggregateFuncArgContext>();
}

FuncTestCaseParser::QualifiedAggregateFuncArgContext* FuncTestCaseParser::QualifiedAggregateFuncArgsContext::qualifiedAggregateFuncArg(size_t i) {
  return getRuleContext<FuncTestCaseParser::QualifiedAggregateFuncArgContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::QualifiedAggregateFuncArgsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::QualifiedAggregateFuncArgsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::QualifiedAggregateFuncArgsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleQualifiedAggregateFuncArgs;
}


std::any FuncTestCaseParser::QualifiedAggregateFuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedAggregateFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::QualifiedAggregateFuncArgsContext* FuncTestCaseParser::qualifiedAggregateFuncArgs() {
  QualifiedAggregateFuncArgsContext *_localctx = _tracker.createInstance<QualifiedAggregateFuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 42, FuncTestCaseParser::RuleQualifiedAggregateFuncArgs);
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
    setState(411);
    qualifiedAggregateFuncArg();
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(412);
      match(FuncTestCaseParser::Comma);
      setState(413);
      qualifiedAggregateFuncArg();
      setState(418);
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

//----------------- AggregateFuncArgsContext ------------------------------------------------------------------

FuncTestCaseParser::AggregateFuncArgsContext::AggregateFuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FuncTestCaseParser::AggregateFuncArgContext *> FuncTestCaseParser::AggregateFuncArgsContext::aggregateFuncArg() {
  return getRuleContexts<FuncTestCaseParser::AggregateFuncArgContext>();
}

FuncTestCaseParser::AggregateFuncArgContext* FuncTestCaseParser::AggregateFuncArgsContext::aggregateFuncArg(size_t i) {
  return getRuleContext<FuncTestCaseParser::AggregateFuncArgContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::AggregateFuncArgsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::AggregateFuncArgsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::AggregateFuncArgsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleAggregateFuncArgs;
}


std::any FuncTestCaseParser::AggregateFuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitAggregateFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::AggregateFuncArgsContext* FuncTestCaseParser::aggregateFuncArgs() {
  AggregateFuncArgsContext *_localctx = _tracker.createInstance<AggregateFuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 44, FuncTestCaseParser::RuleAggregateFuncArgs);
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
    setState(419);
    aggregateFuncArg();
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(420);
      match(FuncTestCaseParser::Comma);
      setState(421);
      aggregateFuncArg();
      setState(426);
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

//----------------- QualifiedAggregateFuncArgContext ------------------------------------------------------------------

FuncTestCaseParser::QualifiedAggregateFuncArgContext::QualifiedAggregateFuncArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::QualifiedAggregateFuncArgContext::Dot() {
  return getToken(FuncTestCaseParser::Dot, 0);
}

tree::TerminalNode* FuncTestCaseParser::QualifiedAggregateFuncArgContext::ColumnName() {
  return getToken(FuncTestCaseParser::ColumnName, 0);
}

tree::TerminalNode* FuncTestCaseParser::QualifiedAggregateFuncArgContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::QualifiedAggregateFuncArgContext::argument() {
  return getRuleContext<FuncTestCaseParser::ArgumentContext>(0);
}


size_t FuncTestCaseParser::QualifiedAggregateFuncArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleQualifiedAggregateFuncArg;
}


std::any FuncTestCaseParser::QualifiedAggregateFuncArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedAggregateFuncArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::QualifiedAggregateFuncArgContext* FuncTestCaseParser::qualifiedAggregateFuncArg() {
  QualifiedAggregateFuncArgContext *_localctx = _tracker.createInstance<QualifiedAggregateFuncArgContext>(_ctx, getState());
  enterRule(_localctx, 46, FuncTestCaseParser::RuleQualifiedAggregateFuncArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      antlrcpp::downCast<QualifiedAggregateFuncArgContext *>(_localctx)->tableName = match(FuncTestCaseParser::Identifier);
      setState(428);
      match(FuncTestCaseParser::Dot);
      setState(429);
      match(FuncTestCaseParser::ColumnName);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(430);
      argument();
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

//----------------- AggregateFuncArgContext ------------------------------------------------------------------

FuncTestCaseParser::AggregateFuncArgContext::AggregateFuncArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::AggregateFuncArgContext::ColumnName() {
  return getToken(FuncTestCaseParser::ColumnName, 0);
}

tree::TerminalNode* FuncTestCaseParser::AggregateFuncArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::AggregateFuncArgContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::AggregateFuncArgContext::argument() {
  return getRuleContext<FuncTestCaseParser::ArgumentContext>(0);
}


size_t FuncTestCaseParser::AggregateFuncArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleAggregateFuncArg;
}


std::any FuncTestCaseParser::AggregateFuncArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitAggregateFuncArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::AggregateFuncArgContext* FuncTestCaseParser::aggregateFuncArg() {
  AggregateFuncArgContext *_localctx = _tracker.createInstance<AggregateFuncArgContext>(_ctx, getState());
  enterRule(_localctx, 48, FuncTestCaseParser::RuleAggregateFuncArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::ColumnName: {
        enterOuterAlt(_localctx, 1);
        setState(433);
        match(FuncTestCaseParser::ColumnName);
        setState(434);
        match(FuncTestCaseParser::DoubleColon);
        setState(435);
        dataType();
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral:
      case FuncTestCaseParser::BooleanLiteral:
      case FuncTestCaseParser::TimestampTzLiteral:
      case FuncTestCaseParser::TimestampLiteral:
      case FuncTestCaseParser::TimeLiteral:
      case FuncTestCaseParser::DateLiteral:
      case FuncTestCaseParser::IntervalYearLiteral:
      case FuncTestCaseParser::IntervalDayLiteral:
      case FuncTestCaseParser::IntervalCompoundLiteral:
      case FuncTestCaseParser::NullLiteral:
      case FuncTestCaseParser::StringLiteral:
      case FuncTestCaseParser::OBrace:
      case FuncTestCaseParser::OParen:
      case FuncTestCaseParser::OBracket:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or:
      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(436);
        argument();
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

//----------------- WindowFuncArgsContext ------------------------------------------------------------------

FuncTestCaseParser::WindowFuncArgsContext::WindowFuncArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FuncTestCaseParser::WindowFuncArgContext *> FuncTestCaseParser::WindowFuncArgsContext::windowFuncArg() {
  return getRuleContexts<FuncTestCaseParser::WindowFuncArgContext>();
}

FuncTestCaseParser::WindowFuncArgContext* FuncTestCaseParser::WindowFuncArgsContext::windowFuncArg(size_t i) {
  return getRuleContext<FuncTestCaseParser::WindowFuncArgContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::WindowFuncArgsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncArgsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::WindowFuncArgsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleWindowFuncArgs;
}


std::any FuncTestCaseParser::WindowFuncArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowFuncArgs(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::WindowFuncArgsContext* FuncTestCaseParser::windowFuncArgs() {
  WindowFuncArgsContext *_localctx = _tracker.createInstance<WindowFuncArgsContext>(_ctx, getState());
  enterRule(_localctx, 50, FuncTestCaseParser::RuleWindowFuncArgs);
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
    setState(439);
    windowFuncArg();
    setState(444);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(440);
      match(FuncTestCaseParser::Comma);
      setState(441);
      windowFuncArg();
      setState(446);
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

//----------------- WindowFuncArgContext ------------------------------------------------------------------

FuncTestCaseParser::WindowFuncArgContext::WindowFuncArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::WindowFuncArgContext::ColumnName() {
  return getToken(FuncTestCaseParser::ColumnName, 0);
}

FuncTestCaseParser::ArgumentContext* FuncTestCaseParser::WindowFuncArgContext::argument() {
  return getRuleContext<FuncTestCaseParser::ArgumentContext>(0);
}


size_t FuncTestCaseParser::WindowFuncArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleWindowFuncArg;
}


std::any FuncTestCaseParser::WindowFuncArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitWindowFuncArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::WindowFuncArgContext* FuncTestCaseParser::windowFuncArg() {
  WindowFuncArgContext *_localctx = _tracker.createInstance<WindowFuncArgContext>(_ctx, getState());
  enterRule(_localctx, 52, FuncTestCaseParser::RuleWindowFuncArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::ColumnName: {
        enterOuterAlt(_localctx, 1);
        setState(447);
        match(FuncTestCaseParser::ColumnName);
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral:
      case FuncTestCaseParser::BooleanLiteral:
      case FuncTestCaseParser::TimestampTzLiteral:
      case FuncTestCaseParser::TimestampLiteral:
      case FuncTestCaseParser::TimeLiteral:
      case FuncTestCaseParser::DateLiteral:
      case FuncTestCaseParser::IntervalYearLiteral:
      case FuncTestCaseParser::IntervalDayLiteral:
      case FuncTestCaseParser::IntervalCompoundLiteral:
      case FuncTestCaseParser::NullLiteral:
      case FuncTestCaseParser::StringLiteral:
      case FuncTestCaseParser::OBrace:
      case FuncTestCaseParser::OParen:
      case FuncTestCaseParser::OBracket:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or:
      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(448);
        argument();
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

//----------------- NumericLiteralContext ------------------------------------------------------------------

FuncTestCaseParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::NumericLiteralContext::DecimalLiteral() {
  return getToken(FuncTestCaseParser::DecimalLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::NumericLiteralContext::IntegerLiteral() {
  return getToken(FuncTestCaseParser::IntegerLiteral, 0);
}

FuncTestCaseParser::FloatLiteralContext* FuncTestCaseParser::NumericLiteralContext::floatLiteral() {
  return getRuleContext<FuncTestCaseParser::FloatLiteralContext>(0);
}


size_t FuncTestCaseParser::NumericLiteralContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleNumericLiteral;
}


std::any FuncTestCaseParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::NumericLiteralContext* FuncTestCaseParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, FuncTestCaseParser::RuleNumericLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::DecimalLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(451);
        match(FuncTestCaseParser::DecimalLiteral);
        break;
      }

      case FuncTestCaseParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(452);
        match(FuncTestCaseParser::IntegerLiteral);
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::FloatLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(453);
        floatLiteral();
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

//----------------- FloatLiteralContext ------------------------------------------------------------------

FuncTestCaseParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FloatLiteralContext::FloatLiteral() {
  return getToken(FuncTestCaseParser::FloatLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::FloatLiteralContext::NaN() {
  return getToken(FuncTestCaseParser::NaN, 0);
}


size_t FuncTestCaseParser::FloatLiteralContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFloatLiteral;
}


std::any FuncTestCaseParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FloatLiteralContext* FuncTestCaseParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, FuncTestCaseParser::RuleFloatLiteral);
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
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::NaN

    || _la == FuncTestCaseParser::FloatLiteral)) {
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

//----------------- NullArgContext ------------------------------------------------------------------

FuncTestCaseParser::NullArgContext::NullArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::NullArgContext::NullLiteral() {
  return getToken(FuncTestCaseParser::NullLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::NullArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::NullArgContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}


size_t FuncTestCaseParser::NullArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleNullArg;
}


std::any FuncTestCaseParser::NullArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitNullArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::NullArgContext* FuncTestCaseParser::nullArg() {
  NullArgContext *_localctx = _tracker.createInstance<NullArgContext>(_ctx, getState());
  enterRule(_localctx, 58, FuncTestCaseParser::RuleNullArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(FuncTestCaseParser::NullLiteral);
    setState(459);
    match(FuncTestCaseParser::DoubleColon);
    setState(460);
    dataType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntArgContext ------------------------------------------------------------------

FuncTestCaseParser::IntArgContext::IntArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntArgContext::IntegerLiteral() {
  return getToken(FuncTestCaseParser::IntegerLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::IntTypeContext* FuncTestCaseParser::IntArgContext::intType() {
  return getRuleContext<FuncTestCaseParser::IntTypeContext>(0);
}


size_t FuncTestCaseParser::IntArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntArg;
}


std::any FuncTestCaseParser::IntArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntArgContext* FuncTestCaseParser::intArg() {
  IntArgContext *_localctx = _tracker.createInstance<IntArgContext>(_ctx, getState());
  enterRule(_localctx, 60, FuncTestCaseParser::RuleIntArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    match(FuncTestCaseParser::IntegerLiteral);
    setState(463);
    match(FuncTestCaseParser::DoubleColon);
    setState(464);
    intType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatArgContext ------------------------------------------------------------------

FuncTestCaseParser::FloatArgContext::FloatArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::NumericLiteralContext* FuncTestCaseParser::FloatArgContext::numericLiteral() {
  return getRuleContext<FuncTestCaseParser::NumericLiteralContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FloatArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::FloatTypeContext* FuncTestCaseParser::FloatArgContext::floatType() {
  return getRuleContext<FuncTestCaseParser::FloatTypeContext>(0);
}


size_t FuncTestCaseParser::FloatArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFloatArg;
}


std::any FuncTestCaseParser::FloatArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFloatArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FloatArgContext* FuncTestCaseParser::floatArg() {
  FloatArgContext *_localctx = _tracker.createInstance<FloatArgContext>(_ctx, getState());
  enterRule(_localctx, 62, FuncTestCaseParser::RuleFloatArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    numericLiteral();
    setState(467);
    match(FuncTestCaseParser::DoubleColon);
    setState(468);
    floatType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalArgContext ------------------------------------------------------------------

FuncTestCaseParser::DecimalArgContext::DecimalArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::NumericLiteralContext* FuncTestCaseParser::DecimalArgContext::numericLiteral() {
  return getRuleContext<FuncTestCaseParser::NumericLiteralContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::DecimalTypeContext* FuncTestCaseParser::DecimalArgContext::decimalType() {
  return getRuleContext<FuncTestCaseParser::DecimalTypeContext>(0);
}


size_t FuncTestCaseParser::DecimalArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDecimalArg;
}


std::any FuncTestCaseParser::DecimalArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDecimalArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DecimalArgContext* FuncTestCaseParser::decimalArg() {
  DecimalArgContext *_localctx = _tracker.createInstance<DecimalArgContext>(_ctx, getState());
  enterRule(_localctx, 64, FuncTestCaseParser::RuleDecimalArg);

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
    numericLiteral();
    setState(471);
    match(FuncTestCaseParser::DoubleColon);
    setState(472);
    decimalType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanArgContext ------------------------------------------------------------------

FuncTestCaseParser::BooleanArgContext::BooleanArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::BooleanArgContext::BooleanLiteral() {
  return getToken(FuncTestCaseParser::BooleanLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::BooleanArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::BooleanTypeContext* FuncTestCaseParser::BooleanArgContext::booleanType() {
  return getRuleContext<FuncTestCaseParser::BooleanTypeContext>(0);
}


size_t FuncTestCaseParser::BooleanArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleBooleanArg;
}


std::any FuncTestCaseParser::BooleanArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitBooleanArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::BooleanArgContext* FuncTestCaseParser::booleanArg() {
  BooleanArgContext *_localctx = _tracker.createInstance<BooleanArgContext>(_ctx, getState());
  enterRule(_localctx, 66, FuncTestCaseParser::RuleBooleanArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(FuncTestCaseParser::BooleanLiteral);
    setState(475);
    match(FuncTestCaseParser::DoubleColon);
    setState(476);
    booleanType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringArgContext ------------------------------------------------------------------

FuncTestCaseParser::StringArgContext::StringArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::StringArgContext::StringLiteral() {
  return getToken(FuncTestCaseParser::StringLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::StringArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::StringTypeContext* FuncTestCaseParser::StringArgContext::stringType() {
  return getRuleContext<FuncTestCaseParser::StringTypeContext>(0);
}


size_t FuncTestCaseParser::StringArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleStringArg;
}


std::any FuncTestCaseParser::StringArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitStringArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::StringArgContext* FuncTestCaseParser::stringArg() {
  StringArgContext *_localctx = _tracker.createInstance<StringArgContext>(_ctx, getState());
  enterRule(_localctx, 68, FuncTestCaseParser::RuleStringArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(478);
    match(FuncTestCaseParser::StringLiteral);
    setState(479);
    match(FuncTestCaseParser::DoubleColon);
    setState(480);
    stringType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateArgContext ------------------------------------------------------------------

FuncTestCaseParser::DateArgContext::DateArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::DateArgContext::DateLiteral() {
  return getToken(FuncTestCaseParser::DateLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::DateArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::DateTypeContext* FuncTestCaseParser::DateArgContext::dateType() {
  return getRuleContext<FuncTestCaseParser::DateTypeContext>(0);
}


size_t FuncTestCaseParser::DateArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDateArg;
}


std::any FuncTestCaseParser::DateArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDateArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DateArgContext* FuncTestCaseParser::dateArg() {
  DateArgContext *_localctx = _tracker.createInstance<DateArgContext>(_ctx, getState());
  enterRule(_localctx, 70, FuncTestCaseParser::RuleDateArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    match(FuncTestCaseParser::DateLiteral);
    setState(483);
    match(FuncTestCaseParser::DoubleColon);
    setState(484);
    dateType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalYearArgContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalYearArgContext::IntervalYearArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalYearArgContext::IntervalYearLiteral() {
  return getToken(FuncTestCaseParser::IntervalYearLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalYearArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::IntervalYearTypeContext* FuncTestCaseParser::IntervalYearArgContext::intervalYearType() {
  return getRuleContext<FuncTestCaseParser::IntervalYearTypeContext>(0);
}


size_t FuncTestCaseParser::IntervalYearArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalYearArg;
}


std::any FuncTestCaseParser::IntervalYearArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalYearArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalYearArgContext* FuncTestCaseParser::intervalYearArg() {
  IntervalYearArgContext *_localctx = _tracker.createInstance<IntervalYearArgContext>(_ctx, getState());
  enterRule(_localctx, 72, FuncTestCaseParser::RuleIntervalYearArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(FuncTestCaseParser::IntervalYearLiteral);
    setState(487);
    match(FuncTestCaseParser::DoubleColon);
    setState(488);
    intervalYearType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalDayArgContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalDayArgContext::IntervalDayArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayArgContext::IntervalDayLiteral() {
  return getToken(FuncTestCaseParser::IntervalDayLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::IntervalDayTypeContext* FuncTestCaseParser::IntervalDayArgContext::intervalDayType() {
  return getRuleContext<FuncTestCaseParser::IntervalDayTypeContext>(0);
}


size_t FuncTestCaseParser::IntervalDayArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalDayArg;
}


std::any FuncTestCaseParser::IntervalDayArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalDayArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalDayArgContext* FuncTestCaseParser::intervalDayArg() {
  IntervalDayArgContext *_localctx = _tracker.createInstance<IntervalDayArgContext>(_ctx, getState());
  enterRule(_localctx, 74, FuncTestCaseParser::RuleIntervalDayArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(FuncTestCaseParser::IntervalDayLiteral);
    setState(491);
    match(FuncTestCaseParser::DoubleColon);
    setState(492);
    intervalDayType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalCompoundArgContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalCompoundArgContext::IntervalCompoundArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundArgContext::IntervalCompoundLiteral() {
  return getToken(FuncTestCaseParser::IntervalCompoundLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::IntervalCompoundTypeContext* FuncTestCaseParser::IntervalCompoundArgContext::intervalCompoundType() {
  return getRuleContext<FuncTestCaseParser::IntervalCompoundTypeContext>(0);
}


size_t FuncTestCaseParser::IntervalCompoundArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalCompoundArg;
}


std::any FuncTestCaseParser::IntervalCompoundArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalCompoundArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalCompoundArgContext* FuncTestCaseParser::intervalCompoundArg() {
  IntervalCompoundArgContext *_localctx = _tracker.createInstance<IntervalCompoundArgContext>(_ctx, getState());
  enterRule(_localctx, 76, FuncTestCaseParser::RuleIntervalCompoundArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(FuncTestCaseParser::IntervalCompoundLiteral);
    setState(495);
    match(FuncTestCaseParser::DoubleColon);
    setState(496);
    intervalCompoundType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedCharArgContext ------------------------------------------------------------------

FuncTestCaseParser::FixedCharArgContext::FixedCharArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FixedCharArgContext::StringLiteral() {
  return getToken(FuncTestCaseParser::StringLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedCharArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::FixedCharTypeContext* FuncTestCaseParser::FixedCharArgContext::fixedCharType() {
  return getRuleContext<FuncTestCaseParser::FixedCharTypeContext>(0);
}


size_t FuncTestCaseParser::FixedCharArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFixedCharArg;
}


std::any FuncTestCaseParser::FixedCharArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFixedCharArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FixedCharArgContext* FuncTestCaseParser::fixedCharArg() {
  FixedCharArgContext *_localctx = _tracker.createInstance<FixedCharArgContext>(_ctx, getState());
  enterRule(_localctx, 78, FuncTestCaseParser::RuleFixedCharArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    match(FuncTestCaseParser::StringLiteral);
    setState(499);
    match(FuncTestCaseParser::DoubleColon);
    setState(500);
    fixedCharType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarCharArgContext ------------------------------------------------------------------

FuncTestCaseParser::VarCharArgContext::VarCharArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::VarCharArgContext::StringLiteral() {
  return getToken(FuncTestCaseParser::StringLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::VarCharArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::VarCharTypeContext* FuncTestCaseParser::VarCharArgContext::varCharType() {
  return getRuleContext<FuncTestCaseParser::VarCharTypeContext>(0);
}


size_t FuncTestCaseParser::VarCharArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleVarCharArg;
}


std::any FuncTestCaseParser::VarCharArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitVarCharArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::VarCharArgContext* FuncTestCaseParser::varCharArg() {
  VarCharArgContext *_localctx = _tracker.createInstance<VarCharArgContext>(_ctx, getState());
  enterRule(_localctx, 80, FuncTestCaseParser::RuleVarCharArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(FuncTestCaseParser::StringLiteral);
    setState(503);
    match(FuncTestCaseParser::DoubleColon);
    setState(504);
    varCharType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedBinaryArgContext ------------------------------------------------------------------

FuncTestCaseParser::FixedBinaryArgContext::FixedBinaryArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryArgContext::StringLiteral() {
  return getToken(FuncTestCaseParser::StringLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::FixedBinaryTypeContext* FuncTestCaseParser::FixedBinaryArgContext::fixedBinaryType() {
  return getRuleContext<FuncTestCaseParser::FixedBinaryTypeContext>(0);
}


size_t FuncTestCaseParser::FixedBinaryArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFixedBinaryArg;
}


std::any FuncTestCaseParser::FixedBinaryArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFixedBinaryArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FixedBinaryArgContext* FuncTestCaseParser::fixedBinaryArg() {
  FixedBinaryArgContext *_localctx = _tracker.createInstance<FixedBinaryArgContext>(_ctx, getState());
  enterRule(_localctx, 82, FuncTestCaseParser::RuleFixedBinaryArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    match(FuncTestCaseParser::StringLiteral);
    setState(507);
    match(FuncTestCaseParser::DoubleColon);
    setState(508);
    fixedBinaryType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimeArgContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimeArgContext::PrecisionTimeArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeArgContext::TimeLiteral() {
  return getToken(FuncTestCaseParser::TimeLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::PrecisionTimeTypeContext* FuncTestCaseParser::PrecisionTimeArgContext::precisionTimeType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimeTypeContext>(0);
}


size_t FuncTestCaseParser::PrecisionTimeArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimeArg;
}


std::any FuncTestCaseParser::PrecisionTimeArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimeArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimeArgContext* FuncTestCaseParser::precisionTimeArg() {
  PrecisionTimeArgContext *_localctx = _tracker.createInstance<PrecisionTimeArgContext>(_ctx, getState());
  enterRule(_localctx, 84, FuncTestCaseParser::RulePrecisionTimeArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(FuncTestCaseParser::TimeLiteral);
    setState(511);
    match(FuncTestCaseParser::DoubleColon);
    setState(512);
    precisionTimeType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimestampArgContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimestampArgContext::PrecisionTimestampArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampArgContext::TimestampLiteral() {
  return getToken(FuncTestCaseParser::TimestampLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::PrecisionTimestampTypeContext* FuncTestCaseParser::PrecisionTimestampArgContext::precisionTimestampType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampTypeContext>(0);
}


size_t FuncTestCaseParser::PrecisionTimestampArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimestampArg;
}


std::any FuncTestCaseParser::PrecisionTimestampArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestampArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimestampArgContext* FuncTestCaseParser::precisionTimestampArg() {
  PrecisionTimestampArgContext *_localctx = _tracker.createInstance<PrecisionTimestampArgContext>(_ctx, getState());
  enterRule(_localctx, 86, FuncTestCaseParser::RulePrecisionTimestampArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(FuncTestCaseParser::TimestampLiteral);
    setState(515);
    match(FuncTestCaseParser::DoubleColon);
    setState(516);
    precisionTimestampType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimestampTZArgContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimestampTZArgContext::PrecisionTimestampTZArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZArgContext::TimestampTzLiteral() {
  return getToken(FuncTestCaseParser::TimestampTzLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::PrecisionTimestampTZTypeContext* FuncTestCaseParser::PrecisionTimestampTZArgContext::precisionTimestampTZType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampTZTypeContext>(0);
}


size_t FuncTestCaseParser::PrecisionTimestampTZArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimestampTZArg;
}


std::any FuncTestCaseParser::PrecisionTimestampTZArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestampTZArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimestampTZArgContext* FuncTestCaseParser::precisionTimestampTZArg() {
  PrecisionTimestampTZArgContext *_localctx = _tracker.createInstance<PrecisionTimestampTZArgContext>(_ctx, getState());
  enterRule(_localctx, 88, FuncTestCaseParser::RulePrecisionTimestampTZArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    match(FuncTestCaseParser::TimestampTzLiteral);
    setState(519);
    match(FuncTestCaseParser::DoubleColon);
    setState(520);
    precisionTimestampTZType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListArgContext ------------------------------------------------------------------

FuncTestCaseParser::ListArgContext::ListArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralListContext* FuncTestCaseParser::ListArgContext::literalList() {
  return getRuleContext<FuncTestCaseParser::LiteralListContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::ListArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::ListTypeContext* FuncTestCaseParser::ListArgContext::listType() {
  return getRuleContext<FuncTestCaseParser::ListTypeContext>(0);
}


size_t FuncTestCaseParser::ListArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleListArg;
}


std::any FuncTestCaseParser::ListArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitListArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ListArgContext* FuncTestCaseParser::listArg() {
  ListArgContext *_localctx = _tracker.createInstance<ListArgContext>(_ctx, getState());
  enterRule(_localctx, 90, FuncTestCaseParser::RuleListArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    literalList();
    setState(523);
    match(FuncTestCaseParser::DoubleColon);
    setState(524);
    listType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructArgContext ------------------------------------------------------------------

FuncTestCaseParser::StructArgContext::StructArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralStructContext* FuncTestCaseParser::StructArgContext::literalStruct() {
  return getRuleContext<FuncTestCaseParser::LiteralStructContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::StructArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::StructTypeContext* FuncTestCaseParser::StructArgContext::structType() {
  return getRuleContext<FuncTestCaseParser::StructTypeContext>(0);
}


size_t FuncTestCaseParser::StructArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleStructArg;
}


std::any FuncTestCaseParser::StructArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitStructArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::StructArgContext* FuncTestCaseParser::structArg() {
  StructArgContext *_localctx = _tracker.createInstance<StructArgContext>(_ctx, getState());
  enterRule(_localctx, 92, FuncTestCaseParser::RuleStructArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    literalStruct();
    setState(527);
    match(FuncTestCaseParser::DoubleColon);
    setState(528);
    structType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapArgContext ------------------------------------------------------------------

FuncTestCaseParser::MapArgContext::MapArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralMapContext* FuncTestCaseParser::MapArgContext::literalMap() {
  return getRuleContext<FuncTestCaseParser::LiteralMapContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::MapArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::MapTypeContext* FuncTestCaseParser::MapArgContext::mapType() {
  return getRuleContext<FuncTestCaseParser::MapTypeContext>(0);
}


size_t FuncTestCaseParser::MapArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleMapArg;
}


std::any FuncTestCaseParser::MapArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitMapArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::MapArgContext* FuncTestCaseParser::mapArg() {
  MapArgContext *_localctx = _tracker.createInstance<MapArgContext>(_ctx, getState());
  enterRule(_localctx, 94, FuncTestCaseParser::RuleMapArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    literalMap();
    setState(531);
    match(FuncTestCaseParser::DoubleColon);
    setState(532);
    mapType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserDefinedArgContext ------------------------------------------------------------------

FuncTestCaseParser::UserDefinedArgContext::UserDefinedArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralStructContext* FuncTestCaseParser::UserDefinedArgContext::literalStruct() {
  return getRuleContext<FuncTestCaseParser::LiteralStructContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::UserDefinedTypeContext* FuncTestCaseParser::UserDefinedArgContext::userDefinedType() {
  return getRuleContext<FuncTestCaseParser::UserDefinedTypeContext>(0);
}


size_t FuncTestCaseParser::UserDefinedArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleUserDefinedArg;
}


std::any FuncTestCaseParser::UserDefinedArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitUserDefinedArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::UserDefinedArgContext* FuncTestCaseParser::userDefinedArg() {
  UserDefinedArgContext *_localctx = _tracker.createInstance<UserDefinedArgContext>(_ctx, getState());
  enterRule(_localctx, 96, FuncTestCaseParser::RuleUserDefinedArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    literalStruct();
    setState(535);
    match(FuncTestCaseParser::DoubleColon);
    setState(536);
    userDefinedType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaArgContext ------------------------------------------------------------------

FuncTestCaseParser::LambdaArgContext::LambdaArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralLambdaContext* FuncTestCaseParser::LambdaArgContext::literalLambda() {
  return getRuleContext<FuncTestCaseParser::LiteralLambdaContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LambdaArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

FuncTestCaseParser::FuncTypeContext* FuncTestCaseParser::LambdaArgContext::funcType() {
  return getRuleContext<FuncTestCaseParser::FuncTypeContext>(0);
}


size_t FuncTestCaseParser::LambdaArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLambdaArg;
}


std::any FuncTestCaseParser::LambdaArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLambdaArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LambdaArgContext* FuncTestCaseParser::lambdaArg() {
  LambdaArgContext *_localctx = _tracker.createInstance<LambdaArgContext>(_ctx, getState());
  enterRule(_localctx, 98, FuncTestCaseParser::RuleLambdaArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    literalLambda();
    setState(539);
    match(FuncTestCaseParser::DoubleColon);
    setState(540);
    funcType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncCallArgContext ------------------------------------------------------------------

FuncTestCaseParser::FuncCallArgContext::FuncCallArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::FuncCallArgContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FuncCallArgContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

FuncTestCaseParser::ArgumentsContext* FuncTestCaseParser::FuncCallArgContext::arguments() {
  return getRuleContext<FuncTestCaseParser::ArgumentsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FuncCallArgContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}


size_t FuncTestCaseParser::FuncCallArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFuncCallArg;
}


std::any FuncTestCaseParser::FuncCallArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFuncCallArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FuncCallArgContext* FuncTestCaseParser::funcCallArg() {
  FuncCallArgContext *_localctx = _tracker.createInstance<FuncCallArgContext>(_ctx, getState());
  enterRule(_localctx, 100, FuncTestCaseParser::RuleFuncCallArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    identifier();
    setState(543);
    match(FuncTestCaseParser::OParen);
    setState(544);
    arguments();
    setState(545);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumArgContext ------------------------------------------------------------------

FuncTestCaseParser::EnumArgContext::EnumArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::EnumArgContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

tree::TerminalNode* FuncTestCaseParser::EnumArgContext::DoubleColon() {
  return getToken(FuncTestCaseParser::DoubleColon, 0);
}

tree::TerminalNode* FuncTestCaseParser::EnumArgContext::EnumType() {
  return getToken(FuncTestCaseParser::EnumType, 0);
}


size_t FuncTestCaseParser::EnumArgContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleEnumArg;
}


std::any FuncTestCaseParser::EnumArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitEnumArg(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::EnumArgContext* FuncTestCaseParser::enumArg() {
  EnumArgContext *_localctx = _tracker.createInstance<EnumArgContext>(_ctx, getState());
  enterRule(_localctx, 102, FuncTestCaseParser::RuleEnumArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(FuncTestCaseParser::Identifier);
    setState(548);
    match(FuncTestCaseParser::DoubleColon);
    setState(549);
    match(FuncTestCaseParser::EnumType);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralListContext ------------------------------------------------------------------

FuncTestCaseParser::LiteralListContext::LiteralListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::LiteralListContext::OBracket() {
  return getToken(FuncTestCaseParser::OBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralListContext::CBracket() {
  return getToken(FuncTestCaseParser::CBracket, 0);
}

std::vector<FuncTestCaseParser::CompoundLiteralContext *> FuncTestCaseParser::LiteralListContext::compoundLiteral() {
  return getRuleContexts<FuncTestCaseParser::CompoundLiteralContext>();
}

FuncTestCaseParser::CompoundLiteralContext* FuncTestCaseParser::LiteralListContext::compoundLiteral(size_t i) {
  return getRuleContext<FuncTestCaseParser::CompoundLiteralContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::LiteralListContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::LiteralListContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::LiteralListContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLiteralList;
}


std::any FuncTestCaseParser::LiteralListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLiteralList(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LiteralListContext* FuncTestCaseParser::literalList() {
  LiteralListContext *_localctx = _tracker.createInstance<LiteralListContext>(_ctx, getState());
  enterRule(_localctx, 104, FuncTestCaseParser::RuleLiteralList);
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
    setState(551);
    match(FuncTestCaseParser::OBracket);
    setState(560);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3342549575008256) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(552);
      compoundLiteral();
      setState(557);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(553);
        match(FuncTestCaseParser::Comma);
        setState(554);
        compoundLiteral();
        setState(559);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(562);
    match(FuncTestCaseParser::CBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralStructContext ------------------------------------------------------------------

FuncTestCaseParser::LiteralStructContext::LiteralStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::LiteralStructContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralStructContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

std::vector<FuncTestCaseParser::CompoundLiteralContext *> FuncTestCaseParser::LiteralStructContext::compoundLiteral() {
  return getRuleContexts<FuncTestCaseParser::CompoundLiteralContext>();
}

FuncTestCaseParser::CompoundLiteralContext* FuncTestCaseParser::LiteralStructContext::compoundLiteral(size_t i) {
  return getRuleContext<FuncTestCaseParser::CompoundLiteralContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::LiteralStructContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::LiteralStructContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::LiteralStructContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLiteralStruct;
}


std::any FuncTestCaseParser::LiteralStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLiteralStruct(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LiteralStructContext* FuncTestCaseParser::literalStruct() {
  LiteralStructContext *_localctx = _tracker.createInstance<LiteralStructContext>(_ctx, getState());
  enterRule(_localctx, 106, FuncTestCaseParser::RuleLiteralStruct);
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
    setState(564);
    match(FuncTestCaseParser::OParen);
    setState(573);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3342549575008256) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(565);
      compoundLiteral();
      setState(570);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(566);
        match(FuncTestCaseParser::Comma);
        setState(567);
        compoundLiteral();
        setState(572);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(575);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralMapContext ------------------------------------------------------------------

FuncTestCaseParser::LiteralMapContext::LiteralMapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::LiteralMapContext::OBrace() {
  return getToken(FuncTestCaseParser::OBrace, 0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralMapContext::CBrace() {
  return getToken(FuncTestCaseParser::CBrace, 0);
}

std::vector<FuncTestCaseParser::MapEntryContext *> FuncTestCaseParser::LiteralMapContext::mapEntry() {
  return getRuleContexts<FuncTestCaseParser::MapEntryContext>();
}

FuncTestCaseParser::MapEntryContext* FuncTestCaseParser::LiteralMapContext::mapEntry(size_t i) {
  return getRuleContext<FuncTestCaseParser::MapEntryContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::LiteralMapContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::LiteralMapContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::LiteralMapContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLiteralMap;
}


std::any FuncTestCaseParser::LiteralMapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLiteralMap(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LiteralMapContext* FuncTestCaseParser::literalMap() {
  LiteralMapContext *_localctx = _tracker.createInstance<LiteralMapContext>(_ctx, getState());
  enterRule(_localctx, 108, FuncTestCaseParser::RuleLiteralMap);
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
    setState(577);
    match(FuncTestCaseParser::OBrace);
    setState(586);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3342549575008256) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(578);
      mapEntry();
      setState(583);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(579);
        match(FuncTestCaseParser::Comma);
        setState(580);
        mapEntry();
        setState(585);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(588);
    match(FuncTestCaseParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapEntryContext ------------------------------------------------------------------

FuncTestCaseParser::MapEntryContext::MapEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::MapEntryContext::Colon() {
  return getToken(FuncTestCaseParser::Colon, 0);
}

std::vector<FuncTestCaseParser::CompoundLiteralContext *> FuncTestCaseParser::MapEntryContext::compoundLiteral() {
  return getRuleContexts<FuncTestCaseParser::CompoundLiteralContext>();
}

FuncTestCaseParser::CompoundLiteralContext* FuncTestCaseParser::MapEntryContext::compoundLiteral(size_t i) {
  return getRuleContext<FuncTestCaseParser::CompoundLiteralContext>(i);
}


size_t FuncTestCaseParser::MapEntryContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleMapEntry;
}


std::any FuncTestCaseParser::MapEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitMapEntry(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::MapEntryContext* FuncTestCaseParser::mapEntry() {
  MapEntryContext *_localctx = _tracker.createInstance<MapEntryContext>(_ctx, getState());
  enterRule(_localctx, 110, FuncTestCaseParser::RuleMapEntry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    antlrcpp::downCast<MapEntryContext *>(_localctx)->key = compoundLiteral();
    setState(591);
    match(FuncTestCaseParser::Colon);
    setState(592);
    antlrcpp::downCast<MapEntryContext *>(_localctx)->value = compoundLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundLiteralContext ------------------------------------------------------------------

FuncTestCaseParser::CompoundLiteralContext::CompoundLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::LiteralContext* FuncTestCaseParser::CompoundLiteralContext::literal() {
  return getRuleContext<FuncTestCaseParser::LiteralContext>(0);
}

FuncTestCaseParser::LiteralListContext* FuncTestCaseParser::CompoundLiteralContext::literalList() {
  return getRuleContext<FuncTestCaseParser::LiteralListContext>(0);
}

FuncTestCaseParser::LiteralStructContext* FuncTestCaseParser::CompoundLiteralContext::literalStruct() {
  return getRuleContext<FuncTestCaseParser::LiteralStructContext>(0);
}

FuncTestCaseParser::LiteralMapContext* FuncTestCaseParser::CompoundLiteralContext::literalMap() {
  return getRuleContext<FuncTestCaseParser::LiteralMapContext>(0);
}


size_t FuncTestCaseParser::CompoundLiteralContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleCompoundLiteral;
}


std::any FuncTestCaseParser::CompoundLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitCompoundLiteral(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::CompoundLiteralContext* FuncTestCaseParser::compoundLiteral() {
  CompoundLiteralContext *_localctx = _tracker.createInstance<CompoundLiteralContext>(_ctx, getState());
  enterRule(_localctx, 112, FuncTestCaseParser::RuleCompoundLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(598);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral:
      case FuncTestCaseParser::BooleanLiteral:
      case FuncTestCaseParser::TimestampTzLiteral:
      case FuncTestCaseParser::TimestampLiteral:
      case FuncTestCaseParser::TimeLiteral:
      case FuncTestCaseParser::DateLiteral:
      case FuncTestCaseParser::IntervalYearLiteral:
      case FuncTestCaseParser::IntervalDayLiteral:
      case FuncTestCaseParser::IntervalCompoundLiteral:
      case FuncTestCaseParser::NullLiteral:
      case FuncTestCaseParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(594);
        literal();
        break;
      }

      case FuncTestCaseParser::OBracket: {
        enterOuterAlt(_localctx, 2);
        setState(595);
        literalList();
        break;
      }

      case FuncTestCaseParser::OParen: {
        enterOuterAlt(_localctx, 3);
        setState(596);
        literalStruct();
        break;
      }

      case FuncTestCaseParser::OBrace: {
        enterOuterAlt(_localctx, 4);
        setState(597);
        literalMap();
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

//----------------- LiteralLambdaContext ------------------------------------------------------------------

FuncTestCaseParser::LiteralLambdaContext::LiteralLambdaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::LiteralLambdaContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

FuncTestCaseParser::LambdaParametersContext* FuncTestCaseParser::LiteralLambdaContext::lambdaParameters() {
  return getRuleContext<FuncTestCaseParser::LambdaParametersContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralLambdaContext::Arrow() {
  return getToken(FuncTestCaseParser::Arrow, 0);
}

FuncTestCaseParser::LambdaBodyContext* FuncTestCaseParser::LiteralLambdaContext::lambdaBody() {
  return getRuleContext<FuncTestCaseParser::LambdaBodyContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LiteralLambdaContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}


size_t FuncTestCaseParser::LiteralLambdaContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLiteralLambda;
}


std::any FuncTestCaseParser::LiteralLambdaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLiteralLambda(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LiteralLambdaContext* FuncTestCaseParser::literalLambda() {
  LiteralLambdaContext *_localctx = _tracker.createInstance<LiteralLambdaContext>(_ctx, getState());
  enterRule(_localctx, 114, FuncTestCaseParser::RuleLiteralLambda);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(FuncTestCaseParser::OParen);
    setState(601);
    lambdaParameters();
    setState(602);
    match(FuncTestCaseParser::Arrow);
    setState(603);
    lambdaBody();
    setState(604);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaParametersContext ------------------------------------------------------------------

FuncTestCaseParser::LambdaParametersContext::LambdaParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::LambdaParametersContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLambdaParameters;
}

void FuncTestCaseParser::LambdaParametersContext::copyFrom(LambdaParametersContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TupleParamsContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::TupleParamsContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::TupleParamsContext::Identifier() {
  return getTokens(FuncTestCaseParser::Identifier);
}

tree::TerminalNode* FuncTestCaseParser::TupleParamsContext::Identifier(size_t i) {
  return getToken(FuncTestCaseParser::Identifier, i);
}

tree::TerminalNode* FuncTestCaseParser::TupleParamsContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::TupleParamsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::TupleParamsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}

FuncTestCaseParser::TupleParamsContext::TupleParamsContext(LambdaParametersContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::TupleParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitTupleParams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SingleParamContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::SingleParamContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

FuncTestCaseParser::SingleParamContext::SingleParamContext(LambdaParametersContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::SingleParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitSingleParam(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::LambdaParametersContext* FuncTestCaseParser::lambdaParameters() {
  LambdaParametersContext *_localctx = _tracker.createInstance<LambdaParametersContext>(_ctx, getState());
  enterRule(_localctx, 116, FuncTestCaseParser::RuleLambdaParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(616);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Identifier: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::SingleParamContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(606);
        match(FuncTestCaseParser::Identifier);
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::TupleParamsContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(607);
        match(FuncTestCaseParser::OParen);
        setState(608);
        match(FuncTestCaseParser::Identifier);
        setState(611); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(609);
          match(FuncTestCaseParser::Comma);
          setState(610);
          match(FuncTestCaseParser::Identifier);
          setState(613); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FuncTestCaseParser::Comma);
        setState(615);
        match(FuncTestCaseParser::CParen);
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

//----------------- LambdaBodyContext ------------------------------------------------------------------

FuncTestCaseParser::LambdaBodyContext::LambdaBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::LambdaBodyContext::identifier() {
  return getRuleContext<FuncTestCaseParser::IdentifierContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LambdaBodyContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

FuncTestCaseParser::ArgumentsContext* FuncTestCaseParser::LambdaBodyContext::arguments() {
  return getRuleContext<FuncTestCaseParser::ArgumentsContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::LambdaBodyContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}


size_t FuncTestCaseParser::LambdaBodyContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleLambdaBody;
}


std::any FuncTestCaseParser::LambdaBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitLambdaBody(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::LambdaBodyContext* FuncTestCaseParser::lambdaBody() {
  LambdaBodyContext *_localctx = _tracker.createInstance<LambdaBodyContext>(_ctx, getState());
  enterRule(_localctx, 118, FuncTestCaseParser::RuleLambdaBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    identifier();
    setState(619);
    match(FuncTestCaseParser::OParen);
    setState(620);
    arguments();
    setState(621);
    match(FuncTestCaseParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

FuncTestCaseParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::ScalarTypeContext* FuncTestCaseParser::DataTypeContext::scalarType() {
  return getRuleContext<FuncTestCaseParser::ScalarTypeContext>(0);
}

FuncTestCaseParser::ParameterizedTypeContext* FuncTestCaseParser::DataTypeContext::parameterizedType() {
  return getRuleContext<FuncTestCaseParser::ParameterizedTypeContext>(0);
}


size_t FuncTestCaseParser::DataTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDataType;
}


std::any FuncTestCaseParser::DataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDataType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, FuncTestCaseParser::RuleDataType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(625);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Boolean:
      case FuncTestCaseParser::I8:
      case FuncTestCaseParser::I16:
      case FuncTestCaseParser::I32:
      case FuncTestCaseParser::I64:
      case FuncTestCaseParser::FP32:
      case FuncTestCaseParser::FP64:
      case FuncTestCaseParser::String:
      case FuncTestCaseParser::Binary:
      case FuncTestCaseParser::Date:
      case FuncTestCaseParser::Interval_Year:
      case FuncTestCaseParser::UUID:
      case FuncTestCaseParser::UserDefined:
      case FuncTestCaseParser::Bool:
      case FuncTestCaseParser::Str:
      case FuncTestCaseParser::VBin:
      case FuncTestCaseParser::IYear: {
        enterOuterAlt(_localctx, 1);
        setState(623);
        scalarType();
        break;
      }

      case FuncTestCaseParser::Func:
      case FuncTestCaseParser::Interval_Day:
      case FuncTestCaseParser::Interval_Compound:
      case FuncTestCaseParser::Decimal:
      case FuncTestCaseParser::Precision_Time:
      case FuncTestCaseParser::Precision_Timestamp:
      case FuncTestCaseParser::Precision_Timestamp_TZ:
      case FuncTestCaseParser::FixedChar:
      case FuncTestCaseParser::VarChar:
      case FuncTestCaseParser::FixedBinary:
      case FuncTestCaseParser::Struct:
      case FuncTestCaseParser::List:
      case FuncTestCaseParser::Map:
      case FuncTestCaseParser::IDay:
      case FuncTestCaseParser::ICompound:
      case FuncTestCaseParser::Dec:
      case FuncTestCaseParser::PT:
      case FuncTestCaseParser::PTs:
      case FuncTestCaseParser::PTsTZ:
      case FuncTestCaseParser::FChar:
      case FuncTestCaseParser::VChar:
      case FuncTestCaseParser::FBin: {
        enterOuterAlt(_localctx, 2);
        setState(624);
        parameterizedType();
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

//----------------- ScalarTypeContext ------------------------------------------------------------------

FuncTestCaseParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::ScalarTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleScalarType;
}

void FuncTestCaseParser::ScalarTypeContext::copyFrom(ScalarTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DateContext ------------------------------------------------------------------

FuncTestCaseParser::DateTypeContext* FuncTestCaseParser::DateContext::dateType() {
  return getRuleContext<FuncTestCaseParser::DateTypeContext>(0);
}

FuncTestCaseParser::DateContext::DateContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::DateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDate(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanContext ------------------------------------------------------------------

FuncTestCaseParser::BooleanTypeContext* FuncTestCaseParser::BooleanContext::booleanType() {
  return getRuleContext<FuncTestCaseParser::BooleanTypeContext>(0);
}

FuncTestCaseParser::BooleanContext::BooleanContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

FuncTestCaseParser::StringTypeContext* FuncTestCaseParser::StringContext::stringType() {
  return getRuleContext<FuncTestCaseParser::StringTypeContext>(0);
}

FuncTestCaseParser::StringContext::StringContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryContext ------------------------------------------------------------------

FuncTestCaseParser::BinaryTypeContext* FuncTestCaseParser::BinaryContext::binaryType() {
  return getRuleContext<FuncTestCaseParser::BinaryTypeContext>(0);
}

FuncTestCaseParser::BinaryContext::BinaryContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::BinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UserDefinedContext ------------------------------------------------------------------

FuncTestCaseParser::UserDefinedTypeContext* FuncTestCaseParser::UserDefinedContext::userDefinedType() {
  return getRuleContext<FuncTestCaseParser::UserDefinedTypeContext>(0);
}

FuncTestCaseParser::UserDefinedContext::UserDefinedContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::UserDefinedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitUserDefined(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatContext ------------------------------------------------------------------

FuncTestCaseParser::FloatTypeContext* FuncTestCaseParser::FloatContext::floatType() {
  return getRuleContext<FuncTestCaseParser::FloatTypeContext>(0);
}

FuncTestCaseParser::FloatContext::FloatContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntervalYearContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalYearTypeContext* FuncTestCaseParser::IntervalYearContext::intervalYearType() {
  return getRuleContext<FuncTestCaseParser::IntervalYearTypeContext>(0);
}

FuncTestCaseParser::IntervalYearContext::IntervalYearContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::IntervalYearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalYear(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UuidContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::UuidContext::UUID() {
  return getToken(FuncTestCaseParser::UUID, 0);
}

tree::TerminalNode* FuncTestCaseParser::UuidContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

FuncTestCaseParser::UuidContext::UuidContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::UuidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitUuid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

FuncTestCaseParser::IntTypeContext* FuncTestCaseParser::IntContext::intType() {
  return getRuleContext<FuncTestCaseParser::IntTypeContext>(0);
}

FuncTestCaseParser::IntContext::IntContext(ScalarTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::ScalarTypeContext* FuncTestCaseParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, FuncTestCaseParser::RuleScalarType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(639);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Boolean:
      case FuncTestCaseParser::Bool: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::BooleanContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(627);
        booleanType();
        break;
      }

      case FuncTestCaseParser::I8:
      case FuncTestCaseParser::I16:
      case FuncTestCaseParser::I32:
      case FuncTestCaseParser::I64: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::IntContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(628);
        intType();
        break;
      }

      case FuncTestCaseParser::FP32:
      case FuncTestCaseParser::FP64: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::FloatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(629);
        floatType();
        break;
      }

      case FuncTestCaseParser::String:
      case FuncTestCaseParser::Str: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(630);
        stringType();
        break;
      }

      case FuncTestCaseParser::Binary:
      case FuncTestCaseParser::VBin: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::BinaryContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(631);
        binaryType();
        break;
      }

      case FuncTestCaseParser::Date: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::DateContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(632);
        dateType();
        break;
      }

      case FuncTestCaseParser::Interval_Year:
      case FuncTestCaseParser::IYear: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::IntervalYearContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(633);
        intervalYearType();
        break;
      }

      case FuncTestCaseParser::UUID: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::UuidContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(634);
        match(FuncTestCaseParser::UUID);
        setState(636);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FuncTestCaseParser::QMark) {
          setState(635);
          antlrcpp::downCast<UuidContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
        }
        break;
      }

      case FuncTestCaseParser::UserDefined: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::UserDefinedContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(638);
        userDefinedType();
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

//----------------- UserDefinedTypeContext ------------------------------------------------------------------

FuncTestCaseParser::UserDefinedTypeContext::UserDefinedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedTypeContext::UserDefined() {
  return getToken(FuncTestCaseParser::UserDefined, 0);
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedTypeContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::UserDefinedTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleUserDefinedType;
}


std::any FuncTestCaseParser::UserDefinedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitUserDefinedType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::UserDefinedTypeContext* FuncTestCaseParser::userDefinedType() {
  UserDefinedTypeContext *_localctx = _tracker.createInstance<UserDefinedTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, FuncTestCaseParser::RuleUserDefinedType);
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
    setState(641);
    match(FuncTestCaseParser::UserDefined);
    setState(642);
    match(FuncTestCaseParser::Identifier);
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(643);
      antlrcpp::downCast<UserDefinedTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanTypeContext ------------------------------------------------------------------

FuncTestCaseParser::BooleanTypeContext::BooleanTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::BooleanTypeContext::Bool() {
  return getToken(FuncTestCaseParser::Bool, 0);
}

tree::TerminalNode* FuncTestCaseParser::BooleanTypeContext::Boolean() {
  return getToken(FuncTestCaseParser::Boolean, 0);
}

tree::TerminalNode* FuncTestCaseParser::BooleanTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::BooleanTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleBooleanType;
}


std::any FuncTestCaseParser::BooleanTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitBooleanType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::BooleanTypeContext* FuncTestCaseParser::booleanType() {
  BooleanTypeContext *_localctx = _tracker.createInstance<BooleanTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, FuncTestCaseParser::RuleBooleanType);
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
    setState(646);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Boolean

    || _la == FuncTestCaseParser::Bool)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(648);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(647);
      antlrcpp::downCast<BooleanTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringTypeContext ------------------------------------------------------------------

FuncTestCaseParser::StringTypeContext::StringTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::StringTypeContext::Str() {
  return getToken(FuncTestCaseParser::Str, 0);
}

tree::TerminalNode* FuncTestCaseParser::StringTypeContext::String() {
  return getToken(FuncTestCaseParser::String, 0);
}

tree::TerminalNode* FuncTestCaseParser::StringTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::StringTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleStringType;
}


std::any FuncTestCaseParser::StringTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitStringType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::StringTypeContext* FuncTestCaseParser::stringType() {
  StringTypeContext *_localctx = _tracker.createInstance<StringTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, FuncTestCaseParser::RuleStringType);
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
    setState(650);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::String

    || _la == FuncTestCaseParser::Str)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(651);
      antlrcpp::downCast<StringTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryTypeContext ------------------------------------------------------------------

FuncTestCaseParser::BinaryTypeContext::BinaryTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::BinaryTypeContext::Binary() {
  return getToken(FuncTestCaseParser::Binary, 0);
}

tree::TerminalNode* FuncTestCaseParser::BinaryTypeContext::VBin() {
  return getToken(FuncTestCaseParser::VBin, 0);
}

tree::TerminalNode* FuncTestCaseParser::BinaryTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::BinaryTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleBinaryType;
}


std::any FuncTestCaseParser::BinaryTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitBinaryType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::BinaryTypeContext* FuncTestCaseParser::binaryType() {
  BinaryTypeContext *_localctx = _tracker.createInstance<BinaryTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, FuncTestCaseParser::RuleBinaryType);
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
    setState(654);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Binary

    || _la == FuncTestCaseParser::VBin)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(655);
      antlrcpp::downCast<BinaryTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntTypeContext ------------------------------------------------------------------

FuncTestCaseParser::IntTypeContext::IntTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntTypeContext::I8() {
  return getToken(FuncTestCaseParser::I8, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntTypeContext::I16() {
  return getToken(FuncTestCaseParser::I16, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntTypeContext::I32() {
  return getToken(FuncTestCaseParser::I32, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntTypeContext::I64() {
  return getToken(FuncTestCaseParser::I64, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::IntTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntType;
}


std::any FuncTestCaseParser::IntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntTypeContext* FuncTestCaseParser::intType() {
  IntTypeContext *_localctx = _tracker.createInstance<IntTypeContext>(_ctx, getState());
  enterRule(_localctx, 132, FuncTestCaseParser::RuleIntType);
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
    setState(658);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & 15) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(659);
      antlrcpp::downCast<IntTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatTypeContext ------------------------------------------------------------------

FuncTestCaseParser::FloatTypeContext::FloatTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FloatTypeContext::FP32() {
  return getToken(FuncTestCaseParser::FP32, 0);
}

tree::TerminalNode* FuncTestCaseParser::FloatTypeContext::FP64() {
  return getToken(FuncTestCaseParser::FP64, 0);
}

tree::TerminalNode* FuncTestCaseParser::FloatTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::FloatTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFloatType;
}


std::any FuncTestCaseParser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FloatTypeContext* FuncTestCaseParser::floatType() {
  FloatTypeContext *_localctx = _tracker.createInstance<FloatTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, FuncTestCaseParser::RuleFloatType);
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
    setState(662);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FP32

    || _la == FuncTestCaseParser::FP64)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(664);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(663);
      antlrcpp::downCast<FloatTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DateTypeContext ------------------------------------------------------------------

FuncTestCaseParser::DateTypeContext::DateTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::DateTypeContext::Date() {
  return getToken(FuncTestCaseParser::Date, 0);
}

tree::TerminalNode* FuncTestCaseParser::DateTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::DateTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDateType;
}


std::any FuncTestCaseParser::DateTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDateType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DateTypeContext* FuncTestCaseParser::dateType() {
  DateTypeContext *_localctx = _tracker.createInstance<DateTypeContext>(_ctx, getState());
  enterRule(_localctx, 136, FuncTestCaseParser::RuleDateType);
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
    setState(666);
    match(FuncTestCaseParser::Date);
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(667);
      antlrcpp::downCast<DateTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalYearTypeContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalYearTypeContext::IntervalYearTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalYearTypeContext::IYear() {
  return getToken(FuncTestCaseParser::IYear, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalYearTypeContext::Interval_Year() {
  return getToken(FuncTestCaseParser::Interval_Year, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalYearTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::IntervalYearTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalYearType;
}


std::any FuncTestCaseParser::IntervalYearTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalYearType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalYearTypeContext* FuncTestCaseParser::intervalYearType() {
  IntervalYearTypeContext *_localctx = _tracker.createInstance<IntervalYearTypeContext>(_ctx, getState());
  enterRule(_localctx, 138, FuncTestCaseParser::RuleIntervalYearType);
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
    setState(670);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Year

    || _la == FuncTestCaseParser::IYear)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(672);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(671);
      antlrcpp::downCast<IntervalYearTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalDayTypeContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalDayTypeContext::IntervalDayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayTypeContext::IDay() {
  return getToken(FuncTestCaseParser::IDay, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayTypeContext::Interval_Day() {
  return getToken(FuncTestCaseParser::Interval_Day, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalDayTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::IntervalDayTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}


size_t FuncTestCaseParser::IntervalDayTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalDayType;
}


std::any FuncTestCaseParser::IntervalDayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalDayType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalDayTypeContext* FuncTestCaseParser::intervalDayType() {
  IntervalDayTypeContext *_localctx = _tracker.createInstance<IntervalDayTypeContext>(_ctx, getState());
  enterRule(_localctx, 140, FuncTestCaseParser::RuleIntervalDayType);
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
    setState(674);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Day

    || _la == FuncTestCaseParser::IDay)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(676);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(675);
      antlrcpp::downCast<IntervalDayTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(682);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(678);
      match(FuncTestCaseParser::OAngleBracket);
      setState(679);
      antlrcpp::downCast<IntervalDayTypeContext *>(_localctx)->len = numericParameter();
      setState(680);
      match(FuncTestCaseParser::CAngleBracket);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntervalCompoundTypeContext ------------------------------------------------------------------

FuncTestCaseParser::IntervalCompoundTypeContext::IntervalCompoundTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundTypeContext::ICompound() {
  return getToken(FuncTestCaseParser::ICompound, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundTypeContext::Interval_Compound() {
  return getToken(FuncTestCaseParser::Interval_Compound, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::IntervalCompoundTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::IntervalCompoundTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}


size_t FuncTestCaseParser::IntervalCompoundTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIntervalCompoundType;
}


std::any FuncTestCaseParser::IntervalCompoundTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntervalCompoundType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IntervalCompoundTypeContext* FuncTestCaseParser::intervalCompoundType() {
  IntervalCompoundTypeContext *_localctx = _tracker.createInstance<IntervalCompoundTypeContext>(_ctx, getState());
  enterRule(_localctx, 142, FuncTestCaseParser::RuleIntervalCompoundType);
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
    setState(684);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Compound

    || _la == FuncTestCaseParser::ICompound)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(686);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(685);
      antlrcpp::downCast<IntervalCompoundTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(692);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(688);
      match(FuncTestCaseParser::OAngleBracket);
      setState(689);
      antlrcpp::downCast<IntervalCompoundTypeContext *>(_localctx)->len = numericParameter();
      setState(690);
      match(FuncTestCaseParser::CAngleBracket);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedCharTypeContext ------------------------------------------------------------------

FuncTestCaseParser::FixedCharTypeContext::FixedCharTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FixedCharTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedCharTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedCharTypeContext::FChar() {
  return getToken(FuncTestCaseParser::FChar, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedCharTypeContext::FixedChar() {
  return getToken(FuncTestCaseParser::FixedChar, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::FixedCharTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FixedCharTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::FixedCharTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFixedCharType;
}


std::any FuncTestCaseParser::FixedCharTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFixedCharType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FixedCharTypeContext* FuncTestCaseParser::fixedCharType() {
  FixedCharTypeContext *_localctx = _tracker.createInstance<FixedCharTypeContext>(_ctx, getState());
  enterRule(_localctx, 144, FuncTestCaseParser::RuleFixedCharType);
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
    setState(694);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FixedChar

    || _la == FuncTestCaseParser::FChar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(696);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(695);
      antlrcpp::downCast<FixedCharTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(698);
    match(FuncTestCaseParser::OAngleBracket);
    setState(699);
    antlrcpp::downCast<FixedCharTypeContext *>(_localctx)->len = numericParameter();
    setState(700);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarCharTypeContext ------------------------------------------------------------------

FuncTestCaseParser::VarCharTypeContext::VarCharTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::VarCharTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::VarCharTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::VarCharTypeContext::VChar() {
  return getToken(FuncTestCaseParser::VChar, 0);
}

tree::TerminalNode* FuncTestCaseParser::VarCharTypeContext::VarChar() {
  return getToken(FuncTestCaseParser::VarChar, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::VarCharTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::VarCharTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::VarCharTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleVarCharType;
}


std::any FuncTestCaseParser::VarCharTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitVarCharType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::VarCharTypeContext* FuncTestCaseParser::varCharType() {
  VarCharTypeContext *_localctx = _tracker.createInstance<VarCharTypeContext>(_ctx, getState());
  enterRule(_localctx, 146, FuncTestCaseParser::RuleVarCharType);
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
    setState(702);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::VarChar

    || _la == FuncTestCaseParser::VChar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(704);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(703);
      antlrcpp::downCast<VarCharTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(706);
    match(FuncTestCaseParser::OAngleBracket);
    setState(707);
    antlrcpp::downCast<VarCharTypeContext *>(_localctx)->len = numericParameter();
    setState(708);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedBinaryTypeContext ------------------------------------------------------------------

FuncTestCaseParser::FixedBinaryTypeContext::FixedBinaryTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryTypeContext::FBin() {
  return getToken(FuncTestCaseParser::FBin, 0);
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryTypeContext::FixedBinary() {
  return getToken(FuncTestCaseParser::FixedBinary, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::FixedBinaryTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FixedBinaryTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::FixedBinaryTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFixedBinaryType;
}


std::any FuncTestCaseParser::FixedBinaryTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFixedBinaryType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FixedBinaryTypeContext* FuncTestCaseParser::fixedBinaryType() {
  FixedBinaryTypeContext *_localctx = _tracker.createInstance<FixedBinaryTypeContext>(_ctx, getState());
  enterRule(_localctx, 148, FuncTestCaseParser::RuleFixedBinaryType);
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
    setState(710);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FixedBinary

    || _la == FuncTestCaseParser::FBin)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(712);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(711);
      antlrcpp::downCast<FixedBinaryTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(714);
    match(FuncTestCaseParser::OAngleBracket);
    setState(715);
    antlrcpp::downCast<FixedBinaryTypeContext *>(_localctx)->len = numericParameter();
    setState(716);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalTypeContext ------------------------------------------------------------------

FuncTestCaseParser::DecimalTypeContext::DecimalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::Dec() {
  return getToken(FuncTestCaseParser::Dec, 0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::Decimal() {
  return getToken(FuncTestCaseParser::Decimal, 0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::Comma() {
  return getToken(FuncTestCaseParser::Comma, 0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::DecimalTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

std::vector<FuncTestCaseParser::NumericParameterContext *> FuncTestCaseParser::DecimalTypeContext::numericParameter() {
  return getRuleContexts<FuncTestCaseParser::NumericParameterContext>();
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::DecimalTypeContext::numericParameter(size_t i) {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(i);
}


size_t FuncTestCaseParser::DecimalTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleDecimalType;
}


std::any FuncTestCaseParser::DecimalTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitDecimalType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::DecimalTypeContext* FuncTestCaseParser::decimalType() {
  DecimalTypeContext *_localctx = _tracker.createInstance<DecimalTypeContext>(_ctx, getState());
  enterRule(_localctx, 150, FuncTestCaseParser::RuleDecimalType);
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
    setState(718);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Decimal

    || _la == FuncTestCaseParser::Dec)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(720);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(719);
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(728);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(722);
      match(FuncTestCaseParser::OAngleBracket);
      setState(723);
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->precision = numericParameter();
      setState(724);
      match(FuncTestCaseParser::Comma);
      setState(725);
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->scale = numericParameter();
      setState(726);
      match(FuncTestCaseParser::CAngleBracket);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimeTypeContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimeTypeContext::PrecisionTimeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeTypeContext::PT() {
  return getToken(FuncTestCaseParser::PT, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeTypeContext::Precision_Time() {
  return getToken(FuncTestCaseParser::Precision_Time, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::PrecisionTimeTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimeTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::PrecisionTimeTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimeType;
}


std::any FuncTestCaseParser::PrecisionTimeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimeType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimeTypeContext* FuncTestCaseParser::precisionTimeType() {
  PrecisionTimeTypeContext *_localctx = _tracker.createInstance<PrecisionTimeTypeContext>(_ctx, getState());
  enterRule(_localctx, 152, FuncTestCaseParser::RulePrecisionTimeType);
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
    setState(730);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Precision_Time

    || _la == FuncTestCaseParser::PT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(732);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(731);
      antlrcpp::downCast<PrecisionTimeTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(734);
    match(FuncTestCaseParser::OAngleBracket);
    setState(735);
    antlrcpp::downCast<PrecisionTimeTypeContext *>(_localctx)->precision = numericParameter();
    setState(736);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimestampTypeContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimestampTypeContext::PrecisionTimestampTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTypeContext::PTs() {
  return getToken(FuncTestCaseParser::PTs, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTypeContext::Precision_Timestamp() {
  return getToken(FuncTestCaseParser::Precision_Timestamp, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::PrecisionTimestampTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::PrecisionTimestampTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimestampType;
}


std::any FuncTestCaseParser::PrecisionTimestampTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestampType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimestampTypeContext* FuncTestCaseParser::precisionTimestampType() {
  PrecisionTimestampTypeContext *_localctx = _tracker.createInstance<PrecisionTimestampTypeContext>(_ctx, getState());
  enterRule(_localctx, 154, FuncTestCaseParser::RulePrecisionTimestampType);
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
    setState(738);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Precision_Timestamp

    || _la == FuncTestCaseParser::PTs)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(740);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(739);
      antlrcpp::downCast<PrecisionTimestampTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(742);
    match(FuncTestCaseParser::OAngleBracket);
    setState(743);
    antlrcpp::downCast<PrecisionTimestampTypeContext *>(_localctx)->precision = numericParameter();
    setState(744);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrecisionTimestampTZTypeContext ------------------------------------------------------------------

FuncTestCaseParser::PrecisionTimestampTZTypeContext::PrecisionTimestampTZTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZTypeContext::PTsTZ() {
  return getToken(FuncTestCaseParser::PTsTZ, 0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZTypeContext::Precision_Timestamp_TZ() {
  return getToken(FuncTestCaseParser::Precision_Timestamp_TZ, 0);
}

FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::PrecisionTimestampTZTypeContext::numericParameter() {
  return getRuleContext<FuncTestCaseParser::NumericParameterContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::PrecisionTimestampTZTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::PrecisionTimestampTZTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RulePrecisionTimestampTZType;
}


std::any FuncTestCaseParser::PrecisionTimestampTZTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitPrecisionTimestampTZType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::PrecisionTimestampTZTypeContext* FuncTestCaseParser::precisionTimestampTZType() {
  PrecisionTimestampTZTypeContext *_localctx = _tracker.createInstance<PrecisionTimestampTZTypeContext>(_ctx, getState());
  enterRule(_localctx, 156, FuncTestCaseParser::RulePrecisionTimestampTZType);
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
    setState(746);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Precision_Timestamp_TZ

    || _la == FuncTestCaseParser::PTsTZ)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(748);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(747);
      antlrcpp::downCast<PrecisionTimestampTZTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(750);
    match(FuncTestCaseParser::OAngleBracket);
    setState(751);
    antlrcpp::downCast<PrecisionTimestampTZTypeContext *>(_localctx)->precision = numericParameter();
    setState(752);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListTypeContext ------------------------------------------------------------------

FuncTestCaseParser::ListTypeContext::ListTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::ListTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleListType;
}

void FuncTestCaseParser::ListTypeContext::copyFrom(ListTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::ListContext::List() {
  return getToken(FuncTestCaseParser::List, 0);
}

tree::TerminalNode* FuncTestCaseParser::ListContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::ListContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::ListContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::ListContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

FuncTestCaseParser::ListContext::ListContext(ListTypeContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::ListTypeContext* FuncTestCaseParser::listType() {
  ListTypeContext *_localctx = _tracker.createInstance<ListTypeContext>(_ctx, getState());
  enterRule(_localctx, 158, FuncTestCaseParser::RuleListType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<FuncTestCaseParser::ListContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(754);
    match(FuncTestCaseParser::List);
    setState(756);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(755);
      antlrcpp::downCast<ListContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(758);
    match(FuncTestCaseParser::OAngleBracket);
    setState(759);
    antlrcpp::downCast<ListContext *>(_localctx)->elemType = dataType();
    setState(760);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructTypeContext ------------------------------------------------------------------

FuncTestCaseParser::StructTypeContext::StructTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::StructTypeContext::Struct() {
  return getToken(FuncTestCaseParser::Struct, 0);
}

tree::TerminalNode* FuncTestCaseParser::StructTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::StructTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

std::vector<FuncTestCaseParser::DataTypeContext *> FuncTestCaseParser::StructTypeContext::dataType() {
  return getRuleContexts<FuncTestCaseParser::DataTypeContext>();
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::StructTypeContext::dataType(size_t i) {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(i);
}

tree::TerminalNode* FuncTestCaseParser::StructTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::StructTypeContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::StructTypeContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::StructTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleStructType;
}


std::any FuncTestCaseParser::StructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitStructType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::StructTypeContext* FuncTestCaseParser::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 160, FuncTestCaseParser::RuleStructType);
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
    setState(762);
    match(FuncTestCaseParser::Struct);
    setState(764);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(763);
      antlrcpp::downCast<StructTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(766);
    match(FuncTestCaseParser::OAngleBracket);
    setState(775);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & 1099503239167) != 0)) {
      setState(767);
      dataType();
      setState(772);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(768);
        match(FuncTestCaseParser::Comma);
        setState(769);
        dataType();
        setState(774);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(777);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

FuncTestCaseParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::MapTypeContext::Map() {
  return getToken(FuncTestCaseParser::Map, 0);
}

tree::TerminalNode* FuncTestCaseParser::MapTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::MapTypeContext::Comma() {
  return getToken(FuncTestCaseParser::Comma, 0);
}

tree::TerminalNode* FuncTestCaseParser::MapTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

std::vector<FuncTestCaseParser::DataTypeContext *> FuncTestCaseParser::MapTypeContext::dataType() {
  return getRuleContexts<FuncTestCaseParser::DataTypeContext>();
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::MapTypeContext::dataType(size_t i) {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(i);
}

tree::TerminalNode* FuncTestCaseParser::MapTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::MapTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleMapType;
}


std::any FuncTestCaseParser::MapTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitMapType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::MapTypeContext* FuncTestCaseParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 162, FuncTestCaseParser::RuleMapType);
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
    setState(779);
    match(FuncTestCaseParser::Map);
    setState(781);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(780);
      antlrcpp::downCast<MapTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(783);
    match(FuncTestCaseParser::OAngleBracket);
    setState(784);
    antlrcpp::downCast<MapTypeContext *>(_localctx)->keyType = dataType();
    setState(785);
    match(FuncTestCaseParser::Comma);
    setState(786);
    antlrcpp::downCast<MapTypeContext *>(_localctx)->valueType = dataType();
    setState(787);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

FuncTestCaseParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::FuncTypeContext::Func() {
  return getToken(FuncTestCaseParser::Func, 0);
}

tree::TerminalNode* FuncTestCaseParser::FuncTypeContext::OAngleBracket() {
  return getToken(FuncTestCaseParser::OAngleBracket, 0);
}

tree::TerminalNode* FuncTestCaseParser::FuncTypeContext::Arrow() {
  return getToken(FuncTestCaseParser::Arrow, 0);
}

tree::TerminalNode* FuncTestCaseParser::FuncTypeContext::CAngleBracket() {
  return getToken(FuncTestCaseParser::CAngleBracket, 0);
}

FuncTestCaseParser::FuncParametersContext* FuncTestCaseParser::FuncTypeContext::funcParameters() {
  return getRuleContext<FuncTestCaseParser::FuncParametersContext>(0);
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::FuncTypeContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FuncTypeContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
}


size_t FuncTestCaseParser::FuncTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFuncType;
}


std::any FuncTestCaseParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FuncTypeContext* FuncTestCaseParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 164, FuncTestCaseParser::RuleFuncType);
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
    setState(789);
    match(FuncTestCaseParser::Func);
    setState(791);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(790);
      antlrcpp::downCast<FuncTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(793);
    match(FuncTestCaseParser::OAngleBracket);
    setState(794);
    antlrcpp::downCast<FuncTypeContext *>(_localctx)->params = funcParameters();
    setState(795);
    match(FuncTestCaseParser::Arrow);
    setState(796);
    antlrcpp::downCast<FuncTypeContext *>(_localctx)->returnType = dataType();
    setState(797);
    match(FuncTestCaseParser::CAngleBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncParametersContext ------------------------------------------------------------------

FuncTestCaseParser::FuncParametersContext::FuncParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::FuncParametersContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFuncParameters;
}

void FuncTestCaseParser::FuncParametersContext::copyFrom(FuncParametersContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleFuncParamContext ------------------------------------------------------------------

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::SingleFuncParamContext::dataType() {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(0);
}

FuncTestCaseParser::SingleFuncParamContext::SingleFuncParamContext(FuncParametersContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::SingleFuncParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitSingleFuncParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncParamsWithParensContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::FuncParamsWithParensContext::OParen() {
  return getToken(FuncTestCaseParser::OParen, 0);
}

std::vector<FuncTestCaseParser::DataTypeContext *> FuncTestCaseParser::FuncParamsWithParensContext::dataType() {
  return getRuleContexts<FuncTestCaseParser::DataTypeContext>();
}

FuncTestCaseParser::DataTypeContext* FuncTestCaseParser::FuncParamsWithParensContext::dataType(size_t i) {
  return getRuleContext<FuncTestCaseParser::DataTypeContext>(i);
}

tree::TerminalNode* FuncTestCaseParser::FuncParamsWithParensContext::CParen() {
  return getToken(FuncTestCaseParser::CParen, 0);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::FuncParamsWithParensContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::FuncParamsWithParensContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}

FuncTestCaseParser::FuncParamsWithParensContext::FuncParamsWithParensContext(FuncParametersContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::FuncParamsWithParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFuncParamsWithParens(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::FuncParametersContext* FuncTestCaseParser::funcParameters() {
  FuncParametersContext *_localctx = _tracker.createInstance<FuncParametersContext>(_ctx, getState());
  enterRule(_localctx, 166, FuncTestCaseParser::RuleFuncParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(811);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Func:
      case FuncTestCaseParser::Boolean:
      case FuncTestCaseParser::I8:
      case FuncTestCaseParser::I16:
      case FuncTestCaseParser::I32:
      case FuncTestCaseParser::I64:
      case FuncTestCaseParser::FP32:
      case FuncTestCaseParser::FP64:
      case FuncTestCaseParser::String:
      case FuncTestCaseParser::Binary:
      case FuncTestCaseParser::Date:
      case FuncTestCaseParser::Interval_Year:
      case FuncTestCaseParser::Interval_Day:
      case FuncTestCaseParser::Interval_Compound:
      case FuncTestCaseParser::UUID:
      case FuncTestCaseParser::Decimal:
      case FuncTestCaseParser::Precision_Time:
      case FuncTestCaseParser::Precision_Timestamp:
      case FuncTestCaseParser::Precision_Timestamp_TZ:
      case FuncTestCaseParser::FixedChar:
      case FuncTestCaseParser::VarChar:
      case FuncTestCaseParser::FixedBinary:
      case FuncTestCaseParser::Struct:
      case FuncTestCaseParser::List:
      case FuncTestCaseParser::Map:
      case FuncTestCaseParser::UserDefined:
      case FuncTestCaseParser::Bool:
      case FuncTestCaseParser::Str:
      case FuncTestCaseParser::VBin:
      case FuncTestCaseParser::IYear:
      case FuncTestCaseParser::IDay:
      case FuncTestCaseParser::ICompound:
      case FuncTestCaseParser::Dec:
      case FuncTestCaseParser::PT:
      case FuncTestCaseParser::PTs:
      case FuncTestCaseParser::PTsTZ:
      case FuncTestCaseParser::FChar:
      case FuncTestCaseParser::VChar:
      case FuncTestCaseParser::FBin: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::SingleFuncParamContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(799);
        dataType();
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::FuncParamsWithParensContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(800);
        match(FuncTestCaseParser::OParen);
        setState(801);
        dataType();
        setState(806);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FuncTestCaseParser::Comma) {
          setState(802);
          match(FuncTestCaseParser::Comma);
          setState(803);
          dataType();
          setState(808);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(809);
        match(FuncTestCaseParser::CParen);
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

FuncTestCaseParser::ParameterizedTypeContext::ParameterizedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::FixedCharTypeContext* FuncTestCaseParser::ParameterizedTypeContext::fixedCharType() {
  return getRuleContext<FuncTestCaseParser::FixedCharTypeContext>(0);
}

FuncTestCaseParser::VarCharTypeContext* FuncTestCaseParser::ParameterizedTypeContext::varCharType() {
  return getRuleContext<FuncTestCaseParser::VarCharTypeContext>(0);
}

FuncTestCaseParser::FixedBinaryTypeContext* FuncTestCaseParser::ParameterizedTypeContext::fixedBinaryType() {
  return getRuleContext<FuncTestCaseParser::FixedBinaryTypeContext>(0);
}

FuncTestCaseParser::DecimalTypeContext* FuncTestCaseParser::ParameterizedTypeContext::decimalType() {
  return getRuleContext<FuncTestCaseParser::DecimalTypeContext>(0);
}

FuncTestCaseParser::IntervalDayTypeContext* FuncTestCaseParser::ParameterizedTypeContext::intervalDayType() {
  return getRuleContext<FuncTestCaseParser::IntervalDayTypeContext>(0);
}

FuncTestCaseParser::IntervalCompoundTypeContext* FuncTestCaseParser::ParameterizedTypeContext::intervalCompoundType() {
  return getRuleContext<FuncTestCaseParser::IntervalCompoundTypeContext>(0);
}

FuncTestCaseParser::PrecisionTimeTypeContext* FuncTestCaseParser::ParameterizedTypeContext::precisionTimeType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimeTypeContext>(0);
}

FuncTestCaseParser::PrecisionTimestampTypeContext* FuncTestCaseParser::ParameterizedTypeContext::precisionTimestampType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampTypeContext>(0);
}

FuncTestCaseParser::PrecisionTimestampTZTypeContext* FuncTestCaseParser::ParameterizedTypeContext::precisionTimestampTZType() {
  return getRuleContext<FuncTestCaseParser::PrecisionTimestampTZTypeContext>(0);
}

FuncTestCaseParser::ListTypeContext* FuncTestCaseParser::ParameterizedTypeContext::listType() {
  return getRuleContext<FuncTestCaseParser::ListTypeContext>(0);
}

FuncTestCaseParser::StructTypeContext* FuncTestCaseParser::ParameterizedTypeContext::structType() {
  return getRuleContext<FuncTestCaseParser::StructTypeContext>(0);
}

FuncTestCaseParser::MapTypeContext* FuncTestCaseParser::ParameterizedTypeContext::mapType() {
  return getRuleContext<FuncTestCaseParser::MapTypeContext>(0);
}

FuncTestCaseParser::FuncTypeContext* FuncTestCaseParser::ParameterizedTypeContext::funcType() {
  return getRuleContext<FuncTestCaseParser::FuncTypeContext>(0);
}


size_t FuncTestCaseParser::ParameterizedTypeContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleParameterizedType;
}


std::any FuncTestCaseParser::ParameterizedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitParameterizedType(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::ParameterizedTypeContext* FuncTestCaseParser::parameterizedType() {
  ParameterizedTypeContext *_localctx = _tracker.createInstance<ParameterizedTypeContext>(_ctx, getState());
  enterRule(_localctx, 168, FuncTestCaseParser::RuleParameterizedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(826);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::FixedChar:
      case FuncTestCaseParser::FChar: {
        enterOuterAlt(_localctx, 1);
        setState(813);
        fixedCharType();
        break;
      }

      case FuncTestCaseParser::VarChar:
      case FuncTestCaseParser::VChar: {
        enterOuterAlt(_localctx, 2);
        setState(814);
        varCharType();
        break;
      }

      case FuncTestCaseParser::FixedBinary:
      case FuncTestCaseParser::FBin: {
        enterOuterAlt(_localctx, 3);
        setState(815);
        fixedBinaryType();
        break;
      }

      case FuncTestCaseParser::Decimal:
      case FuncTestCaseParser::Dec: {
        enterOuterAlt(_localctx, 4);
        setState(816);
        decimalType();
        break;
      }

      case FuncTestCaseParser::Interval_Day:
      case FuncTestCaseParser::IDay: {
        enterOuterAlt(_localctx, 5);
        setState(817);
        intervalDayType();
        break;
      }

      case FuncTestCaseParser::Interval_Compound:
      case FuncTestCaseParser::ICompound: {
        enterOuterAlt(_localctx, 6);
        setState(818);
        intervalCompoundType();
        break;
      }

      case FuncTestCaseParser::Precision_Time:
      case FuncTestCaseParser::PT: {
        enterOuterAlt(_localctx, 7);
        setState(819);
        precisionTimeType();
        break;
      }

      case FuncTestCaseParser::Precision_Timestamp:
      case FuncTestCaseParser::PTs: {
        enterOuterAlt(_localctx, 8);
        setState(820);
        precisionTimestampType();
        break;
      }

      case FuncTestCaseParser::Precision_Timestamp_TZ:
      case FuncTestCaseParser::PTsTZ: {
        enterOuterAlt(_localctx, 9);
        setState(821);
        precisionTimestampTZType();
        break;
      }

      case FuncTestCaseParser::List: {
        enterOuterAlt(_localctx, 10);
        setState(822);
        listType();
        break;
      }

      case FuncTestCaseParser::Struct: {
        enterOuterAlt(_localctx, 11);
        setState(823);
        structType();
        break;
      }

      case FuncTestCaseParser::Map: {
        enterOuterAlt(_localctx, 12);
        setState(824);
        mapType();
        break;
      }

      case FuncTestCaseParser::Func: {
        enterOuterAlt(_localctx, 13);
        setState(825);
        funcType();
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

//----------------- NumericParameterContext ------------------------------------------------------------------

FuncTestCaseParser::NumericParameterContext::NumericParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FuncTestCaseParser::NumericParameterContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleNumericParameter;
}

void FuncTestCaseParser::NumericParameterContext::copyFrom(NumericParameterContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

tree::TerminalNode* FuncTestCaseParser::IntegerLiteralContext::IntegerLiteral() {
  return getToken(FuncTestCaseParser::IntegerLiteral, 0);
}

FuncTestCaseParser::IntegerLiteralContext::IntegerLiteralContext(NumericParameterContext *ctx) { copyFrom(ctx); }


std::any FuncTestCaseParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
FuncTestCaseParser::NumericParameterContext* FuncTestCaseParser::numericParameter() {
  NumericParameterContext *_localctx = _tracker.createInstance<NumericParameterContext>(_ctx, getState());
  enterRule(_localctx, 170, FuncTestCaseParser::RuleNumericParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<FuncTestCaseParser::IntegerLiteralContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(FuncTestCaseParser::IntegerLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubstraitErrorContext ------------------------------------------------------------------

FuncTestCaseParser::SubstraitErrorContext::SubstraitErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::SubstraitErrorContext::ErrorResult() {
  return getToken(FuncTestCaseParser::ErrorResult, 0);
}

tree::TerminalNode* FuncTestCaseParser::SubstraitErrorContext::UndefineResult() {
  return getToken(FuncTestCaseParser::UndefineResult, 0);
}


size_t FuncTestCaseParser::SubstraitErrorContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleSubstraitError;
}


std::any FuncTestCaseParser::SubstraitErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitSubstraitError(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::SubstraitErrorContext* FuncTestCaseParser::substraitError() {
  SubstraitErrorContext *_localctx = _tracker.createInstance<SubstraitErrorContext>(_ctx, getState());
  enterRule(_localctx, 172, FuncTestCaseParser::RuleSubstraitError);
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
    setState(830);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::ErrorResult

    || _la == FuncTestCaseParser::UndefineResult)) {
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

//----------------- FuncOptionContext ------------------------------------------------------------------

FuncTestCaseParser::FuncOptionContext::FuncOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::OptionNameContext* FuncTestCaseParser::FuncOptionContext::optionName() {
  return getRuleContext<FuncTestCaseParser::OptionNameContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::FuncOptionContext::Colon() {
  return getToken(FuncTestCaseParser::Colon, 0);
}

FuncTestCaseParser::OptionValueContext* FuncTestCaseParser::FuncOptionContext::optionValue() {
  return getRuleContext<FuncTestCaseParser::OptionValueContext>(0);
}


size_t FuncTestCaseParser::FuncOptionContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFuncOption;
}


std::any FuncTestCaseParser::FuncOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFuncOption(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FuncOptionContext* FuncTestCaseParser::funcOption() {
  FuncOptionContext *_localctx = _tracker.createInstance<FuncOptionContext>(_ctx, getState());
  enterRule(_localctx, 174, FuncTestCaseParser::RuleFuncOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    optionName();
    setState(833);
    match(FuncTestCaseParser::Colon);
    setState(834);
    optionValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionNameContext ------------------------------------------------------------------

FuncTestCaseParser::OptionNameContext::OptionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::OptionNameContext::Overflow() {
  return getToken(FuncTestCaseParser::Overflow, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionNameContext::Rounding() {
  return getToken(FuncTestCaseParser::Rounding, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionNameContext::NullHandling() {
  return getToken(FuncTestCaseParser::NullHandling, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionNameContext::SpacesOnly() {
  return getToken(FuncTestCaseParser::SpacesOnly, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionNameContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}


size_t FuncTestCaseParser::OptionNameContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleOptionName;
}


std::any FuncTestCaseParser::OptionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitOptionName(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::OptionNameContext* FuncTestCaseParser::optionName() {
  OptionNameContext *_localctx = _tracker.createInstance<OptionNameContext>(_ctx, getState());
  enterRule(_localctx, 176, FuncTestCaseParser::RuleOptionName);
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
    setState(836);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 25214976) != 0) || _la == FuncTestCaseParser::Identifier)) {
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

//----------------- OptionValueContext ------------------------------------------------------------------

FuncTestCaseParser::OptionValueContext::OptionValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::Error() {
  return getToken(FuncTestCaseParser::Error, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::Saturate() {
  return getToken(FuncTestCaseParser::Saturate, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::Silent() {
  return getToken(FuncTestCaseParser::Silent, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::TieToEven() {
  return getToken(FuncTestCaseParser::TieToEven, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::NaN() {
  return getToken(FuncTestCaseParser::NaN, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::Truncate() {
  return getToken(FuncTestCaseParser::Truncate, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::AcceptNulls() {
  return getToken(FuncTestCaseParser::AcceptNulls, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::IgnoreNulls() {
  return getToken(FuncTestCaseParser::IgnoreNulls, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::BooleanLiteral() {
  return getToken(FuncTestCaseParser::BooleanLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::NullLiteral() {
  return getToken(FuncTestCaseParser::NullLiteral, 0);
}

tree::TerminalNode* FuncTestCaseParser::OptionValueContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}


size_t FuncTestCaseParser::OptionValueContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleOptionValue;
}


std::any FuncTestCaseParser::OptionValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitOptionValue(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::OptionValueContext* FuncTestCaseParser::optionValue() {
  OptionValueContext *_localctx = _tracker.createInstance<OptionValueContext>(_ctx, getState());
  enterRule(_localctx, 178, FuncTestCaseParser::RuleOptionValue);
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
    setState(838);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 281476092329984) != 0) || _la == FuncTestCaseParser::Identifier)) {
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

//----------------- FuncOptionsContext ------------------------------------------------------------------

FuncTestCaseParser::FuncOptionsContext::FuncOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FuncTestCaseParser::FuncOptionContext *> FuncTestCaseParser::FuncOptionsContext::funcOption() {
  return getRuleContexts<FuncTestCaseParser::FuncOptionContext>();
}

FuncTestCaseParser::FuncOptionContext* FuncTestCaseParser::FuncOptionsContext::funcOption(size_t i) {
  return getRuleContext<FuncTestCaseParser::FuncOptionContext>(i);
}

std::vector<tree::TerminalNode *> FuncTestCaseParser::FuncOptionsContext::Comma() {
  return getTokens(FuncTestCaseParser::Comma);
}

tree::TerminalNode* FuncTestCaseParser::FuncOptionsContext::Comma(size_t i) {
  return getToken(FuncTestCaseParser::Comma, i);
}


size_t FuncTestCaseParser::FuncOptionsContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleFuncOptions;
}


std::any FuncTestCaseParser::FuncOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitFuncOptions(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::FuncOptionsContext* FuncTestCaseParser::funcOptions() {
  FuncOptionsContext *_localctx = _tracker.createInstance<FuncOptionsContext>(_ctx, getState());
  enterRule(_localctx, 180, FuncTestCaseParser::RuleFuncOptions);
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
    setState(840);
    funcOption();
    setState(845);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(841);
      match(FuncTestCaseParser::Comma);
      setState(842);
      funcOption();
      setState(847);
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

//----------------- NonReservedContext ------------------------------------------------------------------

FuncTestCaseParser::NonReservedContext::NonReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FuncTestCaseParser::NonReservedContext::And() {
  return getToken(FuncTestCaseParser::And, 0);
}

tree::TerminalNode* FuncTestCaseParser::NonReservedContext::Or() {
  return getToken(FuncTestCaseParser::Or, 0);
}

tree::TerminalNode* FuncTestCaseParser::NonReservedContext::Truncate() {
  return getToken(FuncTestCaseParser::Truncate, 0);
}


size_t FuncTestCaseParser::NonReservedContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleNonReserved;
}


std::any FuncTestCaseParser::NonReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitNonReserved(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::NonReservedContext* FuncTestCaseParser::nonReserved() {
  NonReservedContext *_localctx = _tracker.createInstance<NonReservedContext>(_ctx, getState());
  enterRule(_localctx, 182, FuncTestCaseParser::RuleNonReserved);
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
    setState(848);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Truncate || _la == FuncTestCaseParser::And

    || _la == FuncTestCaseParser::Or)) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

FuncTestCaseParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FuncTestCaseParser::NonReservedContext* FuncTestCaseParser::IdentifierContext::nonReserved() {
  return getRuleContext<FuncTestCaseParser::NonReservedContext>(0);
}

tree::TerminalNode* FuncTestCaseParser::IdentifierContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}


size_t FuncTestCaseParser::IdentifierContext::getRuleIndex() const {
  return FuncTestCaseParser::RuleIdentifier;
}


std::any FuncTestCaseParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FuncTestCaseParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

FuncTestCaseParser::IdentifierContext* FuncTestCaseParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 184, FuncTestCaseParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(852);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or: {
        enterOuterAlt(_localctx, 1);
        setState(850);
        nonReserved();
        break;
      }

      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(851);
        match(FuncTestCaseParser::Identifier);
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

void FuncTestCaseParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  functestcaseparserParserInitialize();
#else
  ::antlr4::internal::call_once(functestcaseparserParserOnceFlag, functestcaseparserParserInitialize);
#endif
}
