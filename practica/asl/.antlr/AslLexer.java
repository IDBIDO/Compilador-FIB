// Generated from /home/he/Desktop/cl/practica/asl/Asl.g4 by ANTLR 4.9.2
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
		RETURN=37, FUNC=38, ENDFUNC=39, READ=40, WRITE=41, BOOLVAL=42, ID=43, 
		INTVAL=44, FLOATVAL=45, CHARVAL=46, STRING=47, COMMENT=48, WS=49;
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
			"ENDFUNC", "READ", "WRITE", "BOOLVAL", "ID", "INTVAL", "FLOATVAL", "CHARVAL", 
			"STRING", "ESC_SEQ", "COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "':'", "','", "'['", "']'", "';'", "'array'", "'of'", "'='", "'=='", 
			"'!='", "'>'", "'<'", "'>='", "'<='", "'+'", "'*'", "'-'", "'/'", "'%'", 
			"'and'", "'or'", "'not'", "'('", "')'", "'var'", "'int'", "'bool'", "'float'", 
			"'char'", "'if'", "'then'", "'else'", "'endif'", "'while'", "'do'", "'endwhile'", 
			"'return'", "'func'", "'endfunc'", "'read'", "'write'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, "ARRAY", "OF", "ASSIGN", "EQUAL", 
			"NEQ", "GT", "LT", "GE", "LE", "PLUS", "MUL", "SUB", "DIV", "MOD", "AND", 
			"OR", "NOT", "LPAR", "RPAR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "IF", 
			"THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "RETURN", "FUNC", 
			"ENDFUNC", "READ", "WRITE", "BOOLVAL", "ID", "INTVAL", "FLOATVAL", "CHARVAL", 
			"STRING", "COMMENT", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\63\u014e\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\3\2"+
		"\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3"+
		"\b\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3"+
		"\17\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3"+
		"\25\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\30\3\30\3\31\3\31\3"+
		"\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\35\3"+
		"\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3 \3 "+
		"\3 \3 \3 \3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3$"+
		"\3$\3$\3%\3%\3%\3%\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'"+
		"\3\'\3(\3(\3(\3(\3(\3(\3(\3(\3)\3)\3)\3)\3)\3*\3*\3*\3*\3*\3*\3+\3+\3"+
		"+\3+\3+\3+\3+\3+\3+\5+\u010b\n+\3,\3,\7,\u010f\n,\f,\16,\u0112\13,\3-"+
		"\6-\u0115\n-\r-\16-\u0116\3.\6.\u011a\n.\r.\16.\u011b\3.\3.\6.\u0120\n"+
		".\r.\16.\u0121\3/\3/\3/\5/\u0127\n/\3/\3/\3\60\3\60\3\60\7\60\u012e\n"+
		"\60\f\60\16\60\u0131\13\60\3\60\3\60\3\61\3\61\3\61\3\62\3\62\3\62\3\62"+
		"\7\62\u013c\n\62\f\62\16\62\u013f\13\62\3\62\5\62\u0142\n\62\3\62\3\62"+
		"\3\62\3\62\3\63\6\63\u0149\n\63\r\63\16\63\u014a\3\63\3\63\2\2\64\3\3"+
		"\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21"+
		"!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!"+
		"A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\2c\62e\63\3\2\t\4\2C\\c|\6\2\62"+
		";C\\aac|\4\2))^^\4\2$$^^\n\2$$))^^ddhhppttvv\4\2\f\f\17\17\5\2\13\f\17"+
		"\17\"\"\2\u0157\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3"+
		"\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2"+
		"\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3"+
		"\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2"+
		"\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\2"+
		"9\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3"+
		"\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2"+
		"\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2"+
		"_\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\3g\3\2\2\2\5i\3\2\2\2\7k\3\2\2\2\tm\3"+
		"\2\2\2\13o\3\2\2\2\rq\3\2\2\2\17w\3\2\2\2\21z\3\2\2\2\23|\3\2\2\2\25\177"+
		"\3\2\2\2\27\u0082\3\2\2\2\31\u0084\3\2\2\2\33\u0086\3\2\2\2\35\u0089\3"+
		"\2\2\2\37\u008c\3\2\2\2!\u008e\3\2\2\2#\u0090\3\2\2\2%\u0092\3\2\2\2\'"+
		"\u0094\3\2\2\2)\u0096\3\2\2\2+\u009a\3\2\2\2-\u009d\3\2\2\2/\u00a1\3\2"+
		"\2\2\61\u00a3\3\2\2\2\63\u00a5\3\2\2\2\65\u00a9\3\2\2\2\67\u00ad\3\2\2"+
		"\29\u00b2\3\2\2\2;\u00b8\3\2\2\2=\u00bd\3\2\2\2?\u00c0\3\2\2\2A\u00c5"+
		"\3\2\2\2C\u00ca\3\2\2\2E\u00d0\3\2\2\2G\u00d6\3\2\2\2I\u00d9\3\2\2\2K"+
		"\u00e2\3\2\2\2M\u00e9\3\2\2\2O\u00ee\3\2\2\2Q\u00f6\3\2\2\2S\u00fb\3\2"+
		"\2\2U\u010a\3\2\2\2W\u010c\3\2\2\2Y\u0114\3\2\2\2[\u0119\3\2\2\2]\u0123"+
		"\3\2\2\2_\u012a\3\2\2\2a\u0134\3\2\2\2c\u0137\3\2\2\2e\u0148\3\2\2\2g"+
		"h\7<\2\2h\4\3\2\2\2ij\7.\2\2j\6\3\2\2\2kl\7]\2\2l\b\3\2\2\2mn\7_\2\2n"+
		"\n\3\2\2\2op\7=\2\2p\f\3\2\2\2qr\7c\2\2rs\7t\2\2st\7t\2\2tu\7c\2\2uv\7"+
		"{\2\2v\16\3\2\2\2wx\7q\2\2xy\7h\2\2y\20\3\2\2\2z{\7?\2\2{\22\3\2\2\2|"+
		"}\7?\2\2}~\7?\2\2~\24\3\2\2\2\177\u0080\7#\2\2\u0080\u0081\7?\2\2\u0081"+
		"\26\3\2\2\2\u0082\u0083\7@\2\2\u0083\30\3\2\2\2\u0084\u0085\7>\2\2\u0085"+
		"\32\3\2\2\2\u0086\u0087\7@\2\2\u0087\u0088\7?\2\2\u0088\34\3\2\2\2\u0089"+
		"\u008a\7>\2\2\u008a\u008b\7?\2\2\u008b\36\3\2\2\2\u008c\u008d\7-\2\2\u008d"+
		" \3\2\2\2\u008e\u008f\7,\2\2\u008f\"\3\2\2\2\u0090\u0091\7/\2\2\u0091"+
		"$\3\2\2\2\u0092\u0093\7\61\2\2\u0093&\3\2\2\2\u0094\u0095\7\'\2\2\u0095"+
		"(\3\2\2\2\u0096\u0097\7c\2\2\u0097\u0098\7p\2\2\u0098\u0099\7f\2\2\u0099"+
		"*\3\2\2\2\u009a\u009b\7q\2\2\u009b\u009c\7t\2\2\u009c,\3\2\2\2\u009d\u009e"+
		"\7p\2\2\u009e\u009f\7q\2\2\u009f\u00a0\7v\2\2\u00a0.\3\2\2\2\u00a1\u00a2"+
		"\7*\2\2\u00a2\60\3\2\2\2\u00a3\u00a4\7+\2\2\u00a4\62\3\2\2\2\u00a5\u00a6"+
		"\7x\2\2\u00a6\u00a7\7c\2\2\u00a7\u00a8\7t\2\2\u00a8\64\3\2\2\2\u00a9\u00aa"+
		"\7k\2\2\u00aa\u00ab\7p\2\2\u00ab\u00ac\7v\2\2\u00ac\66\3\2\2\2\u00ad\u00ae"+
		"\7d\2\2\u00ae\u00af\7q\2\2\u00af\u00b0\7q\2\2\u00b0\u00b1\7n\2\2\u00b1"+
		"8\3\2\2\2\u00b2\u00b3\7h\2\2\u00b3\u00b4\7n\2\2\u00b4\u00b5\7q\2\2\u00b5"+
		"\u00b6\7c\2\2\u00b6\u00b7\7v\2\2\u00b7:\3\2\2\2\u00b8\u00b9\7e\2\2\u00b9"+
		"\u00ba\7j\2\2\u00ba\u00bb\7c\2\2\u00bb\u00bc\7t\2\2\u00bc<\3\2\2\2\u00bd"+
		"\u00be\7k\2\2\u00be\u00bf\7h\2\2\u00bf>\3\2\2\2\u00c0\u00c1\7v\2\2\u00c1"+
		"\u00c2\7j\2\2\u00c2\u00c3\7g\2\2\u00c3\u00c4\7p\2\2\u00c4@\3\2\2\2\u00c5"+
		"\u00c6\7g\2\2\u00c6\u00c7\7n\2\2\u00c7\u00c8\7u\2\2\u00c8\u00c9\7g\2\2"+
		"\u00c9B\3\2\2\2\u00ca\u00cb\7g\2\2\u00cb\u00cc\7p\2\2\u00cc\u00cd\7f\2"+
		"\2\u00cd\u00ce\7k\2\2\u00ce\u00cf\7h\2\2\u00cfD\3\2\2\2\u00d0\u00d1\7"+
		"y\2\2\u00d1\u00d2\7j\2\2\u00d2\u00d3\7k\2\2\u00d3\u00d4\7n\2\2\u00d4\u00d5"+
		"\7g\2\2\u00d5F\3\2\2\2\u00d6\u00d7\7f\2\2\u00d7\u00d8\7q\2\2\u00d8H\3"+
		"\2\2\2\u00d9\u00da\7g\2\2\u00da\u00db\7p\2\2\u00db\u00dc\7f\2\2\u00dc"+
		"\u00dd\7y\2\2\u00dd\u00de\7j\2\2\u00de\u00df\7k\2\2\u00df\u00e0\7n\2\2"+
		"\u00e0\u00e1\7g\2\2\u00e1J\3\2\2\2\u00e2\u00e3\7t\2\2\u00e3\u00e4\7g\2"+
		"\2\u00e4\u00e5\7v\2\2\u00e5\u00e6\7w\2\2\u00e6\u00e7\7t\2\2\u00e7\u00e8"+
		"\7p\2\2\u00e8L\3\2\2\2\u00e9\u00ea\7h\2\2\u00ea\u00eb\7w\2\2\u00eb\u00ec"+
		"\7p\2\2\u00ec\u00ed\7e\2\2\u00edN\3\2\2\2\u00ee\u00ef\7g\2\2\u00ef\u00f0"+
		"\7p\2\2\u00f0\u00f1\7f\2\2\u00f1\u00f2\7h\2\2\u00f2\u00f3\7w\2\2\u00f3"+
		"\u00f4\7p\2\2\u00f4\u00f5\7e\2\2\u00f5P\3\2\2\2\u00f6\u00f7\7t\2\2\u00f7"+
		"\u00f8\7g\2\2\u00f8\u00f9\7c\2\2\u00f9\u00fa\7f\2\2\u00faR\3\2\2\2\u00fb"+
		"\u00fc\7y\2\2\u00fc\u00fd\7t\2\2\u00fd\u00fe\7k\2\2\u00fe\u00ff\7v\2\2"+
		"\u00ff\u0100\7g\2\2\u0100T\3\2\2\2\u0101\u0102\7v\2\2\u0102\u0103\7t\2"+
		"\2\u0103\u0104\7w\2\2\u0104\u010b\7g\2\2\u0105\u0106\7h\2\2\u0106\u0107"+
		"\7c\2\2\u0107\u0108\7n\2\2\u0108\u0109\7u\2\2\u0109\u010b\7g\2\2\u010a"+
		"\u0101\3\2\2\2\u010a\u0105\3\2\2\2\u010bV\3\2\2\2\u010c\u0110\t\2\2\2"+
		"\u010d\u010f\t\3\2\2\u010e\u010d\3\2\2\2\u010f\u0112\3\2\2\2\u0110\u010e"+
		"\3\2\2\2\u0110\u0111\3\2\2\2\u0111X\3\2\2\2\u0112\u0110\3\2\2\2\u0113"+
		"\u0115\4\62;\2\u0114\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0114\3\2"+
		"\2\2\u0116\u0117\3\2\2\2\u0117Z\3\2\2\2\u0118\u011a\4\62;\2\u0119\u0118"+
		"\3\2\2\2\u011a\u011b\3\2\2\2\u011b\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c"+
		"\u011d\3\2\2\2\u011d\u011f\7\60\2\2\u011e\u0120\4\62;\2\u011f\u011e\3"+
		"\2\2\2\u0120\u0121\3\2\2\2\u0121\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122"+
		"\\\3\2\2\2\u0123\u0126\7)\2\2\u0124\u0127\5a\61\2\u0125\u0127\n\4\2\2"+
		"\u0126\u0124\3\2\2\2\u0126\u0125\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0129"+
		"\7)\2\2\u0129^\3\2\2\2\u012a\u012f\7$\2\2\u012b\u012e\5a\61\2\u012c\u012e"+
		"\n\5\2\2\u012d\u012b\3\2\2\2\u012d\u012c\3\2\2\2\u012e\u0131\3\2\2\2\u012f"+
		"\u012d\3\2\2\2\u012f\u0130\3\2\2\2\u0130\u0132\3\2\2\2\u0131\u012f\3\2"+
		"\2\2\u0132\u0133\7$\2\2\u0133`\3\2\2\2\u0134\u0135\7^\2\2\u0135\u0136"+
		"\t\6\2\2\u0136b\3\2\2\2\u0137\u0138\7\61\2\2\u0138\u0139\7\61\2\2\u0139"+
		"\u013d\3\2\2\2\u013a\u013c\n\7\2\2\u013b\u013a\3\2\2\2\u013c\u013f\3\2"+
		"\2\2\u013d\u013b\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u0141\3\2\2\2\u013f"+
		"\u013d\3\2\2\2\u0140\u0142\7\17\2\2\u0141\u0140\3\2\2\2\u0141\u0142\3"+
		"\2\2\2\u0142\u0143\3\2\2\2\u0143\u0144\7\f\2\2\u0144\u0145\3\2\2\2\u0145"+
		"\u0146\b\62\2\2\u0146d\3\2\2\2\u0147\u0149\t\b\2\2\u0148\u0147\3\2\2\2"+
		"\u0149\u014a\3\2\2\2\u014a\u0148\3\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c"+
		"\3\2\2\2\u014c\u014d\b\63\2\2\u014df\3\2\2\2\16\2\u010a\u0110\u0116\u011b"+
		"\u0121\u0126\u012d\u012f\u013d\u0141\u014a\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}