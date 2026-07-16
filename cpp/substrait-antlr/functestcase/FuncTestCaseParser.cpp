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
      "aggFuncCall", "tableData", "tableRows", "dataColumn", "columnValues", 
      "literal", "qualifiedAggregateFuncArgs", "aggregateFuncArgs", "qualifiedAggregateFuncArg", 
      "aggregateFuncArg", "numericLiteral", "floatLiteral", "nullArg", "intArg", 
      "floatArg", "decimalArg", "booleanArg", "stringArg", "dateArg", "intervalYearArg", 
      "intervalDayArg", "intervalCompoundArg", "fixedCharArg", "varCharArg", 
      "fixedBinaryArg", "precisionTimeArg", "precisionTimestampArg", "precisionTimestampTZArg", 
      "listArg", "structArg", "mapArg", "lambdaArg", "enumArg", "literalList", 
      "literalStruct", "literalMap", "mapEntry", "compoundLiteral", "literalLambda", 
      "lambdaParameters", "lambdaBody", "dataType", "scalarType", "booleanType", 
      "stringType", "binaryType", "intType", "floatType", "dateType", "intervalYearType", 
      "intervalDayType", "intervalCompoundType", "fixedCharType", "varCharType", 
      "fixedBinaryType", "decimalType", "precisionTimeType", "precisionTimestampType", 
      "precisionTimestampTZType", "listType", "structType", "mapType", "funcType", 
      "funcParameters", "parameterizedType", "numericParameter", "substraitError", 
      "funcOption", "optionName", "optionValue", "funcOptions", "nonReserved", 
      "identifier"
    },
    std::vector<std::string>{
      "", "", "'###'", "'SUBSTRAIT_SCALAR_TEST'", "'SUBSTRAIT_AGGREGATE_TEST'", 
      "'SUBSTRAIT_INCLUDE'", "'SUBSTRAIT_DEPENDENCY'", "", "", "", "'DEFINE'", 
      "'<!ERROR>'", "'<!UNDEFINED>'", "'OVERFLOW'", "'ROUNDING'", "'ERROR'", 
      "'SATURATE'", "'SILENT'", "'TIE_TO_EVEN'", "'NAN'", "'ACCEPT_NULLS'", 
      "'IGNORE_NULLS'", "'NULL_HANDLING'", "'SPACES_ONLY'", "'TRUNCATE'", 
      "", "", "", "", "", "", "", "", "'P'", "'T'", "'Y'", "'M'", "'D'", 
      "'H'", "'S'", "'F'", "", "", "", "", "", "'null'", "", "'enum'", "'{'", 
      "'}'", "", "", "", "'IF'", "'THEN'", "'ELSE'", "'FUNC'", "'BOOLEAN'", 
      "'I8'", "'I16'", "'I32'", "'I64'", "'FP32'", "'FP64'", "'STRING'", 
      "'BINARY'", "'DATE'", "'INTERVAL_YEAR'", "'INTERVAL_DAY'", "'INTERVAL_COMPOUND'", 
      "'UUID'", "'DECIMAL'", "'PRECISION_TIME'", "'PRECISION_TIMESTAMP'", 
      "'PRECISION_TIMESTAMP_TZ'", "'FIXEDCHAR'", "'VARCHAR'", "'FIXEDBINARY'", 
      "'STRUCT'", "'NSTRUCT'", "'LIST'", "'MAP'", "'U!'", "'BOOL'", "'STR'", 
      "'VBIN'", "'IYEAR'", "'IDAY'", "'ICOMPOUND'", "'DEC'", "'PT'", "'PTS'", 
      "'PTSTZ'", "'FCHAR'", "'VCHAR'", "'FBIN'", "'ANY'", "", "'::'", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'='", "'!='", "'>='", "'<='", "'>'", 
      "'<'", "'!'", "'('", "')'", "'['", "']'", "','", "':'", "'\\u003F'", 
      "'#'", "'.'", "'AND'", "'OR'", "':='", "'->'"
    },
    std::vector<std::string>{
      "", "Whitespace", "TripleHash", "SubstraitScalarTest", "SubstraitAggregateTest", 
      "SubstraitInclude", "SubstraitDependency", "ExtensionUrn", "FormatVersion", 
      "DescriptionLine", "Define", "ErrorResult", "UndefineResult", "Overflow", 
      "Rounding", "Error", "Saturate", "Silent", "TieToEven", "NaN", "AcceptNulls", 
      "IgnoreNulls", "NullHandling", "SpacesOnly", "Truncate", "IntegerLiteral", 
      "DecimalLiteral", "FloatLiteral", "BooleanLiteral", "TimestampTzLiteral", 
      "TimestampLiteral", "TimeLiteral", "DateLiteral", "PeriodPrefix", 
      "TimePrefix", "YearSuffix", "MSuffix", "DaySuffix", "HourSuffix", 
      "SecondSuffix", "FractionalSecondSuffix", "OAngleBracket", "CAngleBracket", 
      "IntervalYearLiteral", "IntervalDayLiteral", "IntervalCompoundLiteral", 
      "NullLiteral", "StringLiteral", "EnumType", "OBrace", "CBrace", "ColumnName", 
      "LineComment", "BlockComment", "If", "Then", "Else", "Func", "Boolean", 
      "I8", "I16", "I32", "I64", "FP32", "FP64", "String", "Binary", "Date", 
      "Interval_Year", "Interval_Day", "Interval_Compound", "UUID", "Decimal", 
      "Precision_Time", "Precision_Timestamp", "Precision_Timestamp_TZ", 
      "FixedChar", "VarChar", "FixedBinary", "Struct", "NStruct", "List", 
      "Map", "UserDefined", "Bool", "Str", "VBin", "IYear", "IDay", "ICompound", 
      "Dec", "PT", "PTs", "PTsTZ", "FChar", "VChar", "FBin", "Any", "AnyVar", 
      "DoubleColon", "Plus", "Minus", "Asterisk", "ForwardSlash", "Percent", 
      "Eq", "Ne", "Gte", "Lte", "Gt", "Lt", "Bang", "OParen", "CParen", 
      "OBracket", "CBracket", "Comma", "Colon", "QMark", "Hash", "Dot", 
      "And", "Or", "Assign", "Arrow", "Number", "Identifier", "Newline"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,127,783,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
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
  	84,1,0,1,0,4,0,173,8,0,11,0,12,0,174,1,0,1,0,1,1,1,1,1,1,5,1,182,8,1,
  	10,1,12,1,185,9,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,
  	1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,212,8,6,1,6,1,6,1,
  	6,1,7,3,7,218,8,7,1,7,4,7,221,8,7,11,7,12,7,222,1,7,3,7,226,8,7,1,7,4,
  	7,229,8,7,11,7,12,7,230,3,7,233,8,7,1,8,1,8,1,8,5,8,238,8,8,10,8,12,8,
  	241,9,8,1,9,1,9,3,9,245,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,
  	10,269,8,10,1,11,1,11,1,11,1,11,1,11,3,11,276,8,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,3,12,285,8,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,293,8,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,302,8,12,1,13,1,13,1,13,1,
  	13,1,13,1,13,5,13,310,8,13,10,13,12,13,313,9,13,1,13,1,13,1,13,1,13,1,
  	14,1,14,1,14,1,14,5,14,323,8,14,10,14,12,14,326,9,14,3,14,328,8,14,1,
  	14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,5,16,340,8,16,10,16,12,
  	16,343,9,16,3,16,345,8,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,3,17,360,8,17,1,18,1,18,1,18,5,18,365,8,18,10,18,
  	12,18,368,9,18,1,19,1,19,1,19,5,19,373,8,19,10,19,12,19,376,9,19,1,20,
  	1,20,1,20,1,20,3,20,382,8,20,1,21,1,21,1,21,1,21,3,21,388,8,21,1,22,1,
  	22,1,22,3,22,393,8,22,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,
  	25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,
  	29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,32,1,32,1,32,1,
  	32,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,36,1,
  	36,1,36,1,36,1,37,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,
  	39,1,40,1,40,1,40,1,40,1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,43,1,
  	43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,1,45,1,45,1,45,5,45,485,8,45,10,
  	45,12,45,488,9,45,3,45,490,8,45,1,45,1,45,1,46,1,46,1,46,1,46,5,46,498,
  	8,46,10,46,12,46,501,9,46,3,46,503,8,46,1,46,1,46,1,47,1,47,1,47,1,47,
  	5,47,511,8,47,10,47,12,47,514,9,47,3,47,516,8,47,1,47,1,47,1,48,1,48,
  	1,48,1,48,1,49,1,49,1,49,1,49,3,49,528,8,49,1,50,1,50,1,50,1,50,1,50,
  	1,50,1,51,1,51,1,51,1,51,1,51,4,51,541,8,51,11,51,12,51,542,1,51,3,51,
  	546,8,51,1,52,1,52,1,52,1,52,1,52,1,53,1,53,3,53,555,8,53,1,54,1,54,1,
  	54,1,54,1,54,1,54,1,54,1,54,1,54,3,54,566,8,54,1,54,1,54,1,54,3,54,571,
  	8,54,3,54,573,8,54,1,55,1,55,3,55,577,8,55,1,56,1,56,3,56,581,8,56,1,
  	57,1,57,3,57,585,8,57,1,58,1,58,3,58,589,8,58,1,59,1,59,3,59,593,8,59,
  	1,60,1,60,3,60,597,8,60,1,61,1,61,3,61,601,8,61,1,62,1,62,3,62,605,8,
  	62,1,62,1,62,1,62,1,62,3,62,611,8,62,1,63,1,63,3,63,615,8,63,1,63,1,63,
  	1,63,1,63,3,63,621,8,63,1,64,1,64,3,64,625,8,64,1,64,1,64,1,64,1,64,1,
  	65,1,65,3,65,633,8,65,1,65,1,65,1,65,1,65,1,66,1,66,3,66,641,8,66,1,66,
  	1,66,1,66,1,66,1,67,1,67,3,67,649,8,67,1,67,1,67,1,67,1,67,1,67,1,67,
  	3,67,657,8,67,1,68,1,68,3,68,661,8,68,1,68,1,68,1,68,1,68,1,69,1,69,3,
  	69,669,8,69,1,69,1,69,1,69,1,69,1,70,1,70,3,70,677,8,70,1,70,1,70,1,70,
  	1,70,1,71,1,71,3,71,685,8,71,1,71,1,71,1,71,1,71,1,72,1,72,3,72,693,8,
  	72,1,72,1,72,1,72,1,72,5,72,699,8,72,10,72,12,72,702,9,72,3,72,704,8,
  	72,1,72,1,72,1,73,1,73,3,73,710,8,73,1,73,1,73,1,73,1,73,1,73,1,73,1,
  	74,1,74,3,74,720,8,74,1,74,1,74,1,74,1,74,1,74,1,74,1,75,1,75,1,75,1,
  	75,1,75,5,75,733,8,75,10,75,12,75,736,9,75,1,75,1,75,3,75,740,8,75,1,
  	76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,1,76,3,76,755,
  	8,76,1,77,1,77,1,78,1,78,1,79,1,79,1,79,1,79,1,80,1,80,1,81,1,81,1,82,
  	1,82,1,82,5,82,772,8,82,10,82,12,82,775,9,82,1,83,1,83,1,84,1,84,3,84,
  	781,8,84,1,84,0,0,85,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,
  	82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,116,118,120,
  	122,124,126,128,130,132,134,136,138,140,142,144,146,148,150,152,154,156,
  	158,160,162,164,166,168,0,21,1,0,3,4,2,0,19,19,27,27,2,0,58,58,84,84,
  	2,0,65,65,85,85,2,0,66,66,86,86,1,0,59,62,1,0,63,64,2,0,68,68,87,87,2,
  	0,69,69,88,88,2,0,70,70,89,89,2,0,76,76,94,94,2,0,77,77,95,95,2,0,78,
  	78,96,96,2,0,72,72,90,90,2,0,73,73,91,91,2,0,74,74,92,92,2,0,75,75,93,
  	93,1,0,11,12,3,0,13,14,22,23,126,126,5,0,15,21,24,24,28,28,46,46,126,
  	126,2,0,24,24,121,122,817,0,170,1,0,0,0,2,178,1,0,0,0,4,186,1,0,0,0,6,
  	191,1,0,0,0,8,196,1,0,0,0,10,201,1,0,0,0,12,203,1,0,0,0,14,232,1,0,0,
  	0,16,234,1,0,0,0,18,244,1,0,0,0,20,268,1,0,0,0,22,270,1,0,0,0,24,301,
  	1,0,0,0,26,303,1,0,0,0,28,318,1,0,0,0,30,331,1,0,0,0,32,335,1,0,0,0,34,
  	359,1,0,0,0,36,361,1,0,0,0,38,369,1,0,0,0,40,381,1,0,0,0,42,387,1,0,0,
  	0,44,392,1,0,0,0,46,394,1,0,0,0,48,396,1,0,0,0,50,400,1,0,0,0,52,404,
  	1,0,0,0,54,408,1,0,0,0,56,412,1,0,0,0,58,416,1,0,0,0,60,420,1,0,0,0,62,
  	424,1,0,0,0,64,428,1,0,0,0,66,432,1,0,0,0,68,436,1,0,0,0,70,440,1,0,0,
  	0,72,444,1,0,0,0,74,448,1,0,0,0,76,452,1,0,0,0,78,456,1,0,0,0,80,460,
  	1,0,0,0,82,464,1,0,0,0,84,468,1,0,0,0,86,472,1,0,0,0,88,476,1,0,0,0,90,
  	480,1,0,0,0,92,493,1,0,0,0,94,506,1,0,0,0,96,519,1,0,0,0,98,527,1,0,0,
  	0,100,529,1,0,0,0,102,545,1,0,0,0,104,547,1,0,0,0,106,554,1,0,0,0,108,
  	572,1,0,0,0,110,574,1,0,0,0,112,578,1,0,0,0,114,582,1,0,0,0,116,586,1,
  	0,0,0,118,590,1,0,0,0,120,594,1,0,0,0,122,598,1,0,0,0,124,602,1,0,0,0,
  	126,612,1,0,0,0,128,622,1,0,0,0,130,630,1,0,0,0,132,638,1,0,0,0,134,646,
  	1,0,0,0,136,658,1,0,0,0,138,666,1,0,0,0,140,674,1,0,0,0,142,682,1,0,0,
  	0,144,690,1,0,0,0,146,707,1,0,0,0,148,717,1,0,0,0,150,739,1,0,0,0,152,
  	754,1,0,0,0,154,756,1,0,0,0,156,758,1,0,0,0,158,760,1,0,0,0,160,764,1,
  	0,0,0,162,766,1,0,0,0,164,768,1,0,0,0,166,776,1,0,0,0,168,780,1,0,0,0,
  	170,172,3,2,1,0,171,173,3,14,7,0,172,171,1,0,0,0,173,174,1,0,0,0,174,
  	172,1,0,0,0,174,175,1,0,0,0,175,176,1,0,0,0,176,177,5,0,0,1,177,1,1,0,
  	0,0,178,179,3,4,2,0,179,183,3,6,3,0,180,182,3,8,4,0,181,180,1,0,0,0,182,
  	185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,3,1,0,0,0,185,183,1,0,
  	0,0,186,187,5,2,0,0,187,188,7,0,0,0,188,189,5,117,0,0,189,190,5,8,0,0,
  	190,5,1,0,0,0,191,192,5,2,0,0,192,193,5,5,0,0,193,194,5,117,0,0,194,195,
  	5,7,0,0,195,7,1,0,0,0,196,197,5,2,0,0,197,198,5,6,0,0,198,199,5,117,0,
  	0,199,200,5,7,0,0,200,9,1,0,0,0,201,202,5,9,0,0,202,11,1,0,0,0,203,204,
  	3,168,84,0,204,205,5,112,0,0,205,206,3,16,8,0,206,211,5,113,0,0,207,208,
  	5,114,0,0,208,209,3,164,82,0,209,210,5,115,0,0,210,212,1,0,0,0,211,207,
  	1,0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,213,214,5,105,0,0,214,215,3,18,
  	9,0,215,13,1,0,0,0,216,218,3,10,5,0,217,216,1,0,0,0,217,218,1,0,0,0,218,
  	220,1,0,0,0,219,221,3,12,6,0,220,219,1,0,0,0,221,222,1,0,0,0,222,220,
  	1,0,0,0,222,223,1,0,0,0,223,233,1,0,0,0,224,226,3,10,5,0,225,224,1,0,
  	0,0,225,226,1,0,0,0,226,228,1,0,0,0,227,229,3,22,11,0,228,227,1,0,0,0,
  	229,230,1,0,0,0,230,228,1,0,0,0,230,231,1,0,0,0,231,233,1,0,0,0,232,217,
  	1,0,0,0,232,225,1,0,0,0,233,15,1,0,0,0,234,239,3,20,10,0,235,236,5,116,
  	0,0,236,238,3,20,10,0,237,235,1,0,0,0,238,241,1,0,0,0,239,237,1,0,0,0,
  	239,240,1,0,0,0,240,17,1,0,0,0,241,239,1,0,0,0,242,245,3,20,10,0,243,
  	245,3,156,78,0,244,242,1,0,0,0,244,243,1,0,0,0,245,19,1,0,0,0,246,269,
  	3,48,24,0,247,269,3,88,44,0,248,269,3,50,25,0,249,269,3,52,26,0,250,269,
  	3,56,28,0,251,269,3,58,29,0,252,269,3,54,27,0,253,269,3,60,30,0,254,269,
  	3,62,31,0,255,269,3,64,32,0,256,269,3,66,33,0,257,269,3,68,34,0,258,269,
  	3,70,35,0,259,269,3,72,36,0,260,269,3,74,37,0,261,269,3,76,38,0,262,269,
  	3,78,39,0,263,269,3,80,40,0,264,269,3,82,41,0,265,269,3,84,42,0,266,269,
  	3,86,43,0,267,269,5,126,0,0,268,246,1,0,0,0,268,247,1,0,0,0,268,248,1,
  	0,0,0,268,249,1,0,0,0,268,250,1,0,0,0,268,251,1,0,0,0,268,252,1,0,0,0,
  	268,253,1,0,0,0,268,254,1,0,0,0,268,255,1,0,0,0,268,256,1,0,0,0,268,257,
  	1,0,0,0,268,258,1,0,0,0,268,259,1,0,0,0,268,260,1,0,0,0,268,261,1,0,0,
  	0,268,262,1,0,0,0,268,263,1,0,0,0,268,264,1,0,0,0,268,265,1,0,0,0,268,
  	266,1,0,0,0,268,267,1,0,0,0,269,21,1,0,0,0,270,275,3,24,12,0,271,272,
  	5,114,0,0,272,273,3,164,82,0,273,274,5,115,0,0,274,276,1,0,0,0,275,271,
  	1,0,0,0,275,276,1,0,0,0,276,277,1,0,0,0,277,278,5,105,0,0,278,279,3,18,
  	9,0,279,23,1,0,0,0,280,281,3,26,13,0,281,282,3,168,84,0,282,284,5,112,
  	0,0,283,285,3,36,18,0,284,283,1,0,0,0,284,285,1,0,0,0,285,286,1,0,0,0,
  	286,287,5,113,0,0,287,302,1,0,0,0,288,289,3,28,14,0,289,290,3,168,84,
  	0,290,292,5,112,0,0,291,293,3,38,19,0,292,291,1,0,0,0,292,293,1,0,0,0,
  	293,294,1,0,0,0,294,295,5,113,0,0,295,302,1,0,0,0,296,297,3,168,84,0,
  	297,298,5,112,0,0,298,299,3,30,15,0,299,300,5,113,0,0,300,302,1,0,0,0,
  	301,280,1,0,0,0,301,288,1,0,0,0,301,296,1,0,0,0,302,25,1,0,0,0,303,304,
  	5,10,0,0,304,305,5,126,0,0,305,306,5,112,0,0,306,311,3,106,53,0,307,308,
  	5,116,0,0,308,310,3,106,53,0,309,307,1,0,0,0,310,313,1,0,0,0,311,309,
  	1,0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,311,1,0,0,0,314,315,5,113,
  	0,0,315,316,5,105,0,0,316,317,3,28,14,0,317,27,1,0,0,0,318,327,5,112,
  	0,0,319,324,3,32,16,0,320,321,5,116,0,0,321,323,3,32,16,0,322,320,1,0,
  	0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,1,0,0,0,325,328,1,0,0,0,326,
  	324,1,0,0,0,327,319,1,0,0,0,327,328,1,0,0,0,328,329,1,0,0,0,329,330,5,
  	113,0,0,330,29,1,0,0,0,331,332,3,32,16,0,332,333,5,99,0,0,333,334,3,106,
  	53,0,334,31,1,0,0,0,335,344,5,112,0,0,336,341,3,34,17,0,337,338,5,116,
  	0,0,338,340,3,34,17,0,339,337,1,0,0,0,340,343,1,0,0,0,341,339,1,0,0,0,
  	341,342,1,0,0,0,342,345,1,0,0,0,343,341,1,0,0,0,344,336,1,0,0,0,344,345,
  	1,0,0,0,345,346,1,0,0,0,346,347,5,113,0,0,347,33,1,0,0,0,348,360,5,46,
  	0,0,349,360,3,44,22,0,350,360,5,28,0,0,351,360,5,47,0,0,352,360,5,32,
  	0,0,353,360,5,31,0,0,354,360,5,30,0,0,355,360,5,29,0,0,356,360,5,43,0,
  	0,357,360,5,44,0,0,358,360,5,45,0,0,359,348,1,0,0,0,359,349,1,0,0,0,359,
  	350,1,0,0,0,359,351,1,0,0,0,359,352,1,0,0,0,359,353,1,0,0,0,359,354,1,
  	0,0,0,359,355,1,0,0,0,359,356,1,0,0,0,359,357,1,0,0,0,359,358,1,0,0,0,
  	360,35,1,0,0,0,361,366,3,40,20,0,362,363,5,116,0,0,363,365,3,40,20,0,
  	364,362,1,0,0,0,365,368,1,0,0,0,366,364,1,0,0,0,366,367,1,0,0,0,367,37,
  	1,0,0,0,368,366,1,0,0,0,369,374,3,42,21,0,370,371,5,116,0,0,371,373,3,
  	42,21,0,372,370,1,0,0,0,373,376,1,0,0,0,374,372,1,0,0,0,374,375,1,0,0,
  	0,375,39,1,0,0,0,376,374,1,0,0,0,377,378,5,126,0,0,378,379,5,120,0,0,
  	379,382,5,51,0,0,380,382,3,20,10,0,381,377,1,0,0,0,381,380,1,0,0,0,382,
  	41,1,0,0,0,383,384,5,51,0,0,384,385,5,99,0,0,385,388,3,106,53,0,386,388,
  	3,20,10,0,387,383,1,0,0,0,387,386,1,0,0,0,388,43,1,0,0,0,389,393,5,26,
  	0,0,390,393,5,25,0,0,391,393,3,46,23,0,392,389,1,0,0,0,392,390,1,0,0,
  	0,392,391,1,0,0,0,393,45,1,0,0,0,394,395,7,1,0,0,395,47,1,0,0,0,396,397,
  	5,46,0,0,397,398,5,99,0,0,398,399,3,106,53,0,399,49,1,0,0,0,400,401,5,
  	25,0,0,401,402,5,99,0,0,402,403,3,116,58,0,403,51,1,0,0,0,404,405,3,44,
  	22,0,405,406,5,99,0,0,406,407,3,118,59,0,407,53,1,0,0,0,408,409,3,44,
  	22,0,409,410,5,99,0,0,410,411,3,134,67,0,411,55,1,0,0,0,412,413,5,28,
  	0,0,413,414,5,99,0,0,414,415,3,110,55,0,415,57,1,0,0,0,416,417,5,47,0,
  	0,417,418,5,99,0,0,418,419,3,112,56,0,419,59,1,0,0,0,420,421,5,32,0,0,
  	421,422,5,99,0,0,422,423,3,120,60,0,423,61,1,0,0,0,424,425,5,43,0,0,425,
  	426,5,99,0,0,426,427,3,122,61,0,427,63,1,0,0,0,428,429,5,44,0,0,429,430,
  	5,99,0,0,430,431,3,124,62,0,431,65,1,0,0,0,432,433,5,45,0,0,433,434,5,
  	99,0,0,434,435,3,126,63,0,435,67,1,0,0,0,436,437,5,47,0,0,437,438,5,99,
  	0,0,438,439,3,128,64,0,439,69,1,0,0,0,440,441,5,47,0,0,441,442,5,99,0,
  	0,442,443,3,130,65,0,443,71,1,0,0,0,444,445,5,47,0,0,445,446,5,99,0,0,
  	446,447,3,132,66,0,447,73,1,0,0,0,448,449,5,31,0,0,449,450,5,99,0,0,450,
  	451,3,136,68,0,451,75,1,0,0,0,452,453,5,30,0,0,453,454,5,99,0,0,454,455,
  	3,138,69,0,455,77,1,0,0,0,456,457,5,29,0,0,457,458,5,99,0,0,458,459,3,
  	140,70,0,459,79,1,0,0,0,460,461,3,90,45,0,461,462,5,99,0,0,462,463,3,
  	142,71,0,463,81,1,0,0,0,464,465,3,92,46,0,465,466,5,99,0,0,466,467,3,
  	144,72,0,467,83,1,0,0,0,468,469,3,94,47,0,469,470,5,99,0,0,470,471,3,
  	146,73,0,471,85,1,0,0,0,472,473,3,100,50,0,473,474,5,99,0,0,474,475,3,
  	148,74,0,475,87,1,0,0,0,476,477,5,126,0,0,477,478,5,99,0,0,478,479,5,
  	48,0,0,479,89,1,0,0,0,480,489,5,114,0,0,481,486,3,98,49,0,482,483,5,116,
  	0,0,483,485,3,98,49,0,484,482,1,0,0,0,485,488,1,0,0,0,486,484,1,0,0,0,
  	486,487,1,0,0,0,487,490,1,0,0,0,488,486,1,0,0,0,489,481,1,0,0,0,489,490,
  	1,0,0,0,490,491,1,0,0,0,491,492,5,115,0,0,492,91,1,0,0,0,493,502,5,112,
  	0,0,494,499,3,98,49,0,495,496,5,116,0,0,496,498,3,98,49,0,497,495,1,0,
  	0,0,498,501,1,0,0,0,499,497,1,0,0,0,499,500,1,0,0,0,500,503,1,0,0,0,501,
  	499,1,0,0,0,502,494,1,0,0,0,502,503,1,0,0,0,503,504,1,0,0,0,504,505,5,
  	113,0,0,505,93,1,0,0,0,506,515,5,49,0,0,507,512,3,96,48,0,508,509,5,116,
  	0,0,509,511,3,96,48,0,510,508,1,0,0,0,511,514,1,0,0,0,512,510,1,0,0,0,
  	512,513,1,0,0,0,513,516,1,0,0,0,514,512,1,0,0,0,515,507,1,0,0,0,515,516,
  	1,0,0,0,516,517,1,0,0,0,517,518,5,50,0,0,518,95,1,0,0,0,519,520,3,98,
  	49,0,520,521,5,117,0,0,521,522,3,98,49,0,522,97,1,0,0,0,523,528,3,34,
  	17,0,524,528,3,90,45,0,525,528,3,92,46,0,526,528,3,94,47,0,527,523,1,
  	0,0,0,527,524,1,0,0,0,527,525,1,0,0,0,527,526,1,0,0,0,528,99,1,0,0,0,
  	529,530,5,112,0,0,530,531,3,102,51,0,531,532,5,124,0,0,532,533,3,104,
  	52,0,533,534,5,113,0,0,534,101,1,0,0,0,535,546,5,126,0,0,536,537,5,112,
  	0,0,537,540,5,126,0,0,538,539,5,116,0,0,539,541,5,126,0,0,540,538,1,0,
  	0,0,541,542,1,0,0,0,542,540,1,0,0,0,542,543,1,0,0,0,543,544,1,0,0,0,544,
  	546,5,113,0,0,545,535,1,0,0,0,545,536,1,0,0,0,546,103,1,0,0,0,547,548,
  	3,168,84,0,548,549,5,112,0,0,549,550,3,16,8,0,550,551,5,113,0,0,551,105,
  	1,0,0,0,552,555,3,108,54,0,553,555,3,152,76,0,554,552,1,0,0,0,554,553,
  	1,0,0,0,555,107,1,0,0,0,556,573,3,110,55,0,557,573,3,116,58,0,558,573,
  	3,118,59,0,559,573,3,112,56,0,560,573,3,114,57,0,561,573,3,120,60,0,562,
  	573,3,122,61,0,563,565,5,71,0,0,564,566,5,118,0,0,565,564,1,0,0,0,565,
  	566,1,0,0,0,566,573,1,0,0,0,567,568,5,83,0,0,568,570,5,126,0,0,569,571,
  	5,118,0,0,570,569,1,0,0,0,570,571,1,0,0,0,571,573,1,0,0,0,572,556,1,0,
  	0,0,572,557,1,0,0,0,572,558,1,0,0,0,572,559,1,0,0,0,572,560,1,0,0,0,572,
  	561,1,0,0,0,572,562,1,0,0,0,572,563,1,0,0,0,572,567,1,0,0,0,573,109,1,
  	0,0,0,574,576,7,2,0,0,575,577,5,118,0,0,576,575,1,0,0,0,576,577,1,0,0,
  	0,577,111,1,0,0,0,578,580,7,3,0,0,579,581,5,118,0,0,580,579,1,0,0,0,580,
  	581,1,0,0,0,581,113,1,0,0,0,582,584,7,4,0,0,583,585,5,118,0,0,584,583,
  	1,0,0,0,584,585,1,0,0,0,585,115,1,0,0,0,586,588,7,5,0,0,587,589,5,118,
  	0,0,588,587,1,0,0,0,588,589,1,0,0,0,589,117,1,0,0,0,590,592,7,6,0,0,591,
  	593,5,118,0,0,592,591,1,0,0,0,592,593,1,0,0,0,593,119,1,0,0,0,594,596,
  	5,67,0,0,595,597,5,118,0,0,596,595,1,0,0,0,596,597,1,0,0,0,597,121,1,
  	0,0,0,598,600,7,7,0,0,599,601,5,118,0,0,600,599,1,0,0,0,600,601,1,0,0,
  	0,601,123,1,0,0,0,602,604,7,8,0,0,603,605,5,118,0,0,604,603,1,0,0,0,604,
  	605,1,0,0,0,605,610,1,0,0,0,606,607,5,41,0,0,607,608,3,154,77,0,608,609,
  	5,42,0,0,609,611,1,0,0,0,610,606,1,0,0,0,610,611,1,0,0,0,611,125,1,0,
  	0,0,612,614,7,9,0,0,613,615,5,118,0,0,614,613,1,0,0,0,614,615,1,0,0,0,
  	615,620,1,0,0,0,616,617,5,41,0,0,617,618,3,154,77,0,618,619,5,42,0,0,
  	619,621,1,0,0,0,620,616,1,0,0,0,620,621,1,0,0,0,621,127,1,0,0,0,622,624,
  	7,10,0,0,623,625,5,118,0,0,624,623,1,0,0,0,624,625,1,0,0,0,625,626,1,
  	0,0,0,626,627,5,41,0,0,627,628,3,154,77,0,628,629,5,42,0,0,629,129,1,
  	0,0,0,630,632,7,11,0,0,631,633,5,118,0,0,632,631,1,0,0,0,632,633,1,0,
  	0,0,633,634,1,0,0,0,634,635,5,41,0,0,635,636,3,154,77,0,636,637,5,42,
  	0,0,637,131,1,0,0,0,638,640,7,12,0,0,639,641,5,118,0,0,640,639,1,0,0,
  	0,640,641,1,0,0,0,641,642,1,0,0,0,642,643,5,41,0,0,643,644,3,154,77,0,
  	644,645,5,42,0,0,645,133,1,0,0,0,646,648,7,13,0,0,647,649,5,118,0,0,648,
  	647,1,0,0,0,648,649,1,0,0,0,649,656,1,0,0,0,650,651,5,41,0,0,651,652,
  	3,154,77,0,652,653,5,116,0,0,653,654,3,154,77,0,654,655,5,42,0,0,655,
  	657,1,0,0,0,656,650,1,0,0,0,656,657,1,0,0,0,657,135,1,0,0,0,658,660,7,
  	14,0,0,659,661,5,118,0,0,660,659,1,0,0,0,660,661,1,0,0,0,661,662,1,0,
  	0,0,662,663,5,41,0,0,663,664,3,154,77,0,664,665,5,42,0,0,665,137,1,0,
  	0,0,666,668,7,15,0,0,667,669,5,118,0,0,668,667,1,0,0,0,668,669,1,0,0,
  	0,669,670,1,0,0,0,670,671,5,41,0,0,671,672,3,154,77,0,672,673,5,42,0,
  	0,673,139,1,0,0,0,674,676,7,16,0,0,675,677,5,118,0,0,676,675,1,0,0,0,
  	676,677,1,0,0,0,677,678,1,0,0,0,678,679,5,41,0,0,679,680,3,154,77,0,680,
  	681,5,42,0,0,681,141,1,0,0,0,682,684,5,81,0,0,683,685,5,118,0,0,684,683,
  	1,0,0,0,684,685,1,0,0,0,685,686,1,0,0,0,686,687,5,41,0,0,687,688,3,106,
  	53,0,688,689,5,42,0,0,689,143,1,0,0,0,690,692,5,79,0,0,691,693,5,118,
  	0,0,692,691,1,0,0,0,692,693,1,0,0,0,693,694,1,0,0,0,694,703,5,41,0,0,
  	695,700,3,106,53,0,696,697,5,116,0,0,697,699,3,106,53,0,698,696,1,0,0,
  	0,699,702,1,0,0,0,700,698,1,0,0,0,700,701,1,0,0,0,701,704,1,0,0,0,702,
  	700,1,0,0,0,703,695,1,0,0,0,703,704,1,0,0,0,704,705,1,0,0,0,705,706,5,
  	42,0,0,706,145,1,0,0,0,707,709,5,82,0,0,708,710,5,118,0,0,709,708,1,0,
  	0,0,709,710,1,0,0,0,710,711,1,0,0,0,711,712,5,41,0,0,712,713,3,106,53,
  	0,713,714,5,116,0,0,714,715,3,106,53,0,715,716,5,42,0,0,716,147,1,0,0,
  	0,717,719,5,57,0,0,718,720,5,118,0,0,719,718,1,0,0,0,719,720,1,0,0,0,
  	720,721,1,0,0,0,721,722,5,41,0,0,722,723,3,150,75,0,723,724,5,124,0,0,
  	724,725,3,106,53,0,725,726,5,42,0,0,726,149,1,0,0,0,727,740,3,106,53,
  	0,728,729,5,112,0,0,729,734,3,106,53,0,730,731,5,116,0,0,731,733,3,106,
  	53,0,732,730,1,0,0,0,733,736,1,0,0,0,734,732,1,0,0,0,734,735,1,0,0,0,
  	735,737,1,0,0,0,736,734,1,0,0,0,737,738,5,113,0,0,738,740,1,0,0,0,739,
  	727,1,0,0,0,739,728,1,0,0,0,740,151,1,0,0,0,741,755,3,128,64,0,742,755,
  	3,130,65,0,743,755,3,132,66,0,744,755,3,134,67,0,745,755,3,124,62,0,746,
  	755,3,126,63,0,747,755,3,136,68,0,748,755,3,138,69,0,749,755,3,140,70,
  	0,750,755,3,142,71,0,751,755,3,144,72,0,752,755,3,146,73,0,753,755,3,
  	148,74,0,754,741,1,0,0,0,754,742,1,0,0,0,754,743,1,0,0,0,754,744,1,0,
  	0,0,754,745,1,0,0,0,754,746,1,0,0,0,754,747,1,0,0,0,754,748,1,0,0,0,754,
  	749,1,0,0,0,754,750,1,0,0,0,754,751,1,0,0,0,754,752,1,0,0,0,754,753,1,
  	0,0,0,755,153,1,0,0,0,756,757,5,25,0,0,757,155,1,0,0,0,758,759,7,17,0,
  	0,759,157,1,0,0,0,760,761,3,160,80,0,761,762,5,117,0,0,762,763,3,162,
  	81,0,763,159,1,0,0,0,764,765,7,18,0,0,765,161,1,0,0,0,766,767,7,19,0,
  	0,767,163,1,0,0,0,768,773,3,158,79,0,769,770,5,116,0,0,770,772,3,158,
  	79,0,771,769,1,0,0,0,772,775,1,0,0,0,773,771,1,0,0,0,773,774,1,0,0,0,
  	774,165,1,0,0,0,775,773,1,0,0,0,776,777,7,20,0,0,777,167,1,0,0,0,778,
  	781,3,166,83,0,779,781,5,126,0,0,780,778,1,0,0,0,780,779,1,0,0,0,781,
  	169,1,0,0,0,69,174,183,211,217,222,225,230,232,239,244,268,275,284,292,
  	301,311,324,327,341,344,359,366,374,381,387,392,486,489,499,502,512,515,
  	527,542,545,554,565,570,572,576,580,584,588,592,596,600,604,610,614,620,
  	624,632,640,648,656,660,668,676,684,692,700,703,709,719,734,739,754,773,
  	780
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
    setState(170);
    header();
    setState(172); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(171);
      testGroup();
      setState(174); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16778752) != 0) || ((((_la - 112) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 112)) & 17921) != 0));
    setState(176);
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
    setState(178);
    version();
    setState(179);
    include();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::TripleHash) {
      setState(180);
      dependency();
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
    setState(186);
    match(FuncTestCaseParser::TripleHash);
    setState(187);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::SubstraitScalarTest

    || _la == FuncTestCaseParser::SubstraitAggregateTest)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(188);
    match(FuncTestCaseParser::Colon);
    setState(189);
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
    setState(191);
    match(FuncTestCaseParser::TripleHash);
    setState(192);
    match(FuncTestCaseParser::SubstraitInclude);
    setState(193);
    match(FuncTestCaseParser::Colon);
    setState(194);
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
    setState(196);
    match(FuncTestCaseParser::TripleHash);
    setState(197);
    match(FuncTestCaseParser::SubstraitDependency);
    setState(198);
    match(FuncTestCaseParser::Colon);
    setState(199);
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
    setState(201);
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
    setState(203);
    antlrcpp::downCast<TestCaseContext *>(_localctx)->functionName = identifier();
    setState(204);
    match(FuncTestCaseParser::OParen);
    setState(205);
    arguments();
    setState(206);
    match(FuncTestCaseParser::CParen);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OBracket) {
      setState(207);
      match(FuncTestCaseParser::OBracket);
      setState(208);
      funcOptions();
      setState(209);
      match(FuncTestCaseParser::CBracket);
    }
    setState(213);
    match(FuncTestCaseParser::Eq);
    setState(214);
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
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FuncTestCaseParser::ScalarFuncTestGroupContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(217);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FuncTestCaseParser::DescriptionLine) {
        setState(216);
        testGroupDescription();
      }
      setState(220); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(219);
                testCase();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(222); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncTestCaseParser::AggregateFuncTestGroupContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == FuncTestCaseParser::DescriptionLine) {
        setState(224);
        testGroupDescription();
      }
      setState(228); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(227);
                aggFuncTestCase();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(230); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
    setState(234);
    argument();
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(235);
      match(FuncTestCaseParser::Comma);
      setState(236);
      argument();
      setState(241);
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
    setState(244);
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
      case FuncTestCaseParser::StringLiteral:
      case FuncTestCaseParser::OBrace:
      case FuncTestCaseParser::OParen:
      case FuncTestCaseParser::OBracket:
      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(242);
        argument();
        break;
      }

      case FuncTestCaseParser::ErrorResult:
      case FuncTestCaseParser::UndefineResult: {
        enterOuterAlt(_localctx, 2);
        setState(243);
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

FuncTestCaseParser::LambdaArgContext* FuncTestCaseParser::ArgumentContext::lambdaArg() {
  return getRuleContext<FuncTestCaseParser::LambdaArgContext>(0);
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
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      nullArg();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(247);
      enumArg();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(248);
      intArg();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(249);
      floatArg();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(250);
      booleanArg();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(251);
      stringArg();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(252);
      decimalArg();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(253);
      dateArg();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(254);
      intervalYearArg();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(255);
      intervalDayArg();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(256);
      intervalCompoundArg();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(257);
      fixedCharArg();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(258);
      varCharArg();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(259);
      fixedBinaryArg();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(260);
      precisionTimeArg();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(261);
      precisionTimestampArg();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(262);
      precisionTimestampTZArg();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(263);
      listArg();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(264);
      structArg();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(265);
      mapArg();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(266);
      lambdaArg();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(267);
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
    setState(270);
    aggFuncCall();
    setState(275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OBracket) {
      setState(271);
      match(FuncTestCaseParser::OBracket);
      setState(272);
      funcOptions();
      setState(273);
      match(FuncTestCaseParser::CBracket);
    }
    setState(277);
    match(FuncTestCaseParser::Eq);
    setState(278);
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
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Define: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::MultiArgAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(280);
        tableData();
        setState(281);
        antlrcpp::downCast<MultiArgAggregateFuncCallContext *>(_localctx)->funcName = identifier();
        setState(282);
        match(FuncTestCaseParser::OParen);
        setState(284);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 835637394014208) != 0) || ((((_la - 112) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 112)) & 16389) != 0)) {
          setState(283);
          qualifiedAggregateFuncArgs();
        }
        setState(286);
        match(FuncTestCaseParser::CParen);
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::CompactAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(288);
        tableRows();
        setState(289);
        antlrcpp::downCast<CompactAggregateFuncCallContext *>(_localctx)->functName = identifier();
        setState(290);
        match(FuncTestCaseParser::OParen);
        setState(292);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3087437207699456) != 0) || ((((_la - 112) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 112)) & 16389) != 0)) {
          setState(291);
          aggregateFuncArgs();
        }
        setState(294);
        match(FuncTestCaseParser::CParen);
        break;
      }

      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or:
      case FuncTestCaseParser::Identifier: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::SingleArgAggregateFuncCallContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(296);
        antlrcpp::downCast<SingleArgAggregateFuncCallContext *>(_localctx)->functName = identifier();
        setState(297);
        match(FuncTestCaseParser::OParen);
        setState(298);
        dataColumn();
        setState(299);
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
  enterRule(_localctx, 26, FuncTestCaseParser::RuleTableData);
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
    setState(303);
    match(FuncTestCaseParser::Define);
    setState(304);
    antlrcpp::downCast<TableDataContext *>(_localctx)->tableName = match(FuncTestCaseParser::Identifier);
    setState(305);
    match(FuncTestCaseParser::OParen);
    setState(306);
    dataType();
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(307);
      match(FuncTestCaseParser::Comma);
      setState(308);
      dataType();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    match(FuncTestCaseParser::CParen);
    setState(315);
    match(FuncTestCaseParser::Eq);
    setState(316);
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
  enterRule(_localctx, 28, FuncTestCaseParser::RuleTableRows);
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
    setState(318);
    match(FuncTestCaseParser::OParen);
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OParen) {
      setState(319);
      columnValues();
      setState(324);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(320);
        match(FuncTestCaseParser::Comma);
        setState(321);
        columnValues();
        setState(326);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(329);
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
  enterRule(_localctx, 30, FuncTestCaseParser::RuleDataColumn);

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
    columnValues();
    setState(332);
    match(FuncTestCaseParser::DoubleColon);
    setState(333);
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
  enterRule(_localctx, 32, FuncTestCaseParser::RuleColumnValues);
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
    match(FuncTestCaseParser::OParen);
    setState(344);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272687440592896) != 0)) {
      setState(336);
      literal();
      setState(341);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(337);
        match(FuncTestCaseParser::Comma);
        setState(338);
        literal();
        setState(343);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(346);
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
  enterRule(_localctx, 34, FuncTestCaseParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::NullLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(348);
        match(FuncTestCaseParser::NullLiteral);
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::IntegerLiteral:
      case FuncTestCaseParser::DecimalLiteral:
      case FuncTestCaseParser::FloatLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(349);
        numericLiteral();
        break;
      }

      case FuncTestCaseParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(350);
        match(FuncTestCaseParser::BooleanLiteral);
        break;
      }

      case FuncTestCaseParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(351);
        match(FuncTestCaseParser::StringLiteral);
        break;
      }

      case FuncTestCaseParser::DateLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(352);
        match(FuncTestCaseParser::DateLiteral);
        break;
      }

      case FuncTestCaseParser::TimeLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(353);
        match(FuncTestCaseParser::TimeLiteral);
        break;
      }

      case FuncTestCaseParser::TimestampLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(354);
        match(FuncTestCaseParser::TimestampLiteral);
        break;
      }

      case FuncTestCaseParser::TimestampTzLiteral: {
        enterOuterAlt(_localctx, 8);
        setState(355);
        match(FuncTestCaseParser::TimestampTzLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalYearLiteral: {
        enterOuterAlt(_localctx, 9);
        setState(356);
        match(FuncTestCaseParser::IntervalYearLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalDayLiteral: {
        enterOuterAlt(_localctx, 10);
        setState(357);
        match(FuncTestCaseParser::IntervalDayLiteral);
        break;
      }

      case FuncTestCaseParser::IntervalCompoundLiteral: {
        enterOuterAlt(_localctx, 11);
        setState(358);
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
  enterRule(_localctx, 36, FuncTestCaseParser::RuleQualifiedAggregateFuncArgs);
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
    setState(361);
    qualifiedAggregateFuncArg();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(362);
      match(FuncTestCaseParser::Comma);
      setState(363);
      qualifiedAggregateFuncArg();
      setState(368);
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
  enterRule(_localctx, 38, FuncTestCaseParser::RuleAggregateFuncArgs);
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
    setState(369);
    aggregateFuncArg();
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(370);
      match(FuncTestCaseParser::Comma);
      setState(371);
      aggregateFuncArg();
      setState(376);
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
  enterRule(_localctx, 40, FuncTestCaseParser::RuleQualifiedAggregateFuncArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(377);
      antlrcpp::downCast<QualifiedAggregateFuncArgContext *>(_localctx)->tableName = match(FuncTestCaseParser::Identifier);
      setState(378);
      match(FuncTestCaseParser::Dot);
      setState(379);
      match(FuncTestCaseParser::ColumnName);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(380);
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
  enterRule(_localctx, 42, FuncTestCaseParser::RuleAggregateFuncArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(387);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::ColumnName: {
        enterOuterAlt(_localctx, 1);
        setState(383);
        match(FuncTestCaseParser::ColumnName);
        setState(384);
        match(FuncTestCaseParser::DoubleColon);
        setState(385);
        dataType();
        break;
      }

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
      case FuncTestCaseParser::StringLiteral:
      case FuncTestCaseParser::OBrace:
      case FuncTestCaseParser::OParen:
      case FuncTestCaseParser::OBracket:
      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(386);
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
  enterRule(_localctx, 44, FuncTestCaseParser::RuleNumericLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(392);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::DecimalLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(389);
        match(FuncTestCaseParser::DecimalLiteral);
        break;
      }

      case FuncTestCaseParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(390);
        match(FuncTestCaseParser::IntegerLiteral);
        break;
      }

      case FuncTestCaseParser::NaN:
      case FuncTestCaseParser::FloatLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(391);
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
  enterRule(_localctx, 46, FuncTestCaseParser::RuleFloatLiteral);
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
    setState(394);
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
  enterRule(_localctx, 48, FuncTestCaseParser::RuleNullArg);

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
    match(FuncTestCaseParser::NullLiteral);
    setState(397);
    match(FuncTestCaseParser::DoubleColon);
    setState(398);
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
  enterRule(_localctx, 50, FuncTestCaseParser::RuleIntArg);

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
    match(FuncTestCaseParser::IntegerLiteral);
    setState(401);
    match(FuncTestCaseParser::DoubleColon);
    setState(402);
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
  enterRule(_localctx, 52, FuncTestCaseParser::RuleFloatArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    numericLiteral();
    setState(405);
    match(FuncTestCaseParser::DoubleColon);
    setState(406);
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
  enterRule(_localctx, 54, FuncTestCaseParser::RuleDecimalArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    numericLiteral();
    setState(409);
    match(FuncTestCaseParser::DoubleColon);
    setState(410);
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
  enterRule(_localctx, 56, FuncTestCaseParser::RuleBooleanArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(FuncTestCaseParser::BooleanLiteral);
    setState(413);
    match(FuncTestCaseParser::DoubleColon);
    setState(414);
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
  enterRule(_localctx, 58, FuncTestCaseParser::RuleStringArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(FuncTestCaseParser::StringLiteral);
    setState(417);
    match(FuncTestCaseParser::DoubleColon);
    setState(418);
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
  enterRule(_localctx, 60, FuncTestCaseParser::RuleDateArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(FuncTestCaseParser::DateLiteral);
    setState(421);
    match(FuncTestCaseParser::DoubleColon);
    setState(422);
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
  enterRule(_localctx, 62, FuncTestCaseParser::RuleIntervalYearArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(FuncTestCaseParser::IntervalYearLiteral);
    setState(425);
    match(FuncTestCaseParser::DoubleColon);
    setState(426);
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
  enterRule(_localctx, 64, FuncTestCaseParser::RuleIntervalDayArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(FuncTestCaseParser::IntervalDayLiteral);
    setState(429);
    match(FuncTestCaseParser::DoubleColon);
    setState(430);
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
  enterRule(_localctx, 66, FuncTestCaseParser::RuleIntervalCompoundArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    match(FuncTestCaseParser::IntervalCompoundLiteral);
    setState(433);
    match(FuncTestCaseParser::DoubleColon);
    setState(434);
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
  enterRule(_localctx, 68, FuncTestCaseParser::RuleFixedCharArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(FuncTestCaseParser::StringLiteral);
    setState(437);
    match(FuncTestCaseParser::DoubleColon);
    setState(438);
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
  enterRule(_localctx, 70, FuncTestCaseParser::RuleVarCharArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(FuncTestCaseParser::StringLiteral);
    setState(441);
    match(FuncTestCaseParser::DoubleColon);
    setState(442);
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
  enterRule(_localctx, 72, FuncTestCaseParser::RuleFixedBinaryArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(FuncTestCaseParser::StringLiteral);
    setState(445);
    match(FuncTestCaseParser::DoubleColon);
    setState(446);
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
  enterRule(_localctx, 74, FuncTestCaseParser::RulePrecisionTimeArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(FuncTestCaseParser::TimeLiteral);
    setState(449);
    match(FuncTestCaseParser::DoubleColon);
    setState(450);
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
  enterRule(_localctx, 76, FuncTestCaseParser::RulePrecisionTimestampArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(FuncTestCaseParser::TimestampLiteral);
    setState(453);
    match(FuncTestCaseParser::DoubleColon);
    setState(454);
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
  enterRule(_localctx, 78, FuncTestCaseParser::RulePrecisionTimestampTZArg);

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
    match(FuncTestCaseParser::TimestampTzLiteral);
    setState(457);
    match(FuncTestCaseParser::DoubleColon);
    setState(458);
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
  enterRule(_localctx, 80, FuncTestCaseParser::RuleListArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    literalList();
    setState(461);
    match(FuncTestCaseParser::DoubleColon);
    setState(462);
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
  enterRule(_localctx, 82, FuncTestCaseParser::RuleStructArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    literalStruct();
    setState(465);
    match(FuncTestCaseParser::DoubleColon);
    setState(466);
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
  enterRule(_localctx, 84, FuncTestCaseParser::RuleMapArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    literalMap();
    setState(469);
    match(FuncTestCaseParser::DoubleColon);
    setState(470);
    mapType();
   
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
  enterRule(_localctx, 86, FuncTestCaseParser::RuleLambdaArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    literalLambda();
    setState(473);
    match(FuncTestCaseParser::DoubleColon);
    setState(474);
    funcType();
   
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
  enterRule(_localctx, 88, FuncTestCaseParser::RuleEnumArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(FuncTestCaseParser::Identifier);
    setState(477);
    match(FuncTestCaseParser::DoubleColon);
    setState(478);
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
  enterRule(_localctx, 90, FuncTestCaseParser::RuleLiteralList);
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
    setState(480);
    match(FuncTestCaseParser::OBracket);
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 835637394014208) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(481);
      compoundLiteral();
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(482);
        match(FuncTestCaseParser::Comma);
        setState(483);
        compoundLiteral();
        setState(488);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(491);
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
  enterRule(_localctx, 92, FuncTestCaseParser::RuleLiteralStruct);
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
    setState(493);
    match(FuncTestCaseParser::OParen);
    setState(502);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 835637394014208) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(494);
      compoundLiteral();
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(495);
        match(FuncTestCaseParser::Comma);
        setState(496);
        compoundLiteral();
        setState(501);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(504);
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
  enterRule(_localctx, 94, FuncTestCaseParser::RuleLiteralMap);
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
    setState(506);
    match(FuncTestCaseParser::OBrace);
    setState(515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 835637394014208) != 0) || _la == FuncTestCaseParser::OParen

    || _la == FuncTestCaseParser::OBracket) {
      setState(507);
      mapEntry();
      setState(512);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(508);
        match(FuncTestCaseParser::Comma);
        setState(509);
        mapEntry();
        setState(514);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(517);
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
  enterRule(_localctx, 96, FuncTestCaseParser::RuleMapEntry);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    antlrcpp::downCast<MapEntryContext *>(_localctx)->key = compoundLiteral();
    setState(520);
    match(FuncTestCaseParser::Colon);
    setState(521);
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
  enterRule(_localctx, 98, FuncTestCaseParser::RuleCompoundLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(527);
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
        setState(523);
        literal();
        break;
      }

      case FuncTestCaseParser::OBracket: {
        enterOuterAlt(_localctx, 2);
        setState(524);
        literalList();
        break;
      }

      case FuncTestCaseParser::OParen: {
        enterOuterAlt(_localctx, 3);
        setState(525);
        literalStruct();
        break;
      }

      case FuncTestCaseParser::OBrace: {
        enterOuterAlt(_localctx, 4);
        setState(526);
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
  enterRule(_localctx, 100, FuncTestCaseParser::RuleLiteralLambda);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    match(FuncTestCaseParser::OParen);
    setState(530);
    lambdaParameters();
    setState(531);
    match(FuncTestCaseParser::Arrow);
    setState(532);
    lambdaBody();
    setState(533);
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
  enterRule(_localctx, 102, FuncTestCaseParser::RuleLambdaParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Identifier: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::SingleParamContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(535);
        match(FuncTestCaseParser::Identifier);
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::TupleParamsContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(536);
        match(FuncTestCaseParser::OParen);
        setState(537);
        match(FuncTestCaseParser::Identifier);
        setState(540); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(538);
          match(FuncTestCaseParser::Comma);
          setState(539);
          match(FuncTestCaseParser::Identifier);
          setState(542); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == FuncTestCaseParser::Comma);
        setState(544);
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
  enterRule(_localctx, 104, FuncTestCaseParser::RuleLambdaBody);

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
    identifier();
    setState(548);
    match(FuncTestCaseParser::OParen);
    setState(549);
    arguments();
    setState(550);
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
  enterRule(_localctx, 106, FuncTestCaseParser::RuleDataType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(554);
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
        setState(552);
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
        setState(553);
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

tree::TerminalNode* FuncTestCaseParser::UserDefinedContext::UserDefined() {
  return getToken(FuncTestCaseParser::UserDefined, 0);
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedContext::Identifier() {
  return getToken(FuncTestCaseParser::Identifier, 0);
}

tree::TerminalNode* FuncTestCaseParser::UserDefinedContext::QMark() {
  return getToken(FuncTestCaseParser::QMark, 0);
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
  enterRule(_localctx, 108, FuncTestCaseParser::RuleScalarType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(572);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Boolean:
      case FuncTestCaseParser::Bool: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::BooleanContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(556);
        booleanType();
        break;
      }

      case FuncTestCaseParser::I8:
      case FuncTestCaseParser::I16:
      case FuncTestCaseParser::I32:
      case FuncTestCaseParser::I64: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::IntContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(557);
        intType();
        break;
      }

      case FuncTestCaseParser::FP32:
      case FuncTestCaseParser::FP64: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::FloatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(558);
        floatType();
        break;
      }

      case FuncTestCaseParser::String:
      case FuncTestCaseParser::Str: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::StringContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(559);
        stringType();
        break;
      }

      case FuncTestCaseParser::Binary:
      case FuncTestCaseParser::VBin: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::BinaryContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(560);
        binaryType();
        break;
      }

      case FuncTestCaseParser::Date: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::DateContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(561);
        dateType();
        break;
      }

      case FuncTestCaseParser::Interval_Year:
      case FuncTestCaseParser::IYear: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::IntervalYearContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(562);
        intervalYearType();
        break;
      }

      case FuncTestCaseParser::UUID: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::UuidContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(563);
        match(FuncTestCaseParser::UUID);
        setState(565);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FuncTestCaseParser::QMark) {
          setState(564);
          antlrcpp::downCast<UuidContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
        }
        break;
      }

      case FuncTestCaseParser::UserDefined: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::UserDefinedContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(567);
        match(FuncTestCaseParser::UserDefined);
        setState(568);
        match(FuncTestCaseParser::Identifier);
        setState(570);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FuncTestCaseParser::QMark) {
          setState(569);
          antlrcpp::downCast<UserDefinedContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
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
  enterRule(_localctx, 110, FuncTestCaseParser::RuleBooleanType);
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
    setState(574);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Boolean

    || _la == FuncTestCaseParser::Bool)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(576);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(575);
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
  enterRule(_localctx, 112, FuncTestCaseParser::RuleStringType);
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
    setState(578);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::String

    || _la == FuncTestCaseParser::Str)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(579);
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
  enterRule(_localctx, 114, FuncTestCaseParser::RuleBinaryType);
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
    setState(582);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Binary

    || _la == FuncTestCaseParser::VBin)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(584);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(583);
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
  enterRule(_localctx, 116, FuncTestCaseParser::RuleIntType);
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
    setState(586);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8646911284551352320) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(588);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(587);
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
  enterRule(_localctx, 118, FuncTestCaseParser::RuleFloatType);
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
    setState(590);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FP32

    || _la == FuncTestCaseParser::FP64)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(591);
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
  enterRule(_localctx, 120, FuncTestCaseParser::RuleDateType);
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
    setState(594);
    match(FuncTestCaseParser::Date);
    setState(596);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(595);
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
  enterRule(_localctx, 122, FuncTestCaseParser::RuleIntervalYearType);
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
    setState(598);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Year

    || _la == FuncTestCaseParser::IYear)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(600);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(599);
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
  enterRule(_localctx, 124, FuncTestCaseParser::RuleIntervalDayType);
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
    setState(602);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Day

    || _la == FuncTestCaseParser::IDay)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(603);
      antlrcpp::downCast<IntervalDayTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(610);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(606);
      match(FuncTestCaseParser::OAngleBracket);
      setState(607);
      antlrcpp::downCast<IntervalDayTypeContext *>(_localctx)->len = numericParameter();
      setState(608);
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
  enterRule(_localctx, 126, FuncTestCaseParser::RuleIntervalCompoundType);
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
    setState(612);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Interval_Compound

    || _la == FuncTestCaseParser::ICompound)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(614);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(613);
      antlrcpp::downCast<IntervalCompoundTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(620);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(616);
      match(FuncTestCaseParser::OAngleBracket);
      setState(617);
      antlrcpp::downCast<IntervalCompoundTypeContext *>(_localctx)->len = numericParameter();
      setState(618);
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
  enterRule(_localctx, 128, FuncTestCaseParser::RuleFixedCharType);
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
    setState(622);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FixedChar

    || _la == FuncTestCaseParser::FChar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(624);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(623);
      antlrcpp::downCast<FixedCharTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(626);
    match(FuncTestCaseParser::OAngleBracket);
    setState(627);
    antlrcpp::downCast<FixedCharTypeContext *>(_localctx)->len = numericParameter();
    setState(628);
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
  enterRule(_localctx, 130, FuncTestCaseParser::RuleVarCharType);
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
    setState(630);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::VarChar

    || _la == FuncTestCaseParser::VChar)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(632);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(631);
      antlrcpp::downCast<VarCharTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(634);
    match(FuncTestCaseParser::OAngleBracket);
    setState(635);
    antlrcpp::downCast<VarCharTypeContext *>(_localctx)->len = numericParameter();
    setState(636);
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
  enterRule(_localctx, 132, FuncTestCaseParser::RuleFixedBinaryType);
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
    setState(638);
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::FixedBinary

    || _la == FuncTestCaseParser::FBin)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(639);
      antlrcpp::downCast<FixedBinaryTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(642);
    match(FuncTestCaseParser::OAngleBracket);
    setState(643);
    antlrcpp::downCast<FixedBinaryTypeContext *>(_localctx)->len = numericParameter();
    setState(644);
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
  enterRule(_localctx, 134, FuncTestCaseParser::RuleDecimalType);
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
    if (!(_la == FuncTestCaseParser::Decimal

    || _la == FuncTestCaseParser::Dec)) {
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
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::OAngleBracket) {
      setState(650);
      match(FuncTestCaseParser::OAngleBracket);
      setState(651);
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->precision = numericParameter();
      setState(652);
      match(FuncTestCaseParser::Comma);
      setState(653);
      antlrcpp::downCast<DecimalTypeContext *>(_localctx)->scale = numericParameter();
      setState(654);
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
  enterRule(_localctx, 136, FuncTestCaseParser::RulePrecisionTimeType);
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
    if (!(_la == FuncTestCaseParser::Precision_Time

    || _la == FuncTestCaseParser::PT)) {
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
      antlrcpp::downCast<PrecisionTimeTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(662);
    match(FuncTestCaseParser::OAngleBracket);
    setState(663);
    antlrcpp::downCast<PrecisionTimeTypeContext *>(_localctx)->precision = numericParameter();
    setState(664);
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
  enterRule(_localctx, 138, FuncTestCaseParser::RulePrecisionTimestampType);
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
    _la = _input->LA(1);
    if (!(_la == FuncTestCaseParser::Precision_Timestamp

    || _la == FuncTestCaseParser::PTs)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(668);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(667);
      antlrcpp::downCast<PrecisionTimestampTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(670);
    match(FuncTestCaseParser::OAngleBracket);
    setState(671);
    antlrcpp::downCast<PrecisionTimestampTypeContext *>(_localctx)->precision = numericParameter();
    setState(672);
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
  enterRule(_localctx, 140, FuncTestCaseParser::RulePrecisionTimestampTZType);
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
    if (!(_la == FuncTestCaseParser::Precision_Timestamp_TZ

    || _la == FuncTestCaseParser::PTsTZ)) {
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
      antlrcpp::downCast<PrecisionTimestampTZTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(678);
    match(FuncTestCaseParser::OAngleBracket);
    setState(679);
    antlrcpp::downCast<PrecisionTimestampTZTypeContext *>(_localctx)->precision = numericParameter();
    setState(680);
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
  enterRule(_localctx, 142, FuncTestCaseParser::RuleListType);
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
    setState(682);
    match(FuncTestCaseParser::List);
    setState(684);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(683);
      antlrcpp::downCast<ListContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(686);
    match(FuncTestCaseParser::OAngleBracket);
    setState(687);
    antlrcpp::downCast<ListContext *>(_localctx)->elemType = dataType();
    setState(688);
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
  enterRule(_localctx, 144, FuncTestCaseParser::RuleStructType);
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
    setState(690);
    match(FuncTestCaseParser::Struct);
    setState(692);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(691);
      antlrcpp::downCast<StructTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(694);
    match(FuncTestCaseParser::OAngleBracket);
    setState(703);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & 1099503239167) != 0)) {
      setState(695);
      dataType();
      setState(700);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == FuncTestCaseParser::Comma) {
        setState(696);
        match(FuncTestCaseParser::Comma);
        setState(697);
        dataType();
        setState(702);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(705);
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
  enterRule(_localctx, 146, FuncTestCaseParser::RuleMapType);
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
    setState(707);
    match(FuncTestCaseParser::Map);
    setState(709);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(708);
      antlrcpp::downCast<MapTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(711);
    match(FuncTestCaseParser::OAngleBracket);
    setState(712);
    antlrcpp::downCast<MapTypeContext *>(_localctx)->keyType = dataType();
    setState(713);
    match(FuncTestCaseParser::Comma);
    setState(714);
    antlrcpp::downCast<MapTypeContext *>(_localctx)->valueType = dataType();
    setState(715);
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
  enterRule(_localctx, 148, FuncTestCaseParser::RuleFuncType);
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
    setState(717);
    match(FuncTestCaseParser::Func);
    setState(719);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FuncTestCaseParser::QMark) {
      setState(718);
      antlrcpp::downCast<FuncTypeContext *>(_localctx)->isnull = match(FuncTestCaseParser::QMark);
    }
    setState(721);
    match(FuncTestCaseParser::OAngleBracket);
    setState(722);
    antlrcpp::downCast<FuncTypeContext *>(_localctx)->params = funcParameters();
    setState(723);
    match(FuncTestCaseParser::Arrow);
    setState(724);
    antlrcpp::downCast<FuncTypeContext *>(_localctx)->returnType = dataType();
    setState(725);
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
  enterRule(_localctx, 150, FuncTestCaseParser::RuleFuncParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(739);
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
        setState(727);
        dataType();
        break;
      }

      case FuncTestCaseParser::OParen: {
        _localctx = _tracker.createInstance<FuncTestCaseParser::FuncParamsWithParensContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(728);
        match(FuncTestCaseParser::OParen);
        setState(729);
        dataType();
        setState(734);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == FuncTestCaseParser::Comma) {
          setState(730);
          match(FuncTestCaseParser::Comma);
          setState(731);
          dataType();
          setState(736);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(737);
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
  enterRule(_localctx, 152, FuncTestCaseParser::RuleParameterizedType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(754);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::FixedChar:
      case FuncTestCaseParser::FChar: {
        enterOuterAlt(_localctx, 1);
        setState(741);
        fixedCharType();
        break;
      }

      case FuncTestCaseParser::VarChar:
      case FuncTestCaseParser::VChar: {
        enterOuterAlt(_localctx, 2);
        setState(742);
        varCharType();
        break;
      }

      case FuncTestCaseParser::FixedBinary:
      case FuncTestCaseParser::FBin: {
        enterOuterAlt(_localctx, 3);
        setState(743);
        fixedBinaryType();
        break;
      }

      case FuncTestCaseParser::Decimal:
      case FuncTestCaseParser::Dec: {
        enterOuterAlt(_localctx, 4);
        setState(744);
        decimalType();
        break;
      }

      case FuncTestCaseParser::Interval_Day:
      case FuncTestCaseParser::IDay: {
        enterOuterAlt(_localctx, 5);
        setState(745);
        intervalDayType();
        break;
      }

      case FuncTestCaseParser::Interval_Compound:
      case FuncTestCaseParser::ICompound: {
        enterOuterAlt(_localctx, 6);
        setState(746);
        intervalCompoundType();
        break;
      }

      case FuncTestCaseParser::Precision_Time:
      case FuncTestCaseParser::PT: {
        enterOuterAlt(_localctx, 7);
        setState(747);
        precisionTimeType();
        break;
      }

      case FuncTestCaseParser::Precision_Timestamp:
      case FuncTestCaseParser::PTs: {
        enterOuterAlt(_localctx, 8);
        setState(748);
        precisionTimestampType();
        break;
      }

      case FuncTestCaseParser::Precision_Timestamp_TZ:
      case FuncTestCaseParser::PTsTZ: {
        enterOuterAlt(_localctx, 9);
        setState(749);
        precisionTimestampTZType();
        break;
      }

      case FuncTestCaseParser::List: {
        enterOuterAlt(_localctx, 10);
        setState(750);
        listType();
        break;
      }

      case FuncTestCaseParser::Struct: {
        enterOuterAlt(_localctx, 11);
        setState(751);
        structType();
        break;
      }

      case FuncTestCaseParser::Map: {
        enterOuterAlt(_localctx, 12);
        setState(752);
        mapType();
        break;
      }

      case FuncTestCaseParser::Func: {
        enterOuterAlt(_localctx, 13);
        setState(753);
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
  enterRule(_localctx, 154, FuncTestCaseParser::RuleNumericParameter);

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
    setState(756);
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
  enterRule(_localctx, 156, FuncTestCaseParser::RuleSubstraitError);
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
    setState(758);
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
  enterRule(_localctx, 158, FuncTestCaseParser::RuleFuncOption);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(760);
    optionName();
    setState(761);
    match(FuncTestCaseParser::Colon);
    setState(762);
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
  enterRule(_localctx, 160, FuncTestCaseParser::RuleOptionName);
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
    setState(764);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12607488) != 0) || _la == FuncTestCaseParser::Identifier)) {
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
  enterRule(_localctx, 162, FuncTestCaseParser::RuleOptionValue);
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
    setState(766);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70369033551872) != 0) || _la == FuncTestCaseParser::Identifier)) {
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
  enterRule(_localctx, 164, FuncTestCaseParser::RuleFuncOptions);
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
    setState(768);
    funcOption();
    setState(773);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FuncTestCaseParser::Comma) {
      setState(769);
      match(FuncTestCaseParser::Comma);
      setState(770);
      funcOption();
      setState(775);
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
  enterRule(_localctx, 166, FuncTestCaseParser::RuleNonReserved);
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
    setState(776);
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
  enterRule(_localctx, 168, FuncTestCaseParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(780);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FuncTestCaseParser::Truncate:
      case FuncTestCaseParser::And:
      case FuncTestCaseParser::Or: {
        enterOuterAlt(_localctx, 1);
        setState(778);
        nonReserved();
        break;
      }

      case FuncTestCaseParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(779);
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
