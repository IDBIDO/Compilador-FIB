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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, ARRAY=13, OF=14, ASSIGN=15, EQUAL=16, NEQ=17, 
		GT=18, LT=19, GE=20, LE=21, PLUS=22, MUL=23, SUB=24, DIV=25, MOD=26, AND=27, 
		OR=28, NOT=29, LPAR=30, RPAR=31, VAR=32, INT=33, BOOL=34, FLOAT=35, CHAR=36, 
		IF=37, THEN=38, ELSE=39, ENDIF=40, WHILE=41, DO=42, ENDWHILE=43, RETURN=44, 
		FUNC=45, ENDFUNC=46, READ=47, WRITE=48, BOOLVAL=49, ID=50, INTVAL=51, 
		FLOATVAL=52, CHARVAL=53, STRING=54, COMMENT=55, WS=56;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "ARRAY", "OF", "ASSIGN", "EQUAL", "NEQ", "GT", 
			"LT", "GE", "LE", "PLUS", "MUL", "SUB", "DIV", "MOD", "AND", "OR", "NOT", 
			"LPAR", "RPAR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "IF", "THEN", 
			"ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", "ENDFUNC", 
			"READ", "WRITE", "BOOLVAL", "ID", "INTVAL", "FLOATVAL", "CHARVAL", "STRING", 
			"ESC_SEQ", "COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'struct'", "'{'", "'}'", "'['", "']'", "'?'", "'for'", 
			"'in'", "';'", "'.'", "'array'", "'of'", "'='", "'=='", "'!='", "'>'", 
			"'<'", "'>='", "'<='", "'+'", "'*'", "'-'", "'/'", "'%'", "'and'", "'or'", 
			"'not'", "'('", "')'", "'var'", "'int'", "'bool'", "'float'", "'char'", 
			"'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", 
			"'return'", "'func'", "'endfunc'", "'read'", "'write'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, "ARRAY", "OF", "ASSIGN", "EQUAL", "NEQ", "GT", "LT", "GE", "LE", 
			"PLUS", "MUL", "SUB", "DIV", "MOD", "AND", "OR", "NOT", "LPAR", "RPAR", 
			"VAR", "INT", "BOOL", "FLOAT", "CHAR", "IF", "THEN", "ELSE", "ENDIF", 
			"WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", "ENDFUNC", "READ", "WRITE", 
			"BOOLVAL", "ID", "INTVAL", "FLOATVAL", "CHARVAL", "STRING", "COMMENT", 
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2:\u0172\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\3\2\3\2\3\3\3\3\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n"+
		"\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3"+
		"\16\3\17\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3"+
		"\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3"+
		"\32\3\32\3\33\3\33\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36\3"+
		"\36\3\37\3\37\3 \3 \3!\3!\3!\3!\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3$\3$\3"+
		"$\3$\3$\3$\3%\3%\3%\3%\3%\3&\3&\3&\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3("+
		"\3)\3)\3)\3)\3)\3)\3*\3*\3*\3*\3*\3*\3+\3+\3+\3,\3,\3,\3,\3,\3,\3,\3,"+
		"\3,\3-\3-\3-\3-\3-\3-\3-\3.\3.\3.\3.\3.\3/\3/\3/\3/\3/\3/\3/\3/\3\60\3"+
		"\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3"+
		"\62\3\62\3\62\3\62\3\62\5\62\u012f\n\62\3\63\3\63\7\63\u0133\n\63\f\63"+
		"\16\63\u0136\13\63\3\64\6\64\u0139\n\64\r\64\16\64\u013a\3\65\6\65\u013e"+
		"\n\65\r\65\16\65\u013f\3\65\3\65\6\65\u0144\n\65\r\65\16\65\u0145\3\66"+
		"\3\66\3\66\5\66\u014b\n\66\3\66\3\66\3\67\3\67\3\67\7\67\u0152\n\67\f"+
		"\67\16\67\u0155\13\67\3\67\3\67\38\38\38\39\39\39\39\79\u0160\n9\f9\16"+
		"9\u0163\139\39\59\u0166\n9\39\39\39\39\3:\6:\u016d\n:\r:\16:\u016e\3:"+
		"\3:\2\2;\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\35"+
		"9\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66"+
		"k\67m8o\2q9s:\3\2\t\4\2C\\c|\6\2\62;C\\aac|\4\2))^^\4\2$$^^\n\2$$))^^"+
		"ddhhppttvv\4\2\f\f\17\17\5\2\13\f\17\17\"\"\2\u017b\2\3\3\2\2\2\2\5\3"+
		"\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2"+
		"\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3"+
		"\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'"+
		"\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63"+
		"\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2"+
		"?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3"+
		"\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2"+
		"\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2"+
		"e\3\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2q\3\2\2\2\2s\3"+
		"\2\2\2\3u\3\2\2\2\5w\3\2\2\2\7y\3\2\2\2\t\u0080\3\2\2\2\13\u0082\3\2\2"+
		"\2\r\u0084\3\2\2\2\17\u0086\3\2\2\2\21\u0088\3\2\2\2\23\u008a\3\2\2\2"+
		"\25\u008e\3\2\2\2\27\u0091\3\2\2\2\31\u0093\3\2\2\2\33\u0095\3\2\2\2\35"+
		"\u009b\3\2\2\2\37\u009e\3\2\2\2!\u00a0\3\2\2\2#\u00a3\3\2\2\2%\u00a6\3"+
		"\2\2\2\'\u00a8\3\2\2\2)\u00aa\3\2\2\2+\u00ad\3\2\2\2-\u00b0\3\2\2\2/\u00b2"+
		"\3\2\2\2\61\u00b4\3\2\2\2\63\u00b6\3\2\2\2\65\u00b8\3\2\2\2\67\u00ba\3"+
		"\2\2\29\u00be\3\2\2\2;\u00c1\3\2\2\2=\u00c5\3\2\2\2?\u00c7\3\2\2\2A\u00c9"+
		"\3\2\2\2C\u00cd\3\2\2\2E\u00d1\3\2\2\2G\u00d6\3\2\2\2I\u00dc\3\2\2\2K"+
		"\u00e1\3\2\2\2M\u00e4\3\2\2\2O\u00e9\3\2\2\2Q\u00ee\3\2\2\2S\u00f4\3\2"+
		"\2\2U\u00fa\3\2\2\2W\u00fd\3\2\2\2Y\u0106\3\2\2\2[\u010d\3\2\2\2]\u0112"+
		"\3\2\2\2_\u011a\3\2\2\2a\u011f\3\2\2\2c\u012e\3\2\2\2e\u0130\3\2\2\2g"+
		"\u0138\3\2\2\2i\u013d\3\2\2\2k\u0147\3\2\2\2m\u014e\3\2\2\2o\u0158\3\2"+
		"\2\2q\u015b\3\2\2\2s\u016c\3\2\2\2uv\7<\2\2v\4\3\2\2\2wx\7.\2\2x\6\3\2"+
		"\2\2yz\7u\2\2z{\7v\2\2{|\7t\2\2|}\7w\2\2}~\7e\2\2~\177\7v\2\2\177\b\3"+
		"\2\2\2\u0080\u0081\7}\2\2\u0081\n\3\2\2\2\u0082\u0083\7\177\2\2\u0083"+
		"\f\3\2\2\2\u0084\u0085\7]\2\2\u0085\16\3\2\2\2\u0086\u0087\7_\2\2\u0087"+
		"\20\3\2\2\2\u0088\u0089\7A\2\2\u0089\22\3\2\2\2\u008a\u008b\7h\2\2\u008b"+
		"\u008c\7q\2\2\u008c\u008d\7t\2\2\u008d\24\3\2\2\2\u008e\u008f\7k\2\2\u008f"+
		"\u0090\7p\2\2\u0090\26\3\2\2\2\u0091\u0092\7=\2\2\u0092\30\3\2\2\2\u0093"+
		"\u0094\7\60\2\2\u0094\32\3\2\2\2\u0095\u0096\7c\2\2\u0096\u0097\7t\2\2"+
		"\u0097\u0098\7t\2\2\u0098\u0099\7c\2\2\u0099\u009a\7{\2\2\u009a\34\3\2"+
		"\2\2\u009b\u009c\7q\2\2\u009c\u009d\7h\2\2\u009d\36\3\2\2\2\u009e\u009f"+
		"\7?\2\2\u009f \3\2\2\2\u00a0\u00a1\7?\2\2\u00a1\u00a2\7?\2\2\u00a2\"\3"+
		"\2\2\2\u00a3\u00a4\7#\2\2\u00a4\u00a5\7?\2\2\u00a5$\3\2\2\2\u00a6\u00a7"+
		"\7@\2\2\u00a7&\3\2\2\2\u00a8\u00a9\7>\2\2\u00a9(\3\2\2\2\u00aa\u00ab\7"+
		"@\2\2\u00ab\u00ac\7?\2\2\u00ac*\3\2\2\2\u00ad\u00ae\7>\2\2\u00ae\u00af"+
		"\7?\2\2\u00af,\3\2\2\2\u00b0\u00b1\7-\2\2\u00b1.\3\2\2\2\u00b2\u00b3\7"+
		",\2\2\u00b3\60\3\2\2\2\u00b4\u00b5\7/\2\2\u00b5\62\3\2\2\2\u00b6\u00b7"+
		"\7\61\2\2\u00b7\64\3\2\2\2\u00b8\u00b9\7\'\2\2\u00b9\66\3\2\2\2\u00ba"+
		"\u00bb\7c\2\2\u00bb\u00bc\7p\2\2\u00bc\u00bd\7f\2\2\u00bd8\3\2\2\2\u00be"+
		"\u00bf\7q\2\2\u00bf\u00c0\7t\2\2\u00c0:\3\2\2\2\u00c1\u00c2\7p\2\2\u00c2"+
		"\u00c3\7q\2\2\u00c3\u00c4\7v\2\2\u00c4<\3\2\2\2\u00c5\u00c6\7*\2\2\u00c6"+
		">\3\2\2\2\u00c7\u00c8\7+\2\2\u00c8@\3\2\2\2\u00c9\u00ca\7x\2\2\u00ca\u00cb"+
		"\7c\2\2\u00cb\u00cc\7t\2\2\u00ccB\3\2\2\2\u00cd\u00ce\7k\2\2\u00ce\u00cf"+
		"\7p\2\2\u00cf\u00d0\7v\2\2\u00d0D\3\2\2\2\u00d1\u00d2\7d\2\2\u00d2\u00d3"+
		"\7q\2\2\u00d3\u00d4\7q\2\2\u00d4\u00d5\7n\2\2\u00d5F\3\2\2\2\u00d6\u00d7"+
		"\7h\2\2\u00d7\u00d8\7n\2\2\u00d8\u00d9\7q\2\2\u00d9\u00da\7c\2\2\u00da"+
		"\u00db\7v\2\2\u00dbH\3\2\2\2\u00dc\u00dd\7e\2\2\u00dd\u00de\7j\2\2\u00de"+
		"\u00df\7c\2\2\u00df\u00e0\7t\2\2\u00e0J\3\2\2\2\u00e1\u00e2\7k\2\2\u00e2"+
		"\u00e3\7h\2\2\u00e3L\3\2\2\2\u00e4\u00e5\7v\2\2\u00e5\u00e6\7j\2\2\u00e6"+
		"\u00e7\7g\2\2\u00e7\u00e8\7p\2\2\u00e8N\3\2\2\2\u00e9\u00ea\7g\2\2\u00ea"+
		"\u00eb\7n\2\2\u00eb\u00ec\7u\2\2\u00ec\u00ed\7g\2\2\u00edP\3\2\2\2\u00ee"+
		"\u00ef\7g\2\2\u00ef\u00f0\7p\2\2\u00f0\u00f1\7f\2\2\u00f1\u00f2\7k\2\2"+
		"\u00f2\u00f3\7h\2\2\u00f3R\3\2\2\2\u00f4\u00f5\7y\2\2\u00f5\u00f6\7j\2"+
		"\2\u00f6\u00f7\7k\2\2\u00f7\u00f8\7n\2\2\u00f8\u00f9\7g\2\2\u00f9T\3\2"+
		"\2\2\u00fa\u00fb\7f\2\2\u00fb\u00fc\7q\2\2\u00fcV\3\2\2\2\u00fd\u00fe"+
		"\7g\2\2\u00fe\u00ff\7p\2\2\u00ff\u0100\7f\2\2\u0100\u0101\7y\2\2\u0101"+
		"\u0102\7j\2\2\u0102\u0103\7k\2\2\u0103\u0104\7n\2\2\u0104\u0105\7g\2\2"+
		"\u0105X\3\2\2\2\u0106\u0107\7t\2\2\u0107\u0108\7g\2\2\u0108\u0109\7v\2"+
		"\2\u0109\u010a\7w\2\2\u010a\u010b\7t\2\2\u010b\u010c\7p\2\2\u010cZ\3\2"+
		"\2\2\u010d\u010e\7h\2\2\u010e\u010f\7w\2\2\u010f\u0110\7p\2\2\u0110\u0111"+
		"\7e\2\2\u0111\\\3\2\2\2\u0112\u0113\7g\2\2\u0113\u0114\7p\2\2\u0114\u0115"+
		"\7f\2\2\u0115\u0116\7h\2\2\u0116\u0117\7w\2\2\u0117\u0118\7p\2\2\u0118"+
		"\u0119\7e\2\2\u0119^\3\2\2\2\u011a\u011b\7t\2\2\u011b\u011c\7g\2\2\u011c"+
		"\u011d\7c\2\2\u011d\u011e\7f\2\2\u011e`\3\2\2\2\u011f\u0120\7y\2\2\u0120"+
		"\u0121\7t\2\2\u0121\u0122\7k\2\2\u0122\u0123\7v\2\2\u0123\u0124\7g\2\2"+
		"\u0124b\3\2\2\2\u0125\u0126\7v\2\2\u0126\u0127\7t\2\2\u0127\u0128\7w\2"+
		"\2\u0128\u012f\7g\2\2\u0129\u012a\7h\2\2\u012a\u012b\7c\2\2\u012b\u012c"+
		"\7n\2\2\u012c\u012d\7u\2\2\u012d\u012f\7g\2\2\u012e\u0125\3\2\2\2\u012e"+
		"\u0129\3\2\2\2\u012fd\3\2\2\2\u0130\u0134\t\2\2\2\u0131\u0133\t\3\2\2"+
		"\u0132\u0131\3\2\2\2\u0133\u0136\3\2\2\2\u0134\u0132\3\2\2\2\u0134\u0135"+
		"\3\2\2\2\u0135f\3\2\2\2\u0136\u0134\3\2\2\2\u0137\u0139\4\62;\2\u0138"+
		"\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u0138\3\2\2\2\u013a\u013b\3\2"+
		"\2\2\u013bh\3\2\2\2\u013c\u013e\4\62;\2\u013d\u013c\3\2\2\2\u013e\u013f"+
		"\3\2\2\2\u013f\u013d\3\2\2\2\u013f\u0140\3\2\2\2\u0140\u0141\3\2\2\2\u0141"+
		"\u0143\7\60\2\2\u0142\u0144\4\62;\2\u0143\u0142\3\2\2\2\u0144\u0145\3"+
		"\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146j\3\2\2\2\u0147\u014a"+
		"\7)\2\2\u0148\u014b\5o8\2\u0149\u014b\n\4\2\2\u014a\u0148\3\2\2\2\u014a"+
		"\u0149\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014d\7)\2\2\u014dl\3\2\2\2\u014e"+
		"\u0153\7$\2\2\u014f\u0152\5o8\2\u0150\u0152\n\5\2\2\u0151\u014f\3\2\2"+
		"\2\u0151\u0150\3\2\2\2\u0152\u0155\3\2\2\2\u0153\u0151\3\2\2\2\u0153\u0154"+
		"\3\2\2\2\u0154\u0156\3\2\2\2\u0155\u0153\3\2\2\2\u0156\u0157\7$\2\2\u0157"+
		"n\3\2\2\2\u0158\u0159\7^\2\2\u0159\u015a\t\6\2\2\u015ap\3\2\2\2\u015b"+
		"\u015c\7\61\2\2\u015c\u015d\7\61\2\2\u015d\u0161\3\2\2\2\u015e\u0160\n"+
		"\7\2\2\u015f\u015e\3\2\2\2\u0160\u0163\3\2\2\2\u0161\u015f\3\2\2\2\u0161"+
		"\u0162\3\2\2\2\u0162\u0165\3\2\2\2\u0163\u0161\3\2\2\2\u0164\u0166\7\17"+
		"\2\2\u0165\u0164\3\2\2\2\u0165\u0166\3\2\2\2\u0166\u0167\3\2\2\2\u0167"+
		"\u0168\7\f\2\2\u0168\u0169\3\2\2\2\u0169\u016a\b9\2\2\u016ar\3\2\2\2\u016b"+
		"\u016d\t\b\2\2\u016c\u016b\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u016c\3\2"+
		"\2\2\u016e\u016f\3\2\2\2\u016f\u0170\3\2\2\2\u0170\u0171\b:\2\2\u0171"+
		"t\3\2\2\2\16\2\u012e\u0134\u013a\u013f\u0145\u014a\u0151\u0153\u0161\u0165"+
		"\u016e\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}