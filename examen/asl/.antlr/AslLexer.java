// Generated from /dades/damaso-pierre.de.la.cruz/CL/examen/asl/Asl.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AslLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, MAP=6, INTO=7, USING=8, ARRAY=9, 
		OF=10, ASSIGN=11, EQUAL=12, NEQ=13, GT=14, LT=15, GE=16, LE=17, PLUS=18, 
		MUL=19, SUB=20, DIV=21, MOD=22, POW=23, AND=24, OR=25, NOT=26, LPAR=27, 
		RPAR=28, VAR=29, INT=30, BOOL=31, FLOAT=32, CHAR=33, IF=34, THEN=35, ELSE=36, 
		ENDIF=37, WHILE=38, DO=39, ENDWHILE=40, RETURN=41, FUNC=42, ENDFUNC=43, 
		READ=44, WRITE=45, BOOLVAL=46, TRUE=47, FALSE=48, ID=49, INTVAL=50, FLOATVAL=51, 
		CHARVAL=52, STRING=53, COMMENT=54, WS=55;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "MAP", "INTO", "USING", "ARRAY", 
			"OF", "ASSIGN", "EQUAL", "NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", 
			"SUB", "DIV", "MOD", "POW", "AND", "OR", "NOT", "LPAR", "RPAR", "VAR", 
			"INT", "BOOL", "FLOAT", "CHAR", "IF", "THEN", "ELSE", "ENDIF", "WHILE", 
			"DO", "ENDWHILE", "RETURN", "FUNC", "ENDFUNC", "READ", "WRITE", "BOOLVAL", 
			"TRUE", "FALSE", "ID", "INTVAL", "FLOATVAL", "CHARVAL", "STRING", "ESC_SEQ", 
			"COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'['", "']'", "';'", "'map'", "'into'", "'using'", 
			"'array'", "'of'", "'='", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", 
			"'+'", "'*'", "'-'", "'/'", "'%'", "'**'", "'and'", "'or'", "'not'", 
			"'('", "')'", "'var'", "'int'", "'bool'", "'float'", "'char'", "'if'", 
			"'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", "'return'", 
			"'func'", "'endfunc'", "'read'", "'write'", null, "'true'", "'false'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, "MAP", "INTO", "USING", "ARRAY", 
			"OF", "ASSIGN", "EQUAL", "NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", 
			"SUB", "DIV", "MOD", "POW", "AND", "OR", "NOT", "LPAR", "RPAR", "VAR", 
			"INT", "BOOL", "FLOAT", "CHAR", "IF", "THEN", "ELSE", "ENDIF", "WHILE", 
			"DO", "ENDWHILE", "RETURN", "FUNC", "ENDFUNC", "READ", "WRITE", "BOOLVAL", 
			"TRUE", "FALSE", "ID", "INTVAL", "FLOATVAL", "CHARVAL", "STRING", "COMMENT", 
			"WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public AslLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Asl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\29\u0170\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\3\2\3\2\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\r\3\16"+
		"\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23"+
		"\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31"+
		"\3\31\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36"+
		"\3\36\3\36\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3!\3\"\3"+
		"\"\3\"\3\"\3\"\3#\3#\3#\3$\3$\3$\3$\3$\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3"+
		"&\3\'\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3)\3)\3)\3)\3)\3)\3)\3)\3)\3*\3*\3"+
		"*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3,\3,\3,\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3"+
		".\3.\3.\3.\3.\3.\3/\3/\5/\u0122\n/\3\60\3\60\3\60\3\60\3\60\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\3\62\3\62\7\62\u0131\n\62\f\62\16\62\u0134\13\62"+
		"\3\63\6\63\u0137\n\63\r\63\16\63\u0138\3\64\6\64\u013c\n\64\r\64\16\64"+
		"\u013d\3\64\3\64\6\64\u0142\n\64\r\64\16\64\u0143\3\65\3\65\3\65\5\65"+
		"\u0149\n\65\3\65\3\65\3\66\3\66\3\66\7\66\u0150\n\66\f\66\16\66\u0153"+
		"\13\66\3\66\3\66\3\67\3\67\3\67\38\38\38\38\78\u015e\n8\f8\168\u0161\13"+
		"8\38\58\u0164\n8\38\38\38\38\39\69\u016b\n9\r9\169\u016c\39\39\2\2:\3"+
		"\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37"+
		"\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37="+
		" ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m\2o"+
		"8q9\3\2\t\4\2C\\c|\6\2\62;C\\aac|\4\2))^^\4\2$$^^\n\2$$))^^ddhhppttvv"+
		"\4\2\f\f\17\17\5\2\13\f\17\17\"\"\2\u0179\2\3\3\2\2\2\2\5\3\2\2\2\2\7"+
		"\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2"+
		"\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2"+
		"\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2"+
		"\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2"+
		"\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2"+
		"\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M"+
		"\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2"+
		"\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2"+
		"\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\3s\3\2\2\2\5u"+
		"\3\2\2\2\7w\3\2\2\2\ty\3\2\2\2\13{\3\2\2\2\r}\3\2\2\2\17\u0081\3\2\2\2"+
		"\21\u0086\3\2\2\2\23\u008c\3\2\2\2\25\u0092\3\2\2\2\27\u0095\3\2\2\2\31"+
		"\u0097\3\2\2\2\33\u009a\3\2\2\2\35\u009d\3\2\2\2\37\u009f\3\2\2\2!\u00a1"+
		"\3\2\2\2#\u00a4\3\2\2\2%\u00a7\3\2\2\2\'\u00a9\3\2\2\2)\u00ab\3\2\2\2"+
		"+\u00ad\3\2\2\2-\u00af\3\2\2\2/\u00b1\3\2\2\2\61\u00b4\3\2\2\2\63\u00b8"+
		"\3\2\2\2\65\u00bb\3\2\2\2\67\u00bf\3\2\2\29\u00c1\3\2\2\2;\u00c3\3\2\2"+
		"\2=\u00c7\3\2\2\2?\u00cb\3\2\2\2A\u00d0\3\2\2\2C\u00d6\3\2\2\2E\u00db"+
		"\3\2\2\2G\u00de\3\2\2\2I\u00e3\3\2\2\2K\u00e8\3\2\2\2M\u00ee\3\2\2\2O"+
		"\u00f4\3\2\2\2Q\u00f7\3\2\2\2S\u0100\3\2\2\2U\u0107\3\2\2\2W\u010c\3\2"+
		"\2\2Y\u0114\3\2\2\2[\u0119\3\2\2\2]\u0121\3\2\2\2_\u0123\3\2\2\2a\u0128"+
		"\3\2\2\2c\u012e\3\2\2\2e\u0136\3\2\2\2g\u013b\3\2\2\2i\u0145\3\2\2\2k"+
		"\u014c\3\2\2\2m\u0156\3\2\2\2o\u0159\3\2\2\2q\u016a\3\2\2\2st\7<\2\2t"+
		"\4\3\2\2\2uv\7.\2\2v\6\3\2\2\2wx\7]\2\2x\b\3\2\2\2yz\7_\2\2z\n\3\2\2\2"+
		"{|\7=\2\2|\f\3\2\2\2}~\7o\2\2~\177\7c\2\2\177\u0080\7r\2\2\u0080\16\3"+
		"\2\2\2\u0081\u0082\7k\2\2\u0082\u0083\7p\2\2\u0083\u0084\7v\2\2\u0084"+
		"\u0085\7q\2\2\u0085\20\3\2\2\2\u0086\u0087\7w\2\2\u0087\u0088\7u\2\2\u0088"+
		"\u0089\7k\2\2\u0089\u008a\7p\2\2\u008a\u008b\7i\2\2\u008b\22\3\2\2\2\u008c"+
		"\u008d\7c\2\2\u008d\u008e\7t\2\2\u008e\u008f\7t\2\2\u008f\u0090\7c\2\2"+
		"\u0090\u0091\7{\2\2\u0091\24\3\2\2\2\u0092\u0093\7q\2\2\u0093\u0094\7"+
		"h\2\2\u0094\26\3\2\2\2\u0095\u0096\7?\2\2\u0096\30\3\2\2\2\u0097\u0098"+
		"\7?\2\2\u0098\u0099\7?\2\2\u0099\32\3\2\2\2\u009a\u009b\7#\2\2\u009b\u009c"+
		"\7?\2\2\u009c\34\3\2\2\2\u009d\u009e\7@\2\2\u009e\36\3\2\2\2\u009f\u00a0"+
		"\7>\2\2\u00a0 \3\2\2\2\u00a1\u00a2\7@\2\2\u00a2\u00a3\7?\2\2\u00a3\"\3"+
		"\2\2\2\u00a4\u00a5\7>\2\2\u00a5\u00a6\7?\2\2\u00a6$\3\2\2\2\u00a7\u00a8"+
		"\7-\2\2\u00a8&\3\2\2\2\u00a9\u00aa\7,\2\2\u00aa(\3\2\2\2\u00ab\u00ac\7"+
		"/\2\2\u00ac*\3\2\2\2\u00ad\u00ae\7\61\2\2\u00ae,\3\2\2\2\u00af\u00b0\7"+
		"\'\2\2\u00b0.\3\2\2\2\u00b1\u00b2\7,\2\2\u00b2\u00b3\7,\2\2\u00b3\60\3"+
		"\2\2\2\u00b4\u00b5\7c\2\2\u00b5\u00b6\7p\2\2\u00b6\u00b7\7f\2\2\u00b7"+
		"\62\3\2\2\2\u00b8\u00b9\7q\2\2\u00b9\u00ba\7t\2\2\u00ba\64\3\2\2\2\u00bb"+
		"\u00bc\7p\2\2\u00bc\u00bd\7q\2\2\u00bd\u00be\7v\2\2\u00be\66\3\2\2\2\u00bf"+
		"\u00c0\7*\2\2\u00c08\3\2\2\2\u00c1\u00c2\7+\2\2\u00c2:\3\2\2\2\u00c3\u00c4"+
		"\7x\2\2\u00c4\u00c5\7c\2\2\u00c5\u00c6\7t\2\2\u00c6<\3\2\2\2\u00c7\u00c8"+
		"\7k\2\2\u00c8\u00c9\7p\2\2\u00c9\u00ca\7v\2\2\u00ca>\3\2\2\2\u00cb\u00cc"+
		"\7d\2\2\u00cc\u00cd\7q\2\2\u00cd\u00ce\7q\2\2\u00ce\u00cf\7n\2\2\u00cf"+
		"@\3\2\2\2\u00d0\u00d1\7h\2\2\u00d1\u00d2\7n\2\2\u00d2\u00d3\7q\2\2\u00d3"+
		"\u00d4\7c\2\2\u00d4\u00d5\7v\2\2\u00d5B\3\2\2\2\u00d6\u00d7\7e\2\2\u00d7"+
		"\u00d8\7j\2\2\u00d8\u00d9\7c\2\2\u00d9\u00da\7t\2\2\u00daD\3\2\2\2\u00db"+
		"\u00dc\7k\2\2\u00dc\u00dd\7h\2\2\u00ddF\3\2\2\2\u00de\u00df\7v\2\2\u00df"+
		"\u00e0\7j\2\2\u00e0\u00e1\7g\2\2\u00e1\u00e2\7p\2\2\u00e2H\3\2\2\2\u00e3"+
		"\u00e4\7g\2\2\u00e4\u00e5\7n\2\2\u00e5\u00e6\7u\2\2\u00e6\u00e7\7g\2\2"+
		"\u00e7J\3\2\2\2\u00e8\u00e9\7g\2\2\u00e9\u00ea\7p\2\2\u00ea\u00eb\7f\2"+
		"\2\u00eb\u00ec\7k\2\2\u00ec\u00ed\7h\2\2\u00edL\3\2\2\2\u00ee\u00ef\7"+
		"y\2\2\u00ef\u00f0\7j\2\2\u00f0\u00f1\7k\2\2\u00f1\u00f2\7n\2\2\u00f2\u00f3"+
		"\7g\2\2\u00f3N\3\2\2\2\u00f4\u00f5\7f\2\2\u00f5\u00f6\7q\2\2\u00f6P\3"+
		"\2\2\2\u00f7\u00f8\7g\2\2\u00f8\u00f9\7p\2\2\u00f9\u00fa\7f\2\2\u00fa"+
		"\u00fb\7y\2\2\u00fb\u00fc\7j\2\2\u00fc\u00fd\7k\2\2\u00fd\u00fe\7n\2\2"+
		"\u00fe\u00ff\7g\2\2\u00ffR\3\2\2\2\u0100\u0101\7t\2\2\u0101\u0102\7g\2"+
		"\2\u0102\u0103\7v\2\2\u0103\u0104\7w\2\2\u0104\u0105\7t\2\2\u0105\u0106"+
		"\7p\2\2\u0106T\3\2\2\2\u0107\u0108\7h\2\2\u0108\u0109\7w\2\2\u0109\u010a"+
		"\7p\2\2\u010a\u010b\7e\2\2\u010bV\3\2\2\2\u010c\u010d\7g\2\2\u010d\u010e"+
		"\7p\2\2\u010e\u010f\7f\2\2\u010f\u0110\7h\2\2\u0110\u0111\7w\2\2\u0111"+
		"\u0112\7p\2\2\u0112\u0113\7e\2\2\u0113X\3\2\2\2\u0114\u0115\7t\2\2\u0115"+
		"\u0116\7g\2\2\u0116\u0117\7c\2\2\u0117\u0118\7f\2\2\u0118Z\3\2\2\2\u0119"+
		"\u011a\7y\2\2\u011a\u011b\7t\2\2\u011b\u011c\7k\2\2\u011c\u011d\7v\2\2"+
		"\u011d\u011e\7g\2\2\u011e\\\3\2\2\2\u011f\u0122\5_\60\2\u0120\u0122\5"+
		"a\61\2\u0121\u011f\3\2\2\2\u0121\u0120\3\2\2\2\u0122^\3\2\2\2\u0123\u0124"+
		"\7v\2\2\u0124\u0125\7t\2\2\u0125\u0126\7w\2\2\u0126\u0127\7g\2\2\u0127"+
		"`\3\2\2\2\u0128\u0129\7h\2\2\u0129\u012a\7c\2\2\u012a\u012b\7n\2\2\u012b"+
		"\u012c\7u\2\2\u012c\u012d\7g\2\2\u012db\3\2\2\2\u012e\u0132\t\2\2\2\u012f"+
		"\u0131\t\3\2\2\u0130\u012f\3\2\2\2\u0131\u0134\3\2\2\2\u0132\u0130\3\2"+
		"\2\2\u0132\u0133\3\2\2\2\u0133d\3\2\2\2\u0134\u0132\3\2\2\2\u0135\u0137"+
		"\4\62;\2\u0136\u0135\3\2\2\2\u0137\u0138\3\2\2\2\u0138\u0136\3\2\2\2\u0138"+
		"\u0139\3\2\2\2\u0139f\3\2\2\2\u013a\u013c\4\62;\2\u013b\u013a\3\2\2\2"+
		"\u013c\u013d\3\2\2\2\u013d\u013b\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u013f"+
		"\3\2\2\2\u013f\u0141\7\60\2\2\u0140\u0142\4\62;\2\u0141\u0140\3\2\2\2"+
		"\u0142\u0143\3\2\2\2\u0143\u0141\3\2\2\2\u0143\u0144\3\2\2\2\u0144h\3"+
		"\2\2\2\u0145\u0148\7)\2\2\u0146\u0149\5m\67\2\u0147\u0149\n\4\2\2\u0148"+
		"\u0146\3\2\2\2\u0148\u0147\3\2\2\2\u0149\u014a\3\2\2\2\u014a\u014b\7)"+
		"\2\2\u014bj\3\2\2\2\u014c\u0151\7$\2\2\u014d\u0150\5m\67\2\u014e\u0150"+
		"\n\5\2\2\u014f\u014d\3\2\2\2\u014f\u014e\3\2\2\2\u0150\u0153\3\2\2\2\u0151"+
		"\u014f\3\2\2\2\u0151\u0152\3\2\2\2\u0152\u0154\3\2\2\2\u0153\u0151\3\2"+
		"\2\2\u0154\u0155\7$\2\2\u0155l\3\2\2\2\u0156\u0157\7^\2\2\u0157\u0158"+
		"\t\6\2\2\u0158n\3\2\2\2\u0159\u015a\7\61\2\2\u015a\u015b\7\61\2\2\u015b"+
		"\u015f\3\2\2\2\u015c\u015e\n\7\2\2\u015d\u015c\3\2\2\2\u015e\u0161\3\2"+
		"\2\2\u015f\u015d\3\2\2\2\u015f\u0160\3\2\2\2\u0160\u0163\3\2\2\2\u0161"+
		"\u015f\3\2\2\2\u0162\u0164\7\17\2\2\u0163\u0162\3\2\2\2\u0163\u0164\3"+
		"\2\2\2\u0164\u0165\3\2\2\2\u0165\u0166\7\f\2\2\u0166\u0167\3\2\2\2\u0167"+
		"\u0168\b8\2\2\u0168p\3\2\2\2\u0169\u016b\t\b\2\2\u016a\u0169\3\2\2\2\u016b"+
		"\u016c\3\2\2\2\u016c\u016a\3\2\2\2\u016c\u016d\3\2\2\2\u016d\u016e\3\2"+
		"\2\2\u016e\u016f\b9\2\2\u016fr\3\2\2\2\16\2\u0121\u0132\u0138\u013d\u0143"+
		"\u0148\u014f\u0151\u015f\u0163\u016c\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}