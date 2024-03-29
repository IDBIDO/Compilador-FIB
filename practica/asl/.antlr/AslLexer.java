// Generated from /home/he/Desktop/CL/practica/asl/Asl.g4 by ANTLR 4.9.2
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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, ARRAY=6, OF=7, ASSIGN=8, EQUAL=9, 
		NEQ=10, GT=11, LT=12, GE=13, LE=14, PLUS=15, MUL=16, SUB=17, DIV=18, MOD=19, 
		AND=20, OR=21, NOT=22, LPAR=23, RPAR=24, VAR=25, INT=26, BOOL=27, FLOAT=28, 
		CHAR=29, IF=30, THEN=31, ELSE=32, ENDIF=33, WHILE=34, DO=35, ENDWHILE=36, 
		RETURN=37, FUNC=38, ENDFUNC=39, READ=40, WRITE=41, BOOLVAL=42, TRUE=43, 
		FALSE=44, ID=45, INTVAL=46, FLOATVAL=47, CHARVAL=48, STRING=49, COMMENT=50, 
		WS=51;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "ARRAY", "OF", "ASSIGN", "EQUAL", 
			"NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", "SUB", "DIV", "MOD", "AND", 
			"OR", "NOT", "LPAR", "RPAR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "IF", 
			"THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", 
			"ENDFUNC", "READ", "WRITE", "BOOLVAL", "TRUE", "FALSE", "ID", "INTVAL", 
			"FLOATVAL", "CHARVAL", "STRING", "ESC_SEQ", "COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'['", "']'", "';'", "'array'", "'of'", "'='", "'=='", 
			"'!='", "'>'", "'<'", "'>='", "'<='", "'+'", "'*'", "'-'", "'/'", "'%'", 
			"'and'", "'or'", "'not'", "'('", "')'", "'var'", "'int'", "'bool'", "'float'", 
			"'char'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", 
			"'return'", "'func'", "'endfunc'", "'read'", "'write'", null, "'true'", 
			"'false'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, "ARRAY", "OF", "ASSIGN", "EQUAL", 
			"NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", "SUB", "DIV", "MOD", "AND", 
			"OR", "NOT", "LPAR", "RPAR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "IF", 
			"THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", 
			"ENDFUNC", "READ", "WRITE", "BOOLVAL", "TRUE", "FALSE", "ID", "INTVAL", 
			"FLOATVAL", "CHARVAL", "STRING", "COMMENT", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\65\u0156\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64"+
		"\t\64\4\65\t\65\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\r"+
		"\3\r\3\16\3\16\3\16\3\17\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23"+
		"\3\23\3\24\3\24\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\27\3\27"+
		"\3\30\3\30\3\31\3\31\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34"+
		"\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36"+
		"\3\37\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\""+
		"\3#\3#\3#\3#\3#\3#\3$\3$\3$\3%\3%\3%\3%\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&"+
		"\3&\3&\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3*\3"+
		"*\3*\3*\3*\3*\3+\3+\5+\u0108\n+\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3-\3.\3"+
		".\7.\u0117\n.\f.\16.\u011a\13.\3/\6/\u011d\n/\r/\16/\u011e\3\60\6\60\u0122"+
		"\n\60\r\60\16\60\u0123\3\60\3\60\6\60\u0128\n\60\r\60\16\60\u0129\3\61"+
		"\3\61\3\61\5\61\u012f\n\61\3\61\3\61\3\62\3\62\3\62\7\62\u0136\n\62\f"+
		"\62\16\62\u0139\13\62\3\62\3\62\3\63\3\63\3\63\3\64\3\64\3\64\3\64\7\64"+
		"\u0144\n\64\f\64\16\64\u0147\13\64\3\64\5\64\u014a\n\64\3\64\3\64\3\64"+
		"\3\64\3\65\6\65\u0151\n\65\r\65\16\65\u0152\3\65\3\65\2\2\66\3\3\5\4\7"+
		"\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\2g\64i\65\3\2\t\4\2C\\c|\6"+
		"\2\62;C\\aac|\4\2))^^\4\2$$^^\n\2$$))^^ddhhppttvv\4\2\f\f\17\17\5\2\13"+
		"\f\17\17\"\"\2\u015f\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2"+
		"\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3"+
		"\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2"+
		"\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2"+
		"\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2"+
		"\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2"+
		"\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q"+
		"\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2"+
		"\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\3k\3\2\2\2"+
		"\5m\3\2\2\2\7o\3\2\2\2\tq\3\2\2\2\13s\3\2\2\2\ru\3\2\2\2\17{\3\2\2\2\21"+
		"~\3\2\2\2\23\u0080\3\2\2\2\25\u0083\3\2\2\2\27\u0086\3\2\2\2\31\u0088"+
		"\3\2\2\2\33\u008a\3\2\2\2\35\u008d\3\2\2\2\37\u0090\3\2\2\2!\u0092\3\2"+
		"\2\2#\u0094\3\2\2\2%\u0096\3\2\2\2\'\u0098\3\2\2\2)\u009a\3\2\2\2+\u009e"+
		"\3\2\2\2-\u00a1\3\2\2\2/\u00a5\3\2\2\2\61\u00a7\3\2\2\2\63\u00a9\3\2\2"+
		"\2\65\u00ad\3\2\2\2\67\u00b1\3\2\2\29\u00b6\3\2\2\2;\u00bc\3\2\2\2=\u00c1"+
		"\3\2\2\2?\u00c4\3\2\2\2A\u00c9\3\2\2\2C\u00ce\3\2\2\2E\u00d4\3\2\2\2G"+
		"\u00da\3\2\2\2I\u00dd\3\2\2\2K\u00e6\3\2\2\2M\u00ed\3\2\2\2O\u00f2\3\2"+
		"\2\2Q\u00fa\3\2\2\2S\u00ff\3\2\2\2U\u0107\3\2\2\2W\u0109\3\2\2\2Y\u010e"+
		"\3\2\2\2[\u0114\3\2\2\2]\u011c\3\2\2\2_\u0121\3\2\2\2a\u012b\3\2\2\2c"+
		"\u0132\3\2\2\2e\u013c\3\2\2\2g\u013f\3\2\2\2i\u0150\3\2\2\2kl\7<\2\2l"+
		"\4\3\2\2\2mn\7.\2\2n\6\3\2\2\2op\7]\2\2p\b\3\2\2\2qr\7_\2\2r\n\3\2\2\2"+
		"st\7=\2\2t\f\3\2\2\2uv\7c\2\2vw\7t\2\2wx\7t\2\2xy\7c\2\2yz\7{\2\2z\16"+
		"\3\2\2\2{|\7q\2\2|}\7h\2\2}\20\3\2\2\2~\177\7?\2\2\177\22\3\2\2\2\u0080"+
		"\u0081\7?\2\2\u0081\u0082\7?\2\2\u0082\24\3\2\2\2\u0083\u0084\7#\2\2\u0084"+
		"\u0085\7?\2\2\u0085\26\3\2\2\2\u0086\u0087\7@\2\2\u0087\30\3\2\2\2\u0088"+
		"\u0089\7>\2\2\u0089\32\3\2\2\2\u008a\u008b\7@\2\2\u008b\u008c\7?\2\2\u008c"+
		"\34\3\2\2\2\u008d\u008e\7>\2\2\u008e\u008f\7?\2\2\u008f\36\3\2\2\2\u0090"+
		"\u0091\7-\2\2\u0091 \3\2\2\2\u0092\u0093\7,\2\2\u0093\"\3\2\2\2\u0094"+
		"\u0095\7/\2\2\u0095$\3\2\2\2\u0096\u0097\7\61\2\2\u0097&\3\2\2\2\u0098"+
		"\u0099\7\'\2\2\u0099(\3\2\2\2\u009a\u009b\7c\2\2\u009b\u009c\7p\2\2\u009c"+
		"\u009d\7f\2\2\u009d*\3\2\2\2\u009e\u009f\7q\2\2\u009f\u00a0\7t\2\2\u00a0"+
		",\3\2\2\2\u00a1\u00a2\7p\2\2\u00a2\u00a3\7q\2\2\u00a3\u00a4\7v\2\2\u00a4"+
		".\3\2\2\2\u00a5\u00a6\7*\2\2\u00a6\60\3\2\2\2\u00a7\u00a8\7+\2\2\u00a8"+
		"\62\3\2\2\2\u00a9\u00aa\7x\2\2\u00aa\u00ab\7c\2\2\u00ab\u00ac\7t\2\2\u00ac"+
		"\64\3\2\2\2\u00ad\u00ae\7k\2\2\u00ae\u00af\7p\2\2\u00af\u00b0\7v\2\2\u00b0"+
		"\66\3\2\2\2\u00b1\u00b2\7d\2\2\u00b2\u00b3\7q\2\2\u00b3\u00b4\7q\2\2\u00b4"+
		"\u00b5\7n\2\2\u00b58\3\2\2\2\u00b6\u00b7\7h\2\2\u00b7\u00b8\7n\2\2\u00b8"+
		"\u00b9\7q\2\2\u00b9\u00ba\7c\2\2\u00ba\u00bb\7v\2\2\u00bb:\3\2\2\2\u00bc"+
		"\u00bd\7e\2\2\u00bd\u00be\7j\2\2\u00be\u00bf\7c\2\2\u00bf\u00c0\7t\2\2"+
		"\u00c0<\3\2\2\2\u00c1\u00c2\7k\2\2\u00c2\u00c3\7h\2\2\u00c3>\3\2\2\2\u00c4"+
		"\u00c5\7v\2\2\u00c5\u00c6\7j\2\2\u00c6\u00c7\7g\2\2\u00c7\u00c8\7p\2\2"+
		"\u00c8@\3\2\2\2\u00c9\u00ca\7g\2\2\u00ca\u00cb\7n\2\2\u00cb\u00cc\7u\2"+
		"\2\u00cc\u00cd\7g\2\2\u00cdB\3\2\2\2\u00ce\u00cf\7g\2\2\u00cf\u00d0\7"+
		"p\2\2\u00d0\u00d1\7f\2\2\u00d1\u00d2\7k\2\2\u00d2\u00d3\7h\2\2\u00d3D"+
		"\3\2\2\2\u00d4\u00d5\7y\2\2\u00d5\u00d6\7j\2\2\u00d6\u00d7\7k\2\2\u00d7"+
		"\u00d8\7n\2\2\u00d8\u00d9\7g\2\2\u00d9F\3\2\2\2\u00da\u00db\7f\2\2\u00db"+
		"\u00dc\7q\2\2\u00dcH\3\2\2\2\u00dd\u00de\7g\2\2\u00de\u00df\7p\2\2\u00df"+
		"\u00e0\7f\2\2\u00e0\u00e1\7y\2\2\u00e1\u00e2\7j\2\2\u00e2\u00e3\7k\2\2"+
		"\u00e3\u00e4\7n\2\2\u00e4\u00e5\7g\2\2\u00e5J\3\2\2\2\u00e6\u00e7\7t\2"+
		"\2\u00e7\u00e8\7g\2\2\u00e8\u00e9\7v\2\2\u00e9\u00ea\7w\2\2\u00ea\u00eb"+
		"\7t\2\2\u00eb\u00ec\7p\2\2\u00ecL\3\2\2\2\u00ed\u00ee\7h\2\2\u00ee\u00ef"+
		"\7w\2\2\u00ef\u00f0\7p\2\2\u00f0\u00f1\7e\2\2\u00f1N\3\2\2\2\u00f2\u00f3"+
		"\7g\2\2\u00f3\u00f4\7p\2\2\u00f4\u00f5\7f\2\2\u00f5\u00f6\7h\2\2\u00f6"+
		"\u00f7\7w\2\2\u00f7\u00f8\7p\2\2\u00f8\u00f9\7e\2\2\u00f9P\3\2\2\2\u00fa"+
		"\u00fb\7t\2\2\u00fb\u00fc\7g\2\2\u00fc\u00fd\7c\2\2\u00fd\u00fe\7f\2\2"+
		"\u00feR\3\2\2\2\u00ff\u0100\7y\2\2\u0100\u0101\7t\2\2\u0101\u0102\7k\2"+
		"\2\u0102\u0103\7v\2\2\u0103\u0104\7g\2\2\u0104T\3\2\2\2\u0105\u0108\5"+
		"W,\2\u0106\u0108\5Y-\2\u0107\u0105\3\2\2\2\u0107\u0106\3\2\2\2\u0108V"+
		"\3\2\2\2\u0109\u010a\7v\2\2\u010a\u010b\7t\2\2\u010b\u010c\7w\2\2\u010c"+
		"\u010d\7g\2\2\u010dX\3\2\2\2\u010e\u010f\7h\2\2\u010f\u0110\7c\2\2\u0110"+
		"\u0111\7n\2\2\u0111\u0112\7u\2\2\u0112\u0113\7g\2\2\u0113Z\3\2\2\2\u0114"+
		"\u0118\t\2\2\2\u0115\u0117\t\3\2\2\u0116\u0115\3\2\2\2\u0117\u011a\3\2"+
		"\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\\\3\2\2\2\u011a\u0118"+
		"\3\2\2\2\u011b\u011d\4\62;\2\u011c\u011b\3\2\2\2\u011d\u011e\3\2\2\2\u011e"+
		"\u011c\3\2\2\2\u011e\u011f\3\2\2\2\u011f^\3\2\2\2\u0120\u0122\4\62;\2"+
		"\u0121\u0120\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0121\3\2\2\2\u0123\u0124"+
		"\3\2\2\2\u0124\u0125\3\2\2\2\u0125\u0127\7\60\2\2\u0126\u0128\4\62;\2"+
		"\u0127\u0126\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u0127\3\2\2\2\u0129\u012a"+
		"\3\2\2\2\u012a`\3\2\2\2\u012b\u012e\7)\2\2\u012c\u012f\5e\63\2\u012d\u012f"+
		"\n\4\2\2\u012e\u012c\3\2\2\2\u012e\u012d\3\2\2\2\u012f\u0130\3\2\2\2\u0130"+
		"\u0131\7)\2\2\u0131b\3\2\2\2\u0132\u0137\7$\2\2\u0133\u0136\5e\63\2\u0134"+
		"\u0136\n\5\2\2\u0135\u0133\3\2\2\2\u0135\u0134\3\2\2\2\u0136\u0139\3\2"+
		"\2\2\u0137\u0135\3\2\2\2\u0137\u0138\3\2\2\2\u0138\u013a\3\2\2\2\u0139"+
		"\u0137\3\2\2\2\u013a\u013b\7$\2\2\u013bd\3\2\2\2\u013c\u013d\7^\2\2\u013d"+
		"\u013e\t\6\2\2\u013ef\3\2\2\2\u013f\u0140\7\61\2\2\u0140\u0141\7\61\2"+
		"\2\u0141\u0145\3\2\2\2\u0142\u0144\n\7\2\2\u0143\u0142\3\2\2\2\u0144\u0147"+
		"\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u0149\3\2\2\2\u0147"+
		"\u0145\3\2\2\2\u0148\u014a\7\17\2\2\u0149\u0148\3\2\2\2\u0149\u014a\3"+
		"\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c\7\f\2\2\u014c\u014d\3\2\2\2\u014d"+
		"\u014e\b\64\2\2\u014eh\3\2\2\2\u014f\u0151\t\b\2\2\u0150\u014f\3\2\2\2"+
		"\u0151\u0152\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0153\3\2\2\2\u0153\u0154"+
		"\3\2\2\2\u0154\u0155\b\65\2\2\u0155j\3\2\2\2\16\2\u0107\u0118\u011e\u0123"+
		"\u0129\u012e\u0135\u0137\u0145\u0149\u0152\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}