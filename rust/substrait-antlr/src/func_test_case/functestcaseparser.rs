// SPDX-License-Identifier: Apache-2.0
#![allow(clippy::all)]
#![allow(unused_parens)]
#![cfg_attr(rustfmt, rustfmt_skip)]
// Generated from FuncTestCaseParser.g4 by ANTLR 4.13.2
#![allow(dead_code)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(nonstandard_style)]
#![allow(unused_imports)]
#![allow(unused_mut)]
#![allow(unused_braces)]
use antlr4rust::PredictionContextCache;
use antlr4rust::parser::{Parser, BaseParser, ParserRecog, ParserNodeType};
use antlr4rust::token_stream::TokenStream;
use antlr4rust::TokenSource;
use antlr4rust::parser_atn_simulator::ParserATNSimulator;
use antlr4rust::errors::*;
use antlr4rust::rule_context::{BaseRuleContext, CustomRuleContext, RuleContext};
use antlr4rust::recognizer::{Recognizer,Actions};
use antlr4rust::atn_deserializer::ATNDeserializer;
use antlr4rust::dfa::DFA;
use antlr4rust::atn::{ATN, INVALID_ALT};
use antlr4rust::error_strategy::{ErrorStrategy, DefaultErrorStrategy};
use antlr4rust::parser_rule_context::{BaseParserRuleContext, ParserRuleContext,cast,cast_mut};
use antlr4rust::tree::*;
use antlr4rust::token::{TOKEN_EOF,OwningToken,Token};
use antlr4rust::int_stream::EOF;
use antlr4rust::vocabulary::{Vocabulary,VocabularyImpl};
use antlr4rust::token_factory::{CommonTokenFactory,TokenFactory, TokenAware};
use super::functestcaseparserlistener::*;
use antlr4rust::lazy_static;
use antlr4rust::{TidAble,TidExt};

use std::marker::PhantomData;
use std::sync::Arc;
use std::rc::Rc;
use std::convert::TryFrom;
use std::cell::RefCell;
use std::ops::{DerefMut, Deref};
use std::borrow::{Borrow,BorrowMut};
use std::any::{Any,TypeId};

		pub const FuncTestCaseParser_Whitespace:i32=1; 
		pub const FuncTestCaseParser_TripleHash:i32=2; 
		pub const FuncTestCaseParser_SubstraitScalarTest:i32=3; 
		pub const FuncTestCaseParser_SubstraitAggregateTest:i32=4; 
		pub const FuncTestCaseParser_SubstraitInclude:i32=5; 
		pub const FuncTestCaseParser_SubstraitDependency:i32=6; 
		pub const FuncTestCaseParser_ExtensionUrn:i32=7; 
		pub const FuncTestCaseParser_FormatVersion:i32=8; 
		pub const FuncTestCaseParser_DescriptionLine:i32=9; 
		pub const FuncTestCaseParser_Define:i32=10; 
		pub const FuncTestCaseParser_ErrorResult:i32=11; 
		pub const FuncTestCaseParser_UndefineResult:i32=12; 
		pub const FuncTestCaseParser_Overflow:i32=13; 
		pub const FuncTestCaseParser_Rounding:i32=14; 
		pub const FuncTestCaseParser_Error:i32=15; 
		pub const FuncTestCaseParser_Saturate:i32=16; 
		pub const FuncTestCaseParser_Silent:i32=17; 
		pub const FuncTestCaseParser_TieToEven:i32=18; 
		pub const FuncTestCaseParser_NaN:i32=19; 
		pub const FuncTestCaseParser_AcceptNulls:i32=20; 
		pub const FuncTestCaseParser_IgnoreNulls:i32=21; 
		pub const FuncTestCaseParser_NullHandling:i32=22; 
		pub const FuncTestCaseParser_SpacesOnly:i32=23; 
		pub const FuncTestCaseParser_Truncate:i32=24; 
		pub const FuncTestCaseParser_IntegerLiteral:i32=25; 
		pub const FuncTestCaseParser_DecimalLiteral:i32=26; 
		pub const FuncTestCaseParser_FloatLiteral:i32=27; 
		pub const FuncTestCaseParser_BooleanLiteral:i32=28; 
		pub const FuncTestCaseParser_TimestampTzLiteral:i32=29; 
		pub const FuncTestCaseParser_TimestampLiteral:i32=30; 
		pub const FuncTestCaseParser_TimeLiteral:i32=31; 
		pub const FuncTestCaseParser_DateLiteral:i32=32; 
		pub const FuncTestCaseParser_PeriodPrefix:i32=33; 
		pub const FuncTestCaseParser_TimePrefix:i32=34; 
		pub const FuncTestCaseParser_YearSuffix:i32=35; 
		pub const FuncTestCaseParser_MSuffix:i32=36; 
		pub const FuncTestCaseParser_DaySuffix:i32=37; 
		pub const FuncTestCaseParser_HourSuffix:i32=38; 
		pub const FuncTestCaseParser_SecondSuffix:i32=39; 
		pub const FuncTestCaseParser_FractionalSecondSuffix:i32=40; 
		pub const FuncTestCaseParser_OAngleBracket:i32=41; 
		pub const FuncTestCaseParser_CAngleBracket:i32=42; 
		pub const FuncTestCaseParser_IntervalYearLiteral:i32=43; 
		pub const FuncTestCaseParser_IntervalDayLiteral:i32=44; 
		pub const FuncTestCaseParser_IntervalCompoundLiteral:i32=45; 
		pub const FuncTestCaseParser_NullLiteral:i32=46; 
		pub const FuncTestCaseParser_StringLiteral:i32=47; 
		pub const FuncTestCaseParser_EnumType:i32=48; 
		pub const FuncTestCaseParser_ColumnName:i32=49; 
		pub const FuncTestCaseParser_LineComment:i32=50; 
		pub const FuncTestCaseParser_BlockComment:i32=51; 
		pub const FuncTestCaseParser_If:i32=52; 
		pub const FuncTestCaseParser_Then:i32=53; 
		pub const FuncTestCaseParser_Else:i32=54; 
		pub const FuncTestCaseParser_Func:i32=55; 
		pub const FuncTestCaseParser_Boolean:i32=56; 
		pub const FuncTestCaseParser_I8:i32=57; 
		pub const FuncTestCaseParser_I16:i32=58; 
		pub const FuncTestCaseParser_I32:i32=59; 
		pub const FuncTestCaseParser_I64:i32=60; 
		pub const FuncTestCaseParser_FP32:i32=61; 
		pub const FuncTestCaseParser_FP64:i32=62; 
		pub const FuncTestCaseParser_String:i32=63; 
		pub const FuncTestCaseParser_Binary:i32=64; 
		pub const FuncTestCaseParser_Date:i32=65; 
		pub const FuncTestCaseParser_Interval_Year:i32=66; 
		pub const FuncTestCaseParser_Interval_Day:i32=67; 
		pub const FuncTestCaseParser_Interval_Compound:i32=68; 
		pub const FuncTestCaseParser_UUID:i32=69; 
		pub const FuncTestCaseParser_Decimal:i32=70; 
		pub const FuncTestCaseParser_Precision_Time:i32=71; 
		pub const FuncTestCaseParser_Precision_Timestamp:i32=72; 
		pub const FuncTestCaseParser_Precision_Timestamp_TZ:i32=73; 
		pub const FuncTestCaseParser_FixedChar:i32=74; 
		pub const FuncTestCaseParser_VarChar:i32=75; 
		pub const FuncTestCaseParser_FixedBinary:i32=76; 
		pub const FuncTestCaseParser_Struct:i32=77; 
		pub const FuncTestCaseParser_NStruct:i32=78; 
		pub const FuncTestCaseParser_List:i32=79; 
		pub const FuncTestCaseParser_Map:i32=80; 
		pub const FuncTestCaseParser_UserDefined:i32=81; 
		pub const FuncTestCaseParser_Bool:i32=82; 
		pub const FuncTestCaseParser_Str:i32=83; 
		pub const FuncTestCaseParser_VBin:i32=84; 
		pub const FuncTestCaseParser_IYear:i32=85; 
		pub const FuncTestCaseParser_IDay:i32=86; 
		pub const FuncTestCaseParser_ICompound:i32=87; 
		pub const FuncTestCaseParser_Dec:i32=88; 
		pub const FuncTestCaseParser_PT:i32=89; 
		pub const FuncTestCaseParser_PTs:i32=90; 
		pub const FuncTestCaseParser_PTsTZ:i32=91; 
		pub const FuncTestCaseParser_FChar:i32=92; 
		pub const FuncTestCaseParser_VChar:i32=93; 
		pub const FuncTestCaseParser_FBin:i32=94; 
		pub const FuncTestCaseParser_Any:i32=95; 
		pub const FuncTestCaseParser_AnyVar:i32=96; 
		pub const FuncTestCaseParser_DoubleColon:i32=97; 
		pub const FuncTestCaseParser_Plus:i32=98; 
		pub const FuncTestCaseParser_Minus:i32=99; 
		pub const FuncTestCaseParser_Asterisk:i32=100; 
		pub const FuncTestCaseParser_ForwardSlash:i32=101; 
		pub const FuncTestCaseParser_Percent:i32=102; 
		pub const FuncTestCaseParser_Eq:i32=103; 
		pub const FuncTestCaseParser_Ne:i32=104; 
		pub const FuncTestCaseParser_Gte:i32=105; 
		pub const FuncTestCaseParser_Lte:i32=106; 
		pub const FuncTestCaseParser_Gt:i32=107; 
		pub const FuncTestCaseParser_Lt:i32=108; 
		pub const FuncTestCaseParser_Bang:i32=109; 
		pub const FuncTestCaseParser_OParen:i32=110; 
		pub const FuncTestCaseParser_CParen:i32=111; 
		pub const FuncTestCaseParser_OBracket:i32=112; 
		pub const FuncTestCaseParser_CBracket:i32=113; 
		pub const FuncTestCaseParser_Comma:i32=114; 
		pub const FuncTestCaseParser_Colon:i32=115; 
		pub const FuncTestCaseParser_QMark:i32=116; 
		pub const FuncTestCaseParser_Hash:i32=117; 
		pub const FuncTestCaseParser_Dot:i32=118; 
		pub const FuncTestCaseParser_And:i32=119; 
		pub const FuncTestCaseParser_Or:i32=120; 
		pub const FuncTestCaseParser_Assign:i32=121; 
		pub const FuncTestCaseParser_Arrow:i32=122; 
		pub const FuncTestCaseParser_Number:i32=123; 
		pub const FuncTestCaseParser_Identifier:i32=124; 
		pub const FuncTestCaseParser_Newline:i32=125;
	pub const FuncTestCaseParser_EOF:i32=EOF;
	pub const RULE_doc:usize = 0; 
	pub const RULE_header:usize = 1; 
	pub const RULE_version:usize = 2; 
	pub const RULE_include:usize = 3; 
	pub const RULE_dependency:usize = 4; 
	pub const RULE_testGroupDescription:usize = 5; 
	pub const RULE_testCase:usize = 6; 
	pub const RULE_testGroup:usize = 7; 
	pub const RULE_arguments:usize = 8; 
	pub const RULE_result:usize = 9; 
	pub const RULE_argument:usize = 10; 
	pub const RULE_aggFuncTestCase:usize = 11; 
	pub const RULE_aggFuncCall:usize = 12; 
	pub const RULE_tableData:usize = 13; 
	pub const RULE_tableRows:usize = 14; 
	pub const RULE_dataColumn:usize = 15; 
	pub const RULE_columnValues:usize = 16; 
	pub const RULE_literal:usize = 17; 
	pub const RULE_qualifiedAggregateFuncArgs:usize = 18; 
	pub const RULE_aggregateFuncArgs:usize = 19; 
	pub const RULE_qualifiedAggregateFuncArg:usize = 20; 
	pub const RULE_aggregateFuncArg:usize = 21; 
	pub const RULE_numericLiteral:usize = 22; 
	pub const RULE_floatLiteral:usize = 23; 
	pub const RULE_nullArg:usize = 24; 
	pub const RULE_intArg:usize = 25; 
	pub const RULE_floatArg:usize = 26; 
	pub const RULE_decimalArg:usize = 27; 
	pub const RULE_booleanArg:usize = 28; 
	pub const RULE_stringArg:usize = 29; 
	pub const RULE_dateArg:usize = 30; 
	pub const RULE_intervalYearArg:usize = 31; 
	pub const RULE_intervalDayArg:usize = 32; 
	pub const RULE_intervalCompoundArg:usize = 33; 
	pub const RULE_fixedCharArg:usize = 34; 
	pub const RULE_varCharArg:usize = 35; 
	pub const RULE_fixedBinaryArg:usize = 36; 
	pub const RULE_precisionTimeArg:usize = 37; 
	pub const RULE_precisionTimestampArg:usize = 38; 
	pub const RULE_precisionTimestampTZArg:usize = 39; 
	pub const RULE_listArg:usize = 40; 
	pub const RULE_lambdaArg:usize = 41; 
	pub const RULE_enumArg:usize = 42; 
	pub const RULE_literalList:usize = 43; 
	pub const RULE_listElement:usize = 44; 
	pub const RULE_literalLambda:usize = 45; 
	pub const RULE_lambdaParameters:usize = 46; 
	pub const RULE_lambdaBody:usize = 47; 
	pub const RULE_dataType:usize = 48; 
	pub const RULE_scalarType:usize = 49; 
	pub const RULE_booleanType:usize = 50; 
	pub const RULE_stringType:usize = 51; 
	pub const RULE_binaryType:usize = 52; 
	pub const RULE_intType:usize = 53; 
	pub const RULE_floatType:usize = 54; 
	pub const RULE_dateType:usize = 55; 
	pub const RULE_intervalYearType:usize = 56; 
	pub const RULE_intervalDayType:usize = 57; 
	pub const RULE_intervalCompoundType:usize = 58; 
	pub const RULE_fixedCharType:usize = 59; 
	pub const RULE_varCharType:usize = 60; 
	pub const RULE_fixedBinaryType:usize = 61; 
	pub const RULE_decimalType:usize = 62; 
	pub const RULE_precisionTimeType:usize = 63; 
	pub const RULE_precisionTimestampType:usize = 64; 
	pub const RULE_precisionTimestampTZType:usize = 65; 
	pub const RULE_listType:usize = 66; 
	pub const RULE_funcType:usize = 67; 
	pub const RULE_funcParameters:usize = 68; 
	pub const RULE_parameterizedType:usize = 69; 
	pub const RULE_numericParameter:usize = 70; 
	pub const RULE_substraitError:usize = 71; 
	pub const RULE_funcOption:usize = 72; 
	pub const RULE_optionName:usize = 73; 
	pub const RULE_optionValue:usize = 74; 
	pub const RULE_funcOptions:usize = 75; 
	pub const RULE_nonReserved:usize = 76; 
	pub const RULE_identifier:usize = 77;
	pub const ruleNames: [&'static str; 78] =  [
		"doc", "header", "version", "include", "dependency", "testGroupDescription", 
		"testCase", "testGroup", "arguments", "result", "argument", "aggFuncTestCase", 
		"aggFuncCall", "tableData", "tableRows", "dataColumn", "columnValues", 
		"literal", "qualifiedAggregateFuncArgs", "aggregateFuncArgs", "qualifiedAggregateFuncArg", 
		"aggregateFuncArg", "numericLiteral", "floatLiteral", "nullArg", "intArg", 
		"floatArg", "decimalArg", "booleanArg", "stringArg", "dateArg", "intervalYearArg", 
		"intervalDayArg", "intervalCompoundArg", "fixedCharArg", "varCharArg", 
		"fixedBinaryArg", "precisionTimeArg", "precisionTimestampArg", "precisionTimestampTZArg", 
		"listArg", "lambdaArg", "enumArg", "literalList", "listElement", "literalLambda", 
		"lambdaParameters", "lambdaBody", "dataType", "scalarType", "booleanType", 
		"stringType", "binaryType", "intType", "floatType", "dateType", "intervalYearType", 
		"intervalDayType", "intervalCompoundType", "fixedCharType", "varCharType", 
		"fixedBinaryType", "decimalType", "precisionTimeType", "precisionTimestampType", 
		"precisionTimestampTZType", "listType", "funcType", "funcParameters", 
		"parameterizedType", "numericParameter", "substraitError", "funcOption", 
		"optionName", "optionValue", "funcOptions", "nonReserved", "identifier"
	];


	pub const _LITERAL_NAMES: [Option<&'static str>;123] = [
		None, None, Some("'###'"), Some("'SUBSTRAIT_SCALAR_TEST'"), Some("'SUBSTRAIT_AGGREGATE_TEST'"), 
		Some("'SUBSTRAIT_INCLUDE'"), Some("'SUBSTRAIT_DEPENDENCY'"), None, None, 
		None, Some("'DEFINE'"), Some("'<!ERROR>'"), Some("'<!UNDEFINED>'"), Some("'OVERFLOW'"), 
		Some("'ROUNDING'"), Some("'ERROR'"), Some("'SATURATE'"), Some("'SILENT'"), 
		Some("'TIE_TO_EVEN'"), Some("'NAN'"), Some("'ACCEPT_NULLS'"), Some("'IGNORE_NULLS'"), 
		Some("'NULL_HANDLING'"), Some("'SPACES_ONLY'"), Some("'TRUNCATE'"), None, 
		None, None, None, None, None, None, None, Some("'P'"), Some("'T'"), Some("'Y'"), 
		Some("'M'"), Some("'D'"), Some("'H'"), Some("'S'"), Some("'F'"), None, 
		None, None, None, None, Some("'null'"), None, Some("'enum'"), None, None, 
		None, Some("'IF'"), Some("'THEN'"), Some("'ELSE'"), Some("'FUNC'"), Some("'BOOLEAN'"), 
		Some("'I8'"), Some("'I16'"), Some("'I32'"), Some("'I64'"), Some("'FP32'"), 
		Some("'FP64'"), Some("'STRING'"), Some("'BINARY'"), Some("'DATE'"), Some("'INTERVAL_YEAR'"), 
		Some("'INTERVAL_DAY'"), Some("'INTERVAL_COMPOUND'"), Some("'UUID'"), Some("'DECIMAL'"), 
		Some("'PRECISION_TIME'"), Some("'PRECISION_TIMESTAMP'"), Some("'PRECISION_TIMESTAMP_TZ'"), 
		Some("'FIXEDCHAR'"), Some("'VARCHAR'"), Some("'FIXEDBINARY'"), Some("'STRUCT'"), 
		Some("'NSTRUCT'"), Some("'LIST'"), Some("'MAP'"), Some("'U!'"), Some("'BOOL'"), 
		Some("'STR'"), Some("'VBIN'"), Some("'IYEAR'"), Some("'IDAY'"), Some("'ICOMPOUND'"), 
		Some("'DEC'"), Some("'PT'"), Some("'PTS'"), Some("'PTSTZ'"), Some("'FCHAR'"), 
		Some("'VCHAR'"), Some("'FBIN'"), Some("'ANY'"), None, Some("'::'"), Some("'+'"), 
		Some("'-'"), Some("'*'"), Some("'/'"), Some("'%'"), Some("'='"), Some("'!='"), 
		Some("'>='"), Some("'<='"), Some("'>'"), Some("'<'"), Some("'!'"), Some("'('"), 
		Some("')'"), Some("'['"), Some("']'"), Some("','"), Some("':'"), Some("'?'"), 
		Some("'#'"), Some("'.'"), Some("'AND'"), Some("'OR'"), Some("':='"), Some("'->'")
	];
	pub const _SYMBOLIC_NAMES: [Option<&'static str>;126]  = [
		None, Some("Whitespace"), Some("TripleHash"), Some("SubstraitScalarTest"), 
		Some("SubstraitAggregateTest"), Some("SubstraitInclude"), Some("SubstraitDependency"), 
		Some("ExtensionUrn"), Some("FormatVersion"), Some("DescriptionLine"), 
		Some("Define"), Some("ErrorResult"), Some("UndefineResult"), Some("Overflow"), 
		Some("Rounding"), Some("Error"), Some("Saturate"), Some("Silent"), Some("TieToEven"), 
		Some("NaN"), Some("AcceptNulls"), Some("IgnoreNulls"), Some("NullHandling"), 
		Some("SpacesOnly"), Some("Truncate"), Some("IntegerLiteral"), Some("DecimalLiteral"), 
		Some("FloatLiteral"), Some("BooleanLiteral"), Some("TimestampTzLiteral"), 
		Some("TimestampLiteral"), Some("TimeLiteral"), Some("DateLiteral"), Some("PeriodPrefix"), 
		Some("TimePrefix"), Some("YearSuffix"), Some("MSuffix"), Some("DaySuffix"), 
		Some("HourSuffix"), Some("SecondSuffix"), Some("FractionalSecondSuffix"), 
		Some("OAngleBracket"), Some("CAngleBracket"), Some("IntervalYearLiteral"), 
		Some("IntervalDayLiteral"), Some("IntervalCompoundLiteral"), Some("NullLiteral"), 
		Some("StringLiteral"), Some("EnumType"), Some("ColumnName"), Some("LineComment"), 
		Some("BlockComment"), Some("If"), Some("Then"), Some("Else"), Some("Func"), 
		Some("Boolean"), Some("I8"), Some("I16"), Some("I32"), Some("I64"), Some("FP32"), 
		Some("FP64"), Some("String"), Some("Binary"), Some("Date"), Some("Interval_Year"), 
		Some("Interval_Day"), Some("Interval_Compound"), Some("UUID"), Some("Decimal"), 
		Some("Precision_Time"), Some("Precision_Timestamp"), Some("Precision_Timestamp_TZ"), 
		Some("FixedChar"), Some("VarChar"), Some("FixedBinary"), Some("Struct"), 
		Some("NStruct"), Some("List"), Some("Map"), Some("UserDefined"), Some("Bool"), 
		Some("Str"), Some("VBin"), Some("IYear"), Some("IDay"), Some("ICompound"), 
		Some("Dec"), Some("PT"), Some("PTs"), Some("PTsTZ"), Some("FChar"), Some("VChar"), 
		Some("FBin"), Some("Any"), Some("AnyVar"), Some("DoubleColon"), Some("Plus"), 
		Some("Minus"), Some("Asterisk"), Some("ForwardSlash"), Some("Percent"), 
		Some("Eq"), Some("Ne"), Some("Gte"), Some("Lte"), Some("Gt"), Some("Lt"), 
		Some("Bang"), Some("OParen"), Some("CParen"), Some("OBracket"), Some("CBracket"), 
		Some("Comma"), Some("Colon"), Some("QMark"), Some("Hash"), Some("Dot"), 
		Some("And"), Some("Or"), Some("Assign"), Some("Arrow"), Some("Number"), 
		Some("Identifier"), Some("Newline")
	];
	lazy_static!{
	    static ref _shared_context_cache: Arc<PredictionContextCache> = Arc::new(PredictionContextCache::new());
		static ref VOCABULARY: Box<dyn Vocabulary> = Box::new(VocabularyImpl::new(_LITERAL_NAMES.iter(), _SYMBOLIC_NAMES.iter(), None));
	}


type BaseParserType<'input, I> =
	BaseParser<'input,FuncTestCaseParserExt<'input>, I, FuncTestCaseParserContextType , dyn FuncTestCaseParserListener<'input> + 'input >;

type TokenType<'input> = <LocalTokenFactory<'input> as TokenFactory<'input>>::Tok;
pub type LocalTokenFactory<'input> = CommonTokenFactory;

pub type FuncTestCaseParserTreeWalker<'input,'a> =
	ParseTreeWalker<'input, 'a, FuncTestCaseParserContextType , dyn FuncTestCaseParserListener<'input> + 'a>;

/// Parser for FuncTestCaseParser grammar
pub struct FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	base:BaseParserType<'input,I>,
	interpreter:Arc<ParserATNSimulator>,
	_shared_context_cache: Box<PredictionContextCache>,
    pub err_handler: Box<dyn ErrorStrategy<'input,BaseParserType<'input,I> > >,
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
    pub fn set_error_strategy(&mut self, strategy: Box<dyn ErrorStrategy<'input,BaseParserType<'input,I> > >) {
        self.err_handler = strategy
    }

    pub fn with_strategy(input: I, strategy: Box<dyn ErrorStrategy<'input,BaseParserType<'input,I> > >) -> Self {
		antlr4rust::recognizer::check_version("0","5");
		let interpreter = Arc::new(ParserATNSimulator::new(
			_ATN.clone(),
			_decision_to_DFA.clone(),
			_shared_context_cache.clone(),
		));
		Self {
			base: BaseParser::new_base_parser(
				input,
				Arc::clone(&interpreter),
				FuncTestCaseParserExt{
					_pd: Default::default(),
				}
			),
			interpreter,
            _shared_context_cache: Box::new(PredictionContextCache::new()),
            err_handler: strategy,
        }
    }

}

type DynStrategy<'input,I> = Box<dyn ErrorStrategy<'input,BaseParserType<'input,I>> + 'input>;

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
    pub fn with_dyn_strategy(input: I) -> Self{
    	Self::with_strategy(input,Box::new(DefaultErrorStrategy::new()))
    }
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
    pub fn new(input: I) -> Self{
    	Self::with_strategy(input,Box::new(DefaultErrorStrategy::new()))
    }
}

/// Trait for monomorphized trait object that corresponds to the nodes of parse tree generated for FuncTestCaseParser
pub trait FuncTestCaseParserContext<'input>:
	for<'x> Listenable<dyn FuncTestCaseParserListener<'input> + 'x > + 
	ParserRuleContext<'input, TF=LocalTokenFactory<'input>, Ctx=FuncTestCaseParserContextType>
{}

antlr4rust::coerce_from!{ 'input : FuncTestCaseParserContext<'input> }

impl<'input> FuncTestCaseParserContext<'input> for TerminalNode<'input,FuncTestCaseParserContextType> {}
impl<'input> FuncTestCaseParserContext<'input> for ErrorNode<'input,FuncTestCaseParserContextType> {}

antlr4rust::tid! { impl<'input> TidAble<'input> for dyn FuncTestCaseParserContext<'input> + 'input }

antlr4rust::tid! { impl<'input> TidAble<'input> for dyn FuncTestCaseParserListener<'input> + 'input }

pub struct FuncTestCaseParserContextType;
antlr4rust::tid!{FuncTestCaseParserContextType}

impl<'input> ParserNodeType<'input> for FuncTestCaseParserContextType{
	type TF = LocalTokenFactory<'input>;
	type Type = dyn FuncTestCaseParserContext<'input> + 'input;
}

impl<'input, I> Deref for FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
    type Target = BaseParserType<'input,I>;

    fn deref(&self) -> &Self::Target {
        &self.base
    }
}

impl<'input, I> DerefMut for FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.base
    }
}

pub struct FuncTestCaseParserExt<'input>{
	_pd: PhantomData<&'input str>,
}

impl<'input> FuncTestCaseParserExt<'input>{
}
antlr4rust::tid! { FuncTestCaseParserExt<'a> }

impl<'input> TokenAware<'input> for FuncTestCaseParserExt<'input>{
	type TF = LocalTokenFactory<'input>;
}

impl<'input,I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>> ParserRecog<'input, BaseParserType<'input,I>> for FuncTestCaseParserExt<'input>{}

impl<'input,I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>> Actions<'input, BaseParserType<'input,I>> for FuncTestCaseParserExt<'input>{
	fn get_grammar_file_name(&self) -> & str{ "FuncTestCaseParser.g4"}

   	fn get_rule_names(&self) -> &[& str] {&ruleNames}

   	fn get_vocabulary(&self) -> &dyn Vocabulary { &**VOCABULARY }
}
//------------------- doc ----------------
pub type DocContextAll<'input> = DocContext<'input>;


pub type DocContext<'input> = BaseParserRuleContext<'input,DocContextExt<'input>>;

#[derive(Clone)]
pub struct DocContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DocContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DocContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_doc(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_doc(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DocContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_doc }
	//fn type_rule_index() -> usize where Self: Sized { RULE_doc }
}
antlr4rust::tid!{DocContextExt<'a>}

impl<'input> DocContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DocContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DocContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DocContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DocContextExt<'input>>{

fn header(&self) -> Option<Rc<HeaderContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token EOF
/// Returns `None` if there is no child corresponding to token EOF
fn EOF(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_EOF, 0)
}
fn testGroup_all(&self) ->  Vec<Rc<TestGroupContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn testGroup(&self, i: usize) -> Option<Rc<TestGroupContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}

}

impl<'input> DocContextAttrs<'input> for DocContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn doc(&mut self,)
	-> Result<Rc<DocContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DocContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 0, RULE_doc);
        let mut _localctx: Rc<DocContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule header*/
			recog.base.set_state(156);
			recog.header()?;

			recog.base.set_state(158); 
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			loop {
				{
				{
				/*InvokeRule testGroup*/
				recog.base.set_state(157);
				recog.testGroup()?;

				}
				}
				recog.base.set_state(160); 
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
				if !((((_la) & !0x3f) == 0 && ((1usize << _la) & 16778752) != 0) || ((((_la - 110)) & !0x3f) == 0 && ((1usize << (_la - 110)) & 17921) != 0)) {break}
			}
			recog.base.set_state(162);
			recog.base.match_token(FuncTestCaseParser_EOF,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- header ----------------
pub type HeaderContextAll<'input> = HeaderContext<'input>;


pub type HeaderContext<'input> = BaseParserRuleContext<'input,HeaderContextExt<'input>>;

#[derive(Clone)]
pub struct HeaderContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for HeaderContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for HeaderContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_header(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_header(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for HeaderContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_header }
	//fn type_rule_index() -> usize where Self: Sized { RULE_header }
}
antlr4rust::tid!{HeaderContextExt<'a>}

impl<'input> HeaderContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<HeaderContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,HeaderContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait HeaderContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<HeaderContextExt<'input>>{

fn version(&self) -> Option<Rc<VersionContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn include(&self) -> Option<Rc<IncludeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn dependency_all(&self) ->  Vec<Rc<DependencyContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn dependency(&self, i: usize) -> Option<Rc<DependencyContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}

}

impl<'input> HeaderContextAttrs<'input> for HeaderContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn header(&mut self,)
	-> Result<Rc<HeaderContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = HeaderContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 2, RULE_header);
        let mut _localctx: Rc<HeaderContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule version*/
			recog.base.set_state(164);
			recog.version()?;

			/*InvokeRule include*/
			recog.base.set_state(165);
			recog.include()?;

			recog.base.set_state(169);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_TripleHash {
				{
				{
				/*InvokeRule dependency*/
				recog.base.set_state(166);
				recog.dependency()?;

				}
				}
				recog.base.set_state(171);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- version ----------------
pub type VersionContextAll<'input> = VersionContext<'input>;


pub type VersionContext<'input> = BaseParserRuleContext<'input,VersionContextExt<'input>>;

#[derive(Clone)]
pub struct VersionContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for VersionContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for VersionContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_version(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_version(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for VersionContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_version }
	//fn type_rule_index() -> usize where Self: Sized { RULE_version }
}
antlr4rust::tid!{VersionContextExt<'a>}

impl<'input> VersionContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<VersionContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,VersionContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait VersionContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<VersionContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TripleHash
/// Returns `None` if there is no child corresponding to token TripleHash
fn TripleHash(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TripleHash, 0)
}
/// Retrieves first TerminalNode corresponding to token Colon
/// Returns `None` if there is no child corresponding to token Colon
fn Colon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Colon, 0)
}
/// Retrieves first TerminalNode corresponding to token FormatVersion
/// Returns `None` if there is no child corresponding to token FormatVersion
fn FormatVersion(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FormatVersion, 0)
}
/// Retrieves first TerminalNode corresponding to token SubstraitScalarTest
/// Returns `None` if there is no child corresponding to token SubstraitScalarTest
fn SubstraitScalarTest(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_SubstraitScalarTest, 0)
}
/// Retrieves first TerminalNode corresponding to token SubstraitAggregateTest
/// Returns `None` if there is no child corresponding to token SubstraitAggregateTest
fn SubstraitAggregateTest(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_SubstraitAggregateTest, 0)
}

}

impl<'input> VersionContextAttrs<'input> for VersionContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn version(&mut self,)
	-> Result<Rc<VersionContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = VersionContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 4, RULE_version);
        let mut _localctx: Rc<VersionContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(172);
			recog.base.match_token(FuncTestCaseParser_TripleHash,&mut recog.err_handler)?;

			recog.base.set_state(173);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_SubstraitScalarTest || _la==FuncTestCaseParser_SubstraitAggregateTest) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(174);
			recog.base.match_token(FuncTestCaseParser_Colon,&mut recog.err_handler)?;

			recog.base.set_state(175);
			recog.base.match_token(FuncTestCaseParser_FormatVersion,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- include ----------------
pub type IncludeContextAll<'input> = IncludeContext<'input>;


pub type IncludeContext<'input> = BaseParserRuleContext<'input,IncludeContextExt<'input>>;

#[derive(Clone)]
pub struct IncludeContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IncludeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IncludeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_include(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_include(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IncludeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_include }
	//fn type_rule_index() -> usize where Self: Sized { RULE_include }
}
antlr4rust::tid!{IncludeContextExt<'a>}

impl<'input> IncludeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IncludeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IncludeContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IncludeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IncludeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TripleHash
/// Returns `None` if there is no child corresponding to token TripleHash
fn TripleHash(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TripleHash, 0)
}
/// Retrieves first TerminalNode corresponding to token SubstraitInclude
/// Returns `None` if there is no child corresponding to token SubstraitInclude
fn SubstraitInclude(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_SubstraitInclude, 0)
}
/// Retrieves first TerminalNode corresponding to token Colon
/// Returns `None` if there is no child corresponding to token Colon
fn Colon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Colon, 0)
}
/// Retrieves first TerminalNode corresponding to token ExtensionUrn
/// Returns `None` if there is no child corresponding to token ExtensionUrn
fn ExtensionUrn(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ExtensionUrn, 0)
}

}

impl<'input> IncludeContextAttrs<'input> for IncludeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn include(&mut self,)
	-> Result<Rc<IncludeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IncludeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 6, RULE_include);
        let mut _localctx: Rc<IncludeContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(177);
			recog.base.match_token(FuncTestCaseParser_TripleHash,&mut recog.err_handler)?;

			recog.base.set_state(178);
			recog.base.match_token(FuncTestCaseParser_SubstraitInclude,&mut recog.err_handler)?;

			recog.base.set_state(179);
			recog.base.match_token(FuncTestCaseParser_Colon,&mut recog.err_handler)?;

			recog.base.set_state(180);
			recog.base.match_token(FuncTestCaseParser_ExtensionUrn,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- dependency ----------------
pub type DependencyContextAll<'input> = DependencyContext<'input>;


pub type DependencyContext<'input> = BaseParserRuleContext<'input,DependencyContextExt<'input>>;

#[derive(Clone)]
pub struct DependencyContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DependencyContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DependencyContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_dependency(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_dependency(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DependencyContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_dependency }
	//fn type_rule_index() -> usize where Self: Sized { RULE_dependency }
}
antlr4rust::tid!{DependencyContextExt<'a>}

impl<'input> DependencyContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DependencyContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DependencyContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DependencyContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DependencyContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TripleHash
/// Returns `None` if there is no child corresponding to token TripleHash
fn TripleHash(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TripleHash, 0)
}
/// Retrieves first TerminalNode corresponding to token SubstraitDependency
/// Returns `None` if there is no child corresponding to token SubstraitDependency
fn SubstraitDependency(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_SubstraitDependency, 0)
}
/// Retrieves first TerminalNode corresponding to token Colon
/// Returns `None` if there is no child corresponding to token Colon
fn Colon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Colon, 0)
}
/// Retrieves first TerminalNode corresponding to token ExtensionUrn
/// Returns `None` if there is no child corresponding to token ExtensionUrn
fn ExtensionUrn(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ExtensionUrn, 0)
}

}

impl<'input> DependencyContextAttrs<'input> for DependencyContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn dependency(&mut self,)
	-> Result<Rc<DependencyContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DependencyContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 8, RULE_dependency);
        let mut _localctx: Rc<DependencyContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(182);
			recog.base.match_token(FuncTestCaseParser_TripleHash,&mut recog.err_handler)?;

			recog.base.set_state(183);
			recog.base.match_token(FuncTestCaseParser_SubstraitDependency,&mut recog.err_handler)?;

			recog.base.set_state(184);
			recog.base.match_token(FuncTestCaseParser_Colon,&mut recog.err_handler)?;

			recog.base.set_state(185);
			recog.base.match_token(FuncTestCaseParser_ExtensionUrn,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- testGroupDescription ----------------
pub type TestGroupDescriptionContextAll<'input> = TestGroupDescriptionContext<'input>;


pub type TestGroupDescriptionContext<'input> = BaseParserRuleContext<'input,TestGroupDescriptionContextExt<'input>>;

#[derive(Clone)]
pub struct TestGroupDescriptionContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for TestGroupDescriptionContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TestGroupDescriptionContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_testGroupDescription(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_testGroupDescription(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for TestGroupDescriptionContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_testGroupDescription }
	//fn type_rule_index() -> usize where Self: Sized { RULE_testGroupDescription }
}
antlr4rust::tid!{TestGroupDescriptionContextExt<'a>}

impl<'input> TestGroupDescriptionContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<TestGroupDescriptionContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,TestGroupDescriptionContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait TestGroupDescriptionContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<TestGroupDescriptionContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token DescriptionLine
/// Returns `None` if there is no child corresponding to token DescriptionLine
fn DescriptionLine(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DescriptionLine, 0)
}

}

impl<'input> TestGroupDescriptionContextAttrs<'input> for TestGroupDescriptionContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn testGroupDescription(&mut self,)
	-> Result<Rc<TestGroupDescriptionContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = TestGroupDescriptionContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 10, RULE_testGroupDescription);
        let mut _localctx: Rc<TestGroupDescriptionContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(187);
			recog.base.match_token(FuncTestCaseParser_DescriptionLine,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- testCase ----------------
pub type TestCaseContextAll<'input> = TestCaseContext<'input>;


pub type TestCaseContext<'input> = BaseParserRuleContext<'input,TestCaseContextExt<'input>>;

#[derive(Clone)]
pub struct TestCaseContextExt<'input>{
	pub functionName: Option<Rc<IdentifierContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for TestCaseContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TestCaseContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_testCase(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_testCase(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for TestCaseContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_testCase }
	//fn type_rule_index() -> usize where Self: Sized { RULE_testCase }
}
antlr4rust::tid!{TestCaseContextExt<'a>}

impl<'input> TestCaseContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<TestCaseContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,TestCaseContextExt{
				functionName: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait TestCaseContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<TestCaseContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
fn arguments(&self) -> Option<Rc<ArgumentsContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}
/// Retrieves first TerminalNode corresponding to token Eq
/// Returns `None` if there is no child corresponding to token Eq
fn Eq(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Eq, 0)
}
fn result(&self) -> Option<Rc<ResultContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn identifier(&self) -> Option<Rc<IdentifierContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token OBracket
/// Returns `None` if there is no child corresponding to token OBracket
fn OBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OBracket, 0)
}
fn funcOptions(&self) -> Option<Rc<FuncOptionsContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token CBracket
/// Returns `None` if there is no child corresponding to token CBracket
fn CBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CBracket, 0)
}

}

impl<'input> TestCaseContextAttrs<'input> for TestCaseContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn testCase(&mut self,)
	-> Result<Rc<TestCaseContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = TestCaseContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 12, RULE_testCase);
        let mut _localctx: Rc<TestCaseContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule identifier*/
			recog.base.set_state(189);
			let tmp = recog.identifier()?;
			 cast_mut::<_,TestCaseContext >(&mut _localctx).functionName = Some(tmp.clone());
			  

			recog.base.set_state(190);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			/*InvokeRule arguments*/
			recog.base.set_state(191);
			recog.arguments()?;

			recog.base.set_state(192);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			recog.base.set_state(197);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OBracket {
				{
				recog.base.set_state(193);
				recog.base.match_token(FuncTestCaseParser_OBracket,&mut recog.err_handler)?;

				/*InvokeRule funcOptions*/
				recog.base.set_state(194);
				recog.funcOptions()?;

				recog.base.set_state(195);
				recog.base.match_token(FuncTestCaseParser_CBracket,&mut recog.err_handler)?;

				}
			}

			recog.base.set_state(199);
			recog.base.match_token(FuncTestCaseParser_Eq,&mut recog.err_handler)?;

			/*InvokeRule result*/
			recog.base.set_state(200);
			recog.result()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- testGroup ----------------
#[derive(Debug)]
pub enum TestGroupContextAll<'input>{
	ScalarFuncTestGroupContext(ScalarFuncTestGroupContext<'input>),
	AggregateFuncTestGroupContext(AggregateFuncTestGroupContext<'input>),
Error(TestGroupContext<'input>)
}
antlr4rust::tid!{TestGroupContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for TestGroupContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for TestGroupContextAll<'input>{}

impl<'input> Deref for TestGroupContextAll<'input>{
	type Target = dyn TestGroupContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use TestGroupContextAll::*;
		match self{
			ScalarFuncTestGroupContext(inner) => inner,
			AggregateFuncTestGroupContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TestGroupContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type TestGroupContext<'input> = BaseParserRuleContext<'input,TestGroupContextExt<'input>>;

#[derive(Clone)]
pub struct TestGroupContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for TestGroupContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TestGroupContext<'input>{
}

impl<'input> CustomRuleContext<'input> for TestGroupContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_testGroup }
	//fn type_rule_index() -> usize where Self: Sized { RULE_testGroup }
}
antlr4rust::tid!{TestGroupContextExt<'a>}

impl<'input> TestGroupContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<TestGroupContextAll<'input>> {
		Rc::new(
		TestGroupContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,TestGroupContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait TestGroupContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<TestGroupContextExt<'input>>{


}

impl<'input> TestGroupContextAttrs<'input> for TestGroupContext<'input>{}

pub type ScalarFuncTestGroupContext<'input> = BaseParserRuleContext<'input,ScalarFuncTestGroupContextExt<'input>>;

pub trait ScalarFuncTestGroupContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn testGroupDescription(&self) -> Option<Rc<TestGroupDescriptionContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	fn testCase_all(&self) ->  Vec<Rc<TestCaseContextAll<'input>>> where Self:Sized{
		self.children_of_type()
	}
	fn testCase(&self, i: usize) -> Option<Rc<TestCaseContextAll<'input>>> where Self:Sized{
		self.child_of_type(i)
	}
}

impl<'input> ScalarFuncTestGroupContextAttrs<'input> for ScalarFuncTestGroupContext<'input>{}

pub struct ScalarFuncTestGroupContextExt<'input>{
	base:TestGroupContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{ScalarFuncTestGroupContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for ScalarFuncTestGroupContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ScalarFuncTestGroupContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_scalarFuncTestGroup(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for ScalarFuncTestGroupContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_testGroup }
	//fn type_rule_index() -> usize where Self: Sized { RULE_testGroup }
}

impl<'input> Borrow<TestGroupContextExt<'input>> for ScalarFuncTestGroupContext<'input>{
	fn borrow(&self) -> &TestGroupContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<TestGroupContextExt<'input>> for ScalarFuncTestGroupContext<'input>{
	fn borrow_mut(&mut self) -> &mut TestGroupContextExt<'input> { &mut self.base }
}

impl<'input> TestGroupContextAttrs<'input> for ScalarFuncTestGroupContext<'input> {}

impl<'input> ScalarFuncTestGroupContextExt<'input>{
	fn new(ctx: &dyn TestGroupContextAttrs<'input>) -> Rc<TestGroupContextAll<'input>>  {
		Rc::new(
			TestGroupContextAll::ScalarFuncTestGroupContext(
				BaseParserRuleContext::copy_from(ctx,ScalarFuncTestGroupContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type AggregateFuncTestGroupContext<'input> = BaseParserRuleContext<'input,AggregateFuncTestGroupContextExt<'input>>;

pub trait AggregateFuncTestGroupContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn testGroupDescription(&self) -> Option<Rc<TestGroupDescriptionContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	fn aggFuncTestCase_all(&self) ->  Vec<Rc<AggFuncTestCaseContextAll<'input>>> where Self:Sized{
		self.children_of_type()
	}
	fn aggFuncTestCase(&self, i: usize) -> Option<Rc<AggFuncTestCaseContextAll<'input>>> where Self:Sized{
		self.child_of_type(i)
	}
}

impl<'input> AggregateFuncTestGroupContextAttrs<'input> for AggregateFuncTestGroupContext<'input>{}

pub struct AggregateFuncTestGroupContextExt<'input>{
	base:TestGroupContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{AggregateFuncTestGroupContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for AggregateFuncTestGroupContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggregateFuncTestGroupContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_aggregateFuncTestGroup(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for AggregateFuncTestGroupContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_testGroup }
	//fn type_rule_index() -> usize where Self: Sized { RULE_testGroup }
}

impl<'input> Borrow<TestGroupContextExt<'input>> for AggregateFuncTestGroupContext<'input>{
	fn borrow(&self) -> &TestGroupContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<TestGroupContextExt<'input>> for AggregateFuncTestGroupContext<'input>{
	fn borrow_mut(&mut self) -> &mut TestGroupContextExt<'input> { &mut self.base }
}

impl<'input> TestGroupContextAttrs<'input> for AggregateFuncTestGroupContext<'input> {}

impl<'input> AggregateFuncTestGroupContextExt<'input>{
	fn new(ctx: &dyn TestGroupContextAttrs<'input>) -> Rc<TestGroupContextAll<'input>>  {
		Rc::new(
			TestGroupContextAll::AggregateFuncTestGroupContext(
				BaseParserRuleContext::copy_from(ctx,AggregateFuncTestGroupContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn testGroup(&mut self,)
	-> Result<Rc<TestGroupContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = TestGroupContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 14, RULE_testGroup);
        let mut _localctx: Rc<TestGroupContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			let mut _alt: i32;
			recog.base.set_state(218);
			recog.err_handler.sync(&mut recog.base)?;
			match  recog.interpreter.adaptive_predict(7,&mut recog.base)? {
				1 =>{
					let tmp = ScalarFuncTestGroupContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
					_localctx = tmp;
					{
					recog.base.set_state(203);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if _la==FuncTestCaseParser_DescriptionLine {
						{
						/*InvokeRule testGroupDescription*/
						recog.base.set_state(202);
						recog.testGroupDescription()?;

						}
					}

					recog.base.set_state(206); 
					recog.err_handler.sync(&mut recog.base)?;
					_alt = 1;
					loop {
						match _alt {
						    x if x == 1=>
							{
							{
							/*InvokeRule testCase*/
							recog.base.set_state(205);
							recog.testCase()?;

							}
							}

						_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
						}
						recog.base.set_state(208); 
						recog.err_handler.sync(&mut recog.base)?;
						_alt = recog.interpreter.adaptive_predict(4,&mut recog.base)?;
						if _alt==2 || _alt==INVALID_ALT { break }
					}
					}
				}
			,
				2 =>{
					let tmp = AggregateFuncTestGroupContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 2)?;
					_localctx = tmp;
					{
					recog.base.set_state(211);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if _la==FuncTestCaseParser_DescriptionLine {
						{
						/*InvokeRule testGroupDescription*/
						recog.base.set_state(210);
						recog.testGroupDescription()?;

						}
					}

					recog.base.set_state(214); 
					recog.err_handler.sync(&mut recog.base)?;
					_alt = 1;
					loop {
						match _alt {
						    x if x == 1=>
							{
							{
							/*InvokeRule aggFuncTestCase*/
							recog.base.set_state(213);
							recog.aggFuncTestCase()?;

							}
							}

						_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
						}
						recog.base.set_state(216); 
						recog.err_handler.sync(&mut recog.base)?;
						_alt = recog.interpreter.adaptive_predict(6,&mut recog.base)?;
						if _alt==2 || _alt==INVALID_ALT { break }
					}
					}
				}

				_ => {}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- arguments ----------------
pub type ArgumentsContextAll<'input> = ArgumentsContext<'input>;


pub type ArgumentsContext<'input> = BaseParserRuleContext<'input,ArgumentsContextExt<'input>>;

#[derive(Clone)]
pub struct ArgumentsContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ArgumentsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ArgumentsContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_arguments(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_arguments(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ArgumentsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_arguments }
	//fn type_rule_index() -> usize where Self: Sized { RULE_arguments }
}
antlr4rust::tid!{ArgumentsContextExt<'a>}

impl<'input> ArgumentsContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ArgumentsContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ArgumentsContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ArgumentsContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ArgumentsContextExt<'input>>{

fn argument_all(&self) ->  Vec<Rc<ArgumentContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn argument(&self, i: usize) -> Option<Rc<ArgumentContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> ArgumentsContextAttrs<'input> for ArgumentsContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn arguments(&mut self,)
	-> Result<Rc<ArgumentsContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ArgumentsContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 16, RULE_arguments);
        let mut _localctx: Rc<ArgumentsContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule argument*/
			recog.base.set_state(220);
			recog.argument()?;

			recog.base.set_state(225);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_Comma {
				{
				{
				recog.base.set_state(221);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule argument*/
				recog.base.set_state(222);
				recog.argument()?;

				}
				}
				recog.base.set_state(227);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- result ----------------
pub type ResultContextAll<'input> = ResultContext<'input>;


pub type ResultContext<'input> = BaseParserRuleContext<'input,ResultContextExt<'input>>;

#[derive(Clone)]
pub struct ResultContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ResultContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ResultContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_result(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_result(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ResultContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_result }
	//fn type_rule_index() -> usize where Self: Sized { RULE_result }
}
antlr4rust::tid!{ResultContextExt<'a>}

impl<'input> ResultContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ResultContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ResultContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ResultContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ResultContextExt<'input>>{

fn argument(&self) -> Option<Rc<ArgumentContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn substraitError(&self) -> Option<Rc<SubstraitErrorContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> ResultContextAttrs<'input> for ResultContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn result(&mut self,)
	-> Result<Rc<ResultContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ResultContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 18, RULE_result);
        let mut _localctx: Rc<ResultContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(230);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_NaN |FuncTestCaseParser_IntegerLiteral |FuncTestCaseParser_DecimalLiteral |
			FuncTestCaseParser_FloatLiteral |FuncTestCaseParser_BooleanLiteral |FuncTestCaseParser_TimestampTzLiteral |
			FuncTestCaseParser_TimestampLiteral |FuncTestCaseParser_TimeLiteral |
			FuncTestCaseParser_DateLiteral |FuncTestCaseParser_IntervalYearLiteral |
			FuncTestCaseParser_IntervalDayLiteral |FuncTestCaseParser_IntervalCompoundLiteral |
			FuncTestCaseParser_NullLiteral |FuncTestCaseParser_StringLiteral |FuncTestCaseParser_OParen |
			FuncTestCaseParser_OBracket |FuncTestCaseParser_Identifier 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule argument*/
					recog.base.set_state(228);
					recog.argument()?;

					}
				}

			FuncTestCaseParser_ErrorResult |FuncTestCaseParser_UndefineResult 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule substraitError*/
					recog.base.set_state(229);
					recog.substraitError()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- argument ----------------
pub type ArgumentContextAll<'input> = ArgumentContext<'input>;


pub type ArgumentContext<'input> = BaseParserRuleContext<'input,ArgumentContextExt<'input>>;

#[derive(Clone)]
pub struct ArgumentContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ArgumentContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ArgumentContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_argument(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_argument(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ArgumentContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_argument }
	//fn type_rule_index() -> usize where Self: Sized { RULE_argument }
}
antlr4rust::tid!{ArgumentContextExt<'a>}

impl<'input> ArgumentContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ArgumentContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ArgumentContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ArgumentContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ArgumentContextExt<'input>>{

fn nullArg(&self) -> Option<Rc<NullArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn enumArg(&self) -> Option<Rc<EnumArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intArg(&self) -> Option<Rc<IntArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn floatArg(&self) -> Option<Rc<FloatArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn booleanArg(&self) -> Option<Rc<BooleanArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn stringArg(&self) -> Option<Rc<StringArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn decimalArg(&self) -> Option<Rc<DecimalArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn dateArg(&self) -> Option<Rc<DateArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intervalYearArg(&self) -> Option<Rc<IntervalYearArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intervalDayArg(&self) -> Option<Rc<IntervalDayArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intervalCompoundArg(&self) -> Option<Rc<IntervalCompoundArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn fixedCharArg(&self) -> Option<Rc<FixedCharArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn varCharArg(&self) -> Option<Rc<VarCharArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn fixedBinaryArg(&self) -> Option<Rc<FixedBinaryArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimeArg(&self) -> Option<Rc<PrecisionTimeArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimestampArg(&self) -> Option<Rc<PrecisionTimestampArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimestampTZArg(&self) -> Option<Rc<PrecisionTimestampTZArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn listArg(&self) -> Option<Rc<ListArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn lambdaArg(&self) -> Option<Rc<LambdaArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}

}

impl<'input> ArgumentContextAttrs<'input> for ArgumentContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn argument(&mut self,)
	-> Result<Rc<ArgumentContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ArgumentContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 20, RULE_argument);
        let mut _localctx: Rc<ArgumentContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(252);
			recog.err_handler.sync(&mut recog.base)?;
			match  recog.interpreter.adaptive_predict(10,&mut recog.base)? {
				1 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule nullArg*/
					recog.base.set_state(232);
					recog.nullArg()?;

					}
				}
			,
				2 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule enumArg*/
					recog.base.set_state(233);
					recog.enumArg()?;

					}
				}
			,
				3 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 3)?;
					recog.base.enter_outer_alt(None, 3)?;
					{
					/*InvokeRule intArg*/
					recog.base.set_state(234);
					recog.intArg()?;

					}
				}
			,
				4 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 4)?;
					recog.base.enter_outer_alt(None, 4)?;
					{
					/*InvokeRule floatArg*/
					recog.base.set_state(235);
					recog.floatArg()?;

					}
				}
			,
				5 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 5)?;
					recog.base.enter_outer_alt(None, 5)?;
					{
					/*InvokeRule booleanArg*/
					recog.base.set_state(236);
					recog.booleanArg()?;

					}
				}
			,
				6 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 6)?;
					recog.base.enter_outer_alt(None, 6)?;
					{
					/*InvokeRule stringArg*/
					recog.base.set_state(237);
					recog.stringArg()?;

					}
				}
			,
				7 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 7)?;
					recog.base.enter_outer_alt(None, 7)?;
					{
					/*InvokeRule decimalArg*/
					recog.base.set_state(238);
					recog.decimalArg()?;

					}
				}
			,
				8 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 8)?;
					recog.base.enter_outer_alt(None, 8)?;
					{
					/*InvokeRule dateArg*/
					recog.base.set_state(239);
					recog.dateArg()?;

					}
				}
			,
				9 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 9)?;
					recog.base.enter_outer_alt(None, 9)?;
					{
					/*InvokeRule intervalYearArg*/
					recog.base.set_state(240);
					recog.intervalYearArg()?;

					}
				}
			,
				10 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 10)?;
					recog.base.enter_outer_alt(None, 10)?;
					{
					/*InvokeRule intervalDayArg*/
					recog.base.set_state(241);
					recog.intervalDayArg()?;

					}
				}
			,
				11 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 11)?;
					recog.base.enter_outer_alt(None, 11)?;
					{
					/*InvokeRule intervalCompoundArg*/
					recog.base.set_state(242);
					recog.intervalCompoundArg()?;

					}
				}
			,
				12 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 12)?;
					recog.base.enter_outer_alt(None, 12)?;
					{
					/*InvokeRule fixedCharArg*/
					recog.base.set_state(243);
					recog.fixedCharArg()?;

					}
				}
			,
				13 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 13)?;
					recog.base.enter_outer_alt(None, 13)?;
					{
					/*InvokeRule varCharArg*/
					recog.base.set_state(244);
					recog.varCharArg()?;

					}
				}
			,
				14 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 14)?;
					recog.base.enter_outer_alt(None, 14)?;
					{
					/*InvokeRule fixedBinaryArg*/
					recog.base.set_state(245);
					recog.fixedBinaryArg()?;

					}
				}
			,
				15 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 15)?;
					recog.base.enter_outer_alt(None, 15)?;
					{
					/*InvokeRule precisionTimeArg*/
					recog.base.set_state(246);
					recog.precisionTimeArg()?;

					}
				}
			,
				16 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 16)?;
					recog.base.enter_outer_alt(None, 16)?;
					{
					/*InvokeRule precisionTimestampArg*/
					recog.base.set_state(247);
					recog.precisionTimestampArg()?;

					}
				}
			,
				17 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 17)?;
					recog.base.enter_outer_alt(None, 17)?;
					{
					/*InvokeRule precisionTimestampTZArg*/
					recog.base.set_state(248);
					recog.precisionTimestampTZArg()?;

					}
				}
			,
				18 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 18)?;
					recog.base.enter_outer_alt(None, 18)?;
					{
					/*InvokeRule listArg*/
					recog.base.set_state(249);
					recog.listArg()?;

					}
				}
			,
				19 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 19)?;
					recog.base.enter_outer_alt(None, 19)?;
					{
					/*InvokeRule lambdaArg*/
					recog.base.set_state(250);
					recog.lambdaArg()?;

					}
				}
			,
				20 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 20)?;
					recog.base.enter_outer_alt(None, 20)?;
					{
					recog.base.set_state(251);
					recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

					}
				}

				_ => {}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- aggFuncTestCase ----------------
pub type AggFuncTestCaseContextAll<'input> = AggFuncTestCaseContext<'input>;


pub type AggFuncTestCaseContext<'input> = BaseParserRuleContext<'input,AggFuncTestCaseContextExt<'input>>;

#[derive(Clone)]
pub struct AggFuncTestCaseContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for AggFuncTestCaseContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggFuncTestCaseContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_aggFuncTestCase(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_aggFuncTestCase(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for AggFuncTestCaseContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggFuncTestCase }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggFuncTestCase }
}
antlr4rust::tid!{AggFuncTestCaseContextExt<'a>}

impl<'input> AggFuncTestCaseContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<AggFuncTestCaseContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,AggFuncTestCaseContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait AggFuncTestCaseContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<AggFuncTestCaseContextExt<'input>>{

fn aggFuncCall(&self) -> Option<Rc<AggFuncCallContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Eq
/// Returns `None` if there is no child corresponding to token Eq
fn Eq(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Eq, 0)
}
fn result(&self) -> Option<Rc<ResultContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token OBracket
/// Returns `None` if there is no child corresponding to token OBracket
fn OBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OBracket, 0)
}
fn funcOptions(&self) -> Option<Rc<FuncOptionsContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token CBracket
/// Returns `None` if there is no child corresponding to token CBracket
fn CBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CBracket, 0)
}

}

impl<'input> AggFuncTestCaseContextAttrs<'input> for AggFuncTestCaseContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn aggFuncTestCase(&mut self,)
	-> Result<Rc<AggFuncTestCaseContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = AggFuncTestCaseContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 22, RULE_aggFuncTestCase);
        let mut _localctx: Rc<AggFuncTestCaseContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule aggFuncCall*/
			recog.base.set_state(254);
			recog.aggFuncCall()?;

			recog.base.set_state(259);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OBracket {
				{
				recog.base.set_state(255);
				recog.base.match_token(FuncTestCaseParser_OBracket,&mut recog.err_handler)?;

				/*InvokeRule funcOptions*/
				recog.base.set_state(256);
				recog.funcOptions()?;

				recog.base.set_state(257);
				recog.base.match_token(FuncTestCaseParser_CBracket,&mut recog.err_handler)?;

				}
			}

			recog.base.set_state(261);
			recog.base.match_token(FuncTestCaseParser_Eq,&mut recog.err_handler)?;

			/*InvokeRule result*/
			recog.base.set_state(262);
			recog.result()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- aggFuncCall ----------------
#[derive(Debug)]
pub enum AggFuncCallContextAll<'input>{
	SingleArgAggregateFuncCallContext(SingleArgAggregateFuncCallContext<'input>),
	MultiArgAggregateFuncCallContext(MultiArgAggregateFuncCallContext<'input>),
	CompactAggregateFuncCallContext(CompactAggregateFuncCallContext<'input>),
Error(AggFuncCallContext<'input>)
}
antlr4rust::tid!{AggFuncCallContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for AggFuncCallContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for AggFuncCallContextAll<'input>{}

impl<'input> Deref for AggFuncCallContextAll<'input>{
	type Target = dyn AggFuncCallContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use AggFuncCallContextAll::*;
		match self{
			SingleArgAggregateFuncCallContext(inner) => inner,
			MultiArgAggregateFuncCallContext(inner) => inner,
			CompactAggregateFuncCallContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggFuncCallContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type AggFuncCallContext<'input> = BaseParserRuleContext<'input,AggFuncCallContextExt<'input>>;

#[derive(Clone)]
pub struct AggFuncCallContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for AggFuncCallContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggFuncCallContext<'input>{
}

impl<'input> CustomRuleContext<'input> for AggFuncCallContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggFuncCall }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggFuncCall }
}
antlr4rust::tid!{AggFuncCallContextExt<'a>}

impl<'input> AggFuncCallContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<AggFuncCallContextAll<'input>> {
		Rc::new(
		AggFuncCallContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,AggFuncCallContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait AggFuncCallContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<AggFuncCallContextExt<'input>>{


}

impl<'input> AggFuncCallContextAttrs<'input> for AggFuncCallContext<'input>{}

pub type SingleArgAggregateFuncCallContext<'input> = BaseParserRuleContext<'input,SingleArgAggregateFuncCallContextExt<'input>>;

pub trait SingleArgAggregateFuncCallContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token OParen
	/// Returns `None` if there is no child corresponding to token OParen
	fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OParen, 0)
	}
	fn dataColumn(&self) -> Option<Rc<DataColumnContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	/// Retrieves first TerminalNode corresponding to token CParen
	/// Returns `None` if there is no child corresponding to token CParen
	fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CParen, 0)
	}
	fn identifier(&self) -> Option<Rc<IdentifierContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> SingleArgAggregateFuncCallContextAttrs<'input> for SingleArgAggregateFuncCallContext<'input>{}

pub struct SingleArgAggregateFuncCallContextExt<'input>{
	base:AggFuncCallContextExt<'input>,
	pub functName: Option<Rc<IdentifierContextAll<'input>>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{SingleArgAggregateFuncCallContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for SingleArgAggregateFuncCallContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for SingleArgAggregateFuncCallContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_singleArgAggregateFuncCall(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for SingleArgAggregateFuncCallContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggFuncCall }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggFuncCall }
}

impl<'input> Borrow<AggFuncCallContextExt<'input>> for SingleArgAggregateFuncCallContext<'input>{
	fn borrow(&self) -> &AggFuncCallContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<AggFuncCallContextExt<'input>> for SingleArgAggregateFuncCallContext<'input>{
	fn borrow_mut(&mut self) -> &mut AggFuncCallContextExt<'input> { &mut self.base }
}

impl<'input> AggFuncCallContextAttrs<'input> for SingleArgAggregateFuncCallContext<'input> {}

impl<'input> SingleArgAggregateFuncCallContextExt<'input>{
	fn new(ctx: &dyn AggFuncCallContextAttrs<'input>) -> Rc<AggFuncCallContextAll<'input>>  {
		Rc::new(
			AggFuncCallContextAll::SingleArgAggregateFuncCallContext(
				BaseParserRuleContext::copy_from(ctx,SingleArgAggregateFuncCallContextExt{
        			functName:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type MultiArgAggregateFuncCallContext<'input> = BaseParserRuleContext<'input,MultiArgAggregateFuncCallContextExt<'input>>;

pub trait MultiArgAggregateFuncCallContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn tableData(&self) -> Option<Rc<TableDataContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	/// Retrieves first TerminalNode corresponding to token OParen
	/// Returns `None` if there is no child corresponding to token OParen
	fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OParen, 0)
	}
	/// Retrieves first TerminalNode corresponding to token CParen
	/// Returns `None` if there is no child corresponding to token CParen
	fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CParen, 0)
	}
	fn identifier(&self) -> Option<Rc<IdentifierContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	fn qualifiedAggregateFuncArgs(&self) -> Option<Rc<QualifiedAggregateFuncArgsContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> MultiArgAggregateFuncCallContextAttrs<'input> for MultiArgAggregateFuncCallContext<'input>{}

pub struct MultiArgAggregateFuncCallContextExt<'input>{
	base:AggFuncCallContextExt<'input>,
	pub funcName: Option<Rc<IdentifierContextAll<'input>>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{MultiArgAggregateFuncCallContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for MultiArgAggregateFuncCallContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for MultiArgAggregateFuncCallContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_multiArgAggregateFuncCall(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for MultiArgAggregateFuncCallContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggFuncCall }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggFuncCall }
}

impl<'input> Borrow<AggFuncCallContextExt<'input>> for MultiArgAggregateFuncCallContext<'input>{
	fn borrow(&self) -> &AggFuncCallContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<AggFuncCallContextExt<'input>> for MultiArgAggregateFuncCallContext<'input>{
	fn borrow_mut(&mut self) -> &mut AggFuncCallContextExt<'input> { &mut self.base }
}

impl<'input> AggFuncCallContextAttrs<'input> for MultiArgAggregateFuncCallContext<'input> {}

impl<'input> MultiArgAggregateFuncCallContextExt<'input>{
	fn new(ctx: &dyn AggFuncCallContextAttrs<'input>) -> Rc<AggFuncCallContextAll<'input>>  {
		Rc::new(
			AggFuncCallContextAll::MultiArgAggregateFuncCallContext(
				BaseParserRuleContext::copy_from(ctx,MultiArgAggregateFuncCallContextExt{
        			funcName:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type CompactAggregateFuncCallContext<'input> = BaseParserRuleContext<'input,CompactAggregateFuncCallContextExt<'input>>;

pub trait CompactAggregateFuncCallContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn tableRows(&self) -> Option<Rc<TableRowsContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	/// Retrieves first TerminalNode corresponding to token OParen
	/// Returns `None` if there is no child corresponding to token OParen
	fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OParen, 0)
	}
	/// Retrieves first TerminalNode corresponding to token CParen
	/// Returns `None` if there is no child corresponding to token CParen
	fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CParen, 0)
	}
	fn identifier(&self) -> Option<Rc<IdentifierContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	fn aggregateFuncArgs(&self) -> Option<Rc<AggregateFuncArgsContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> CompactAggregateFuncCallContextAttrs<'input> for CompactAggregateFuncCallContext<'input>{}

pub struct CompactAggregateFuncCallContextExt<'input>{
	base:AggFuncCallContextExt<'input>,
	pub functName: Option<Rc<IdentifierContextAll<'input>>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{CompactAggregateFuncCallContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for CompactAggregateFuncCallContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for CompactAggregateFuncCallContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_compactAggregateFuncCall(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for CompactAggregateFuncCallContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggFuncCall }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggFuncCall }
}

impl<'input> Borrow<AggFuncCallContextExt<'input>> for CompactAggregateFuncCallContext<'input>{
	fn borrow(&self) -> &AggFuncCallContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<AggFuncCallContextExt<'input>> for CompactAggregateFuncCallContext<'input>{
	fn borrow_mut(&mut self) -> &mut AggFuncCallContextExt<'input> { &mut self.base }
}

impl<'input> AggFuncCallContextAttrs<'input> for CompactAggregateFuncCallContext<'input> {}

impl<'input> CompactAggregateFuncCallContextExt<'input>{
	fn new(ctx: &dyn AggFuncCallContextAttrs<'input>) -> Rc<AggFuncCallContextAll<'input>>  {
		Rc::new(
			AggFuncCallContextAll::CompactAggregateFuncCallContext(
				BaseParserRuleContext::copy_from(ctx,CompactAggregateFuncCallContextExt{
        			functName:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn aggFuncCall(&mut self,)
	-> Result<Rc<AggFuncCallContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = AggFuncCallContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 24, RULE_aggFuncCall);
        let mut _localctx: Rc<AggFuncCallContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(285);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Define 
				=> {
					let tmp = MultiArgAggregateFuncCallContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
					_localctx = tmp;
					{
					/*InvokeRule tableData*/
					recog.base.set_state(264);
					recog.tableData()?;

					/*InvokeRule identifier*/
					recog.base.set_state(265);
					let tmp = recog.identifier()?;
					if let AggFuncCallContextAll::MultiArgAggregateFuncCallContext(ctx) = cast_mut::<_,AggFuncCallContextAll >(&mut _localctx){
					ctx.funcName = Some(tmp.clone()); } else {unreachable!("cant cast");}  

					recog.base.set_state(266);
					recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

					recog.base.set_state(268);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if ((((_la - 19)) & !0x3f) == 0 && ((1usize << (_la - 19)) & 520110017) != 0) || ((((_la - 110)) & !0x3f) == 0 && ((1usize << (_la - 110)) & 16389) != 0) {
						{
						/*InvokeRule qualifiedAggregateFuncArgs*/
						recog.base.set_state(267);
						recog.qualifiedAggregateFuncArgs()?;

						}
					}

					recog.base.set_state(270);
					recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_OParen 
				=> {
					let tmp = CompactAggregateFuncCallContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 2)?;
					_localctx = tmp;
					{
					/*InvokeRule tableRows*/
					recog.base.set_state(272);
					recog.tableRows()?;

					/*InvokeRule identifier*/
					recog.base.set_state(273);
					let tmp = recog.identifier()?;
					if let AggFuncCallContextAll::CompactAggregateFuncCallContext(ctx) = cast_mut::<_,AggFuncCallContextAll >(&mut _localctx){
					ctx.functName = Some(tmp.clone()); } else {unreachable!("cant cast");}  

					recog.base.set_state(274);
					recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

					recog.base.set_state(276);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if ((((_la - 19)) & !0x3f) == 0 && ((1usize << (_la - 19)) & 1593851841) != 0) || ((((_la - 110)) & !0x3f) == 0 && ((1usize << (_la - 110)) & 16389) != 0) {
						{
						/*InvokeRule aggregateFuncArgs*/
						recog.base.set_state(275);
						recog.aggregateFuncArgs()?;

						}
					}

					recog.base.set_state(278);
					recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_Truncate |FuncTestCaseParser_And |FuncTestCaseParser_Or |
			FuncTestCaseParser_Identifier 
				=> {
					let tmp = SingleArgAggregateFuncCallContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 3)?;
					_localctx = tmp;
					{
					/*InvokeRule identifier*/
					recog.base.set_state(280);
					let tmp = recog.identifier()?;
					if let AggFuncCallContextAll::SingleArgAggregateFuncCallContext(ctx) = cast_mut::<_,AggFuncCallContextAll >(&mut _localctx){
					ctx.functName = Some(tmp.clone()); } else {unreachable!("cant cast");}  

					recog.base.set_state(281);
					recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

					/*InvokeRule dataColumn*/
					recog.base.set_state(282);
					recog.dataColumn()?;

					recog.base.set_state(283);
					recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- tableData ----------------
pub type TableDataContextAll<'input> = TableDataContext<'input>;


pub type TableDataContext<'input> = BaseParserRuleContext<'input,TableDataContextExt<'input>>;

#[derive(Clone)]
pub struct TableDataContextExt<'input>{
	pub tableName: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for TableDataContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TableDataContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_tableData(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_tableData(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for TableDataContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_tableData }
	//fn type_rule_index() -> usize where Self: Sized { RULE_tableData }
}
antlr4rust::tid!{TableDataContextExt<'a>}

impl<'input> TableDataContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<TableDataContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,TableDataContextExt{
				tableName: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait TableDataContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<TableDataContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Define
/// Returns `None` if there is no child corresponding to token Define
fn Define(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Define, 0)
}
/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
fn dataType_all(&self) ->  Vec<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn dataType(&self, i: usize) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}
/// Retrieves first TerminalNode corresponding to token Eq
/// Returns `None` if there is no child corresponding to token Eq
fn Eq(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Eq, 0)
}
fn tableRows(&self) -> Option<Rc<TableRowsContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> TableDataContextAttrs<'input> for TableDataContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn tableData(&mut self,)
	-> Result<Rc<TableDataContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = TableDataContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 26, RULE_tableData);
        let mut _localctx: Rc<TableDataContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(287);
			recog.base.match_token(FuncTestCaseParser_Define,&mut recog.err_handler)?;

			recog.base.set_state(288);
			let tmp = recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;
			 cast_mut::<_,TableDataContext >(&mut _localctx).tableName = Some(tmp.clone());
			  

			recog.base.set_state(289);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			/*InvokeRule dataType*/
			recog.base.set_state(290);
			recog.dataType()?;

			recog.base.set_state(295);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_Comma {
				{
				{
				recog.base.set_state(291);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule dataType*/
				recog.base.set_state(292);
				recog.dataType()?;

				}
				}
				recog.base.set_state(297);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			recog.base.set_state(298);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			recog.base.set_state(299);
			recog.base.match_token(FuncTestCaseParser_Eq,&mut recog.err_handler)?;

			/*InvokeRule tableRows*/
			recog.base.set_state(300);
			recog.tableRows()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- tableRows ----------------
pub type TableRowsContextAll<'input> = TableRowsContext<'input>;


pub type TableRowsContext<'input> = BaseParserRuleContext<'input,TableRowsContextExt<'input>>;

#[derive(Clone)]
pub struct TableRowsContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for TableRowsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TableRowsContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_tableRows(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_tableRows(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for TableRowsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_tableRows }
	//fn type_rule_index() -> usize where Self: Sized { RULE_tableRows }
}
antlr4rust::tid!{TableRowsContextExt<'a>}

impl<'input> TableRowsContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<TableRowsContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,TableRowsContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait TableRowsContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<TableRowsContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}
fn columnValues_all(&self) ->  Vec<Rc<ColumnValuesContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn columnValues(&self, i: usize) -> Option<Rc<ColumnValuesContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> TableRowsContextAttrs<'input> for TableRowsContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn tableRows(&mut self,)
	-> Result<Rc<TableRowsContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = TableRowsContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 28, RULE_tableRows);
        let mut _localctx: Rc<TableRowsContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(302);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			recog.base.set_state(311);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OParen {
				{
				/*InvokeRule columnValues*/
				recog.base.set_state(303);
				recog.columnValues()?;

				recog.base.set_state(308);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
				while _la==FuncTestCaseParser_Comma {
					{
					{
					recog.base.set_state(304);
					recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

					/*InvokeRule columnValues*/
					recog.base.set_state(305);
					recog.columnValues()?;

					}
					}
					recog.base.set_state(310);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
				}
				}
			}

			recog.base.set_state(313);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- dataColumn ----------------
pub type DataColumnContextAll<'input> = DataColumnContext<'input>;


pub type DataColumnContext<'input> = BaseParserRuleContext<'input,DataColumnContextExt<'input>>;

#[derive(Clone)]
pub struct DataColumnContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DataColumnContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DataColumnContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_dataColumn(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_dataColumn(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DataColumnContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_dataColumn }
	//fn type_rule_index() -> usize where Self: Sized { RULE_dataColumn }
}
antlr4rust::tid!{DataColumnContextExt<'a>}

impl<'input> DataColumnContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DataColumnContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DataColumnContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DataColumnContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DataColumnContextExt<'input>>{

fn columnValues(&self) -> Option<Rc<ColumnValuesContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> DataColumnContextAttrs<'input> for DataColumnContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn dataColumn(&mut self,)
	-> Result<Rc<DataColumnContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DataColumnContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 30, RULE_dataColumn);
        let mut _localctx: Rc<DataColumnContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule columnValues*/
			recog.base.set_state(315);
			recog.columnValues()?;

			recog.base.set_state(316);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule dataType*/
			recog.base.set_state(317);
			recog.dataType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- columnValues ----------------
pub type ColumnValuesContextAll<'input> = ColumnValuesContext<'input>;


pub type ColumnValuesContext<'input> = BaseParserRuleContext<'input,ColumnValuesContextExt<'input>>;

#[derive(Clone)]
pub struct ColumnValuesContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ColumnValuesContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ColumnValuesContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_columnValues(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_columnValues(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ColumnValuesContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_columnValues }
	//fn type_rule_index() -> usize where Self: Sized { RULE_columnValues }
}
antlr4rust::tid!{ColumnValuesContextExt<'a>}

impl<'input> ColumnValuesContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ColumnValuesContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ColumnValuesContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ColumnValuesContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ColumnValuesContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}
fn literal_all(&self) ->  Vec<Rc<LiteralContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn literal(&self, i: usize) -> Option<Rc<LiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> ColumnValuesContextAttrs<'input> for ColumnValuesContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn columnValues(&mut self,)
	-> Result<Rc<ColumnValuesContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ColumnValuesContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 32, RULE_columnValues);
        let mut _localctx: Rc<ColumnValuesContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(319);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			recog.base.set_state(328);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if ((((_la - 19)) & !0x3f) == 0 && ((1usize << (_la - 19)) & 520110017) != 0) {
				{
				/*InvokeRule literal*/
				recog.base.set_state(320);
				recog.literal()?;

				recog.base.set_state(325);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
				while _la==FuncTestCaseParser_Comma {
					{
					{
					recog.base.set_state(321);
					recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

					/*InvokeRule literal*/
					recog.base.set_state(322);
					recog.literal()?;

					}
					}
					recog.base.set_state(327);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
				}
				}
			}

			recog.base.set_state(330);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- literal ----------------
pub type LiteralContextAll<'input> = LiteralContext<'input>;


pub type LiteralContext<'input> = BaseParserRuleContext<'input,LiteralContextExt<'input>>;

#[derive(Clone)]
pub struct LiteralContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LiteralContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LiteralContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_literal(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_literal(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for LiteralContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_literal }
	//fn type_rule_index() -> usize where Self: Sized { RULE_literal }
}
antlr4rust::tid!{LiteralContextExt<'a>}

impl<'input> LiteralContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LiteralContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LiteralContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait LiteralContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LiteralContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token NullLiteral
/// Returns `None` if there is no child corresponding to token NullLiteral
fn NullLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NullLiteral, 0)
}
fn numericLiteral(&self) -> Option<Rc<NumericLiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token BooleanLiteral
/// Returns `None` if there is no child corresponding to token BooleanLiteral
fn BooleanLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_BooleanLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token StringLiteral
/// Returns `None` if there is no child corresponding to token StringLiteral
fn StringLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_StringLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DateLiteral
/// Returns `None` if there is no child corresponding to token DateLiteral
fn DateLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DateLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token TimeLiteral
/// Returns `None` if there is no child corresponding to token TimeLiteral
fn TimeLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimeLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token TimestampLiteral
/// Returns `None` if there is no child corresponding to token TimestampLiteral
fn TimestampLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimestampLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token TimestampTzLiteral
/// Returns `None` if there is no child corresponding to token TimestampTzLiteral
fn TimestampTzLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimestampTzLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token IntervalYearLiteral
/// Returns `None` if there is no child corresponding to token IntervalYearLiteral
fn IntervalYearLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalYearLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token IntervalDayLiteral
/// Returns `None` if there is no child corresponding to token IntervalDayLiteral
fn IntervalDayLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalDayLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token IntervalCompoundLiteral
/// Returns `None` if there is no child corresponding to token IntervalCompoundLiteral
fn IntervalCompoundLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalCompoundLiteral, 0)
}

}

impl<'input> LiteralContextAttrs<'input> for LiteralContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn literal(&mut self,)
	-> Result<Rc<LiteralContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LiteralContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 34, RULE_literal);
        let mut _localctx: Rc<LiteralContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(343);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_NullLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					recog.base.set_state(332);
					recog.base.match_token(FuncTestCaseParser_NullLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_NaN |FuncTestCaseParser_IntegerLiteral |FuncTestCaseParser_DecimalLiteral |
			FuncTestCaseParser_FloatLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule numericLiteral*/
					recog.base.set_state(333);
					recog.numericLiteral()?;

					}
				}

			FuncTestCaseParser_BooleanLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 3)?;
					recog.base.enter_outer_alt(None, 3)?;
					{
					recog.base.set_state(334);
					recog.base.match_token(FuncTestCaseParser_BooleanLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_StringLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 4)?;
					recog.base.enter_outer_alt(None, 4)?;
					{
					recog.base.set_state(335);
					recog.base.match_token(FuncTestCaseParser_StringLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_DateLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 5)?;
					recog.base.enter_outer_alt(None, 5)?;
					{
					recog.base.set_state(336);
					recog.base.match_token(FuncTestCaseParser_DateLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_TimeLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 6)?;
					recog.base.enter_outer_alt(None, 6)?;
					{
					recog.base.set_state(337);
					recog.base.match_token(FuncTestCaseParser_TimeLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_TimestampLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 7)?;
					recog.base.enter_outer_alt(None, 7)?;
					{
					recog.base.set_state(338);
					recog.base.match_token(FuncTestCaseParser_TimestampLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_TimestampTzLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 8)?;
					recog.base.enter_outer_alt(None, 8)?;
					{
					recog.base.set_state(339);
					recog.base.match_token(FuncTestCaseParser_TimestampTzLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_IntervalYearLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 9)?;
					recog.base.enter_outer_alt(None, 9)?;
					{
					recog.base.set_state(340);
					recog.base.match_token(FuncTestCaseParser_IntervalYearLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_IntervalDayLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 10)?;
					recog.base.enter_outer_alt(None, 10)?;
					{
					recog.base.set_state(341);
					recog.base.match_token(FuncTestCaseParser_IntervalDayLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_IntervalCompoundLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 11)?;
					recog.base.enter_outer_alt(None, 11)?;
					{
					recog.base.set_state(342);
					recog.base.match_token(FuncTestCaseParser_IntervalCompoundLiteral,&mut recog.err_handler)?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- qualifiedAggregateFuncArgs ----------------
pub type QualifiedAggregateFuncArgsContextAll<'input> = QualifiedAggregateFuncArgsContext<'input>;


pub type QualifiedAggregateFuncArgsContext<'input> = BaseParserRuleContext<'input,QualifiedAggregateFuncArgsContextExt<'input>>;

#[derive(Clone)]
pub struct QualifiedAggregateFuncArgsContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for QualifiedAggregateFuncArgsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for QualifiedAggregateFuncArgsContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_qualifiedAggregateFuncArgs(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_qualifiedAggregateFuncArgs(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for QualifiedAggregateFuncArgsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_qualifiedAggregateFuncArgs }
	//fn type_rule_index() -> usize where Self: Sized { RULE_qualifiedAggregateFuncArgs }
}
antlr4rust::tid!{QualifiedAggregateFuncArgsContextExt<'a>}

impl<'input> QualifiedAggregateFuncArgsContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<QualifiedAggregateFuncArgsContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,QualifiedAggregateFuncArgsContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait QualifiedAggregateFuncArgsContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<QualifiedAggregateFuncArgsContextExt<'input>>{

fn qualifiedAggregateFuncArg_all(&self) ->  Vec<Rc<QualifiedAggregateFuncArgContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn qualifiedAggregateFuncArg(&self, i: usize) -> Option<Rc<QualifiedAggregateFuncArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> QualifiedAggregateFuncArgsContextAttrs<'input> for QualifiedAggregateFuncArgsContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn qualifiedAggregateFuncArgs(&mut self,)
	-> Result<Rc<QualifiedAggregateFuncArgsContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = QualifiedAggregateFuncArgsContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 36, RULE_qualifiedAggregateFuncArgs);
        let mut _localctx: Rc<QualifiedAggregateFuncArgsContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule qualifiedAggregateFuncArg*/
			recog.base.set_state(345);
			recog.qualifiedAggregateFuncArg()?;

			recog.base.set_state(350);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_Comma {
				{
				{
				recog.base.set_state(346);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule qualifiedAggregateFuncArg*/
				recog.base.set_state(347);
				recog.qualifiedAggregateFuncArg()?;

				}
				}
				recog.base.set_state(352);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- aggregateFuncArgs ----------------
pub type AggregateFuncArgsContextAll<'input> = AggregateFuncArgsContext<'input>;


pub type AggregateFuncArgsContext<'input> = BaseParserRuleContext<'input,AggregateFuncArgsContextExt<'input>>;

#[derive(Clone)]
pub struct AggregateFuncArgsContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for AggregateFuncArgsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggregateFuncArgsContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_aggregateFuncArgs(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_aggregateFuncArgs(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for AggregateFuncArgsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggregateFuncArgs }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggregateFuncArgs }
}
antlr4rust::tid!{AggregateFuncArgsContextExt<'a>}

impl<'input> AggregateFuncArgsContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<AggregateFuncArgsContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,AggregateFuncArgsContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait AggregateFuncArgsContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<AggregateFuncArgsContextExt<'input>>{

fn aggregateFuncArg_all(&self) ->  Vec<Rc<AggregateFuncArgContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn aggregateFuncArg(&self, i: usize) -> Option<Rc<AggregateFuncArgContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> AggregateFuncArgsContextAttrs<'input> for AggregateFuncArgsContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn aggregateFuncArgs(&mut self,)
	-> Result<Rc<AggregateFuncArgsContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = AggregateFuncArgsContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 38, RULE_aggregateFuncArgs);
        let mut _localctx: Rc<AggregateFuncArgsContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule aggregateFuncArg*/
			recog.base.set_state(353);
			recog.aggregateFuncArg()?;

			recog.base.set_state(358);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_Comma {
				{
				{
				recog.base.set_state(354);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule aggregateFuncArg*/
				recog.base.set_state(355);
				recog.aggregateFuncArg()?;

				}
				}
				recog.base.set_state(360);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- qualifiedAggregateFuncArg ----------------
pub type QualifiedAggregateFuncArgContextAll<'input> = QualifiedAggregateFuncArgContext<'input>;


pub type QualifiedAggregateFuncArgContext<'input> = BaseParserRuleContext<'input,QualifiedAggregateFuncArgContextExt<'input>>;

#[derive(Clone)]
pub struct QualifiedAggregateFuncArgContextExt<'input>{
	pub tableName: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for QualifiedAggregateFuncArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for QualifiedAggregateFuncArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_qualifiedAggregateFuncArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_qualifiedAggregateFuncArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for QualifiedAggregateFuncArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_qualifiedAggregateFuncArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_qualifiedAggregateFuncArg }
}
antlr4rust::tid!{QualifiedAggregateFuncArgContextExt<'a>}

impl<'input> QualifiedAggregateFuncArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<QualifiedAggregateFuncArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,QualifiedAggregateFuncArgContextExt{
				tableName: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait QualifiedAggregateFuncArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<QualifiedAggregateFuncArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Dot
/// Returns `None` if there is no child corresponding to token Dot
fn Dot(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Dot, 0)
}
/// Retrieves first TerminalNode corresponding to token ColumnName
/// Returns `None` if there is no child corresponding to token ColumnName
fn ColumnName(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ColumnName, 0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}
fn argument(&self) -> Option<Rc<ArgumentContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> QualifiedAggregateFuncArgContextAttrs<'input> for QualifiedAggregateFuncArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn qualifiedAggregateFuncArg(&mut self,)
	-> Result<Rc<QualifiedAggregateFuncArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = QualifiedAggregateFuncArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 40, RULE_qualifiedAggregateFuncArg);
        let mut _localctx: Rc<QualifiedAggregateFuncArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(365);
			recog.err_handler.sync(&mut recog.base)?;
			match  recog.interpreter.adaptive_predict(23,&mut recog.base)? {
				1 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					recog.base.set_state(361);
					let tmp = recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;
					 cast_mut::<_,QualifiedAggregateFuncArgContext >(&mut _localctx).tableName = Some(tmp.clone());
					  

					recog.base.set_state(362);
					recog.base.match_token(FuncTestCaseParser_Dot,&mut recog.err_handler)?;

					recog.base.set_state(363);
					recog.base.match_token(FuncTestCaseParser_ColumnName,&mut recog.err_handler)?;

					}
				}
			,
				2 =>{
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule argument*/
					recog.base.set_state(364);
					recog.argument()?;

					}
				}

				_ => {}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- aggregateFuncArg ----------------
pub type AggregateFuncArgContextAll<'input> = AggregateFuncArgContext<'input>;


pub type AggregateFuncArgContext<'input> = BaseParserRuleContext<'input,AggregateFuncArgContextExt<'input>>;

#[derive(Clone)]
pub struct AggregateFuncArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for AggregateFuncArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for AggregateFuncArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_aggregateFuncArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_aggregateFuncArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for AggregateFuncArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_aggregateFuncArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_aggregateFuncArg }
}
antlr4rust::tid!{AggregateFuncArgContextExt<'a>}

impl<'input> AggregateFuncArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<AggregateFuncArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,AggregateFuncArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait AggregateFuncArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<AggregateFuncArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token ColumnName
/// Returns `None` if there is no child corresponding to token ColumnName
fn ColumnName(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ColumnName, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn argument(&self) -> Option<Rc<ArgumentContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> AggregateFuncArgContextAttrs<'input> for AggregateFuncArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn aggregateFuncArg(&mut self,)
	-> Result<Rc<AggregateFuncArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = AggregateFuncArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 42, RULE_aggregateFuncArg);
        let mut _localctx: Rc<AggregateFuncArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(371);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_ColumnName 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					recog.base.set_state(367);
					recog.base.match_token(FuncTestCaseParser_ColumnName,&mut recog.err_handler)?;

					recog.base.set_state(368);
					recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

					/*InvokeRule dataType*/
					recog.base.set_state(369);
					recog.dataType()?;

					}
				}

			FuncTestCaseParser_NaN |FuncTestCaseParser_IntegerLiteral |FuncTestCaseParser_DecimalLiteral |
			FuncTestCaseParser_FloatLiteral |FuncTestCaseParser_BooleanLiteral |FuncTestCaseParser_TimestampTzLiteral |
			FuncTestCaseParser_TimestampLiteral |FuncTestCaseParser_TimeLiteral |
			FuncTestCaseParser_DateLiteral |FuncTestCaseParser_IntervalYearLiteral |
			FuncTestCaseParser_IntervalDayLiteral |FuncTestCaseParser_IntervalCompoundLiteral |
			FuncTestCaseParser_NullLiteral |FuncTestCaseParser_StringLiteral |FuncTestCaseParser_OParen |
			FuncTestCaseParser_OBracket |FuncTestCaseParser_Identifier 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule argument*/
					recog.base.set_state(370);
					recog.argument()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- numericLiteral ----------------
pub type NumericLiteralContextAll<'input> = NumericLiteralContext<'input>;


pub type NumericLiteralContext<'input> = BaseParserRuleContext<'input,NumericLiteralContextExt<'input>>;

#[derive(Clone)]
pub struct NumericLiteralContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for NumericLiteralContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for NumericLiteralContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_numericLiteral(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_numericLiteral(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for NumericLiteralContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_numericLiteral }
	//fn type_rule_index() -> usize where Self: Sized { RULE_numericLiteral }
}
antlr4rust::tid!{NumericLiteralContextExt<'a>}

impl<'input> NumericLiteralContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<NumericLiteralContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,NumericLiteralContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait NumericLiteralContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<NumericLiteralContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token DecimalLiteral
/// Returns `None` if there is no child corresponding to token DecimalLiteral
fn DecimalLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DecimalLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token IntegerLiteral
/// Returns `None` if there is no child corresponding to token IntegerLiteral
fn IntegerLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntegerLiteral, 0)
}
fn floatLiteral(&self) -> Option<Rc<FloatLiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> NumericLiteralContextAttrs<'input> for NumericLiteralContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn numericLiteral(&mut self,)
	-> Result<Rc<NumericLiteralContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = NumericLiteralContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 44, RULE_numericLiteral);
        let mut _localctx: Rc<NumericLiteralContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(376);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_DecimalLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					recog.base.set_state(373);
					recog.base.match_token(FuncTestCaseParser_DecimalLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_IntegerLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					recog.base.set_state(374);
					recog.base.match_token(FuncTestCaseParser_IntegerLiteral,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_NaN |FuncTestCaseParser_FloatLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 3)?;
					recog.base.enter_outer_alt(None, 3)?;
					{
					/*InvokeRule floatLiteral*/
					recog.base.set_state(375);
					recog.floatLiteral()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- floatLiteral ----------------
pub type FloatLiteralContextAll<'input> = FloatLiteralContext<'input>;


pub type FloatLiteralContext<'input> = BaseParserRuleContext<'input,FloatLiteralContextExt<'input>>;

#[derive(Clone)]
pub struct FloatLiteralContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FloatLiteralContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FloatLiteralContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_floatLiteral(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_floatLiteral(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FloatLiteralContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_floatLiteral }
	//fn type_rule_index() -> usize where Self: Sized { RULE_floatLiteral }
}
antlr4rust::tid!{FloatLiteralContextExt<'a>}

impl<'input> FloatLiteralContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FloatLiteralContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FloatLiteralContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FloatLiteralContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FloatLiteralContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token FloatLiteral
/// Returns `None` if there is no child corresponding to token FloatLiteral
fn FloatLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FloatLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token NaN
/// Returns `None` if there is no child corresponding to token NaN
fn NaN(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NaN, 0)
}

}

impl<'input> FloatLiteralContextAttrs<'input> for FloatLiteralContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn floatLiteral(&mut self,)
	-> Result<Rc<FloatLiteralContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FloatLiteralContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 46, RULE_floatLiteral);
        let mut _localctx: Rc<FloatLiteralContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(378);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_NaN || _la==FuncTestCaseParser_FloatLiteral) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- nullArg ----------------
pub type NullArgContextAll<'input> = NullArgContext<'input>;


pub type NullArgContext<'input> = BaseParserRuleContext<'input,NullArgContextExt<'input>>;

#[derive(Clone)]
pub struct NullArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for NullArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for NullArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_nullArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_nullArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for NullArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_nullArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_nullArg }
}
antlr4rust::tid!{NullArgContextExt<'a>}

impl<'input> NullArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<NullArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,NullArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait NullArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<NullArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token NullLiteral
/// Returns `None` if there is no child corresponding to token NullLiteral
fn NullLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NullLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> NullArgContextAttrs<'input> for NullArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn nullArg(&mut self,)
	-> Result<Rc<NullArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = NullArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 48, RULE_nullArg);
        let mut _localctx: Rc<NullArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(380);
			recog.base.match_token(FuncTestCaseParser_NullLiteral,&mut recog.err_handler)?;

			recog.base.set_state(381);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule dataType*/
			recog.base.set_state(382);
			recog.dataType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intArg ----------------
pub type IntArgContextAll<'input> = IntArgContext<'input>;


pub type IntArgContext<'input> = BaseParserRuleContext<'input,IntArgContextExt<'input>>;

#[derive(Clone)]
pub struct IntArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intArg }
}
antlr4rust::tid!{IntArgContextExt<'a>}

impl<'input> IntArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IntArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IntegerLiteral
/// Returns `None` if there is no child corresponding to token IntegerLiteral
fn IntegerLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntegerLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn intType(&self) -> Option<Rc<IntTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntArgContextAttrs<'input> for IntArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intArg(&mut self,)
	-> Result<Rc<IntArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 50, RULE_intArg);
        let mut _localctx: Rc<IntArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(384);
			recog.base.match_token(FuncTestCaseParser_IntegerLiteral,&mut recog.err_handler)?;

			recog.base.set_state(385);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule intType*/
			recog.base.set_state(386);
			recog.intType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- floatArg ----------------
pub type FloatArgContextAll<'input> = FloatArgContext<'input>;


pub type FloatArgContext<'input> = BaseParserRuleContext<'input,FloatArgContextExt<'input>>;

#[derive(Clone)]
pub struct FloatArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FloatArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FloatArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_floatArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_floatArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FloatArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_floatArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_floatArg }
}
antlr4rust::tid!{FloatArgContextExt<'a>}

impl<'input> FloatArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FloatArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FloatArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FloatArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FloatArgContextExt<'input>>{

fn numericLiteral(&self) -> Option<Rc<NumericLiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn floatType(&self) -> Option<Rc<FloatTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> FloatArgContextAttrs<'input> for FloatArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn floatArg(&mut self,)
	-> Result<Rc<FloatArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FloatArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 52, RULE_floatArg);
        let mut _localctx: Rc<FloatArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule numericLiteral*/
			recog.base.set_state(388);
			recog.numericLiteral()?;

			recog.base.set_state(389);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule floatType*/
			recog.base.set_state(390);
			recog.floatType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- decimalArg ----------------
pub type DecimalArgContextAll<'input> = DecimalArgContext<'input>;


pub type DecimalArgContext<'input> = BaseParserRuleContext<'input,DecimalArgContextExt<'input>>;

#[derive(Clone)]
pub struct DecimalArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DecimalArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DecimalArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_decimalArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_decimalArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DecimalArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_decimalArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_decimalArg }
}
antlr4rust::tid!{DecimalArgContextExt<'a>}

impl<'input> DecimalArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DecimalArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DecimalArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DecimalArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DecimalArgContextExt<'input>>{

fn numericLiteral(&self) -> Option<Rc<NumericLiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn decimalType(&self) -> Option<Rc<DecimalTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> DecimalArgContextAttrs<'input> for DecimalArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn decimalArg(&mut self,)
	-> Result<Rc<DecimalArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DecimalArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 54, RULE_decimalArg);
        let mut _localctx: Rc<DecimalArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule numericLiteral*/
			recog.base.set_state(392);
			recog.numericLiteral()?;

			recog.base.set_state(393);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule decimalType*/
			recog.base.set_state(394);
			recog.decimalType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- booleanArg ----------------
pub type BooleanArgContextAll<'input> = BooleanArgContext<'input>;


pub type BooleanArgContext<'input> = BaseParserRuleContext<'input,BooleanArgContextExt<'input>>;

#[derive(Clone)]
pub struct BooleanArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for BooleanArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for BooleanArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_booleanArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_booleanArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for BooleanArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_booleanArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_booleanArg }
}
antlr4rust::tid!{BooleanArgContextExt<'a>}

impl<'input> BooleanArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<BooleanArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,BooleanArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait BooleanArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<BooleanArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token BooleanLiteral
/// Returns `None` if there is no child corresponding to token BooleanLiteral
fn BooleanLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_BooleanLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn booleanType(&self) -> Option<Rc<BooleanTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> BooleanArgContextAttrs<'input> for BooleanArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn booleanArg(&mut self,)
	-> Result<Rc<BooleanArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = BooleanArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 56, RULE_booleanArg);
        let mut _localctx: Rc<BooleanArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(396);
			recog.base.match_token(FuncTestCaseParser_BooleanLiteral,&mut recog.err_handler)?;

			recog.base.set_state(397);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule booleanType*/
			recog.base.set_state(398);
			recog.booleanType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- stringArg ----------------
pub type StringArgContextAll<'input> = StringArgContext<'input>;


pub type StringArgContext<'input> = BaseParserRuleContext<'input,StringArgContextExt<'input>>;

#[derive(Clone)]
pub struct StringArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for StringArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for StringArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_stringArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_stringArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for StringArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_stringArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_stringArg }
}
antlr4rust::tid!{StringArgContextExt<'a>}

impl<'input> StringArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<StringArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,StringArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait StringArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<StringArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token StringLiteral
/// Returns `None` if there is no child corresponding to token StringLiteral
fn StringLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_StringLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn stringType(&self) -> Option<Rc<StringTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> StringArgContextAttrs<'input> for StringArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn stringArg(&mut self,)
	-> Result<Rc<StringArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = StringArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 58, RULE_stringArg);
        let mut _localctx: Rc<StringArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(400);
			recog.base.match_token(FuncTestCaseParser_StringLiteral,&mut recog.err_handler)?;

			recog.base.set_state(401);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule stringType*/
			recog.base.set_state(402);
			recog.stringType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- dateArg ----------------
pub type DateArgContextAll<'input> = DateArgContext<'input>;


pub type DateArgContext<'input> = BaseParserRuleContext<'input,DateArgContextExt<'input>>;

#[derive(Clone)]
pub struct DateArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DateArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DateArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_dateArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_dateArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DateArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_dateArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_dateArg }
}
antlr4rust::tid!{DateArgContextExt<'a>}

impl<'input> DateArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DateArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DateArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DateArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DateArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token DateLiteral
/// Returns `None` if there is no child corresponding to token DateLiteral
fn DateLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DateLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn dateType(&self) -> Option<Rc<DateTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> DateArgContextAttrs<'input> for DateArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn dateArg(&mut self,)
	-> Result<Rc<DateArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DateArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 60, RULE_dateArg);
        let mut _localctx: Rc<DateArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(404);
			recog.base.match_token(FuncTestCaseParser_DateLiteral,&mut recog.err_handler)?;

			recog.base.set_state(405);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule dateType*/
			recog.base.set_state(406);
			recog.dateType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalYearArg ----------------
pub type IntervalYearArgContextAll<'input> = IntervalYearArgContext<'input>;


pub type IntervalYearArgContext<'input> = BaseParserRuleContext<'input,IntervalYearArgContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalYearArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalYearArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalYearArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalYearArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalYearArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalYearArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalYearArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalYearArg }
}
antlr4rust::tid!{IntervalYearArgContextExt<'a>}

impl<'input> IntervalYearArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalYearArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalYearArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalYearArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalYearArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IntervalYearLiteral
/// Returns `None` if there is no child corresponding to token IntervalYearLiteral
fn IntervalYearLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalYearLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn intervalYearType(&self) -> Option<Rc<IntervalYearTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntervalYearArgContextAttrs<'input> for IntervalYearArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalYearArg(&mut self,)
	-> Result<Rc<IntervalYearArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalYearArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 62, RULE_intervalYearArg);
        let mut _localctx: Rc<IntervalYearArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(408);
			recog.base.match_token(FuncTestCaseParser_IntervalYearLiteral,&mut recog.err_handler)?;

			recog.base.set_state(409);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule intervalYearType*/
			recog.base.set_state(410);
			recog.intervalYearType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalDayArg ----------------
pub type IntervalDayArgContextAll<'input> = IntervalDayArgContext<'input>;


pub type IntervalDayArgContext<'input> = BaseParserRuleContext<'input,IntervalDayArgContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalDayArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalDayArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalDayArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalDayArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalDayArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalDayArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalDayArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalDayArg }
}
antlr4rust::tid!{IntervalDayArgContextExt<'a>}

impl<'input> IntervalDayArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalDayArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalDayArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalDayArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalDayArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IntervalDayLiteral
/// Returns `None` if there is no child corresponding to token IntervalDayLiteral
fn IntervalDayLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalDayLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn intervalDayType(&self) -> Option<Rc<IntervalDayTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntervalDayArgContextAttrs<'input> for IntervalDayArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalDayArg(&mut self,)
	-> Result<Rc<IntervalDayArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalDayArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 64, RULE_intervalDayArg);
        let mut _localctx: Rc<IntervalDayArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(412);
			recog.base.match_token(FuncTestCaseParser_IntervalDayLiteral,&mut recog.err_handler)?;

			recog.base.set_state(413);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule intervalDayType*/
			recog.base.set_state(414);
			recog.intervalDayType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalCompoundArg ----------------
pub type IntervalCompoundArgContextAll<'input> = IntervalCompoundArgContext<'input>;


pub type IntervalCompoundArgContext<'input> = BaseParserRuleContext<'input,IntervalCompoundArgContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalCompoundArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalCompoundArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalCompoundArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalCompoundArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalCompoundArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalCompoundArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalCompoundArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalCompoundArg }
}
antlr4rust::tid!{IntervalCompoundArgContextExt<'a>}

impl<'input> IntervalCompoundArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalCompoundArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalCompoundArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalCompoundArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalCompoundArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IntervalCompoundLiteral
/// Returns `None` if there is no child corresponding to token IntervalCompoundLiteral
fn IntervalCompoundLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IntervalCompoundLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn intervalCompoundType(&self) -> Option<Rc<IntervalCompoundTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntervalCompoundArgContextAttrs<'input> for IntervalCompoundArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalCompoundArg(&mut self,)
	-> Result<Rc<IntervalCompoundArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalCompoundArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 66, RULE_intervalCompoundArg);
        let mut _localctx: Rc<IntervalCompoundArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(416);
			recog.base.match_token(FuncTestCaseParser_IntervalCompoundLiteral,&mut recog.err_handler)?;

			recog.base.set_state(417);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule intervalCompoundType*/
			recog.base.set_state(418);
			recog.intervalCompoundType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- fixedCharArg ----------------
pub type FixedCharArgContextAll<'input> = FixedCharArgContext<'input>;


pub type FixedCharArgContext<'input> = BaseParserRuleContext<'input,FixedCharArgContextExt<'input>>;

#[derive(Clone)]
pub struct FixedCharArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FixedCharArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FixedCharArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_fixedCharArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_fixedCharArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FixedCharArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_fixedCharArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_fixedCharArg }
}
antlr4rust::tid!{FixedCharArgContextExt<'a>}

impl<'input> FixedCharArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FixedCharArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FixedCharArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FixedCharArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FixedCharArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token StringLiteral
/// Returns `None` if there is no child corresponding to token StringLiteral
fn StringLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_StringLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn fixedCharType(&self) -> Option<Rc<FixedCharTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> FixedCharArgContextAttrs<'input> for FixedCharArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn fixedCharArg(&mut self,)
	-> Result<Rc<FixedCharArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FixedCharArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 68, RULE_fixedCharArg);
        let mut _localctx: Rc<FixedCharArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(420);
			recog.base.match_token(FuncTestCaseParser_StringLiteral,&mut recog.err_handler)?;

			recog.base.set_state(421);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule fixedCharType*/
			recog.base.set_state(422);
			recog.fixedCharType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- varCharArg ----------------
pub type VarCharArgContextAll<'input> = VarCharArgContext<'input>;


pub type VarCharArgContext<'input> = BaseParserRuleContext<'input,VarCharArgContextExt<'input>>;

#[derive(Clone)]
pub struct VarCharArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for VarCharArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for VarCharArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_varCharArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_varCharArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for VarCharArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_varCharArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_varCharArg }
}
antlr4rust::tid!{VarCharArgContextExt<'a>}

impl<'input> VarCharArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<VarCharArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,VarCharArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait VarCharArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<VarCharArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token StringLiteral
/// Returns `None` if there is no child corresponding to token StringLiteral
fn StringLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_StringLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn varCharType(&self) -> Option<Rc<VarCharTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> VarCharArgContextAttrs<'input> for VarCharArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn varCharArg(&mut self,)
	-> Result<Rc<VarCharArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = VarCharArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 70, RULE_varCharArg);
        let mut _localctx: Rc<VarCharArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(424);
			recog.base.match_token(FuncTestCaseParser_StringLiteral,&mut recog.err_handler)?;

			recog.base.set_state(425);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule varCharType*/
			recog.base.set_state(426);
			recog.varCharType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- fixedBinaryArg ----------------
pub type FixedBinaryArgContextAll<'input> = FixedBinaryArgContext<'input>;


pub type FixedBinaryArgContext<'input> = BaseParserRuleContext<'input,FixedBinaryArgContextExt<'input>>;

#[derive(Clone)]
pub struct FixedBinaryArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FixedBinaryArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FixedBinaryArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_fixedBinaryArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_fixedBinaryArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FixedBinaryArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_fixedBinaryArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_fixedBinaryArg }
}
antlr4rust::tid!{FixedBinaryArgContextExt<'a>}

impl<'input> FixedBinaryArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FixedBinaryArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FixedBinaryArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FixedBinaryArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FixedBinaryArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token StringLiteral
/// Returns `None` if there is no child corresponding to token StringLiteral
fn StringLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_StringLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn fixedBinaryType(&self) -> Option<Rc<FixedBinaryTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> FixedBinaryArgContextAttrs<'input> for FixedBinaryArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn fixedBinaryArg(&mut self,)
	-> Result<Rc<FixedBinaryArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FixedBinaryArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 72, RULE_fixedBinaryArg);
        let mut _localctx: Rc<FixedBinaryArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(428);
			recog.base.match_token(FuncTestCaseParser_StringLiteral,&mut recog.err_handler)?;

			recog.base.set_state(429);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule fixedBinaryType*/
			recog.base.set_state(430);
			recog.fixedBinaryType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimeArg ----------------
pub type PrecisionTimeArgContextAll<'input> = PrecisionTimeArgContext<'input>;


pub type PrecisionTimeArgContext<'input> = BaseParserRuleContext<'input,PrecisionTimeArgContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimeArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimeArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimeArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimeArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimeArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimeArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimeArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimeArg }
}
antlr4rust::tid!{PrecisionTimeArgContextExt<'a>}

impl<'input> PrecisionTimeArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimeArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimeArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimeArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimeArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TimeLiteral
/// Returns `None` if there is no child corresponding to token TimeLiteral
fn TimeLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimeLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn precisionTimeType(&self) -> Option<Rc<PrecisionTimeTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> PrecisionTimeArgContextAttrs<'input> for PrecisionTimeArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimeArg(&mut self,)
	-> Result<Rc<PrecisionTimeArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimeArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 74, RULE_precisionTimeArg);
        let mut _localctx: Rc<PrecisionTimeArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(432);
			recog.base.match_token(FuncTestCaseParser_TimeLiteral,&mut recog.err_handler)?;

			recog.base.set_state(433);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule precisionTimeType*/
			recog.base.set_state(434);
			recog.precisionTimeType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimestampArg ----------------
pub type PrecisionTimestampArgContextAll<'input> = PrecisionTimestampArgContext<'input>;


pub type PrecisionTimestampArgContext<'input> = BaseParserRuleContext<'input,PrecisionTimestampArgContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimestampArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimestampArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimestampArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimestampArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimestampArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimestampArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimestampArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimestampArg }
}
antlr4rust::tid!{PrecisionTimestampArgContextExt<'a>}

impl<'input> PrecisionTimestampArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimestampArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimestampArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimestampArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimestampArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TimestampLiteral
/// Returns `None` if there is no child corresponding to token TimestampLiteral
fn TimestampLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimestampLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn precisionTimestampType(&self) -> Option<Rc<PrecisionTimestampTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> PrecisionTimestampArgContextAttrs<'input> for PrecisionTimestampArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimestampArg(&mut self,)
	-> Result<Rc<PrecisionTimestampArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimestampArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 76, RULE_precisionTimestampArg);
        let mut _localctx: Rc<PrecisionTimestampArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(436);
			recog.base.match_token(FuncTestCaseParser_TimestampLiteral,&mut recog.err_handler)?;

			recog.base.set_state(437);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule precisionTimestampType*/
			recog.base.set_state(438);
			recog.precisionTimestampType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimestampTZArg ----------------
pub type PrecisionTimestampTZArgContextAll<'input> = PrecisionTimestampTZArgContext<'input>;


pub type PrecisionTimestampTZArgContext<'input> = BaseParserRuleContext<'input,PrecisionTimestampTZArgContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimestampTZArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimestampTZArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimestampTZArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimestampTZArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimestampTZArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimestampTZArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimestampTZArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimestampTZArg }
}
antlr4rust::tid!{PrecisionTimestampTZArgContextExt<'a>}

impl<'input> PrecisionTimestampTZArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimestampTZArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimestampTZArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimestampTZArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimestampTZArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token TimestampTzLiteral
/// Returns `None` if there is no child corresponding to token TimestampTzLiteral
fn TimestampTzLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TimestampTzLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn precisionTimestampTZType(&self) -> Option<Rc<PrecisionTimestampTZTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> PrecisionTimestampTZArgContextAttrs<'input> for PrecisionTimestampTZArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimestampTZArg(&mut self,)
	-> Result<Rc<PrecisionTimestampTZArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimestampTZArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 78, RULE_precisionTimestampTZArg);
        let mut _localctx: Rc<PrecisionTimestampTZArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(440);
			recog.base.match_token(FuncTestCaseParser_TimestampTzLiteral,&mut recog.err_handler)?;

			recog.base.set_state(441);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule precisionTimestampTZType*/
			recog.base.set_state(442);
			recog.precisionTimestampTZType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- listArg ----------------
pub type ListArgContextAll<'input> = ListArgContext<'input>;


pub type ListArgContext<'input> = BaseParserRuleContext<'input,ListArgContextExt<'input>>;

#[derive(Clone)]
pub struct ListArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ListArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ListArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_listArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_listArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ListArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_listArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_listArg }
}
antlr4rust::tid!{ListArgContextExt<'a>}

impl<'input> ListArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ListArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ListArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ListArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ListArgContextExt<'input>>{

fn literalList(&self) -> Option<Rc<LiteralListContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn listType(&self) -> Option<Rc<ListTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> ListArgContextAttrs<'input> for ListArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn listArg(&mut self,)
	-> Result<Rc<ListArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ListArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 80, RULE_listArg);
        let mut _localctx: Rc<ListArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule literalList*/
			recog.base.set_state(444);
			recog.literalList()?;

			recog.base.set_state(445);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule listType*/
			recog.base.set_state(446);
			recog.listType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- lambdaArg ----------------
pub type LambdaArgContextAll<'input> = LambdaArgContext<'input>;


pub type LambdaArgContext<'input> = BaseParserRuleContext<'input,LambdaArgContextExt<'input>>;

#[derive(Clone)]
pub struct LambdaArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LambdaArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LambdaArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_lambdaArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_lambdaArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for LambdaArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_lambdaArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_lambdaArg }
}
antlr4rust::tid!{LambdaArgContextExt<'a>}

impl<'input> LambdaArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LambdaArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LambdaArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait LambdaArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LambdaArgContextExt<'input>>{

fn literalLambda(&self) -> Option<Rc<LiteralLambdaContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
fn funcType(&self) -> Option<Rc<FuncTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> LambdaArgContextAttrs<'input> for LambdaArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn lambdaArg(&mut self,)
	-> Result<Rc<LambdaArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LambdaArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 82, RULE_lambdaArg);
        let mut _localctx: Rc<LambdaArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule literalLambda*/
			recog.base.set_state(448);
			recog.literalLambda()?;

			recog.base.set_state(449);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			/*InvokeRule funcType*/
			recog.base.set_state(450);
			recog.funcType()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- enumArg ----------------
pub type EnumArgContextAll<'input> = EnumArgContext<'input>;


pub type EnumArgContext<'input> = BaseParserRuleContext<'input,EnumArgContextExt<'input>>;

#[derive(Clone)]
pub struct EnumArgContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for EnumArgContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for EnumArgContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_enumArg(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_enumArg(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for EnumArgContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_enumArg }
	//fn type_rule_index() -> usize where Self: Sized { RULE_enumArg }
}
antlr4rust::tid!{EnumArgContextExt<'a>}

impl<'input> EnumArgContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<EnumArgContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,EnumArgContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait EnumArgContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<EnumArgContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}
/// Retrieves first TerminalNode corresponding to token DoubleColon
/// Returns `None` if there is no child corresponding to token DoubleColon
fn DoubleColon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_DoubleColon, 0)
}
/// Retrieves first TerminalNode corresponding to token EnumType
/// Returns `None` if there is no child corresponding to token EnumType
fn EnumType(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_EnumType, 0)
}

}

impl<'input> EnumArgContextAttrs<'input> for EnumArgContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn enumArg(&mut self,)
	-> Result<Rc<EnumArgContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = EnumArgContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 84, RULE_enumArg);
        let mut _localctx: Rc<EnumArgContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(452);
			recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

			recog.base.set_state(453);
			recog.base.match_token(FuncTestCaseParser_DoubleColon,&mut recog.err_handler)?;

			recog.base.set_state(454);
			recog.base.match_token(FuncTestCaseParser_EnumType,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- literalList ----------------
pub type LiteralListContextAll<'input> = LiteralListContext<'input>;


pub type LiteralListContext<'input> = BaseParserRuleContext<'input,LiteralListContextExt<'input>>;

#[derive(Clone)]
pub struct LiteralListContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LiteralListContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LiteralListContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_literalList(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_literalList(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for LiteralListContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_literalList }
	//fn type_rule_index() -> usize where Self: Sized { RULE_literalList }
}
antlr4rust::tid!{LiteralListContextExt<'a>}

impl<'input> LiteralListContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LiteralListContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LiteralListContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait LiteralListContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LiteralListContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OBracket
/// Returns `None` if there is no child corresponding to token OBracket
fn OBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CBracket
/// Returns `None` if there is no child corresponding to token CBracket
fn CBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CBracket, 0)
}
fn listElement_all(&self) ->  Vec<Rc<ListElementContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn listElement(&self, i: usize) -> Option<Rc<ListElementContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> LiteralListContextAttrs<'input> for LiteralListContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn literalList(&mut self,)
	-> Result<Rc<LiteralListContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LiteralListContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 86, RULE_literalList);
        let mut _localctx: Rc<LiteralListContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(456);
			recog.base.match_token(FuncTestCaseParser_OBracket,&mut recog.err_handler)?;

			recog.base.set_state(465);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if ((((_la - 19)) & !0x3f) == 0 && ((1usize << (_la - 19)) & 520110017) != 0) || _la==FuncTestCaseParser_OBracket {
				{
				/*InvokeRule listElement*/
				recog.base.set_state(457);
				recog.listElement()?;

				recog.base.set_state(462);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
				while _la==FuncTestCaseParser_Comma {
					{
					{
					recog.base.set_state(458);
					recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

					/*InvokeRule listElement*/
					recog.base.set_state(459);
					recog.listElement()?;

					}
					}
					recog.base.set_state(464);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
				}
				}
			}

			recog.base.set_state(467);
			recog.base.match_token(FuncTestCaseParser_CBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- listElement ----------------
pub type ListElementContextAll<'input> = ListElementContext<'input>;


pub type ListElementContext<'input> = BaseParserRuleContext<'input,ListElementContextExt<'input>>;

#[derive(Clone)]
pub struct ListElementContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ListElementContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ListElementContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_listElement(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_listElement(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ListElementContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_listElement }
	//fn type_rule_index() -> usize where Self: Sized { RULE_listElement }
}
antlr4rust::tid!{ListElementContextExt<'a>}

impl<'input> ListElementContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ListElementContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ListElementContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ListElementContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ListElementContextExt<'input>>{

fn literal(&self) -> Option<Rc<LiteralContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn literalList(&self) -> Option<Rc<LiteralListContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> ListElementContextAttrs<'input> for ListElementContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn listElement(&mut self,)
	-> Result<Rc<ListElementContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ListElementContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 88, RULE_listElement);
        let mut _localctx: Rc<ListElementContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(471);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_NaN |FuncTestCaseParser_IntegerLiteral |FuncTestCaseParser_DecimalLiteral |
			FuncTestCaseParser_FloatLiteral |FuncTestCaseParser_BooleanLiteral |FuncTestCaseParser_TimestampTzLiteral |
			FuncTestCaseParser_TimestampLiteral |FuncTestCaseParser_TimeLiteral |
			FuncTestCaseParser_DateLiteral |FuncTestCaseParser_IntervalYearLiteral |
			FuncTestCaseParser_IntervalDayLiteral |FuncTestCaseParser_IntervalCompoundLiteral |
			FuncTestCaseParser_NullLiteral |FuncTestCaseParser_StringLiteral 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule literal*/
					recog.base.set_state(469);
					recog.literal()?;

					}
				}

			FuncTestCaseParser_OBracket 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule literalList*/
					recog.base.set_state(470);
					recog.literalList()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- literalLambda ----------------
pub type LiteralLambdaContextAll<'input> = LiteralLambdaContext<'input>;


pub type LiteralLambdaContext<'input> = BaseParserRuleContext<'input,LiteralLambdaContextExt<'input>>;

#[derive(Clone)]
pub struct LiteralLambdaContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LiteralLambdaContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LiteralLambdaContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_literalLambda(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_literalLambda(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for LiteralLambdaContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_literalLambda }
	//fn type_rule_index() -> usize where Self: Sized { RULE_literalLambda }
}
antlr4rust::tid!{LiteralLambdaContextExt<'a>}

impl<'input> LiteralLambdaContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LiteralLambdaContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LiteralLambdaContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait LiteralLambdaContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LiteralLambdaContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
fn lambdaParameters(&self) -> Option<Rc<LambdaParametersContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Arrow
/// Returns `None` if there is no child corresponding to token Arrow
fn Arrow(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Arrow, 0)
}
fn lambdaBody(&self) -> Option<Rc<LambdaBodyContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}

}

impl<'input> LiteralLambdaContextAttrs<'input> for LiteralLambdaContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn literalLambda(&mut self,)
	-> Result<Rc<LiteralLambdaContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LiteralLambdaContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 90, RULE_literalLambda);
        let mut _localctx: Rc<LiteralLambdaContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(473);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			/*InvokeRule lambdaParameters*/
			recog.base.set_state(474);
			recog.lambdaParameters()?;

			recog.base.set_state(475);
			recog.base.match_token(FuncTestCaseParser_Arrow,&mut recog.err_handler)?;

			/*InvokeRule lambdaBody*/
			recog.base.set_state(476);
			recog.lambdaBody()?;

			recog.base.set_state(477);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- lambdaParameters ----------------
#[derive(Debug)]
pub enum LambdaParametersContextAll<'input>{
	TupleParamsContext(TupleParamsContext<'input>),
	SingleParamContext(SingleParamContext<'input>),
Error(LambdaParametersContext<'input>)
}
antlr4rust::tid!{LambdaParametersContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for LambdaParametersContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for LambdaParametersContextAll<'input>{}

impl<'input> Deref for LambdaParametersContextAll<'input>{
	type Target = dyn LambdaParametersContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use LambdaParametersContextAll::*;
		match self{
			TupleParamsContext(inner) => inner,
			SingleParamContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LambdaParametersContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type LambdaParametersContext<'input> = BaseParserRuleContext<'input,LambdaParametersContextExt<'input>>;

#[derive(Clone)]
pub struct LambdaParametersContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LambdaParametersContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LambdaParametersContext<'input>{
}

impl<'input> CustomRuleContext<'input> for LambdaParametersContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_lambdaParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_lambdaParameters }
}
antlr4rust::tid!{LambdaParametersContextExt<'a>}

impl<'input> LambdaParametersContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LambdaParametersContextAll<'input>> {
		Rc::new(
		LambdaParametersContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LambdaParametersContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait LambdaParametersContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LambdaParametersContextExt<'input>>{


}

impl<'input> LambdaParametersContextAttrs<'input> for LambdaParametersContext<'input>{}

pub type TupleParamsContext<'input> = BaseParserRuleContext<'input,TupleParamsContextExt<'input>>;

pub trait TupleParamsContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token OParen
	/// Returns `None` if there is no child corresponding to token OParen
	fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OParen, 0)
	}
	/// Retrieves all `TerminalNode`s corresponding to token Identifier in current rule
	fn Identifier_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
		self.children_of_type()
	}
	/// Retrieves 'i's TerminalNode corresponding to token Identifier, starting from 0.
	/// Returns `None` if number of children corresponding to token Identifier is less or equal than `i`.
	fn Identifier(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_Identifier, i)
	}
	/// Retrieves first TerminalNode corresponding to token CParen
	/// Returns `None` if there is no child corresponding to token CParen
	fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CParen, 0)
	}
	/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
	fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
		self.children_of_type()
	}
	/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
	/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
	fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_Comma, i)
	}
}

impl<'input> TupleParamsContextAttrs<'input> for TupleParamsContext<'input>{}

pub struct TupleParamsContextExt<'input>{
	base:LambdaParametersContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{TupleParamsContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for TupleParamsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for TupleParamsContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_tupleParams(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for TupleParamsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_lambdaParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_lambdaParameters }
}

impl<'input> Borrow<LambdaParametersContextExt<'input>> for TupleParamsContext<'input>{
	fn borrow(&self) -> &LambdaParametersContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<LambdaParametersContextExt<'input>> for TupleParamsContext<'input>{
	fn borrow_mut(&mut self) -> &mut LambdaParametersContextExt<'input> { &mut self.base }
}

impl<'input> LambdaParametersContextAttrs<'input> for TupleParamsContext<'input> {}

impl<'input> TupleParamsContextExt<'input>{
	fn new(ctx: &dyn LambdaParametersContextAttrs<'input>) -> Rc<LambdaParametersContextAll<'input>>  {
		Rc::new(
			LambdaParametersContextAll::TupleParamsContext(
				BaseParserRuleContext::copy_from(ctx,TupleParamsContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type SingleParamContext<'input> = BaseParserRuleContext<'input,SingleParamContextExt<'input>>;

pub trait SingleParamContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token Identifier
	/// Returns `None` if there is no child corresponding to token Identifier
	fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_Identifier, 0)
	}
}

impl<'input> SingleParamContextAttrs<'input> for SingleParamContext<'input>{}

pub struct SingleParamContextExt<'input>{
	base:LambdaParametersContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{SingleParamContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for SingleParamContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for SingleParamContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_singleParam(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for SingleParamContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_lambdaParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_lambdaParameters }
}

impl<'input> Borrow<LambdaParametersContextExt<'input>> for SingleParamContext<'input>{
	fn borrow(&self) -> &LambdaParametersContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<LambdaParametersContextExt<'input>> for SingleParamContext<'input>{
	fn borrow_mut(&mut self) -> &mut LambdaParametersContextExt<'input> { &mut self.base }
}

impl<'input> LambdaParametersContextAttrs<'input> for SingleParamContext<'input> {}

impl<'input> SingleParamContextExt<'input>{
	fn new(ctx: &dyn LambdaParametersContextAttrs<'input>) -> Rc<LambdaParametersContextAll<'input>>  {
		Rc::new(
			LambdaParametersContextAll::SingleParamContext(
				BaseParserRuleContext::copy_from(ctx,SingleParamContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn lambdaParameters(&mut self,)
	-> Result<Rc<LambdaParametersContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LambdaParametersContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 92, RULE_lambdaParameters);
        let mut _localctx: Rc<LambdaParametersContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(489);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Identifier 
				=> {
					let tmp = SingleParamContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
					_localctx = tmp;
					{
					recog.base.set_state(479);
					recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

					}
				}

			FuncTestCaseParser_OParen 
				=> {
					let tmp = TupleParamsContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 2)?;
					_localctx = tmp;
					{
					recog.base.set_state(480);
					recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

					recog.base.set_state(481);
					recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

					recog.base.set_state(484); 
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					loop {
						{
						{
						recog.base.set_state(482);
						recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

						recog.base.set_state(483);
						recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

						}
						}
						recog.base.set_state(486); 
						recog.err_handler.sync(&mut recog.base)?;
						_la = recog.base.input.la(1);
						if !(_la==FuncTestCaseParser_Comma) {break}
					}
					recog.base.set_state(488);
					recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- lambdaBody ----------------
pub type LambdaBodyContextAll<'input> = LambdaBodyContext<'input>;


pub type LambdaBodyContext<'input> = BaseParserRuleContext<'input,LambdaBodyContextExt<'input>>;

#[derive(Clone)]
pub struct LambdaBodyContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for LambdaBodyContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for LambdaBodyContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_lambdaBody(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_lambdaBody(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for LambdaBodyContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_lambdaBody }
	//fn type_rule_index() -> usize where Self: Sized { RULE_lambdaBody }
}
antlr4rust::tid!{LambdaBodyContextExt<'a>}

impl<'input> LambdaBodyContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<LambdaBodyContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,LambdaBodyContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait LambdaBodyContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<LambdaBodyContextExt<'input>>{

fn identifier(&self) -> Option<Rc<IdentifierContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token OParen
/// Returns `None` if there is no child corresponding to token OParen
fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OParen, 0)
}
fn arguments(&self) -> Option<Rc<ArgumentsContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token CParen
/// Returns `None` if there is no child corresponding to token CParen
fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CParen, 0)
}

}

impl<'input> LambdaBodyContextAttrs<'input> for LambdaBodyContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn lambdaBody(&mut self,)
	-> Result<Rc<LambdaBodyContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = LambdaBodyContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 94, RULE_lambdaBody);
        let mut _localctx: Rc<LambdaBodyContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule identifier*/
			recog.base.set_state(491);
			recog.identifier()?;

			recog.base.set_state(492);
			recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

			/*InvokeRule arguments*/
			recog.base.set_state(493);
			recog.arguments()?;

			recog.base.set_state(494);
			recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- dataType ----------------
pub type DataTypeContextAll<'input> = DataTypeContext<'input>;


pub type DataTypeContext<'input> = BaseParserRuleContext<'input,DataTypeContextExt<'input>>;

#[derive(Clone)]
pub struct DataTypeContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DataTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DataTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_dataType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_dataType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DataTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_dataType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_dataType }
}
antlr4rust::tid!{DataTypeContextExt<'a>}

impl<'input> DataTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DataTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DataTypeContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait DataTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DataTypeContextExt<'input>>{

fn scalarType(&self) -> Option<Rc<ScalarTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn parameterizedType(&self) -> Option<Rc<ParameterizedTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> DataTypeContextAttrs<'input> for DataTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn dataType(&mut self,)
	-> Result<Rc<DataTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DataTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 96, RULE_dataType);
        let mut _localctx: Rc<DataTypeContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(498);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Boolean |FuncTestCaseParser_I8 |FuncTestCaseParser_I16 |
			FuncTestCaseParser_I32 |FuncTestCaseParser_I64 |FuncTestCaseParser_FP32 |
			FuncTestCaseParser_FP64 |FuncTestCaseParser_String |FuncTestCaseParser_Binary |
			FuncTestCaseParser_Date |FuncTestCaseParser_Interval_Year |FuncTestCaseParser_UUID |
			FuncTestCaseParser_UserDefined |FuncTestCaseParser_Bool |FuncTestCaseParser_Str |
			FuncTestCaseParser_VBin |FuncTestCaseParser_IYear 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule scalarType*/
					recog.base.set_state(496);
					recog.scalarType()?;

					}
				}

			FuncTestCaseParser_Func |FuncTestCaseParser_Interval_Day |FuncTestCaseParser_Interval_Compound |
			FuncTestCaseParser_Decimal |FuncTestCaseParser_Precision_Time |FuncTestCaseParser_Precision_Timestamp |
			FuncTestCaseParser_Precision_Timestamp_TZ |FuncTestCaseParser_FixedChar |
			FuncTestCaseParser_VarChar |FuncTestCaseParser_FixedBinary |FuncTestCaseParser_List |
			FuncTestCaseParser_IDay |FuncTestCaseParser_ICompound |FuncTestCaseParser_Dec |
			FuncTestCaseParser_PT |FuncTestCaseParser_PTs |FuncTestCaseParser_PTsTZ |
			FuncTestCaseParser_FChar |FuncTestCaseParser_VChar |FuncTestCaseParser_FBin 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule parameterizedType*/
					recog.base.set_state(497);
					recog.parameterizedType()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- scalarType ----------------
#[derive(Debug)]
pub enum ScalarTypeContextAll<'input>{
	DateContext(DateContext<'input>),
	BooleanContext(BooleanContext<'input>),
	StringContext(StringContext<'input>),
	BinaryContext(BinaryContext<'input>),
	UserDefinedContext(UserDefinedContext<'input>),
	FloatContext(FloatContext<'input>),
	IntervalYearContext(IntervalYearContext<'input>),
	UuidContext(UuidContext<'input>),
	IntContext(IntContext<'input>),
Error(ScalarTypeContext<'input>)
}
antlr4rust::tid!{ScalarTypeContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for ScalarTypeContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for ScalarTypeContextAll<'input>{}

impl<'input> Deref for ScalarTypeContextAll<'input>{
	type Target = dyn ScalarTypeContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use ScalarTypeContextAll::*;
		match self{
			DateContext(inner) => inner,
			BooleanContext(inner) => inner,
			StringContext(inner) => inner,
			BinaryContext(inner) => inner,
			UserDefinedContext(inner) => inner,
			FloatContext(inner) => inner,
			IntervalYearContext(inner) => inner,
			UuidContext(inner) => inner,
			IntContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ScalarTypeContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type ScalarTypeContext<'input> = BaseParserRuleContext<'input,ScalarTypeContextExt<'input>>;

#[derive(Clone)]
pub struct ScalarTypeContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ScalarTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ScalarTypeContext<'input>{
}

impl<'input> CustomRuleContext<'input> for ScalarTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}
antlr4rust::tid!{ScalarTypeContextExt<'a>}

impl<'input> ScalarTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ScalarTypeContextAll<'input>> {
		Rc::new(
		ScalarTypeContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ScalarTypeContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait ScalarTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ScalarTypeContextExt<'input>>{


}

impl<'input> ScalarTypeContextAttrs<'input> for ScalarTypeContext<'input>{}

pub type DateContext<'input> = BaseParserRuleContext<'input,DateContextExt<'input>>;

pub trait DateContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn dateType(&self) -> Option<Rc<DateTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> DateContextAttrs<'input> for DateContext<'input>{}

pub struct DateContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{DateContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for DateContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DateContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_date(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for DateContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for DateContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for DateContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for DateContext<'input> {}

impl<'input> DateContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::DateContext(
				BaseParserRuleContext::copy_from(ctx,DateContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type BooleanContext<'input> = BaseParserRuleContext<'input,BooleanContextExt<'input>>;

pub trait BooleanContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn booleanType(&self) -> Option<Rc<BooleanTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> BooleanContextAttrs<'input> for BooleanContext<'input>{}

pub struct BooleanContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{BooleanContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for BooleanContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for BooleanContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_boolean(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for BooleanContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for BooleanContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for BooleanContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for BooleanContext<'input> {}

impl<'input> BooleanContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::BooleanContext(
				BaseParserRuleContext::copy_from(ctx,BooleanContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type StringContext<'input> = BaseParserRuleContext<'input,StringContextExt<'input>>;

pub trait StringContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn stringType(&self) -> Option<Rc<StringTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> StringContextAttrs<'input> for StringContext<'input>{}

pub struct StringContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{StringContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for StringContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for StringContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_string(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for StringContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for StringContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for StringContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for StringContext<'input> {}

impl<'input> StringContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::StringContext(
				BaseParserRuleContext::copy_from(ctx,StringContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type BinaryContext<'input> = BaseParserRuleContext<'input,BinaryContextExt<'input>>;

pub trait BinaryContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn binaryType(&self) -> Option<Rc<BinaryTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> BinaryContextAttrs<'input> for BinaryContext<'input>{}

pub struct BinaryContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{BinaryContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for BinaryContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for BinaryContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_binary(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for BinaryContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for BinaryContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for BinaryContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for BinaryContext<'input> {}

impl<'input> BinaryContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::BinaryContext(
				BaseParserRuleContext::copy_from(ctx,BinaryContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type UserDefinedContext<'input> = BaseParserRuleContext<'input,UserDefinedContextExt<'input>>;

pub trait UserDefinedContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token UserDefined
	/// Returns `None` if there is no child corresponding to token UserDefined
	fn UserDefined(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_UserDefined, 0)
	}
	/// Retrieves first TerminalNode corresponding to token Identifier
	/// Returns `None` if there is no child corresponding to token Identifier
	fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_Identifier, 0)
	}
	/// Retrieves first TerminalNode corresponding to token QMark
	/// Returns `None` if there is no child corresponding to token QMark
	fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_QMark, 0)
	}
}

impl<'input> UserDefinedContextAttrs<'input> for UserDefinedContext<'input>{}

pub struct UserDefinedContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	pub isnull: Option<TokenType<'input>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{UserDefinedContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for UserDefinedContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for UserDefinedContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_userDefined(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for UserDefinedContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for UserDefinedContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for UserDefinedContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for UserDefinedContext<'input> {}

impl<'input> UserDefinedContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::UserDefinedContext(
				BaseParserRuleContext::copy_from(ctx,UserDefinedContextExt{
					isnull:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type FloatContext<'input> = BaseParserRuleContext<'input,FloatContextExt<'input>>;

pub trait FloatContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn floatType(&self) -> Option<Rc<FloatTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> FloatContextAttrs<'input> for FloatContext<'input>{}

pub struct FloatContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{FloatContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for FloatContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FloatContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_float(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for FloatContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for FloatContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for FloatContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for FloatContext<'input> {}

impl<'input> FloatContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::FloatContext(
				BaseParserRuleContext::copy_from(ctx,FloatContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type IntervalYearContext<'input> = BaseParserRuleContext<'input,IntervalYearContextExt<'input>>;

pub trait IntervalYearContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn intervalYearType(&self) -> Option<Rc<IntervalYearTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> IntervalYearContextAttrs<'input> for IntervalYearContext<'input>{}

pub struct IntervalYearContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{IntervalYearContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for IntervalYearContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalYearContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_intervalYear(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for IntervalYearContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for IntervalYearContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for IntervalYearContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for IntervalYearContext<'input> {}

impl<'input> IntervalYearContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::IntervalYearContext(
				BaseParserRuleContext::copy_from(ctx,IntervalYearContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type UuidContext<'input> = BaseParserRuleContext<'input,UuidContextExt<'input>>;

pub trait UuidContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token UUID
	/// Returns `None` if there is no child corresponding to token UUID
	fn UUID(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_UUID, 0)
	}
	/// Retrieves first TerminalNode corresponding to token QMark
	/// Returns `None` if there is no child corresponding to token QMark
	fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_QMark, 0)
	}
}

impl<'input> UuidContextAttrs<'input> for UuidContext<'input>{}

pub struct UuidContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	pub isnull: Option<TokenType<'input>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{UuidContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for UuidContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for UuidContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_uuid(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for UuidContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for UuidContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for UuidContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for UuidContext<'input> {}

impl<'input> UuidContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::UuidContext(
				BaseParserRuleContext::copy_from(ctx,UuidContextExt{
					isnull:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type IntContext<'input> = BaseParserRuleContext<'input,IntContextExt<'input>>;

pub trait IntContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn intType(&self) -> Option<Rc<IntTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> IntContextAttrs<'input> for IntContext<'input>{}

pub struct IntContextExt<'input>{
	base:ScalarTypeContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{IntContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for IntContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_int(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for IntContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_scalarType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_scalarType }
}

impl<'input> Borrow<ScalarTypeContextExt<'input>> for IntContext<'input>{
	fn borrow(&self) -> &ScalarTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ScalarTypeContextExt<'input>> for IntContext<'input>{
	fn borrow_mut(&mut self) -> &mut ScalarTypeContextExt<'input> { &mut self.base }
}

impl<'input> ScalarTypeContextAttrs<'input> for IntContext<'input> {}

impl<'input> IntContextExt<'input>{
	fn new(ctx: &dyn ScalarTypeContextAttrs<'input>) -> Rc<ScalarTypeContextAll<'input>>  {
		Rc::new(
			ScalarTypeContextAll::IntContext(
				BaseParserRuleContext::copy_from(ctx,IntContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn scalarType(&mut self,)
	-> Result<Rc<ScalarTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ScalarTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 98, RULE_scalarType);
        let mut _localctx: Rc<ScalarTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(516);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Boolean |FuncTestCaseParser_Bool 
				=> {
					let tmp = BooleanContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
					_localctx = tmp;
					{
					/*InvokeRule booleanType*/
					recog.base.set_state(500);
					recog.booleanType()?;

					}
				}

			FuncTestCaseParser_I8 |FuncTestCaseParser_I16 |FuncTestCaseParser_I32 |
			FuncTestCaseParser_I64 
				=> {
					let tmp = IntContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 2)?;
					_localctx = tmp;
					{
					/*InvokeRule intType*/
					recog.base.set_state(501);
					recog.intType()?;

					}
				}

			FuncTestCaseParser_FP32 |FuncTestCaseParser_FP64 
				=> {
					let tmp = FloatContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 3)?;
					_localctx = tmp;
					{
					/*InvokeRule floatType*/
					recog.base.set_state(502);
					recog.floatType()?;

					}
				}

			FuncTestCaseParser_String |FuncTestCaseParser_Str 
				=> {
					let tmp = StringContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 4)?;
					_localctx = tmp;
					{
					/*InvokeRule stringType*/
					recog.base.set_state(503);
					recog.stringType()?;

					}
				}

			FuncTestCaseParser_Binary |FuncTestCaseParser_VBin 
				=> {
					let tmp = BinaryContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 5)?;
					_localctx = tmp;
					{
					/*InvokeRule binaryType*/
					recog.base.set_state(504);
					recog.binaryType()?;

					}
				}

			FuncTestCaseParser_Date 
				=> {
					let tmp = DateContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 6)?;
					_localctx = tmp;
					{
					/*InvokeRule dateType*/
					recog.base.set_state(505);
					recog.dateType()?;

					}
				}

			FuncTestCaseParser_Interval_Year |FuncTestCaseParser_IYear 
				=> {
					let tmp = IntervalYearContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 7)?;
					_localctx = tmp;
					{
					/*InvokeRule intervalYearType*/
					recog.base.set_state(506);
					recog.intervalYearType()?;

					}
				}

			FuncTestCaseParser_UUID 
				=> {
					let tmp = UuidContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 8)?;
					_localctx = tmp;
					{
					recog.base.set_state(507);
					recog.base.match_token(FuncTestCaseParser_UUID,&mut recog.err_handler)?;

					recog.base.set_state(509);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if _la==FuncTestCaseParser_QMark {
						{
						recog.base.set_state(508);
						let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
						if let ScalarTypeContextAll::UuidContext(ctx) = cast_mut::<_,ScalarTypeContextAll >(&mut _localctx){
						ctx.isnull = Some(tmp.clone()); } else {unreachable!("cant cast");}  

						}
					}

					}
				}

			FuncTestCaseParser_UserDefined 
				=> {
					let tmp = UserDefinedContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 9)?;
					_localctx = tmp;
					{
					recog.base.set_state(511);
					recog.base.match_token(FuncTestCaseParser_UserDefined,&mut recog.err_handler)?;

					recog.base.set_state(512);
					recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

					recog.base.set_state(514);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					if _la==FuncTestCaseParser_QMark {
						{
						recog.base.set_state(513);
						let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
						if let ScalarTypeContextAll::UserDefinedContext(ctx) = cast_mut::<_,ScalarTypeContextAll >(&mut _localctx){
						ctx.isnull = Some(tmp.clone()); } else {unreachable!("cant cast");}  

						}
					}

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- booleanType ----------------
pub type BooleanTypeContextAll<'input> = BooleanTypeContext<'input>;


pub type BooleanTypeContext<'input> = BaseParserRuleContext<'input,BooleanTypeContextExt<'input>>;

#[derive(Clone)]
pub struct BooleanTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for BooleanTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for BooleanTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_booleanType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_booleanType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for BooleanTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_booleanType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_booleanType }
}
antlr4rust::tid!{BooleanTypeContextExt<'a>}

impl<'input> BooleanTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<BooleanTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,BooleanTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait BooleanTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<BooleanTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Bool
/// Returns `None` if there is no child corresponding to token Bool
fn Bool(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Bool, 0)
}
/// Retrieves first TerminalNode corresponding to token Boolean
/// Returns `None` if there is no child corresponding to token Boolean
fn Boolean(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Boolean, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> BooleanTypeContextAttrs<'input> for BooleanTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn booleanType(&mut self,)
	-> Result<Rc<BooleanTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = BooleanTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 100, RULE_booleanType);
        let mut _localctx: Rc<BooleanTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(518);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Boolean || _la==FuncTestCaseParser_Bool) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(520);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(519);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,BooleanTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- stringType ----------------
pub type StringTypeContextAll<'input> = StringTypeContext<'input>;


pub type StringTypeContext<'input> = BaseParserRuleContext<'input,StringTypeContextExt<'input>>;

#[derive(Clone)]
pub struct StringTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for StringTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for StringTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_stringType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_stringType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for StringTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_stringType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_stringType }
}
antlr4rust::tid!{StringTypeContextExt<'a>}

impl<'input> StringTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<StringTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,StringTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait StringTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<StringTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Str
/// Returns `None` if there is no child corresponding to token Str
fn Str(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Str, 0)
}
/// Retrieves first TerminalNode corresponding to token String
/// Returns `None` if there is no child corresponding to token String
fn String(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_String, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> StringTypeContextAttrs<'input> for StringTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn stringType(&mut self,)
	-> Result<Rc<StringTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = StringTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 102, RULE_stringType);
        let mut _localctx: Rc<StringTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(522);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_String || _la==FuncTestCaseParser_Str) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(524);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(523);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,StringTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- binaryType ----------------
pub type BinaryTypeContextAll<'input> = BinaryTypeContext<'input>;


pub type BinaryTypeContext<'input> = BaseParserRuleContext<'input,BinaryTypeContextExt<'input>>;

#[derive(Clone)]
pub struct BinaryTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for BinaryTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for BinaryTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_binaryType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_binaryType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for BinaryTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_binaryType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_binaryType }
}
antlr4rust::tid!{BinaryTypeContextExt<'a>}

impl<'input> BinaryTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<BinaryTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,BinaryTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait BinaryTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<BinaryTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Binary
/// Returns `None` if there is no child corresponding to token Binary
fn Binary(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Binary, 0)
}
/// Retrieves first TerminalNode corresponding to token VBin
/// Returns `None` if there is no child corresponding to token VBin
fn VBin(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_VBin, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> BinaryTypeContextAttrs<'input> for BinaryTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn binaryType(&mut self,)
	-> Result<Rc<BinaryTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = BinaryTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 104, RULE_binaryType);
        let mut _localctx: Rc<BinaryTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(526);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Binary || _la==FuncTestCaseParser_VBin) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(528);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(527);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,BinaryTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intType ----------------
pub type IntTypeContextAll<'input> = IntTypeContext<'input>;


pub type IntTypeContext<'input> = BaseParserRuleContext<'input,IntTypeContextExt<'input>>;

#[derive(Clone)]
pub struct IntTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intType }
}
antlr4rust::tid!{IntTypeContextExt<'a>}

impl<'input> IntTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait IntTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token I8
/// Returns `None` if there is no child corresponding to token I8
fn I8(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_I8, 0)
}
/// Retrieves first TerminalNode corresponding to token I16
/// Returns `None` if there is no child corresponding to token I16
fn I16(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_I16, 0)
}
/// Retrieves first TerminalNode corresponding to token I32
/// Returns `None` if there is no child corresponding to token I32
fn I32(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_I32, 0)
}
/// Retrieves first TerminalNode corresponding to token I64
/// Returns `None` if there is no child corresponding to token I64
fn I64(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_I64, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> IntTypeContextAttrs<'input> for IntTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intType(&mut self,)
	-> Result<Rc<IntTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 106, RULE_intType);
        let mut _localctx: Rc<IntTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(530);
			_la = recog.base.input.la(1);
			if { !(((((_la - 57)) & !0x3f) == 0 && ((1usize << (_la - 57)) & 15) != 0)) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(532);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(531);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,IntTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- floatType ----------------
pub type FloatTypeContextAll<'input> = FloatTypeContext<'input>;


pub type FloatTypeContext<'input> = BaseParserRuleContext<'input,FloatTypeContextExt<'input>>;

#[derive(Clone)]
pub struct FloatTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FloatTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FloatTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_floatType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_floatType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FloatTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_floatType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_floatType }
}
antlr4rust::tid!{FloatTypeContextExt<'a>}

impl<'input> FloatTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FloatTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FloatTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait FloatTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FloatTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token FP32
/// Returns `None` if there is no child corresponding to token FP32
fn FP32(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FP32, 0)
}
/// Retrieves first TerminalNode corresponding to token FP64
/// Returns `None` if there is no child corresponding to token FP64
fn FP64(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FP64, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> FloatTypeContextAttrs<'input> for FloatTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn floatType(&mut self,)
	-> Result<Rc<FloatTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FloatTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 108, RULE_floatType);
        let mut _localctx: Rc<FloatTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(534);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_FP32 || _la==FuncTestCaseParser_FP64) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(536);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(535);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,FloatTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- dateType ----------------
pub type DateTypeContextAll<'input> = DateTypeContext<'input>;


pub type DateTypeContext<'input> = BaseParserRuleContext<'input,DateTypeContextExt<'input>>;

#[derive(Clone)]
pub struct DateTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DateTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DateTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_dateType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_dateType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DateTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_dateType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_dateType }
}
antlr4rust::tid!{DateTypeContextExt<'a>}

impl<'input> DateTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DateTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DateTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait DateTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DateTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Date
/// Returns `None` if there is no child corresponding to token Date
fn Date(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Date, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> DateTypeContextAttrs<'input> for DateTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn dateType(&mut self,)
	-> Result<Rc<DateTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DateTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 110, RULE_dateType);
        let mut _localctx: Rc<DateTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(538);
			recog.base.match_token(FuncTestCaseParser_Date,&mut recog.err_handler)?;

			recog.base.set_state(540);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(539);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,DateTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalYearType ----------------
pub type IntervalYearTypeContextAll<'input> = IntervalYearTypeContext<'input>;


pub type IntervalYearTypeContext<'input> = BaseParserRuleContext<'input,IntervalYearTypeContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalYearTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalYearTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalYearTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalYearType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalYearType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalYearTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalYearType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalYearType }
}
antlr4rust::tid!{IntervalYearTypeContextExt<'a>}

impl<'input> IntervalYearTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalYearTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalYearTypeContextExt{
				isnull: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalYearTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalYearTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IYear
/// Returns `None` if there is no child corresponding to token IYear
fn IYear(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IYear, 0)
}
/// Retrieves first TerminalNode corresponding to token Interval_Year
/// Returns `None` if there is no child corresponding to token Interval_Year
fn Interval_Year(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Interval_Year, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> IntervalYearTypeContextAttrs<'input> for IntervalYearTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalYearType(&mut self,)
	-> Result<Rc<IntervalYearTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalYearTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 112, RULE_intervalYearType);
        let mut _localctx: Rc<IntervalYearTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(542);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Interval_Year || _la==FuncTestCaseParser_IYear) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(544);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(543);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,IntervalYearTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalDayType ----------------
pub type IntervalDayTypeContextAll<'input> = IntervalDayTypeContext<'input>;


pub type IntervalDayTypeContext<'input> = BaseParserRuleContext<'input,IntervalDayTypeContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalDayTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub len: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalDayTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalDayTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalDayType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalDayType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalDayTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalDayType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalDayType }
}
antlr4rust::tid!{IntervalDayTypeContextExt<'a>}

impl<'input> IntervalDayTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalDayTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalDayTypeContextExt{
				isnull: None, 
				len: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalDayTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalDayTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token IDay
/// Returns `None` if there is no child corresponding to token IDay
fn IDay(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IDay, 0)
}
/// Retrieves first TerminalNode corresponding to token Interval_Day
/// Returns `None` if there is no child corresponding to token Interval_Day
fn Interval_Day(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Interval_Day, 0)
}
/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntervalDayTypeContextAttrs<'input> for IntervalDayTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalDayType(&mut self,)
	-> Result<Rc<IntervalDayTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalDayTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 114, RULE_intervalDayType);
        let mut _localctx: Rc<IntervalDayTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(546);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Interval_Day || _la==FuncTestCaseParser_IDay) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(548);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(547);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,IntervalDayTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(554);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OAngleBracket {
				{
				recog.base.set_state(550);
				recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

				/*InvokeRule numericParameter*/
				recog.base.set_state(551);
				let tmp = recog.numericParameter()?;
				 cast_mut::<_,IntervalDayTypeContext >(&mut _localctx).len = Some(tmp.clone());
				  

				recog.base.set_state(552);
				recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- intervalCompoundType ----------------
pub type IntervalCompoundTypeContextAll<'input> = IntervalCompoundTypeContext<'input>;


pub type IntervalCompoundTypeContext<'input> = BaseParserRuleContext<'input,IntervalCompoundTypeContextExt<'input>>;

#[derive(Clone)]
pub struct IntervalCompoundTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub len: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IntervalCompoundTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntervalCompoundTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_intervalCompoundType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_intervalCompoundType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IntervalCompoundTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_intervalCompoundType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_intervalCompoundType }
}
antlr4rust::tid!{IntervalCompoundTypeContextExt<'a>}

impl<'input> IntervalCompoundTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IntervalCompoundTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IntervalCompoundTypeContextExt{
				isnull: None, 
				len: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait IntervalCompoundTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IntervalCompoundTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token ICompound
/// Returns `None` if there is no child corresponding to token ICompound
fn ICompound(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ICompound, 0)
}
/// Retrieves first TerminalNode corresponding to token Interval_Compound
/// Returns `None` if there is no child corresponding to token Interval_Compound
fn Interval_Compound(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Interval_Compound, 0)
}
/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> IntervalCompoundTypeContextAttrs<'input> for IntervalCompoundTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn intervalCompoundType(&mut self,)
	-> Result<Rc<IntervalCompoundTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IntervalCompoundTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 116, RULE_intervalCompoundType);
        let mut _localctx: Rc<IntervalCompoundTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(556);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Interval_Compound || _la==FuncTestCaseParser_ICompound) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(558);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(557);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,IntervalCompoundTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(564);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OAngleBracket {
				{
				recog.base.set_state(560);
				recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

				/*InvokeRule numericParameter*/
				recog.base.set_state(561);
				let tmp = recog.numericParameter()?;
				 cast_mut::<_,IntervalCompoundTypeContext >(&mut _localctx).len = Some(tmp.clone());
				  

				recog.base.set_state(562);
				recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- fixedCharType ----------------
pub type FixedCharTypeContextAll<'input> = FixedCharTypeContext<'input>;


pub type FixedCharTypeContext<'input> = BaseParserRuleContext<'input,FixedCharTypeContextExt<'input>>;

#[derive(Clone)]
pub struct FixedCharTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub len: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FixedCharTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FixedCharTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_fixedCharType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_fixedCharType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FixedCharTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_fixedCharType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_fixedCharType }
}
antlr4rust::tid!{FixedCharTypeContextExt<'a>}

impl<'input> FixedCharTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FixedCharTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FixedCharTypeContextExt{
				isnull: None, 
				len: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait FixedCharTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FixedCharTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token FChar
/// Returns `None` if there is no child corresponding to token FChar
fn FChar(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FChar, 0)
}
/// Retrieves first TerminalNode corresponding to token FixedChar
/// Returns `None` if there is no child corresponding to token FixedChar
fn FixedChar(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FixedChar, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> FixedCharTypeContextAttrs<'input> for FixedCharTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn fixedCharType(&mut self,)
	-> Result<Rc<FixedCharTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FixedCharTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 118, RULE_fixedCharType);
        let mut _localctx: Rc<FixedCharTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(566);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_FixedChar || _la==FuncTestCaseParser_FChar) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(568);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(567);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,FixedCharTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(570);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(571);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,FixedCharTypeContext >(&mut _localctx).len = Some(tmp.clone());
			  

			recog.base.set_state(572);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- varCharType ----------------
pub type VarCharTypeContextAll<'input> = VarCharTypeContext<'input>;


pub type VarCharTypeContext<'input> = BaseParserRuleContext<'input,VarCharTypeContextExt<'input>>;

#[derive(Clone)]
pub struct VarCharTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub len: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for VarCharTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for VarCharTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_varCharType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_varCharType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for VarCharTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_varCharType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_varCharType }
}
antlr4rust::tid!{VarCharTypeContextExt<'a>}

impl<'input> VarCharTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<VarCharTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,VarCharTypeContextExt{
				isnull: None, 
				len: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait VarCharTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<VarCharTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token VChar
/// Returns `None` if there is no child corresponding to token VChar
fn VChar(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_VChar, 0)
}
/// Retrieves first TerminalNode corresponding to token VarChar
/// Returns `None` if there is no child corresponding to token VarChar
fn VarChar(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_VarChar, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> VarCharTypeContextAttrs<'input> for VarCharTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn varCharType(&mut self,)
	-> Result<Rc<VarCharTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = VarCharTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 120, RULE_varCharType);
        let mut _localctx: Rc<VarCharTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(574);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_VarChar || _la==FuncTestCaseParser_VChar) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(576);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(575);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,VarCharTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(578);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(579);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,VarCharTypeContext >(&mut _localctx).len = Some(tmp.clone());
			  

			recog.base.set_state(580);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- fixedBinaryType ----------------
pub type FixedBinaryTypeContextAll<'input> = FixedBinaryTypeContext<'input>;


pub type FixedBinaryTypeContext<'input> = BaseParserRuleContext<'input,FixedBinaryTypeContextExt<'input>>;

#[derive(Clone)]
pub struct FixedBinaryTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub len: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FixedBinaryTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FixedBinaryTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_fixedBinaryType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_fixedBinaryType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FixedBinaryTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_fixedBinaryType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_fixedBinaryType }
}
antlr4rust::tid!{FixedBinaryTypeContextExt<'a>}

impl<'input> FixedBinaryTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FixedBinaryTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FixedBinaryTypeContextExt{
				isnull: None, 
				len: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait FixedBinaryTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FixedBinaryTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token FBin
/// Returns `None` if there is no child corresponding to token FBin
fn FBin(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FBin, 0)
}
/// Retrieves first TerminalNode corresponding to token FixedBinary
/// Returns `None` if there is no child corresponding to token FixedBinary
fn FixedBinary(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_FixedBinary, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> FixedBinaryTypeContextAttrs<'input> for FixedBinaryTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn fixedBinaryType(&mut self,)
	-> Result<Rc<FixedBinaryTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FixedBinaryTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 122, RULE_fixedBinaryType);
        let mut _localctx: Rc<FixedBinaryTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(582);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_FixedBinary || _la==FuncTestCaseParser_FBin) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(584);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(583);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,FixedBinaryTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(586);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(587);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,FixedBinaryTypeContext >(&mut _localctx).len = Some(tmp.clone());
			  

			recog.base.set_state(588);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- decimalType ----------------
pub type DecimalTypeContextAll<'input> = DecimalTypeContext<'input>;


pub type DecimalTypeContext<'input> = BaseParserRuleContext<'input,DecimalTypeContextExt<'input>>;

#[derive(Clone)]
pub struct DecimalTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub precision: Option<Rc<NumericParameterContextAll<'input>>>,
	pub scale: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for DecimalTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for DecimalTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_decimalType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_decimalType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for DecimalTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_decimalType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_decimalType }
}
antlr4rust::tid!{DecimalTypeContextExt<'a>}

impl<'input> DecimalTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<DecimalTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,DecimalTypeContextExt{
				isnull: None, 
				precision: None, scale: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait DecimalTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<DecimalTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Dec
/// Returns `None` if there is no child corresponding to token Dec
fn Dec(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Dec, 0)
}
/// Retrieves first TerminalNode corresponding to token Decimal
/// Returns `None` if there is no child corresponding to token Decimal
fn Decimal(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Decimal, 0)
}
/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token Comma
/// Returns `None` if there is no child corresponding to token Comma
fn Comma(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}
fn numericParameter_all(&self) ->  Vec<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn numericParameter(&self, i: usize) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}

}

impl<'input> DecimalTypeContextAttrs<'input> for DecimalTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn decimalType(&mut self,)
	-> Result<Rc<DecimalTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = DecimalTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 124, RULE_decimalType);
        let mut _localctx: Rc<DecimalTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(590);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Decimal || _la==FuncTestCaseParser_Dec) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(592);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(591);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,DecimalTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(600);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_OAngleBracket {
				{
				recog.base.set_state(594);
				recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

				/*InvokeRule numericParameter*/
				recog.base.set_state(595);
				let tmp = recog.numericParameter()?;
				 cast_mut::<_,DecimalTypeContext >(&mut _localctx).precision = Some(tmp.clone());
				  

				recog.base.set_state(596);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule numericParameter*/
				recog.base.set_state(597);
				let tmp = recog.numericParameter()?;
				 cast_mut::<_,DecimalTypeContext >(&mut _localctx).scale = Some(tmp.clone());
				  

				recog.base.set_state(598);
				recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

				}
			}

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimeType ----------------
pub type PrecisionTimeTypeContextAll<'input> = PrecisionTimeTypeContext<'input>;


pub type PrecisionTimeTypeContext<'input> = BaseParserRuleContext<'input,PrecisionTimeTypeContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimeTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub precision: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimeTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimeTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimeType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimeType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimeTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimeType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimeType }
}
antlr4rust::tid!{PrecisionTimeTypeContextExt<'a>}

impl<'input> PrecisionTimeTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimeTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimeTypeContextExt{
				isnull: None, 
				precision: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimeTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimeTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token PT
/// Returns `None` if there is no child corresponding to token PT
fn PT(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_PT, 0)
}
/// Retrieves first TerminalNode corresponding to token Precision_Time
/// Returns `None` if there is no child corresponding to token Precision_Time
fn Precision_Time(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Precision_Time, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> PrecisionTimeTypeContextAttrs<'input> for PrecisionTimeTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimeType(&mut self,)
	-> Result<Rc<PrecisionTimeTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimeTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 126, RULE_precisionTimeType);
        let mut _localctx: Rc<PrecisionTimeTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(602);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Precision_Time || _la==FuncTestCaseParser_PT) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(604);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(603);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,PrecisionTimeTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(606);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(607);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,PrecisionTimeTypeContext >(&mut _localctx).precision = Some(tmp.clone());
			  

			recog.base.set_state(608);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimestampType ----------------
pub type PrecisionTimestampTypeContextAll<'input> = PrecisionTimestampTypeContext<'input>;


pub type PrecisionTimestampTypeContext<'input> = BaseParserRuleContext<'input,PrecisionTimestampTypeContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimestampTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub precision: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimestampTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimestampTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimestampType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimestampType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimestampTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimestampType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimestampType }
}
antlr4rust::tid!{PrecisionTimestampTypeContextExt<'a>}

impl<'input> PrecisionTimestampTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimestampTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimestampTypeContextExt{
				isnull: None, 
				precision: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimestampTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimestampTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token PTs
/// Returns `None` if there is no child corresponding to token PTs
fn PTs(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_PTs, 0)
}
/// Retrieves first TerminalNode corresponding to token Precision_Timestamp
/// Returns `None` if there is no child corresponding to token Precision_Timestamp
fn Precision_Timestamp(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Precision_Timestamp, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> PrecisionTimestampTypeContextAttrs<'input> for PrecisionTimestampTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimestampType(&mut self,)
	-> Result<Rc<PrecisionTimestampTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimestampTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 128, RULE_precisionTimestampType);
        let mut _localctx: Rc<PrecisionTimestampTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(610);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Precision_Timestamp || _la==FuncTestCaseParser_PTs) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(612);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(611);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,PrecisionTimestampTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(614);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(615);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,PrecisionTimestampTypeContext >(&mut _localctx).precision = Some(tmp.clone());
			  

			recog.base.set_state(616);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- precisionTimestampTZType ----------------
pub type PrecisionTimestampTZTypeContextAll<'input> = PrecisionTimestampTZTypeContext<'input>;


pub type PrecisionTimestampTZTypeContext<'input> = BaseParserRuleContext<'input,PrecisionTimestampTZTypeContextExt<'input>>;

#[derive(Clone)]
pub struct PrecisionTimestampTZTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub precision: Option<Rc<NumericParameterContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for PrecisionTimestampTZTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for PrecisionTimestampTZTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_precisionTimestampTZType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_precisionTimestampTZType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for PrecisionTimestampTZTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_precisionTimestampTZType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_precisionTimestampTZType }
}
antlr4rust::tid!{PrecisionTimestampTZTypeContextExt<'a>}

impl<'input> PrecisionTimestampTZTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<PrecisionTimestampTZTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,PrecisionTimestampTZTypeContextExt{
				isnull: None, 
				precision: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait PrecisionTimestampTZTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<PrecisionTimestampTZTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token PTsTZ
/// Returns `None` if there is no child corresponding to token PTsTZ
fn PTsTZ(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_PTsTZ, 0)
}
/// Retrieves first TerminalNode corresponding to token Precision_Timestamp_TZ
/// Returns `None` if there is no child corresponding to token Precision_Timestamp_TZ
fn Precision_Timestamp_TZ(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Precision_Timestamp_TZ, 0)
}
fn numericParameter(&self) -> Option<Rc<NumericParameterContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> PrecisionTimestampTZTypeContextAttrs<'input> for PrecisionTimestampTZTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn precisionTimestampTZType(&mut self,)
	-> Result<Rc<PrecisionTimestampTZTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = PrecisionTimestampTZTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 130, RULE_precisionTimestampTZType);
        let mut _localctx: Rc<PrecisionTimestampTZTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(618);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Precision_Timestamp_TZ || _la==FuncTestCaseParser_PTsTZ) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			recog.base.set_state(620);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(619);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,PrecisionTimestampTZTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(622);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule numericParameter*/
			recog.base.set_state(623);
			let tmp = recog.numericParameter()?;
			 cast_mut::<_,PrecisionTimestampTZTypeContext >(&mut _localctx).precision = Some(tmp.clone());
			  

			recog.base.set_state(624);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- listType ----------------
#[derive(Debug)]
pub enum ListTypeContextAll<'input>{
	ListContext(ListContext<'input>),
Error(ListTypeContext<'input>)
}
antlr4rust::tid!{ListTypeContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for ListTypeContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for ListTypeContextAll<'input>{}

impl<'input> Deref for ListTypeContextAll<'input>{
	type Target = dyn ListTypeContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use ListTypeContextAll::*;
		match self{
			ListContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ListTypeContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type ListTypeContext<'input> = BaseParserRuleContext<'input,ListTypeContextExt<'input>>;

#[derive(Clone)]
pub struct ListTypeContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ListTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ListTypeContext<'input>{
}

impl<'input> CustomRuleContext<'input> for ListTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_listType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_listType }
}
antlr4rust::tid!{ListTypeContextExt<'a>}

impl<'input> ListTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ListTypeContextAll<'input>> {
		Rc::new(
		ListTypeContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ListTypeContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait ListTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ListTypeContextExt<'input>>{


}

impl<'input> ListTypeContextAttrs<'input> for ListTypeContext<'input>{}

pub type ListContext<'input> = BaseParserRuleContext<'input,ListContextExt<'input>>;

pub trait ListContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token List
	/// Returns `None` if there is no child corresponding to token List
	fn List(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_List, 0)
	}
	/// Retrieves first TerminalNode corresponding to token OAngleBracket
	/// Returns `None` if there is no child corresponding to token OAngleBracket
	fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OAngleBracket, 0)
	}
	/// Retrieves first TerminalNode corresponding to token CAngleBracket
	/// Returns `None` if there is no child corresponding to token CAngleBracket
	fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CAngleBracket, 0)
	}
	fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
	/// Retrieves first TerminalNode corresponding to token QMark
	/// Returns `None` if there is no child corresponding to token QMark
	fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_QMark, 0)
	}
}

impl<'input> ListContextAttrs<'input> for ListContext<'input>{}

pub struct ListContextExt<'input>{
	base:ListTypeContextExt<'input>,
	pub isnull: Option<TokenType<'input>>,
	pub elemType: Option<Rc<DataTypeContextAll<'input>>>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{ListContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for ListContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ListContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_list(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for ListContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_listType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_listType }
}

impl<'input> Borrow<ListTypeContextExt<'input>> for ListContext<'input>{
	fn borrow(&self) -> &ListTypeContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<ListTypeContextExt<'input>> for ListContext<'input>{
	fn borrow_mut(&mut self) -> &mut ListTypeContextExt<'input> { &mut self.base }
}

impl<'input> ListTypeContextAttrs<'input> for ListContext<'input> {}

impl<'input> ListContextExt<'input>{
	fn new(ctx: &dyn ListTypeContextAttrs<'input>) -> Rc<ListTypeContextAll<'input>>  {
		Rc::new(
			ListTypeContextAll::ListContext(
				BaseParserRuleContext::copy_from(ctx,ListContextExt{
					isnull:None, 
        			elemType:None, 
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn listType(&mut self,)
	-> Result<Rc<ListTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ListTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 132, RULE_listType);
        let mut _localctx: Rc<ListTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			let tmp = ListContextExt::new(&**_localctx);
			recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
			_localctx = tmp;
			{
			recog.base.set_state(626);
			recog.base.match_token(FuncTestCaseParser_List,&mut recog.err_handler)?;

			recog.base.set_state(628);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(627);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				if let ListTypeContextAll::ListContext(ctx) = cast_mut::<_,ListTypeContextAll >(&mut _localctx){
				ctx.isnull = Some(tmp.clone()); } else {unreachable!("cant cast");}  

				}
			}

			recog.base.set_state(630);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule dataType*/
			recog.base.set_state(631);
			let tmp = recog.dataType()?;
			if let ListTypeContextAll::ListContext(ctx) = cast_mut::<_,ListTypeContextAll >(&mut _localctx){
			ctx.elemType = Some(tmp.clone()); } else {unreachable!("cant cast");}  

			recog.base.set_state(632);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- funcType ----------------
pub type FuncTypeContextAll<'input> = FuncTypeContext<'input>;


pub type FuncTypeContext<'input> = BaseParserRuleContext<'input,FuncTypeContextExt<'input>>;

#[derive(Clone)]
pub struct FuncTypeContextExt<'input>{
	pub isnull: Option<TokenType<'input>>,
	pub params: Option<Rc<FuncParametersContextAll<'input>>>,
	pub returnType: Option<Rc<DataTypeContextAll<'input>>>,
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FuncTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_funcType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_funcType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FuncTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcType }
}
antlr4rust::tid!{FuncTypeContextExt<'a>}

impl<'input> FuncTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FuncTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FuncTypeContextExt{
				isnull: None, 
				params: None, returnType: None, 

				ph:PhantomData
			}),
		)
	}
}

pub trait FuncTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FuncTypeContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Func
/// Returns `None` if there is no child corresponding to token Func
fn Func(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Func, 0)
}
/// Retrieves first TerminalNode corresponding to token OAngleBracket
/// Returns `None` if there is no child corresponding to token OAngleBracket
fn OAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_OAngleBracket, 0)
}
/// Retrieves first TerminalNode corresponding to token Arrow
/// Returns `None` if there is no child corresponding to token Arrow
fn Arrow(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Arrow, 0)
}
/// Retrieves first TerminalNode corresponding to token CAngleBracket
/// Returns `None` if there is no child corresponding to token CAngleBracket
fn CAngleBracket(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_CAngleBracket, 0)
}
fn funcParameters(&self) -> Option<Rc<FuncParametersContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token QMark
/// Returns `None` if there is no child corresponding to token QMark
fn QMark(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_QMark, 0)
}

}

impl<'input> FuncTypeContextAttrs<'input> for FuncTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn funcType(&mut self,)
	-> Result<Rc<FuncTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FuncTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 134, RULE_funcType);
        let mut _localctx: Rc<FuncTypeContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(634);
			recog.base.match_token(FuncTestCaseParser_Func,&mut recog.err_handler)?;

			recog.base.set_state(636);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			if _la==FuncTestCaseParser_QMark {
				{
				recog.base.set_state(635);
				let tmp = recog.base.match_token(FuncTestCaseParser_QMark,&mut recog.err_handler)?;
				 cast_mut::<_,FuncTypeContext >(&mut _localctx).isnull = Some(tmp.clone());
				  

				}
			}

			recog.base.set_state(638);
			recog.base.match_token(FuncTestCaseParser_OAngleBracket,&mut recog.err_handler)?;

			/*InvokeRule funcParameters*/
			recog.base.set_state(639);
			let tmp = recog.funcParameters()?;
			 cast_mut::<_,FuncTypeContext >(&mut _localctx).params = Some(tmp.clone());
			  

			recog.base.set_state(640);
			recog.base.match_token(FuncTestCaseParser_Arrow,&mut recog.err_handler)?;

			/*InvokeRule dataType*/
			recog.base.set_state(641);
			let tmp = recog.dataType()?;
			 cast_mut::<_,FuncTypeContext >(&mut _localctx).returnType = Some(tmp.clone());
			  

			recog.base.set_state(642);
			recog.base.match_token(FuncTestCaseParser_CAngleBracket,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- funcParameters ----------------
#[derive(Debug)]
pub enum FuncParametersContextAll<'input>{
	SingleFuncParamContext(SingleFuncParamContext<'input>),
	FuncParamsWithParensContext(FuncParamsWithParensContext<'input>),
Error(FuncParametersContext<'input>)
}
antlr4rust::tid!{FuncParametersContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for FuncParametersContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for FuncParametersContextAll<'input>{}

impl<'input> Deref for FuncParametersContextAll<'input>{
	type Target = dyn FuncParametersContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use FuncParametersContextAll::*;
		match self{
			SingleFuncParamContext(inner) => inner,
			FuncParamsWithParensContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncParametersContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type FuncParametersContext<'input> = BaseParserRuleContext<'input,FuncParametersContextExt<'input>>;

#[derive(Clone)]
pub struct FuncParametersContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FuncParametersContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncParametersContext<'input>{
}

impl<'input> CustomRuleContext<'input> for FuncParametersContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcParameters }
}
antlr4rust::tid!{FuncParametersContextExt<'a>}

impl<'input> FuncParametersContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FuncParametersContextAll<'input>> {
		Rc::new(
		FuncParametersContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FuncParametersContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait FuncParametersContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FuncParametersContextExt<'input>>{


}

impl<'input> FuncParametersContextAttrs<'input> for FuncParametersContext<'input>{}

pub type SingleFuncParamContext<'input> = BaseParserRuleContext<'input,SingleFuncParamContextExt<'input>>;

pub trait SingleFuncParamContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	fn dataType(&self) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(0)
	}
}

impl<'input> SingleFuncParamContextAttrs<'input> for SingleFuncParamContext<'input>{}

pub struct SingleFuncParamContextExt<'input>{
	base:FuncParametersContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{SingleFuncParamContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for SingleFuncParamContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for SingleFuncParamContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_singleFuncParam(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for SingleFuncParamContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcParameters }
}

impl<'input> Borrow<FuncParametersContextExt<'input>> for SingleFuncParamContext<'input>{
	fn borrow(&self) -> &FuncParametersContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<FuncParametersContextExt<'input>> for SingleFuncParamContext<'input>{
	fn borrow_mut(&mut self) -> &mut FuncParametersContextExt<'input> { &mut self.base }
}

impl<'input> FuncParametersContextAttrs<'input> for SingleFuncParamContext<'input> {}

impl<'input> SingleFuncParamContextExt<'input>{
	fn new(ctx: &dyn FuncParametersContextAttrs<'input>) -> Rc<FuncParametersContextAll<'input>>  {
		Rc::new(
			FuncParametersContextAll::SingleFuncParamContext(
				BaseParserRuleContext::copy_from(ctx,SingleFuncParamContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

pub type FuncParamsWithParensContext<'input> = BaseParserRuleContext<'input,FuncParamsWithParensContextExt<'input>>;

pub trait FuncParamsWithParensContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token OParen
	/// Returns `None` if there is no child corresponding to token OParen
	fn OParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_OParen, 0)
	}
	fn dataType_all(&self) ->  Vec<Rc<DataTypeContextAll<'input>>> where Self:Sized{
		self.children_of_type()
	}
	fn dataType(&self, i: usize) -> Option<Rc<DataTypeContextAll<'input>>> where Self:Sized{
		self.child_of_type(i)
	}
	/// Retrieves first TerminalNode corresponding to token CParen
	/// Returns `None` if there is no child corresponding to token CParen
	fn CParen(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_CParen, 0)
	}
	/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
	fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
		self.children_of_type()
	}
	/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
	/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
	fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_Comma, i)
	}
}

impl<'input> FuncParamsWithParensContextAttrs<'input> for FuncParamsWithParensContext<'input>{}

pub struct FuncParamsWithParensContextExt<'input>{
	base:FuncParametersContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{FuncParamsWithParensContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for FuncParamsWithParensContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncParamsWithParensContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_funcParamsWithParens(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for FuncParamsWithParensContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcParameters }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcParameters }
}

impl<'input> Borrow<FuncParametersContextExt<'input>> for FuncParamsWithParensContext<'input>{
	fn borrow(&self) -> &FuncParametersContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<FuncParametersContextExt<'input>> for FuncParamsWithParensContext<'input>{
	fn borrow_mut(&mut self) -> &mut FuncParametersContextExt<'input> { &mut self.base }
}

impl<'input> FuncParametersContextAttrs<'input> for FuncParamsWithParensContext<'input> {}

impl<'input> FuncParamsWithParensContextExt<'input>{
	fn new(ctx: &dyn FuncParametersContextAttrs<'input>) -> Rc<FuncParametersContextAll<'input>>  {
		Rc::new(
			FuncParametersContextAll::FuncParamsWithParensContext(
				BaseParserRuleContext::copy_from(ctx,FuncParamsWithParensContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn funcParameters(&mut self,)
	-> Result<Rc<FuncParametersContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FuncParametersContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 136, RULE_funcParameters);
        let mut _localctx: Rc<FuncParametersContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(656);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Func |FuncTestCaseParser_Boolean |FuncTestCaseParser_I8 |
			FuncTestCaseParser_I16 |FuncTestCaseParser_I32 |FuncTestCaseParser_I64 |
			FuncTestCaseParser_FP32 |FuncTestCaseParser_FP64 |FuncTestCaseParser_String |
			FuncTestCaseParser_Binary |FuncTestCaseParser_Date |FuncTestCaseParser_Interval_Year |
			FuncTestCaseParser_Interval_Day |FuncTestCaseParser_Interval_Compound |
			FuncTestCaseParser_UUID |FuncTestCaseParser_Decimal |FuncTestCaseParser_Precision_Time |
			FuncTestCaseParser_Precision_Timestamp |FuncTestCaseParser_Precision_Timestamp_TZ |
			FuncTestCaseParser_FixedChar |FuncTestCaseParser_VarChar |FuncTestCaseParser_FixedBinary |
			FuncTestCaseParser_List |FuncTestCaseParser_UserDefined |FuncTestCaseParser_Bool |
			FuncTestCaseParser_Str |FuncTestCaseParser_VBin |FuncTestCaseParser_IYear |
			FuncTestCaseParser_IDay |FuncTestCaseParser_ICompound |FuncTestCaseParser_Dec |
			FuncTestCaseParser_PT |FuncTestCaseParser_PTs |FuncTestCaseParser_PTsTZ |
			FuncTestCaseParser_FChar |FuncTestCaseParser_VChar |FuncTestCaseParser_FBin 
				=> {
					let tmp = SingleFuncParamContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
					_localctx = tmp;
					{
					/*InvokeRule dataType*/
					recog.base.set_state(644);
					recog.dataType()?;

					}
				}

			FuncTestCaseParser_OParen 
				=> {
					let tmp = FuncParamsWithParensContextExt::new(&**_localctx);
					recog.base.enter_outer_alt(Some(tmp.clone()), 2)?;
					_localctx = tmp;
					{
					recog.base.set_state(645);
					recog.base.match_token(FuncTestCaseParser_OParen,&mut recog.err_handler)?;

					/*InvokeRule dataType*/
					recog.base.set_state(646);
					recog.dataType()?;

					recog.base.set_state(651);
					recog.err_handler.sync(&mut recog.base)?;
					_la = recog.base.input.la(1);
					while _la==FuncTestCaseParser_Comma {
						{
						{
						recog.base.set_state(647);
						recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

						/*InvokeRule dataType*/
						recog.base.set_state(648);
						recog.dataType()?;

						}
						}
						recog.base.set_state(653);
						recog.err_handler.sync(&mut recog.base)?;
						_la = recog.base.input.la(1);
					}
					recog.base.set_state(654);
					recog.base.match_token(FuncTestCaseParser_CParen,&mut recog.err_handler)?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- parameterizedType ----------------
pub type ParameterizedTypeContextAll<'input> = ParameterizedTypeContext<'input>;


pub type ParameterizedTypeContext<'input> = BaseParserRuleContext<'input,ParameterizedTypeContextExt<'input>>;

#[derive(Clone)]
pub struct ParameterizedTypeContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for ParameterizedTypeContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for ParameterizedTypeContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_parameterizedType(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_parameterizedType(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for ParameterizedTypeContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_parameterizedType }
	//fn type_rule_index() -> usize where Self: Sized { RULE_parameterizedType }
}
antlr4rust::tid!{ParameterizedTypeContextExt<'a>}

impl<'input> ParameterizedTypeContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<ParameterizedTypeContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,ParameterizedTypeContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait ParameterizedTypeContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<ParameterizedTypeContextExt<'input>>{

fn fixedCharType(&self) -> Option<Rc<FixedCharTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn varCharType(&self) -> Option<Rc<VarCharTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn fixedBinaryType(&self) -> Option<Rc<FixedBinaryTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn decimalType(&self) -> Option<Rc<DecimalTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intervalDayType(&self) -> Option<Rc<IntervalDayTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn intervalCompoundType(&self) -> Option<Rc<IntervalCompoundTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimeType(&self) -> Option<Rc<PrecisionTimeTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimestampType(&self) -> Option<Rc<PrecisionTimestampTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn precisionTimestampTZType(&self) -> Option<Rc<PrecisionTimestampTZTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn listType(&self) -> Option<Rc<ListTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
fn funcType(&self) -> Option<Rc<FuncTypeContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> ParameterizedTypeContextAttrs<'input> for ParameterizedTypeContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn parameterizedType(&mut self,)
	-> Result<Rc<ParameterizedTypeContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = ParameterizedTypeContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 138, RULE_parameterizedType);
        let mut _localctx: Rc<ParameterizedTypeContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(669);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_FixedChar |FuncTestCaseParser_FChar 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule fixedCharType*/
					recog.base.set_state(658);
					recog.fixedCharType()?;

					}
				}

			FuncTestCaseParser_VarChar |FuncTestCaseParser_VChar 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					/*InvokeRule varCharType*/
					recog.base.set_state(659);
					recog.varCharType()?;

					}
				}

			FuncTestCaseParser_FixedBinary |FuncTestCaseParser_FBin 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 3)?;
					recog.base.enter_outer_alt(None, 3)?;
					{
					/*InvokeRule fixedBinaryType*/
					recog.base.set_state(660);
					recog.fixedBinaryType()?;

					}
				}

			FuncTestCaseParser_Decimal |FuncTestCaseParser_Dec 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 4)?;
					recog.base.enter_outer_alt(None, 4)?;
					{
					/*InvokeRule decimalType*/
					recog.base.set_state(661);
					recog.decimalType()?;

					}
				}

			FuncTestCaseParser_Interval_Day |FuncTestCaseParser_IDay 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 5)?;
					recog.base.enter_outer_alt(None, 5)?;
					{
					/*InvokeRule intervalDayType*/
					recog.base.set_state(662);
					recog.intervalDayType()?;

					}
				}

			FuncTestCaseParser_Interval_Compound |FuncTestCaseParser_ICompound 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 6)?;
					recog.base.enter_outer_alt(None, 6)?;
					{
					/*InvokeRule intervalCompoundType*/
					recog.base.set_state(663);
					recog.intervalCompoundType()?;

					}
				}

			FuncTestCaseParser_Precision_Time |FuncTestCaseParser_PT 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 7)?;
					recog.base.enter_outer_alt(None, 7)?;
					{
					/*InvokeRule precisionTimeType*/
					recog.base.set_state(664);
					recog.precisionTimeType()?;

					}
				}

			FuncTestCaseParser_Precision_Timestamp |FuncTestCaseParser_PTs 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 8)?;
					recog.base.enter_outer_alt(None, 8)?;
					{
					/*InvokeRule precisionTimestampType*/
					recog.base.set_state(665);
					recog.precisionTimestampType()?;

					}
				}

			FuncTestCaseParser_Precision_Timestamp_TZ |FuncTestCaseParser_PTsTZ 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 9)?;
					recog.base.enter_outer_alt(None, 9)?;
					{
					/*InvokeRule precisionTimestampTZType*/
					recog.base.set_state(666);
					recog.precisionTimestampTZType()?;

					}
				}

			FuncTestCaseParser_List 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 10)?;
					recog.base.enter_outer_alt(None, 10)?;
					{
					/*InvokeRule listType*/
					recog.base.set_state(667);
					recog.listType()?;

					}
				}

			FuncTestCaseParser_Func 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 11)?;
					recog.base.enter_outer_alt(None, 11)?;
					{
					/*InvokeRule funcType*/
					recog.base.set_state(668);
					recog.funcType()?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- numericParameter ----------------
#[derive(Debug)]
pub enum NumericParameterContextAll<'input>{
	IntegerLiteralContext(IntegerLiteralContext<'input>),
Error(NumericParameterContext<'input>)
}
antlr4rust::tid!{NumericParameterContextAll<'a>}

impl<'input> antlr4rust::parser_rule_context::DerefSeal for NumericParameterContextAll<'input>{}

impl<'input> FuncTestCaseParserContext<'input> for NumericParameterContextAll<'input>{}

impl<'input> Deref for NumericParameterContextAll<'input>{
	type Target = dyn NumericParameterContextAttrs<'input> + 'input;
	fn deref(&self) -> &Self::Target{
		use NumericParameterContextAll::*;
		match self{
			IntegerLiteralContext(inner) => inner,
Error(inner) => inner
		}
	}
}
impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for NumericParameterContextAll<'input>{
    fn enter(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().enter(listener) }
    fn exit(&self, listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> { self.deref().exit(listener) }
}



pub type NumericParameterContext<'input> = BaseParserRuleContext<'input,NumericParameterContextExt<'input>>;

#[derive(Clone)]
pub struct NumericParameterContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for NumericParameterContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for NumericParameterContext<'input>{
}

impl<'input> CustomRuleContext<'input> for NumericParameterContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_numericParameter }
	//fn type_rule_index() -> usize where Self: Sized { RULE_numericParameter }
}
antlr4rust::tid!{NumericParameterContextExt<'a>}

impl<'input> NumericParameterContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<NumericParameterContextAll<'input>> {
		Rc::new(
		NumericParameterContextAll::Error(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,NumericParameterContextExt{

				ph:PhantomData
			}),
		)
		)
	}
}

pub trait NumericParameterContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<NumericParameterContextExt<'input>>{


}

impl<'input> NumericParameterContextAttrs<'input> for NumericParameterContext<'input>{}

pub type IntegerLiteralContext<'input> = BaseParserRuleContext<'input,IntegerLiteralContextExt<'input>>;

pub trait IntegerLiteralContextAttrs<'input>: FuncTestCaseParserContext<'input>{
	/// Retrieves first TerminalNode corresponding to token IntegerLiteral
	/// Returns `None` if there is no child corresponding to token IntegerLiteral
	fn IntegerLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
		self.get_token(FuncTestCaseParser_IntegerLiteral, 0)
	}
}

impl<'input> IntegerLiteralContextAttrs<'input> for IntegerLiteralContext<'input>{}

pub struct IntegerLiteralContextExt<'input>{
	base:NumericParameterContextExt<'input>,
	ph:PhantomData<&'input str>
}

antlr4rust::tid!{IntegerLiteralContextExt<'a>}

impl<'input> FuncTestCaseParserContext<'input> for IntegerLiteralContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IntegerLiteralContext<'input>{
	fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
		listener.enter_every_rule(self)?;
		listener.enter_integerLiteral(self);
		Ok(())
	}
}

impl<'input> CustomRuleContext<'input> for IntegerLiteralContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_numericParameter }
	//fn type_rule_index() -> usize where Self: Sized { RULE_numericParameter }
}

impl<'input> Borrow<NumericParameterContextExt<'input>> for IntegerLiteralContext<'input>{
	fn borrow(&self) -> &NumericParameterContextExt<'input> { &self.base }
}
impl<'input> BorrowMut<NumericParameterContextExt<'input>> for IntegerLiteralContext<'input>{
	fn borrow_mut(&mut self) -> &mut NumericParameterContextExt<'input> { &mut self.base }
}

impl<'input> NumericParameterContextAttrs<'input> for IntegerLiteralContext<'input> {}

impl<'input> IntegerLiteralContextExt<'input>{
	fn new(ctx: &dyn NumericParameterContextAttrs<'input>) -> Rc<NumericParameterContextAll<'input>>  {
		Rc::new(
			NumericParameterContextAll::IntegerLiteralContext(
				BaseParserRuleContext::copy_from(ctx,IntegerLiteralContextExt{
        			base: ctx.borrow().clone(),
        			ph:PhantomData
				})
			)
		)
	}
}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn numericParameter(&mut self,)
	-> Result<Rc<NumericParameterContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = NumericParameterContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 140, RULE_numericParameter);
        let mut _localctx: Rc<NumericParameterContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			let tmp = IntegerLiteralContextExt::new(&**_localctx);
			recog.base.enter_outer_alt(Some(tmp.clone()), 1)?;
			_localctx = tmp;
			{
			recog.base.set_state(671);
			recog.base.match_token(FuncTestCaseParser_IntegerLiteral,&mut recog.err_handler)?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- substraitError ----------------
pub type SubstraitErrorContextAll<'input> = SubstraitErrorContext<'input>;


pub type SubstraitErrorContext<'input> = BaseParserRuleContext<'input,SubstraitErrorContextExt<'input>>;

#[derive(Clone)]
pub struct SubstraitErrorContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for SubstraitErrorContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for SubstraitErrorContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_substraitError(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_substraitError(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for SubstraitErrorContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_substraitError }
	//fn type_rule_index() -> usize where Self: Sized { RULE_substraitError }
}
antlr4rust::tid!{SubstraitErrorContextExt<'a>}

impl<'input> SubstraitErrorContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<SubstraitErrorContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,SubstraitErrorContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait SubstraitErrorContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<SubstraitErrorContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token ErrorResult
/// Returns `None` if there is no child corresponding to token ErrorResult
fn ErrorResult(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_ErrorResult, 0)
}
/// Retrieves first TerminalNode corresponding to token UndefineResult
/// Returns `None` if there is no child corresponding to token UndefineResult
fn UndefineResult(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_UndefineResult, 0)
}

}

impl<'input> SubstraitErrorContextAttrs<'input> for SubstraitErrorContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn substraitError(&mut self,)
	-> Result<Rc<SubstraitErrorContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = SubstraitErrorContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 142, RULE_substraitError);
        let mut _localctx: Rc<SubstraitErrorContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(673);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_ErrorResult || _la==FuncTestCaseParser_UndefineResult) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- funcOption ----------------
pub type FuncOptionContextAll<'input> = FuncOptionContext<'input>;


pub type FuncOptionContext<'input> = BaseParserRuleContext<'input,FuncOptionContextExt<'input>>;

#[derive(Clone)]
pub struct FuncOptionContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FuncOptionContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncOptionContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_funcOption(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_funcOption(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FuncOptionContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcOption }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcOption }
}
antlr4rust::tid!{FuncOptionContextExt<'a>}

impl<'input> FuncOptionContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FuncOptionContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FuncOptionContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FuncOptionContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FuncOptionContextExt<'input>>{

fn optionName(&self) -> Option<Rc<OptionNameContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Colon
/// Returns `None` if there is no child corresponding to token Colon
fn Colon(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Colon, 0)
}
fn optionValue(&self) -> Option<Rc<OptionValueContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}

}

impl<'input> FuncOptionContextAttrs<'input> for FuncOptionContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn funcOption(&mut self,)
	-> Result<Rc<FuncOptionContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FuncOptionContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 144, RULE_funcOption);
        let mut _localctx: Rc<FuncOptionContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule optionName*/
			recog.base.set_state(675);
			recog.optionName()?;

			recog.base.set_state(676);
			recog.base.match_token(FuncTestCaseParser_Colon,&mut recog.err_handler)?;

			/*InvokeRule optionValue*/
			recog.base.set_state(677);
			recog.optionValue()?;

			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- optionName ----------------
pub type OptionNameContextAll<'input> = OptionNameContext<'input>;


pub type OptionNameContext<'input> = BaseParserRuleContext<'input,OptionNameContextExt<'input>>;

#[derive(Clone)]
pub struct OptionNameContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for OptionNameContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for OptionNameContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_optionName(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_optionName(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for OptionNameContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_optionName }
	//fn type_rule_index() -> usize where Self: Sized { RULE_optionName }
}
antlr4rust::tid!{OptionNameContextExt<'a>}

impl<'input> OptionNameContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<OptionNameContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,OptionNameContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait OptionNameContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<OptionNameContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Overflow
/// Returns `None` if there is no child corresponding to token Overflow
fn Overflow(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Overflow, 0)
}
/// Retrieves first TerminalNode corresponding to token Rounding
/// Returns `None` if there is no child corresponding to token Rounding
fn Rounding(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Rounding, 0)
}
/// Retrieves first TerminalNode corresponding to token NullHandling
/// Returns `None` if there is no child corresponding to token NullHandling
fn NullHandling(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NullHandling, 0)
}
/// Retrieves first TerminalNode corresponding to token SpacesOnly
/// Returns `None` if there is no child corresponding to token SpacesOnly
fn SpacesOnly(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_SpacesOnly, 0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}

}

impl<'input> OptionNameContextAttrs<'input> for OptionNameContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn optionName(&mut self,)
	-> Result<Rc<OptionNameContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = OptionNameContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 146, RULE_optionName);
        let mut _localctx: Rc<OptionNameContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(679);
			_la = recog.base.input.la(1);
			if { !((((_la) & !0x3f) == 0 && ((1usize << _la) & 12607488) != 0) || _la==FuncTestCaseParser_Identifier) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- optionValue ----------------
pub type OptionValueContextAll<'input> = OptionValueContext<'input>;


pub type OptionValueContext<'input> = BaseParserRuleContext<'input,OptionValueContextExt<'input>>;

#[derive(Clone)]
pub struct OptionValueContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for OptionValueContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for OptionValueContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_optionValue(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_optionValue(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for OptionValueContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_optionValue }
	//fn type_rule_index() -> usize where Self: Sized { RULE_optionValue }
}
antlr4rust::tid!{OptionValueContextExt<'a>}

impl<'input> OptionValueContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<OptionValueContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,OptionValueContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait OptionValueContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<OptionValueContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token Error
/// Returns `None` if there is no child corresponding to token Error
fn Error(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Error, 0)
}
/// Retrieves first TerminalNode corresponding to token Saturate
/// Returns `None` if there is no child corresponding to token Saturate
fn Saturate(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Saturate, 0)
}
/// Retrieves first TerminalNode corresponding to token Silent
/// Returns `None` if there is no child corresponding to token Silent
fn Silent(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Silent, 0)
}
/// Retrieves first TerminalNode corresponding to token TieToEven
/// Returns `None` if there is no child corresponding to token TieToEven
fn TieToEven(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_TieToEven, 0)
}
/// Retrieves first TerminalNode corresponding to token NaN
/// Returns `None` if there is no child corresponding to token NaN
fn NaN(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NaN, 0)
}
/// Retrieves first TerminalNode corresponding to token Truncate
/// Returns `None` if there is no child corresponding to token Truncate
fn Truncate(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Truncate, 0)
}
/// Retrieves first TerminalNode corresponding to token AcceptNulls
/// Returns `None` if there is no child corresponding to token AcceptNulls
fn AcceptNulls(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_AcceptNulls, 0)
}
/// Retrieves first TerminalNode corresponding to token IgnoreNulls
/// Returns `None` if there is no child corresponding to token IgnoreNulls
fn IgnoreNulls(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_IgnoreNulls, 0)
}
/// Retrieves first TerminalNode corresponding to token BooleanLiteral
/// Returns `None` if there is no child corresponding to token BooleanLiteral
fn BooleanLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_BooleanLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token NullLiteral
/// Returns `None` if there is no child corresponding to token NullLiteral
fn NullLiteral(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_NullLiteral, 0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}

}

impl<'input> OptionValueContextAttrs<'input> for OptionValueContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn optionValue(&mut self,)
	-> Result<Rc<OptionValueContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = OptionValueContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 148, RULE_optionValue);
        let mut _localctx: Rc<OptionValueContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(681);
			_la = recog.base.input.la(1);
			if { !(((((_la - 15)) & !0x3f) == 0 && ((1usize << (_la - 15)) & 2147492479) != 0) || _la==FuncTestCaseParser_Identifier) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- funcOptions ----------------
pub type FuncOptionsContextAll<'input> = FuncOptionsContext<'input>;


pub type FuncOptionsContext<'input> = BaseParserRuleContext<'input,FuncOptionsContextExt<'input>>;

#[derive(Clone)]
pub struct FuncOptionsContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for FuncOptionsContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for FuncOptionsContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_funcOptions(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_funcOptions(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for FuncOptionsContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_funcOptions }
	//fn type_rule_index() -> usize where Self: Sized { RULE_funcOptions }
}
antlr4rust::tid!{FuncOptionsContextExt<'a>}

impl<'input> FuncOptionsContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<FuncOptionsContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,FuncOptionsContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait FuncOptionsContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<FuncOptionsContextExt<'input>>{

fn funcOption_all(&self) ->  Vec<Rc<FuncOptionContextAll<'input>>> where Self:Sized{
	self.children_of_type()
}
fn funcOption(&self, i: usize) -> Option<Rc<FuncOptionContextAll<'input>>> where Self:Sized{
	self.child_of_type(i)
}
/// Retrieves all `TerminalNode`s corresponding to token Comma in current rule
fn Comma_all(&self) -> Vec<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>>  where Self:Sized{
	self.children_of_type()
}
/// Retrieves 'i's TerminalNode corresponding to token Comma, starting from 0.
/// Returns `None` if number of children corresponding to token Comma is less or equal than `i`.
fn Comma(&self, i: usize) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Comma, i)
}

}

impl<'input> FuncOptionsContextAttrs<'input> for FuncOptionsContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn funcOptions(&mut self,)
	-> Result<Rc<FuncOptionsContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = FuncOptionsContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 150, RULE_funcOptions);
        let mut _localctx: Rc<FuncOptionsContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			/*InvokeRule funcOption*/
			recog.base.set_state(683);
			recog.funcOption()?;

			recog.base.set_state(688);
			recog.err_handler.sync(&mut recog.base)?;
			_la = recog.base.input.la(1);
			while _la==FuncTestCaseParser_Comma {
				{
				{
				recog.base.set_state(684);
				recog.base.match_token(FuncTestCaseParser_Comma,&mut recog.err_handler)?;

				/*InvokeRule funcOption*/
				recog.base.set_state(685);
				recog.funcOption()?;

				}
				}
				recog.base.set_state(690);
				recog.err_handler.sync(&mut recog.base)?;
				_la = recog.base.input.la(1);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- nonReserved ----------------
pub type NonReservedContextAll<'input> = NonReservedContext<'input>;


pub type NonReservedContext<'input> = BaseParserRuleContext<'input,NonReservedContextExt<'input>>;

#[derive(Clone)]
pub struct NonReservedContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for NonReservedContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for NonReservedContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_nonReserved(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_nonReserved(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for NonReservedContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_nonReserved }
	//fn type_rule_index() -> usize where Self: Sized { RULE_nonReserved }
}
antlr4rust::tid!{NonReservedContextExt<'a>}

impl<'input> NonReservedContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<NonReservedContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,NonReservedContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait NonReservedContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<NonReservedContextExt<'input>>{

/// Retrieves first TerminalNode corresponding to token And
/// Returns `None` if there is no child corresponding to token And
fn And(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_And, 0)
}
/// Retrieves first TerminalNode corresponding to token Or
/// Returns `None` if there is no child corresponding to token Or
fn Or(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Or, 0)
}
/// Retrieves first TerminalNode corresponding to token Truncate
/// Returns `None` if there is no child corresponding to token Truncate
fn Truncate(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Truncate, 0)
}

}

impl<'input> NonReservedContextAttrs<'input> for NonReservedContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn nonReserved(&mut self,)
	-> Result<Rc<NonReservedContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = NonReservedContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 152, RULE_nonReserved);
        let mut _localctx: Rc<NonReservedContextAll> = _localctx;
		let mut _la: i32 = -1;
		let result: Result<(), ANTLRError> = (|| {

			//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
			recog.base.enter_outer_alt(None, 1)?;
			{
			recog.base.set_state(691);
			_la = recog.base.input.la(1);
			if { !(_la==FuncTestCaseParser_Truncate || _la==FuncTestCaseParser_And || _la==FuncTestCaseParser_Or) } {
				recog.err_handler.recover_inline(&mut recog.base)?;

			}
			else {
				if  recog.base.input.la(1)==TOKEN_EOF { recog.base.matched_eof = true };
				recog.err_handler.report_match(&mut recog.base);
				recog.base.consume(&mut recog.err_handler);
			}
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
//------------------- identifier ----------------
pub type IdentifierContextAll<'input> = IdentifierContext<'input>;


pub type IdentifierContext<'input> = BaseParserRuleContext<'input,IdentifierContextExt<'input>>;

#[derive(Clone)]
pub struct IdentifierContextExt<'input>{
ph:PhantomData<&'input str>
}

impl<'input> FuncTestCaseParserContext<'input> for IdentifierContext<'input>{}

impl<'input,'a> Listenable<dyn FuncTestCaseParserListener<'input> + 'a> for IdentifierContext<'input>{
		fn enter(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.enter_every_rule(self)?;
			listener.enter_identifier(self);
			Ok(())
		}fn exit(&self,listener: &mut (dyn FuncTestCaseParserListener<'input> + 'a)) -> Result<(), ANTLRError> {
			listener.exit_identifier(self);
			listener.exit_every_rule(self)?;
			Ok(())
		}
}

impl<'input> CustomRuleContext<'input> for IdentifierContextExt<'input>{
	type TF = LocalTokenFactory<'input>;
	type Ctx = FuncTestCaseParserContextType;
	fn get_rule_index(&self) -> usize { RULE_identifier }
	//fn type_rule_index() -> usize where Self: Sized { RULE_identifier }
}
antlr4rust::tid!{IdentifierContextExt<'a>}

impl<'input> IdentifierContextExt<'input>{
	fn new(parent: Option<Rc<dyn FuncTestCaseParserContext<'input> + 'input > >, invoking_state: i32) -> Rc<IdentifierContextAll<'input>> {
		Rc::new(
			BaseParserRuleContext::new_parser_ctx(parent, invoking_state,IdentifierContextExt{

				ph:PhantomData
			}),
		)
	}
}

pub trait IdentifierContextAttrs<'input>: FuncTestCaseParserContext<'input> + BorrowMut<IdentifierContextExt<'input>>{

fn nonReserved(&self) -> Option<Rc<NonReservedContextAll<'input>>> where Self:Sized{
	self.child_of_type(0)
}
/// Retrieves first TerminalNode corresponding to token Identifier
/// Returns `None` if there is no child corresponding to token Identifier
fn Identifier(&self) -> Option<Rc<TerminalNode<'input,FuncTestCaseParserContextType>>> where Self:Sized{
	self.get_token(FuncTestCaseParser_Identifier, 0)
}

}

impl<'input> IdentifierContextAttrs<'input> for IdentifierContext<'input>{}

impl<'input, I> FuncTestCaseParser<'input, I>
where
    I: TokenStream<'input, TF = LocalTokenFactory<'input> > + TidAble<'input>,
{
	pub fn identifier(&mut self,)
	-> Result<Rc<IdentifierContextAll<'input>>,ANTLRError> {
		let mut recog = self;
		let _parentctx = recog.ctx.take();
		let mut _localctx = IdentifierContextExt::new(_parentctx.clone(), recog.base.get_state());
        recog.base.enter_rule(_localctx.clone(), 154, RULE_identifier);
        let mut _localctx: Rc<IdentifierContextAll> = _localctx;
		let result: Result<(), ANTLRError> = (|| {

			recog.base.set_state(695);
			recog.err_handler.sync(&mut recog.base)?;
			match recog.base.input.la(1) {
			FuncTestCaseParser_Truncate |FuncTestCaseParser_And |FuncTestCaseParser_Or 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 1)?;
					recog.base.enter_outer_alt(None, 1)?;
					{
					/*InvokeRule nonReserved*/
					recog.base.set_state(693);
					recog.nonReserved()?;

					}
				}

			FuncTestCaseParser_Identifier 
				=> {
					//recog.base.enter_outer_alt(_localctx.clone(), 2)?;
					recog.base.enter_outer_alt(None, 2)?;
					{
					recog.base.set_state(694);
					recog.base.match_token(FuncTestCaseParser_Identifier,&mut recog.err_handler)?;

					}
				}

				_ => Err(ANTLRError::NoAltError(NoViableAltError::new(&mut recog.base)))?
			}
			Ok(())
		})();
		match result {
		Ok(_)=>{},
        Err(e @ ANTLRError::FallThrough(_)) => return Err(e),
		Err(ref re) => {
				//_localctx.exception = re;
				recog.err_handler.report_error(&mut recog.base, re);
				recog.err_handler.recover(&mut recog.base, re)?;
			}
		}
		recog.base.exit_rule()?;

		Ok(_localctx)
	}
}
	lazy_static!{
    static ref _ATN: Arc<ATN> =
        Arc::new(ATNDeserializer::new(None).deserialize(&mut _serializedATN.iter()));
    static ref _decision_to_DFA: Arc<Vec<antlr4rust::RwLock<DFA>>> = {
        let mut dfa = Vec::new();
        let size = _ATN.decision_to_state.len() as i32;
        for i in 0..size {
            dfa.push(DFA::new(
                _ATN.clone(),
                _ATN.get_decision_state(i),
                i,
            ).into())
        }
        Arc::new(dfa)
    };
	static ref _serializedATN: Vec<i32> = vec![
		4, 1, 125, 698, 2, 0, 7, 0, 2, 1, 7, 1, 2, 2, 7, 2, 2, 3, 7, 3, 2, 4, 
		7, 4, 2, 5, 7, 5, 2, 6, 7, 6, 2, 7, 7, 7, 2, 8, 7, 8, 2, 9, 7, 9, 2, 10, 
		7, 10, 2, 11, 7, 11, 2, 12, 7, 12, 2, 13, 7, 13, 2, 14, 7, 14, 2, 15, 
		7, 15, 2, 16, 7, 16, 2, 17, 7, 17, 2, 18, 7, 18, 2, 19, 7, 19, 2, 20, 
		7, 20, 2, 21, 7, 21, 2, 22, 7, 22, 2, 23, 7, 23, 2, 24, 7, 24, 2, 25, 
		7, 25, 2, 26, 7, 26, 2, 27, 7, 27, 2, 28, 7, 28, 2, 29, 7, 29, 2, 30, 
		7, 30, 2, 31, 7, 31, 2, 32, 7, 32, 2, 33, 7, 33, 2, 34, 7, 34, 2, 35, 
		7, 35, 2, 36, 7, 36, 2, 37, 7, 37, 2, 38, 7, 38, 2, 39, 7, 39, 2, 40, 
		7, 40, 2, 41, 7, 41, 2, 42, 7, 42, 2, 43, 7, 43, 2, 44, 7, 44, 2, 45, 
		7, 45, 2, 46, 7, 46, 2, 47, 7, 47, 2, 48, 7, 48, 2, 49, 7, 49, 2, 50, 
		7, 50, 2, 51, 7, 51, 2, 52, 7, 52, 2, 53, 7, 53, 2, 54, 7, 54, 2, 55, 
		7, 55, 2, 56, 7, 56, 2, 57, 7, 57, 2, 58, 7, 58, 2, 59, 7, 59, 2, 60, 
		7, 60, 2, 61, 7, 61, 2, 62, 7, 62, 2, 63, 7, 63, 2, 64, 7, 64, 2, 65, 
		7, 65, 2, 66, 7, 66, 2, 67, 7, 67, 2, 68, 7, 68, 2, 69, 7, 69, 2, 70, 
		7, 70, 2, 71, 7, 71, 2, 72, 7, 72, 2, 73, 7, 73, 2, 74, 7, 74, 2, 75, 
		7, 75, 2, 76, 7, 76, 2, 77, 7, 77, 1, 0, 1, 0, 4, 0, 159, 8, 0, 11, 0, 
		12, 0, 160, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 5, 1, 168, 8, 1, 10, 1, 12, 
		1, 171, 9, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 3, 1, 3, 1, 3, 1, 3, 1, 
		3, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 5, 1, 5, 1, 6, 1, 6, 1, 6, 1, 6, 1, 
		6, 1, 6, 1, 6, 1, 6, 3, 6, 198, 8, 6, 1, 6, 1, 6, 1, 6, 1, 7, 3, 7, 204, 
		8, 7, 1, 7, 4, 7, 207, 8, 7, 11, 7, 12, 7, 208, 1, 7, 3, 7, 212, 8, 7, 
		1, 7, 4, 7, 215, 8, 7, 11, 7, 12, 7, 216, 3, 7, 219, 8, 7, 1, 8, 1, 8, 
		1, 8, 5, 8, 224, 8, 8, 10, 8, 12, 8, 227, 9, 8, 1, 9, 1, 9, 3, 9, 231, 
		8, 9, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 
		10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 10, 1, 
		10, 3, 10, 253, 8, 10, 1, 11, 1, 11, 1, 11, 1, 11, 1, 11, 3, 11, 260, 
		8, 11, 1, 11, 1, 11, 1, 11, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 269, 8, 
		12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 277, 8, 12, 1, 12, 
		1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 1, 12, 3, 12, 286, 8, 12, 1, 13, 1, 
		13, 1, 13, 1, 13, 1, 13, 1, 13, 5, 13, 294, 8, 13, 10, 13, 12, 13, 297, 
		9, 13, 1, 13, 1, 13, 1, 13, 1, 13, 1, 14, 1, 14, 1, 14, 1, 14, 5, 14, 
		307, 8, 14, 10, 14, 12, 14, 310, 9, 14, 3, 14, 312, 8, 14, 1, 14, 1, 14, 
		1, 15, 1, 15, 1, 15, 1, 15, 1, 16, 1, 16, 1, 16, 1, 16, 5, 16, 324, 8, 
		16, 10, 16, 12, 16, 327, 9, 16, 3, 16, 329, 8, 16, 1, 16, 1, 16, 1, 17, 
		1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 1, 17, 
		3, 17, 344, 8, 17, 1, 18, 1, 18, 1, 18, 5, 18, 349, 8, 18, 10, 18, 12, 
		18, 352, 9, 18, 1, 19, 1, 19, 1, 19, 5, 19, 357, 8, 19, 10, 19, 12, 19, 
		360, 9, 19, 1, 20, 1, 20, 1, 20, 1, 20, 3, 20, 366, 8, 20, 1, 21, 1, 21, 
		1, 21, 1, 21, 3, 21, 372, 8, 21, 1, 22, 1, 22, 1, 22, 3, 22, 377, 8, 22, 
		1, 23, 1, 23, 1, 24, 1, 24, 1, 24, 1, 24, 1, 25, 1, 25, 1, 25, 1, 25, 
		1, 26, 1, 26, 1, 26, 1, 26, 1, 27, 1, 27, 1, 27, 1, 27, 1, 28, 1, 28, 
		1, 28, 1, 28, 1, 29, 1, 29, 1, 29, 1, 29, 1, 30, 1, 30, 1, 30, 1, 30, 
		1, 31, 1, 31, 1, 31, 1, 31, 1, 32, 1, 32, 1, 32, 1, 32, 1, 33, 1, 33, 
		1, 33, 1, 33, 1, 34, 1, 34, 1, 34, 1, 34, 1, 35, 1, 35, 1, 35, 1, 35, 
		1, 36, 1, 36, 1, 36, 1, 36, 1, 37, 1, 37, 1, 37, 1, 37, 1, 38, 1, 38, 
		1, 38, 1, 38, 1, 39, 1, 39, 1, 39, 1, 39, 1, 40, 1, 40, 1, 40, 1, 40, 
		1, 41, 1, 41, 1, 41, 1, 41, 1, 42, 1, 42, 1, 42, 1, 42, 1, 43, 1, 43, 
		1, 43, 1, 43, 5, 43, 461, 8, 43, 10, 43, 12, 43, 464, 9, 43, 3, 43, 466, 
		8, 43, 1, 43, 1, 43, 1, 44, 1, 44, 3, 44, 472, 8, 44, 1, 45, 1, 45, 1, 
		45, 1, 45, 1, 45, 1, 45, 1, 46, 1, 46, 1, 46, 1, 46, 1, 46, 4, 46, 485, 
		8, 46, 11, 46, 12, 46, 486, 1, 46, 3, 46, 490, 8, 46, 1, 47, 1, 47, 1, 
		47, 1, 47, 1, 47, 1, 48, 1, 48, 3, 48, 499, 8, 48, 1, 49, 1, 49, 1, 49, 
		1, 49, 1, 49, 1, 49, 1, 49, 1, 49, 1, 49, 3, 49, 510, 8, 49, 1, 49, 1, 
		49, 1, 49, 3, 49, 515, 8, 49, 3, 49, 517, 8, 49, 1, 50, 1, 50, 3, 50, 
		521, 8, 50, 1, 51, 1, 51, 3, 51, 525, 8, 51, 1, 52, 1, 52, 3, 52, 529, 
		8, 52, 1, 53, 1, 53, 3, 53, 533, 8, 53, 1, 54, 1, 54, 3, 54, 537, 8, 54, 
		1, 55, 1, 55, 3, 55, 541, 8, 55, 1, 56, 1, 56, 3, 56, 545, 8, 56, 1, 57, 
		1, 57, 3, 57, 549, 8, 57, 1, 57, 1, 57, 1, 57, 1, 57, 3, 57, 555, 8, 57, 
		1, 58, 1, 58, 3, 58, 559, 8, 58, 1, 58, 1, 58, 1, 58, 1, 58, 3, 58, 565, 
		8, 58, 1, 59, 1, 59, 3, 59, 569, 8, 59, 1, 59, 1, 59, 1, 59, 1, 59, 1, 
		60, 1, 60, 3, 60, 577, 8, 60, 1, 60, 1, 60, 1, 60, 1, 60, 1, 61, 1, 61, 
		3, 61, 585, 8, 61, 1, 61, 1, 61, 1, 61, 1, 61, 1, 62, 1, 62, 3, 62, 593, 
		8, 62, 1, 62, 1, 62, 1, 62, 1, 62, 1, 62, 1, 62, 3, 62, 601, 8, 62, 1, 
		63, 1, 63, 3, 63, 605, 8, 63, 1, 63, 1, 63, 1, 63, 1, 63, 1, 64, 1, 64, 
		3, 64, 613, 8, 64, 1, 64, 1, 64, 1, 64, 1, 64, 1, 65, 1, 65, 3, 65, 621, 
		8, 65, 1, 65, 1, 65, 1, 65, 1, 65, 1, 66, 1, 66, 3, 66, 629, 8, 66, 1, 
		66, 1, 66, 1, 66, 1, 66, 1, 67, 1, 67, 3, 67, 637, 8, 67, 1, 67, 1, 67, 
		1, 67, 1, 67, 1, 67, 1, 67, 1, 68, 1, 68, 1, 68, 1, 68, 1, 68, 5, 68, 
		650, 8, 68, 10, 68, 12, 68, 653, 9, 68, 1, 68, 1, 68, 3, 68, 657, 8, 68, 
		1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 1, 69, 
		1, 69, 3, 69, 670, 8, 69, 1, 70, 1, 70, 1, 71, 1, 71, 1, 72, 1, 72, 1, 
		72, 1, 72, 1, 73, 1, 73, 1, 74, 1, 74, 1, 75, 1, 75, 1, 75, 5, 75, 687, 
		8, 75, 10, 75, 12, 75, 690, 9, 75, 1, 76, 1, 76, 1, 77, 1, 77, 3, 77, 
		696, 8, 77, 1, 77, 0, 0, 78, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 
		24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 
		60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 
		96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 
		126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 
		154, 0, 21, 1, 0, 3, 4, 2, 0, 19, 19, 27, 27, 2, 0, 56, 56, 82, 82, 2, 
		0, 63, 63, 83, 83, 2, 0, 64, 64, 84, 84, 1, 0, 57, 60, 1, 0, 61, 62, 2, 
		0, 66, 66, 85, 85, 2, 0, 67, 67, 86, 86, 2, 0, 68, 68, 87, 87, 2, 0, 74, 
		74, 92, 92, 2, 0, 75, 75, 93, 93, 2, 0, 76, 76, 94, 94, 2, 0, 70, 70, 
		88, 88, 2, 0, 71, 71, 89, 89, 2, 0, 72, 72, 90, 90, 2, 0, 73, 73, 91, 
		91, 1, 0, 11, 12, 3, 0, 13, 14, 22, 23, 124, 124, 5, 0, 15, 21, 24, 24, 
		28, 28, 46, 46, 124, 124, 2, 0, 24, 24, 119, 120, 725, 0, 156, 1, 0, 0, 
		0, 2, 164, 1, 0, 0, 0, 4, 172, 1, 0, 0, 0, 6, 177, 1, 0, 0, 0, 8, 182, 
		1, 0, 0, 0, 10, 187, 1, 0, 0, 0, 12, 189, 1, 0, 0, 0, 14, 218, 1, 0, 0, 
		0, 16, 220, 1, 0, 0, 0, 18, 230, 1, 0, 0, 0, 20, 252, 1, 0, 0, 0, 22, 
		254, 1, 0, 0, 0, 24, 285, 1, 0, 0, 0, 26, 287, 1, 0, 0, 0, 28, 302, 1, 
		0, 0, 0, 30, 315, 1, 0, 0, 0, 32, 319, 1, 0, 0, 0, 34, 343, 1, 0, 0, 0, 
		36, 345, 1, 0, 0, 0, 38, 353, 1, 0, 0, 0, 40, 365, 1, 0, 0, 0, 42, 371, 
		1, 0, 0, 0, 44, 376, 1, 0, 0, 0, 46, 378, 1, 0, 0, 0, 48, 380, 1, 0, 0, 
		0, 50, 384, 1, 0, 0, 0, 52, 388, 1, 0, 0, 0, 54, 392, 1, 0, 0, 0, 56, 
		396, 1, 0, 0, 0, 58, 400, 1, 0, 0, 0, 60, 404, 1, 0, 0, 0, 62, 408, 1, 
		0, 0, 0, 64, 412, 1, 0, 0, 0, 66, 416, 1, 0, 0, 0, 68, 420, 1, 0, 0, 0, 
		70, 424, 1, 0, 0, 0, 72, 428, 1, 0, 0, 0, 74, 432, 1, 0, 0, 0, 76, 436, 
		1, 0, 0, 0, 78, 440, 1, 0, 0, 0, 80, 444, 1, 0, 0, 0, 82, 448, 1, 0, 0, 
		0, 84, 452, 1, 0, 0, 0, 86, 456, 1, 0, 0, 0, 88, 471, 1, 0, 0, 0, 90, 
		473, 1, 0, 0, 0, 92, 489, 1, 0, 0, 0, 94, 491, 1, 0, 0, 0, 96, 498, 1, 
		0, 0, 0, 98, 516, 1, 0, 0, 0, 100, 518, 1, 0, 0, 0, 102, 522, 1, 0, 0, 
		0, 104, 526, 1, 0, 0, 0, 106, 530, 1, 0, 0, 0, 108, 534, 1, 0, 0, 0, 110, 
		538, 1, 0, 0, 0, 112, 542, 1, 0, 0, 0, 114, 546, 1, 0, 0, 0, 116, 556, 
		1, 0, 0, 0, 118, 566, 1, 0, 0, 0, 120, 574, 1, 0, 0, 0, 122, 582, 1, 0, 
		0, 0, 124, 590, 1, 0, 0, 0, 126, 602, 1, 0, 0, 0, 128, 610, 1, 0, 0, 0, 
		130, 618, 1, 0, 0, 0, 132, 626, 1, 0, 0, 0, 134, 634, 1, 0, 0, 0, 136, 
		656, 1, 0, 0, 0, 138, 669, 1, 0, 0, 0, 140, 671, 1, 0, 0, 0, 142, 673, 
		1, 0, 0, 0, 144, 675, 1, 0, 0, 0, 146, 679, 1, 0, 0, 0, 148, 681, 1, 0, 
		0, 0, 150, 683, 1, 0, 0, 0, 152, 691, 1, 0, 0, 0, 154, 695, 1, 0, 0, 0, 
		156, 158, 3, 2, 1, 0, 157, 159, 3, 14, 7, 0, 158, 157, 1, 0, 0, 0, 159, 
		160, 1, 0, 0, 0, 160, 158, 1, 0, 0, 0, 160, 161, 1, 0, 0, 0, 161, 162, 
		1, 0, 0, 0, 162, 163, 5, 0, 0, 1, 163, 1, 1, 0, 0, 0, 164, 165, 3, 4, 
		2, 0, 165, 169, 3, 6, 3, 0, 166, 168, 3, 8, 4, 0, 167, 166, 1, 0, 0, 0, 
		168, 171, 1, 0, 0, 0, 169, 167, 1, 0, 0, 0, 169, 170, 1, 0, 0, 0, 170, 
		3, 1, 0, 0, 0, 171, 169, 1, 0, 0, 0, 172, 173, 5, 2, 0, 0, 173, 174, 7, 
		0, 0, 0, 174, 175, 5, 115, 0, 0, 175, 176, 5, 8, 0, 0, 176, 5, 1, 0, 0, 
		0, 177, 178, 5, 2, 0, 0, 178, 179, 5, 5, 0, 0, 179, 180, 5, 115, 0, 0, 
		180, 181, 5, 7, 0, 0, 181, 7, 1, 0, 0, 0, 182, 183, 5, 2, 0, 0, 183, 184, 
		5, 6, 0, 0, 184, 185, 5, 115, 0, 0, 185, 186, 5, 7, 0, 0, 186, 9, 1, 0, 
		0, 0, 187, 188, 5, 9, 0, 0, 188, 11, 1, 0, 0, 0, 189, 190, 3, 154, 77, 
		0, 190, 191, 5, 110, 0, 0, 191, 192, 3, 16, 8, 0, 192, 197, 5, 111, 0, 
		0, 193, 194, 5, 112, 0, 0, 194, 195, 3, 150, 75, 0, 195, 196, 5, 113, 
		0, 0, 196, 198, 1, 0, 0, 0, 197, 193, 1, 0, 0, 0, 197, 198, 1, 0, 0, 0, 
		198, 199, 1, 0, 0, 0, 199, 200, 5, 103, 0, 0, 200, 201, 3, 18, 9, 0, 201, 
		13, 1, 0, 0, 0, 202, 204, 3, 10, 5, 0, 203, 202, 1, 0, 0, 0, 203, 204, 
		1, 0, 0, 0, 204, 206, 1, 0, 0, 0, 205, 207, 3, 12, 6, 0, 206, 205, 1, 
		0, 0, 0, 207, 208, 1, 0, 0, 0, 208, 206, 1, 0, 0, 0, 208, 209, 1, 0, 0, 
		0, 209, 219, 1, 0, 0, 0, 210, 212, 3, 10, 5, 0, 211, 210, 1, 0, 0, 0, 
		211, 212, 1, 0, 0, 0, 212, 214, 1, 0, 0, 0, 213, 215, 3, 22, 11, 0, 214, 
		213, 1, 0, 0, 0, 215, 216, 1, 0, 0, 0, 216, 214, 1, 0, 0, 0, 216, 217, 
		1, 0, 0, 0, 217, 219, 1, 0, 0, 0, 218, 203, 1, 0, 0, 0, 218, 211, 1, 0, 
		0, 0, 219, 15, 1, 0, 0, 0, 220, 225, 3, 20, 10, 0, 221, 222, 5, 114, 0, 
		0, 222, 224, 3, 20, 10, 0, 223, 221, 1, 0, 0, 0, 224, 227, 1, 0, 0, 0, 
		225, 223, 1, 0, 0, 0, 225, 226, 1, 0, 0, 0, 226, 17, 1, 0, 0, 0, 227, 
		225, 1, 0, 0, 0, 228, 231, 3, 20, 10, 0, 229, 231, 3, 142, 71, 0, 230, 
		228, 1, 0, 0, 0, 230, 229, 1, 0, 0, 0, 231, 19, 1, 0, 0, 0, 232, 253, 
		3, 48, 24, 0, 233, 253, 3, 84, 42, 0, 234, 253, 3, 50, 25, 0, 235, 253, 
		3, 52, 26, 0, 236, 253, 3, 56, 28, 0, 237, 253, 3, 58, 29, 0, 238, 253, 
		3, 54, 27, 0, 239, 253, 3, 60, 30, 0, 240, 253, 3, 62, 31, 0, 241, 253, 
		3, 64, 32, 0, 242, 253, 3, 66, 33, 0, 243, 253, 3, 68, 34, 0, 244, 253, 
		3, 70, 35, 0, 245, 253, 3, 72, 36, 0, 246, 253, 3, 74, 37, 0, 247, 253, 
		3, 76, 38, 0, 248, 253, 3, 78, 39, 0, 249, 253, 3, 80, 40, 0, 250, 253, 
		3, 82, 41, 0, 251, 253, 5, 124, 0, 0, 252, 232, 1, 0, 0, 0, 252, 233, 
		1, 0, 0, 0, 252, 234, 1, 0, 0, 0, 252, 235, 1, 0, 0, 0, 252, 236, 1, 0, 
		0, 0, 252, 237, 1, 0, 0, 0, 252, 238, 1, 0, 0, 0, 252, 239, 1, 0, 0, 0, 
		252, 240, 1, 0, 0, 0, 252, 241, 1, 0, 0, 0, 252, 242, 1, 0, 0, 0, 252, 
		243, 1, 0, 0, 0, 252, 244, 1, 0, 0, 0, 252, 245, 1, 0, 0, 0, 252, 246, 
		1, 0, 0, 0, 252, 247, 1, 0, 0, 0, 252, 248, 1, 0, 0, 0, 252, 249, 1, 0, 
		0, 0, 252, 250, 1, 0, 0, 0, 252, 251, 1, 0, 0, 0, 253, 21, 1, 0, 0, 0, 
		254, 259, 3, 24, 12, 0, 255, 256, 5, 112, 0, 0, 256, 257, 3, 150, 75, 
		0, 257, 258, 5, 113, 0, 0, 258, 260, 1, 0, 0, 0, 259, 255, 1, 0, 0, 0, 
		259, 260, 1, 0, 0, 0, 260, 261, 1, 0, 0, 0, 261, 262, 5, 103, 0, 0, 262, 
		263, 3, 18, 9, 0, 263, 23, 1, 0, 0, 0, 264, 265, 3, 26, 13, 0, 265, 266, 
		3, 154, 77, 0, 266, 268, 5, 110, 0, 0, 267, 269, 3, 36, 18, 0, 268, 267, 
		1, 0, 0, 0, 268, 269, 1, 0, 0, 0, 269, 270, 1, 0, 0, 0, 270, 271, 5, 111, 
		0, 0, 271, 286, 1, 0, 0, 0, 272, 273, 3, 28, 14, 0, 273, 274, 3, 154, 
		77, 0, 274, 276, 5, 110, 0, 0, 275, 277, 3, 38, 19, 0, 276, 275, 1, 0, 
		0, 0, 276, 277, 1, 0, 0, 0, 277, 278, 1, 0, 0, 0, 278, 279, 5, 111, 0, 
		0, 279, 286, 1, 0, 0, 0, 280, 281, 3, 154, 77, 0, 281, 282, 5, 110, 0, 
		0, 282, 283, 3, 30, 15, 0, 283, 284, 5, 111, 0, 0, 284, 286, 1, 0, 0, 
		0, 285, 264, 1, 0, 0, 0, 285, 272, 1, 0, 0, 0, 285, 280, 1, 0, 0, 0, 286, 
		25, 1, 0, 0, 0, 287, 288, 5, 10, 0, 0, 288, 289, 5, 124, 0, 0, 289, 290, 
		5, 110, 0, 0, 290, 295, 3, 96, 48, 0, 291, 292, 5, 114, 0, 0, 292, 294, 
		3, 96, 48, 0, 293, 291, 1, 0, 0, 0, 294, 297, 1, 0, 0, 0, 295, 293, 1, 
		0, 0, 0, 295, 296, 1, 0, 0, 0, 296, 298, 1, 0, 0, 0, 297, 295, 1, 0, 0, 
		0, 298, 299, 5, 111, 0, 0, 299, 300, 5, 103, 0, 0, 300, 301, 3, 28, 14, 
		0, 301, 27, 1, 0, 0, 0, 302, 311, 5, 110, 0, 0, 303, 308, 3, 32, 16, 0, 
		304, 305, 5, 114, 0, 0, 305, 307, 3, 32, 16, 0, 306, 304, 1, 0, 0, 0, 
		307, 310, 1, 0, 0, 0, 308, 306, 1, 0, 0, 0, 308, 309, 1, 0, 0, 0, 309, 
		312, 1, 0, 0, 0, 310, 308, 1, 0, 0, 0, 311, 303, 1, 0, 0, 0, 311, 312, 
		1, 0, 0, 0, 312, 313, 1, 0, 0, 0, 313, 314, 5, 111, 0, 0, 314, 29, 1, 
		0, 0, 0, 315, 316, 3, 32, 16, 0, 316, 317, 5, 97, 0, 0, 317, 318, 3, 96, 
		48, 0, 318, 31, 1, 0, 0, 0, 319, 328, 5, 110, 0, 0, 320, 325, 3, 34, 17, 
		0, 321, 322, 5, 114, 0, 0, 322, 324, 3, 34, 17, 0, 323, 321, 1, 0, 0, 
		0, 324, 327, 1, 0, 0, 0, 325, 323, 1, 0, 0, 0, 325, 326, 1, 0, 0, 0, 326, 
		329, 1, 0, 0, 0, 327, 325, 1, 0, 0, 0, 328, 320, 1, 0, 0, 0, 328, 329, 
		1, 0, 0, 0, 329, 330, 1, 0, 0, 0, 330, 331, 5, 111, 0, 0, 331, 33, 1, 
		0, 0, 0, 332, 344, 5, 46, 0, 0, 333, 344, 3, 44, 22, 0, 334, 344, 5, 28, 
		0, 0, 335, 344, 5, 47, 0, 0, 336, 344, 5, 32, 0, 0, 337, 344, 5, 31, 0, 
		0, 338, 344, 5, 30, 0, 0, 339, 344, 5, 29, 0, 0, 340, 344, 5, 43, 0, 0, 
		341, 344, 5, 44, 0, 0, 342, 344, 5, 45, 0, 0, 343, 332, 1, 0, 0, 0, 343, 
		333, 1, 0, 0, 0, 343, 334, 1, 0, 0, 0, 343, 335, 1, 0, 0, 0, 343, 336, 
		1, 0, 0, 0, 343, 337, 1, 0, 0, 0, 343, 338, 1, 0, 0, 0, 343, 339, 1, 0, 
		0, 0, 343, 340, 1, 0, 0, 0, 343, 341, 1, 0, 0, 0, 343, 342, 1, 0, 0, 0, 
		344, 35, 1, 0, 0, 0, 345, 350, 3, 40, 20, 0, 346, 347, 5, 114, 0, 0, 347, 
		349, 3, 40, 20, 0, 348, 346, 1, 0, 0, 0, 349, 352, 1, 0, 0, 0, 350, 348, 
		1, 0, 0, 0, 350, 351, 1, 0, 0, 0, 351, 37, 1, 0, 0, 0, 352, 350, 1, 0, 
		0, 0, 353, 358, 3, 42, 21, 0, 354, 355, 5, 114, 0, 0, 355, 357, 3, 42, 
		21, 0, 356, 354, 1, 0, 0, 0, 357, 360, 1, 0, 0, 0, 358, 356, 1, 0, 0, 
		0, 358, 359, 1, 0, 0, 0, 359, 39, 1, 0, 0, 0, 360, 358, 1, 0, 0, 0, 361, 
		362, 5, 124, 0, 0, 362, 363, 5, 118, 0, 0, 363, 366, 5, 49, 0, 0, 364, 
		366, 3, 20, 10, 0, 365, 361, 1, 0, 0, 0, 365, 364, 1, 0, 0, 0, 366, 41, 
		1, 0, 0, 0, 367, 368, 5, 49, 0, 0, 368, 369, 5, 97, 0, 0, 369, 372, 3, 
		96, 48, 0, 370, 372, 3, 20, 10, 0, 371, 367, 1, 0, 0, 0, 371, 370, 1, 
		0, 0, 0, 372, 43, 1, 0, 0, 0, 373, 377, 5, 26, 0, 0, 374, 377, 5, 25, 
		0, 0, 375, 377, 3, 46, 23, 0, 376, 373, 1, 0, 0, 0, 376, 374, 1, 0, 0, 
		0, 376, 375, 1, 0, 0, 0, 377, 45, 1, 0, 0, 0, 378, 379, 7, 1, 0, 0, 379, 
		47, 1, 0, 0, 0, 380, 381, 5, 46, 0, 0, 381, 382, 5, 97, 0, 0, 382, 383, 
		3, 96, 48, 0, 383, 49, 1, 0, 0, 0, 384, 385, 5, 25, 0, 0, 385, 386, 5, 
		97, 0, 0, 386, 387, 3, 106, 53, 0, 387, 51, 1, 0, 0, 0, 388, 389, 3, 44, 
		22, 0, 389, 390, 5, 97, 0, 0, 390, 391, 3, 108, 54, 0, 391, 53, 1, 0, 
		0, 0, 392, 393, 3, 44, 22, 0, 393, 394, 5, 97, 0, 0, 394, 395, 3, 124, 
		62, 0, 395, 55, 1, 0, 0, 0, 396, 397, 5, 28, 0, 0, 397, 398, 5, 97, 0, 
		0, 398, 399, 3, 100, 50, 0, 399, 57, 1, 0, 0, 0, 400, 401, 5, 47, 0, 0, 
		401, 402, 5, 97, 0, 0, 402, 403, 3, 102, 51, 0, 403, 59, 1, 0, 0, 0, 404, 
		405, 5, 32, 0, 0, 405, 406, 5, 97, 0, 0, 406, 407, 3, 110, 55, 0, 407, 
		61, 1, 0, 0, 0, 408, 409, 5, 43, 0, 0, 409, 410, 5, 97, 0, 0, 410, 411, 
		3, 112, 56, 0, 411, 63, 1, 0, 0, 0, 412, 413, 5, 44, 0, 0, 413, 414, 5, 
		97, 0, 0, 414, 415, 3, 114, 57, 0, 415, 65, 1, 0, 0, 0, 416, 417, 5, 45, 
		0, 0, 417, 418, 5, 97, 0, 0, 418, 419, 3, 116, 58, 0, 419, 67, 1, 0, 0, 
		0, 420, 421, 5, 47, 0, 0, 421, 422, 5, 97, 0, 0, 422, 423, 3, 118, 59, 
		0, 423, 69, 1, 0, 0, 0, 424, 425, 5, 47, 0, 0, 425, 426, 5, 97, 0, 0, 
		426, 427, 3, 120, 60, 0, 427, 71, 1, 0, 0, 0, 428, 429, 5, 47, 0, 0, 429, 
		430, 5, 97, 0, 0, 430, 431, 3, 122, 61, 0, 431, 73, 1, 0, 0, 0, 432, 433, 
		5, 31, 0, 0, 433, 434, 5, 97, 0, 0, 434, 435, 3, 126, 63, 0, 435, 75, 
		1, 0, 0, 0, 436, 437, 5, 30, 0, 0, 437, 438, 5, 97, 0, 0, 438, 439, 3, 
		128, 64, 0, 439, 77, 1, 0, 0, 0, 440, 441, 5, 29, 0, 0, 441, 442, 5, 97, 
		0, 0, 442, 443, 3, 130, 65, 0, 443, 79, 1, 0, 0, 0, 444, 445, 3, 86, 43, 
		0, 445, 446, 5, 97, 0, 0, 446, 447, 3, 132, 66, 0, 447, 81, 1, 0, 0, 0, 
		448, 449, 3, 90, 45, 0, 449, 450, 5, 97, 0, 0, 450, 451, 3, 134, 67, 0, 
		451, 83, 1, 0, 0, 0, 452, 453, 5, 124, 0, 0, 453, 454, 5, 97, 0, 0, 454, 
		455, 5, 48, 0, 0, 455, 85, 1, 0, 0, 0, 456, 465, 5, 112, 0, 0, 457, 462, 
		3, 88, 44, 0, 458, 459, 5, 114, 0, 0, 459, 461, 3, 88, 44, 0, 460, 458, 
		1, 0, 0, 0, 461, 464, 1, 0, 0, 0, 462, 460, 1, 0, 0, 0, 462, 463, 1, 0, 
		0, 0, 463, 466, 1, 0, 0, 0, 464, 462, 1, 0, 0, 0, 465, 457, 1, 0, 0, 0, 
		465, 466, 1, 0, 0, 0, 466, 467, 1, 0, 0, 0, 467, 468, 5, 113, 0, 0, 468, 
		87, 1, 0, 0, 0, 469, 472, 3, 34, 17, 0, 470, 472, 3, 86, 43, 0, 471, 469, 
		1, 0, 0, 0, 471, 470, 1, 0, 0, 0, 472, 89, 1, 0, 0, 0, 473, 474, 5, 110, 
		0, 0, 474, 475, 3, 92, 46, 0, 475, 476, 5, 122, 0, 0, 476, 477, 3, 94, 
		47, 0, 477, 478, 5, 111, 0, 0, 478, 91, 1, 0, 0, 0, 479, 490, 5, 124, 
		0, 0, 480, 481, 5, 110, 0, 0, 481, 484, 5, 124, 0, 0, 482, 483, 5, 114, 
		0, 0, 483, 485, 5, 124, 0, 0, 484, 482, 1, 0, 0, 0, 485, 486, 1, 0, 0, 
		0, 486, 484, 1, 0, 0, 0, 486, 487, 1, 0, 0, 0, 487, 488, 1, 0, 0, 0, 488, 
		490, 5, 111, 0, 0, 489, 479, 1, 0, 0, 0, 489, 480, 1, 0, 0, 0, 490, 93, 
		1, 0, 0, 0, 491, 492, 3, 154, 77, 0, 492, 493, 5, 110, 0, 0, 493, 494, 
		3, 16, 8, 0, 494, 495, 5, 111, 0, 0, 495, 95, 1, 0, 0, 0, 496, 499, 3, 
		98, 49, 0, 497, 499, 3, 138, 69, 0, 498, 496, 1, 0, 0, 0, 498, 497, 1, 
		0, 0, 0, 499, 97, 1, 0, 0, 0, 500, 517, 3, 100, 50, 0, 501, 517, 3, 106, 
		53, 0, 502, 517, 3, 108, 54, 0, 503, 517, 3, 102, 51, 0, 504, 517, 3, 
		104, 52, 0, 505, 517, 3, 110, 55, 0, 506, 517, 3, 112, 56, 0, 507, 509, 
		5, 69, 0, 0, 508, 510, 5, 116, 0, 0, 509, 508, 1, 0, 0, 0, 509, 510, 1, 
		0, 0, 0, 510, 517, 1, 0, 0, 0, 511, 512, 5, 81, 0, 0, 512, 514, 5, 124, 
		0, 0, 513, 515, 5, 116, 0, 0, 514, 513, 1, 0, 0, 0, 514, 515, 1, 0, 0, 
		0, 515, 517, 1, 0, 0, 0, 516, 500, 1, 0, 0, 0, 516, 501, 1, 0, 0, 0, 516, 
		502, 1, 0, 0, 0, 516, 503, 1, 0, 0, 0, 516, 504, 1, 0, 0, 0, 516, 505, 
		1, 0, 0, 0, 516, 506, 1, 0, 0, 0, 516, 507, 1, 0, 0, 0, 516, 511, 1, 0, 
		0, 0, 517, 99, 1, 0, 0, 0, 518, 520, 7, 2, 0, 0, 519, 521, 5, 116, 0, 
		0, 520, 519, 1, 0, 0, 0, 520, 521, 1, 0, 0, 0, 521, 101, 1, 0, 0, 0, 522, 
		524, 7, 3, 0, 0, 523, 525, 5, 116, 0, 0, 524, 523, 1, 0, 0, 0, 524, 525, 
		1, 0, 0, 0, 525, 103, 1, 0, 0, 0, 526, 528, 7, 4, 0, 0, 527, 529, 5, 116, 
		0, 0, 528, 527, 1, 0, 0, 0, 528, 529, 1, 0, 0, 0, 529, 105, 1, 0, 0, 0, 
		530, 532, 7, 5, 0, 0, 531, 533, 5, 116, 0, 0, 532, 531, 1, 0, 0, 0, 532, 
		533, 1, 0, 0, 0, 533, 107, 1, 0, 0, 0, 534, 536, 7, 6, 0, 0, 535, 537, 
		5, 116, 0, 0, 536, 535, 1, 0, 0, 0, 536, 537, 1, 0, 0, 0, 537, 109, 1, 
		0, 0, 0, 538, 540, 5, 65, 0, 0, 539, 541, 5, 116, 0, 0, 540, 539, 1, 0, 
		0, 0, 540, 541, 1, 0, 0, 0, 541, 111, 1, 0, 0, 0, 542, 544, 7, 7, 0, 0, 
		543, 545, 5, 116, 0, 0, 544, 543, 1, 0, 0, 0, 544, 545, 1, 0, 0, 0, 545, 
		113, 1, 0, 0, 0, 546, 548, 7, 8, 0, 0, 547, 549, 5, 116, 0, 0, 548, 547, 
		1, 0, 0, 0, 548, 549, 1, 0, 0, 0, 549, 554, 1, 0, 0, 0, 550, 551, 5, 41, 
		0, 0, 551, 552, 3, 140, 70, 0, 552, 553, 5, 42, 0, 0, 553, 555, 1, 0, 
		0, 0, 554, 550, 1, 0, 0, 0, 554, 555, 1, 0, 0, 0, 555, 115, 1, 0, 0, 0, 
		556, 558, 7, 9, 0, 0, 557, 559, 5, 116, 0, 0, 558, 557, 1, 0, 0, 0, 558, 
		559, 1, 0, 0, 0, 559, 564, 1, 0, 0, 0, 560, 561, 5, 41, 0, 0, 561, 562, 
		3, 140, 70, 0, 562, 563, 5, 42, 0, 0, 563, 565, 1, 0, 0, 0, 564, 560, 
		1, 0, 0, 0, 564, 565, 1, 0, 0, 0, 565, 117, 1, 0, 0, 0, 566, 568, 7, 10, 
		0, 0, 567, 569, 5, 116, 0, 0, 568, 567, 1, 0, 0, 0, 568, 569, 1, 0, 0, 
		0, 569, 570, 1, 0, 0, 0, 570, 571, 5, 41, 0, 0, 571, 572, 3, 140, 70, 
		0, 572, 573, 5, 42, 0, 0, 573, 119, 1, 0, 0, 0, 574, 576, 7, 11, 0, 0, 
		575, 577, 5, 116, 0, 0, 576, 575, 1, 0, 0, 0, 576, 577, 1, 0, 0, 0, 577, 
		578, 1, 0, 0, 0, 578, 579, 5, 41, 0, 0, 579, 580, 3, 140, 70, 0, 580, 
		581, 5, 42, 0, 0, 581, 121, 1, 0, 0, 0, 582, 584, 7, 12, 0, 0, 583, 585, 
		5, 116, 0, 0, 584, 583, 1, 0, 0, 0, 584, 585, 1, 0, 0, 0, 585, 586, 1, 
		0, 0, 0, 586, 587, 5, 41, 0, 0, 587, 588, 3, 140, 70, 0, 588, 589, 5, 
		42, 0, 0, 589, 123, 1, 0, 0, 0, 590, 592, 7, 13, 0, 0, 591, 593, 5, 116, 
		0, 0, 592, 591, 1, 0, 0, 0, 592, 593, 1, 0, 0, 0, 593, 600, 1, 0, 0, 0, 
		594, 595, 5, 41, 0, 0, 595, 596, 3, 140, 70, 0, 596, 597, 5, 114, 0, 0, 
		597, 598, 3, 140, 70, 0, 598, 599, 5, 42, 0, 0, 599, 601, 1, 0, 0, 0, 
		600, 594, 1, 0, 0, 0, 600, 601, 1, 0, 0, 0, 601, 125, 1, 0, 0, 0, 602, 
		604, 7, 14, 0, 0, 603, 605, 5, 116, 0, 0, 604, 603, 1, 0, 0, 0, 604, 605, 
		1, 0, 0, 0, 605, 606, 1, 0, 0, 0, 606, 607, 5, 41, 0, 0, 607, 608, 3, 
		140, 70, 0, 608, 609, 5, 42, 0, 0, 609, 127, 1, 0, 0, 0, 610, 612, 7, 
		15, 0, 0, 611, 613, 5, 116, 0, 0, 612, 611, 1, 0, 0, 0, 612, 613, 1, 0, 
		0, 0, 613, 614, 1, 0, 0, 0, 614, 615, 5, 41, 0, 0, 615, 616, 3, 140, 70, 
		0, 616, 617, 5, 42, 0, 0, 617, 129, 1, 0, 0, 0, 618, 620, 7, 16, 0, 0, 
		619, 621, 5, 116, 0, 0, 620, 619, 1, 0, 0, 0, 620, 621, 1, 0, 0, 0, 621, 
		622, 1, 0, 0, 0, 622, 623, 5, 41, 0, 0, 623, 624, 3, 140, 70, 0, 624, 
		625, 5, 42, 0, 0, 625, 131, 1, 0, 0, 0, 626, 628, 5, 79, 0, 0, 627, 629, 
		5, 116, 0, 0, 628, 627, 1, 0, 0, 0, 628, 629, 1, 0, 0, 0, 629, 630, 1, 
		0, 0, 0, 630, 631, 5, 41, 0, 0, 631, 632, 3, 96, 48, 0, 632, 633, 5, 42, 
		0, 0, 633, 133, 1, 0, 0, 0, 634, 636, 5, 55, 0, 0, 635, 637, 5, 116, 0, 
		0, 636, 635, 1, 0, 0, 0, 636, 637, 1, 0, 0, 0, 637, 638, 1, 0, 0, 0, 638, 
		639, 5, 41, 0, 0, 639, 640, 3, 136, 68, 0, 640, 641, 5, 122, 0, 0, 641, 
		642, 3, 96, 48, 0, 642, 643, 5, 42, 0, 0, 643, 135, 1, 0, 0, 0, 644, 657, 
		3, 96, 48, 0, 645, 646, 5, 110, 0, 0, 646, 651, 3, 96, 48, 0, 647, 648, 
		5, 114, 0, 0, 648, 650, 3, 96, 48, 0, 649, 647, 1, 0, 0, 0, 650, 653, 
		1, 0, 0, 0, 651, 649, 1, 0, 0, 0, 651, 652, 1, 0, 0, 0, 652, 654, 1, 0, 
		0, 0, 653, 651, 1, 0, 0, 0, 654, 655, 5, 111, 0, 0, 655, 657, 1, 0, 0, 
		0, 656, 644, 1, 0, 0, 0, 656, 645, 1, 0, 0, 0, 657, 137, 1, 0, 0, 0, 658, 
		670, 3, 118, 59, 0, 659, 670, 3, 120, 60, 0, 660, 670, 3, 122, 61, 0, 
		661, 670, 3, 124, 62, 0, 662, 670, 3, 114, 57, 0, 663, 670, 3, 116, 58, 
		0, 664, 670, 3, 126, 63, 0, 665, 670, 3, 128, 64, 0, 666, 670, 3, 130, 
		65, 0, 667, 670, 3, 132, 66, 0, 668, 670, 3, 134, 67, 0, 669, 658, 1, 
		0, 0, 0, 669, 659, 1, 0, 0, 0, 669, 660, 1, 0, 0, 0, 669, 661, 1, 0, 0, 
		0, 669, 662, 1, 0, 0, 0, 669, 663, 1, 0, 0, 0, 669, 664, 1, 0, 0, 0, 669, 
		665, 1, 0, 0, 0, 669, 666, 1, 0, 0, 0, 669, 667, 1, 0, 0, 0, 669, 668, 
		1, 0, 0, 0, 670, 139, 1, 0, 0, 0, 671, 672, 5, 25, 0, 0, 672, 141, 1, 
		0, 0, 0, 673, 674, 7, 17, 0, 0, 674, 143, 1, 0, 0, 0, 675, 676, 3, 146, 
		73, 0, 676, 677, 5, 115, 0, 0, 677, 678, 3, 148, 74, 0, 678, 145, 1, 0, 
		0, 0, 679, 680, 7, 18, 0, 0, 680, 147, 1, 0, 0, 0, 681, 682, 7, 19, 0, 
		0, 682, 149, 1, 0, 0, 0, 683, 688, 3, 144, 72, 0, 684, 685, 5, 114, 0, 
		0, 685, 687, 3, 144, 72, 0, 686, 684, 1, 0, 0, 0, 687, 690, 1, 0, 0, 0, 
		688, 686, 1, 0, 0, 0, 688, 689, 1, 0, 0, 0, 689, 151, 1, 0, 0, 0, 690, 
		688, 1, 0, 0, 0, 691, 692, 7, 20, 0, 0, 692, 153, 1, 0, 0, 0, 693, 696, 
		3, 152, 76, 0, 694, 696, 5, 124, 0, 0, 695, 693, 1, 0, 0, 0, 695, 694, 
		1, 0, 0, 0, 696, 155, 1, 0, 0, 0, 61, 160, 169, 197, 203, 208, 211, 216, 
		218, 225, 230, 252, 259, 268, 276, 285, 295, 308, 311, 325, 328, 343, 
		350, 358, 365, 371, 376, 462, 465, 471, 486, 489, 498, 509, 514, 516, 
		520, 524, 528, 532, 536, 540, 544, 548, 554, 558, 564, 568, 576, 584, 
		592, 600, 604, 612, 620, 628, 636, 651, 656, 669, 688, 695
	];
}
