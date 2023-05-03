// Generated from /home/he/Desktop/CL/practica/asl/Asl.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AslParser extends Parser {
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
	public static final int
		RULE_program = 0, RULE_function = 1, RULE_params = 2, RULE_declarations = 3, 
		RULE_variable_decl = 4, RULE_type = 5, RULE_struct_type = 6, RULE_array_type = 7, 
		RULE_simple_type = 8, RULE_statements = 9, RULE_array_map = 10, RULE_statement = 11, 
		RULE_left_expr = 12, RULE_expr = 13, RULE_ident = 14;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "function", "params", "declarations", "variable_decl", "type", 
			"struct_type", "array_type", "simple_type", "statements", "array_map", 
			"statement", "left_expr", "expr", "ident"
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

	@Override
	public String getGrammarFileName() { return "Asl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public AslParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(AslParser.EOF, 0); }
		public List<FunctionContext> function() {
			return getRuleContexts(FunctionContext.class);
		}
		public FunctionContext function(int i) {
			return getRuleContext(FunctionContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(31); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(30);
				function();
				}
				}
				setState(33); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==FUNC );
			setState(35);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionContext extends ParserRuleContext {
		public TerminalNode FUNC() { return getToken(AslParser.FUNC, 0); }
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
		}
		public DeclarationsContext declarations() {
			return getRuleContext(DeclarationsContext.class,0);
		}
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode ENDFUNC() { return getToken(AslParser.ENDFUNC, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_function; }
	}

	public final FunctionContext function() throws RecognitionException {
		FunctionContext _localctx = new FunctionContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_function);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(37);
			match(FUNC);
			setState(38);
			match(ID);
			setState(39);
			params();
			setState(42);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__0) {
				{
				setState(40);
				match(T__0);
				setState(41);
				type();
				}
			}

			setState(44);
			declarations();
			setState(45);
			statements();
			setState(46);
			match(ENDFUNC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamsContext extends ParserRuleContext {
		public TerminalNode LPAR() { return getToken(AslParser.LPAR, 0); }
		public TerminalNode RPAR() { return getToken(AslParser.RPAR, 0); }
		public List<TerminalNode> ID() { return getTokens(AslParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(AslParser.ID, i);
		}
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public ParamsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_params; }
	}

	public final ParamsContext params() throws RecognitionException {
		ParamsContext _localctx = new ParamsContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			match(LPAR);
			setState(52);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(49);
				match(ID);
				setState(50);
				match(T__0);
				setState(51);
				type();
				}
			}

			setState(60);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(54);
				match(T__1);
				setState(55);
				match(ID);
				setState(56);
				match(T__0);
				setState(57);
				type();
				}
				}
				setState(62);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(63);
			match(RPAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationsContext extends ParserRuleContext {
		public List<Variable_declContext> variable_decl() {
			return getRuleContexts(Variable_declContext.class);
		}
		public Variable_declContext variable_decl(int i) {
			return getRuleContext(Variable_declContext.class,i);
		}
		public DeclarationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarations; }
	}

	public final DeclarationsContext declarations() throws RecognitionException {
		DeclarationsContext _localctx = new DeclarationsContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_declarations);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==VAR) {
				{
				{
				setState(65);
				variable_decl();
				}
				}
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Variable_declContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(AslParser.VAR, 0); }
		public List<TerminalNode> ID() { return getTokens(AslParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(AslParser.ID, i);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public Variable_declContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable_decl; }
	}

	public final Variable_declContext variable_decl() throws RecognitionException {
		Variable_declContext _localctx = new Variable_declContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variable_decl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(71);
			match(VAR);
			setState(72);
			match(ID);
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(73);
				match(T__1);
				setState(74);
				match(ID);
				}
				}
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(80);
			match(T__0);
			setState(81);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public Simple_typeContext simple_type() {
			return getRuleContext(Simple_typeContext.class,0);
		}
		public Array_typeContext array_type() {
			return getRuleContext(Array_typeContext.class,0);
		}
		public Struct_typeContext struct_type() {
			return getRuleContext(Struct_typeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type);
		try {
			setState(86);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case BOOL:
			case FLOAT:
			case CHAR:
				enterOuterAlt(_localctx, 1);
				{
				setState(83);
				simple_type();
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(84);
				array_type();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 3);
				{
				setState(85);
				struct_type();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_typeContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(AslParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(AslParser.ID, i);
		}
		public List<Simple_typeContext> simple_type() {
			return getRuleContexts(Simple_typeContext.class);
		}
		public Simple_typeContext simple_type(int i) {
			return getRuleContext(Simple_typeContext.class,i);
		}
		public Struct_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_type; }
	}

	public final Struct_typeContext struct_type() throws RecognitionException {
		Struct_typeContext _localctx = new Struct_typeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_struct_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			match(T__2);
			setState(89);
			match(T__3);
			{
			setState(90);
			match(ID);
			setState(91);
			match(T__0);
			setState(92);
			simple_type();
			}
			setState(100);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(94);
				match(T__1);
				setState(95);
				match(ID);
				setState(96);
				match(T__0);
				setState(97);
				simple_type();
				}
				}
				setState(102);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(103);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_typeContext extends ParserRuleContext {
		public TerminalNode ARRAY() { return getToken(AslParser.ARRAY, 0); }
		public TerminalNode INTVAL() { return getToken(AslParser.INTVAL, 0); }
		public TerminalNode OF() { return getToken(AslParser.OF, 0); }
		public Simple_typeContext simple_type() {
			return getRuleContext(Simple_typeContext.class,0);
		}
		public Array_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_type; }
	}

	public final Array_typeContext array_type() throws RecognitionException {
		Array_typeContext _localctx = new Array_typeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_array_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			match(ARRAY);
			setState(106);
			match(T__5);
			setState(107);
			match(INTVAL);
			setState(108);
			match(T__6);
			setState(109);
			match(OF);
			setState(110);
			simple_type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Simple_typeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(AslParser.INT, 0); }
		public TerminalNode BOOL() { return getToken(AslParser.BOOL, 0); }
		public TerminalNode FLOAT() { return getToken(AslParser.FLOAT, 0); }
		public TerminalNode CHAR() { return getToken(AslParser.CHAR, 0); }
		public Simple_typeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_type; }
	}

	public final Simple_typeContext simple_type() throws RecognitionException {
		Simple_typeContext _localctx = new Simple_typeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_simple_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << BOOL) | (1L << FLOAT) | (1L << CHAR))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementsContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public StatementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statements; }
	}

	public final StatementsContext statements() throws RecognitionException {
		StatementsContext _localctx = new StatementsContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_statements);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << READ) | (1L << WRITE) | (1L << ID))) != 0)) {
				{
				{
				setState(114);
				statement();
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_mapContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<IdentContext> ident() {
			return getRuleContexts(IdentContext.class);
		}
		public IdentContext ident(int i) {
			return getRuleContext(IdentContext.class,i);
		}
		public Array_mapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_map; }
	}

	public final Array_mapContext array_map() throws RecognitionException {
		Array_mapContext _localctx = new Array_mapContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_array_map);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(T__5);
			setState(121);
			expr(0);
			setState(122);
			match(T__7);
			setState(123);
			expr(0);
			setState(124);
			match(T__0);
			setState(125);
			expr(0);
			setState(126);
			match(T__8);
			setState(127);
			ident();
			setState(128);
			match(T__9);
			setState(129);
			ident();
			setState(130);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ProcCallContext extends StatementContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public TerminalNode LPAR() { return getToken(AslParser.LPAR, 0); }
		public TerminalNode RPAR() { return getToken(AslParser.RPAR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ProcCallContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WriteExprContext extends StatementContext {
		public TerminalNode WRITE() { return getToken(AslParser.WRITE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public WriteExprContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WhileStmtContext extends StatementContext {
		public TerminalNode WHILE() { return getToken(AslParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode DO() { return getToken(AslParser.DO, 0); }
		public StatementsContext statements() {
			return getRuleContext(StatementsContext.class,0);
		}
		public TerminalNode ENDWHILE() { return getToken(AslParser.ENDWHILE, 0); }
		public WhileStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class IfStmtContext extends StatementContext {
		public TerminalNode IF() { return getToken(AslParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode THEN() { return getToken(AslParser.THEN, 0); }
		public List<StatementsContext> statements() {
			return getRuleContexts(StatementsContext.class);
		}
		public StatementsContext statements(int i) {
			return getRuleContext(StatementsContext.class,i);
		}
		public TerminalNode ENDIF() { return getToken(AslParser.ENDIF, 0); }
		public TerminalNode ELSE() { return getToken(AslParser.ELSE, 0); }
		public IfStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReadStmtContext extends StatementContext {
		public TerminalNode READ() { return getToken(AslParser.READ, 0); }
		public Left_exprContext left_expr() {
			return getRuleContext(Left_exprContext.class,0);
		}
		public ReadStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class AssignStmtContext extends StatementContext {
		public Left_exprContext left_expr() {
			return getRuleContext(Left_exprContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(AslParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReturnStmtContext extends StatementContext {
		public TerminalNode RETURN() { return getToken(AslParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnStmtContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayMapContext extends StatementContext {
		public Left_exprContext left_expr() {
			return getRuleContext(Left_exprContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(AslParser.ASSIGN, 0); }
		public Array_mapContext array_map() {
			return getRuleContext(Array_mapContext.class,0);
		}
		public ArrayMapContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WriteStringContext extends StatementContext {
		public TerminalNode WRITE() { return getToken(AslParser.WRITE, 0); }
		public TerminalNode STRING() { return getToken(AslParser.STRING, 0); }
		public WriteStringContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_statement);
		int _la;
		try {
			setState(189);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				_localctx = new AssignStmtContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(132);
				left_expr();
				setState(133);
				match(ASSIGN);
				setState(134);
				expr(0);
				setState(135);
				match(T__10);
				}
				break;
			case 2:
				_localctx = new ArrayMapContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				left_expr();
				setState(138);
				match(ASSIGN);
				setState(139);
				array_map();
				setState(140);
				match(T__10);
				}
				break;
			case 3:
				_localctx = new WhileStmtContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(142);
				match(WHILE);
				setState(143);
				expr(0);
				setState(144);
				match(DO);
				setState(145);
				statements();
				setState(146);
				match(ENDWHILE);
				}
				break;
			case 4:
				_localctx = new IfStmtContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(148);
				match(IF);
				setState(149);
				expr(0);
				setState(150);
				match(THEN);
				setState(151);
				statements();
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(152);
					match(ELSE);
					setState(153);
					statements();
					}
				}

				setState(156);
				match(ENDIF);
				}
				break;
			case 5:
				_localctx = new ProcCallContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(158);
				ident();
				setState(159);
				match(LPAR);
				setState(168);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS) | (1L << SUB) | (1L << NOT) | (1L << LPAR) | (1L << BOOLVAL) | (1L << ID) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << CHARVAL))) != 0)) {
					{
					setState(160);
					expr(0);
					setState(165);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(161);
						match(T__1);
						setState(162);
						expr(0);
						}
						}
						setState(167);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(170);
				match(RPAR);
				setState(171);
				match(T__10);
				}
				break;
			case 6:
				_localctx = new ReadStmtContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(173);
				match(READ);
				setState(174);
				left_expr();
				setState(175);
				match(T__10);
				}
				break;
			case 7:
				_localctx = new WriteExprContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(177);
				match(WRITE);
				setState(178);
				expr(0);
				setState(179);
				match(T__10);
				}
				break;
			case 8:
				_localctx = new WriteStringContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(181);
				match(WRITE);
				setState(182);
				match(STRING);
				setState(183);
				match(T__10);
				}
				break;
			case 9:
				_localctx = new ReturnStmtContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(184);
				match(RETURN);
				setState(186);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS) | (1L << SUB) | (1L << NOT) | (1L << LPAR) | (1L << BOOLVAL) | (1L << ID) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << CHARVAL))) != 0)) {
					{
					setState(185);
					expr(0);
					}
				}

				setState(188);
				match(T__10);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Left_exprContext extends ParserRuleContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public Left_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_left_expr; }
	}

	public final Left_exprContext left_expr() throws RecognitionException {
		Left_exprContext _localctx = new Left_exprContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_left_expr);
		int _la;
		try {
			setState(202);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(191);
				ident();
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__5) {
					{
					setState(192);
					match(T__5);
					setState(193);
					expr(0);
					setState(194);
					match(T__6);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(198);
				ident();
				setState(199);
				match(T__11);
				setState(200);
				match(ID);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParenContext extends ExprContext {
		public TerminalNode LPAR() { return getToken(AslParser.LPAR, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(AslParser.RPAR, 0); }
		public ParenContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Function_callContext extends ExprContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public TerminalNode LPAR() { return getToken(AslParser.LPAR, 0); }
		public TerminalNode RPAR() { return getToken(AslParser.RPAR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Function_callContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Array_acessContext extends ExprContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Array_acessContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ExprIdentContext extends ExprContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public ExprIdentContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MUL() { return getToken(AslParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(AslParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(AslParser.MOD, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public TerminalNode SUB() { return getToken(AslParser.SUB, 0); }
		public ArithmeticContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelationalContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQUAL() { return getToken(AslParser.EQUAL, 0); }
		public TerminalNode NEQ() { return getToken(AslParser.NEQ, 0); }
		public TerminalNode GT() { return getToken(AslParser.GT, 0); }
		public TerminalNode LT() { return getToken(AslParser.LT, 0); }
		public TerminalNode GE() { return getToken(AslParser.GE, 0); }
		public TerminalNode LE() { return getToken(AslParser.LE, 0); }
		public RelationalContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Struct_acessContext extends ExprContext {
		public IdentContext ident() {
			return getRuleContext(IdentContext.class,0);
		}
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public Struct_acessContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class UnaryContext extends ExprContext {
		public Token op;
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NOT() { return getToken(AslParser.NOT, 0); }
		public TerminalNode SUB() { return getToken(AslParser.SUB, 0); }
		public TerminalNode PLUS() { return getToken(AslParser.PLUS, 0); }
		public UnaryContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class LogicContext extends ExprContext {
		public Token op;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode AND() { return getToken(AslParser.AND, 0); }
		public TerminalNode OR() { return getToken(AslParser.OR, 0); }
		public LogicContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ValueContext extends ExprContext {
		public TerminalNode INTVAL() { return getToken(AslParser.INTVAL, 0); }
		public TerminalNode FLOATVAL() { return getToken(AslParser.FLOATVAL, 0); }
		public TerminalNode BOOLVAL() { return getToken(AslParser.BOOLVAL, 0); }
		public TerminalNode CHARVAL() { return getToken(AslParser.CHARVAL, 0); }
		public ValueContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				_localctx = new ParenContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(205);
				match(LPAR);
				setState(206);
				expr(0);
				setState(207);
				match(RPAR);
				}
				break;
			case 2:
				{
				_localctx = new Array_acessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(209);
				ident();
				{
				setState(210);
				match(T__5);
				setState(211);
				expr(0);
				setState(212);
				match(T__6);
				}
				}
				break;
			case 3:
				{
				_localctx = new Struct_acessContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(214);
				ident();
				setState(215);
				match(T__11);
				setState(216);
				match(ID);
				}
				break;
			case 4:
				{
				_localctx = new Function_callContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(218);
				ident();
				setState(219);
				match(LPAR);
				setState(228);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS) | (1L << SUB) | (1L << NOT) | (1L << LPAR) | (1L << BOOLVAL) | (1L << ID) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << CHARVAL))) != 0)) {
					{
					setState(220);
					expr(0);
					setState(225);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==T__1) {
						{
						{
						setState(221);
						match(T__1);
						setState(222);
						expr(0);
						}
						}
						setState(227);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(230);
				match(RPAR);
				}
				break;
			case 5:
				{
				_localctx = new UnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(232);
				((UnaryContext)_localctx).op = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS) | (1L << SUB) | (1L << NOT))) != 0)) ) {
					((UnaryContext)_localctx).op = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(233);
				expr(8);
				}
				break;
			case 6:
				{
				_localctx = new ValueContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(234);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOLVAL) | (1L << INTVAL) | (1L << FLOATVAL) | (1L << CHARVAL))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 7:
				{
				_localctx = new ExprIdentContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(235);
				ident();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(255);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(253);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(238);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(239);
						((ArithmeticContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MUL) | (1L << DIV) | (1L << MOD))) != 0)) ) {
							((ArithmeticContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(240);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(241);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(242);
						((ArithmeticContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==SUB) ) {
							((ArithmeticContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(243);
						expr(7);
						}
						break;
					case 3:
						{
						_localctx = new RelationalContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(244);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(245);
						((RelationalContext)_localctx).op = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQUAL) | (1L << NEQ) | (1L << GT) | (1L << LT) | (1L << GE) | (1L << LE))) != 0)) ) {
							((RelationalContext)_localctx).op = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(246);
						expr(6);
						}
						break;
					case 4:
						{
						_localctx = new LogicContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(247);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(248);
						((LogicContext)_localctx).op = match(AND);
						setState(249);
						expr(5);
						}
						break;
					case 5:
						{
						_localctx = new LogicContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(250);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(251);
						((LogicContext)_localctx).op = match(OR);
						setState(252);
						expr(4);
						}
						break;
					}
					} 
				}
				setState(257);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class IdentContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(AslParser.ID, 0); }
		public IdentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ident; }
	}

	public final IdentContext ident() throws RecognitionException {
		IdentContext _localctx = new IdentContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_ident);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(258);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 13:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 7);
		case 1:
			return precpred(_ctx, 6);
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 3);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3:\u0107\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\6\2\"\n\2\r\2\16"+
		"\2#\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3-\n\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3"+
		"\4\5\4\67\n\4\3\4\3\4\3\4\3\4\7\4=\n\4\f\4\16\4@\13\4\3\4\3\4\3\5\7\5"+
		"E\n\5\f\5\16\5H\13\5\3\6\3\6\3\6\3\6\7\6N\n\6\f\6\16\6Q\13\6\3\6\3\6\3"+
		"\6\3\7\3\7\3\7\5\7Y\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\be\n"+
		"\b\f\b\16\bh\13\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\13\7\13"+
		"v\n\13\f\13\16\13y\13\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\5\r\u009d\n\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u00a6"+
		"\n\r\f\r\16\r\u00a9\13\r\5\r\u00ab\n\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u00bd\n\r\3\r\5\r\u00c0\n\r\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u00c7\n\16\3\16\3\16\3\16\3\16\5\16\u00cd\n"+
		"\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\7\17\u00e2\n\17\f\17\16\17\u00e5\13\17\5"+
		"\17\u00e7\n\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00ef\n\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17"+
		"\u0100\n\17\f\17\16\17\u0103\13\17\3\20\3\20\3\20\2\3\34\21\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36\2\b\3\2#&\5\2\30\30\32\32\37\37\4\2\63\63"+
		"\65\67\4\2\31\31\33\34\4\2\30\30\32\32\3\2\22\27\2\u011c\2!\3\2\2\2\4"+
		"\'\3\2\2\2\6\62\3\2\2\2\bF\3\2\2\2\nI\3\2\2\2\fX\3\2\2\2\16Z\3\2\2\2\20"+
		"k\3\2\2\2\22r\3\2\2\2\24w\3\2\2\2\26z\3\2\2\2\30\u00bf\3\2\2\2\32\u00cc"+
		"\3\2\2\2\34\u00ee\3\2\2\2\36\u0104\3\2\2\2 \"\5\4\3\2! \3\2\2\2\"#\3\2"+
		"\2\2#!\3\2\2\2#$\3\2\2\2$%\3\2\2\2%&\7\2\2\3&\3\3\2\2\2\'(\7/\2\2()\7"+
		"\64\2\2),\5\6\4\2*+\7\3\2\2+-\5\f\7\2,*\3\2\2\2,-\3\2\2\2-.\3\2\2\2./"+
		"\5\b\5\2/\60\5\24\13\2\60\61\7\60\2\2\61\5\3\2\2\2\62\66\7 \2\2\63\64"+
		"\7\64\2\2\64\65\7\3\2\2\65\67\5\f\7\2\66\63\3\2\2\2\66\67\3\2\2\2\67>"+
		"\3\2\2\289\7\4\2\29:\7\64\2\2:;\7\3\2\2;=\5\f\7\2<8\3\2\2\2=@\3\2\2\2"+
		"><\3\2\2\2>?\3\2\2\2?A\3\2\2\2@>\3\2\2\2AB\7!\2\2B\7\3\2\2\2CE\5\n\6\2"+
		"DC\3\2\2\2EH\3\2\2\2FD\3\2\2\2FG\3\2\2\2G\t\3\2\2\2HF\3\2\2\2IJ\7\"\2"+
		"\2JO\7\64\2\2KL\7\4\2\2LN\7\64\2\2MK\3\2\2\2NQ\3\2\2\2OM\3\2\2\2OP\3\2"+
		"\2\2PR\3\2\2\2QO\3\2\2\2RS\7\3\2\2ST\5\f\7\2T\13\3\2\2\2UY\5\22\n\2VY"+
		"\5\20\t\2WY\5\16\b\2XU\3\2\2\2XV\3\2\2\2XW\3\2\2\2Y\r\3\2\2\2Z[\7\5\2"+
		"\2[\\\7\6\2\2\\]\7\64\2\2]^\7\3\2\2^_\5\22\n\2_f\3\2\2\2`a\7\4\2\2ab\7"+
		"\64\2\2bc\7\3\2\2ce\5\22\n\2d`\3\2\2\2eh\3\2\2\2fd\3\2\2\2fg\3\2\2\2g"+
		"i\3\2\2\2hf\3\2\2\2ij\7\7\2\2j\17\3\2\2\2kl\7\17\2\2lm\7\b\2\2mn\7\65"+
		"\2\2no\7\t\2\2op\7\20\2\2pq\5\22\n\2q\21\3\2\2\2rs\t\2\2\2s\23\3\2\2\2"+
		"tv\5\30\r\2ut\3\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2x\25\3\2\2\2yw\3\2"+
		"\2\2z{\7\b\2\2{|\5\34\17\2|}\7\n\2\2}~\5\34\17\2~\177\7\3\2\2\177\u0080"+
		"\5\34\17\2\u0080\u0081\7\13\2\2\u0081\u0082\5\36\20\2\u0082\u0083\7\f"+
		"\2\2\u0083\u0084\5\36\20\2\u0084\u0085\7\t\2\2\u0085\27\3\2\2\2\u0086"+
		"\u0087\5\32\16\2\u0087\u0088\7\21\2\2\u0088\u0089\5\34\17\2\u0089\u008a"+
		"\7\r\2\2\u008a\u00c0\3\2\2\2\u008b\u008c\5\32\16\2\u008c\u008d\7\21\2"+
		"\2\u008d\u008e\5\26\f\2\u008e\u008f\7\r\2\2\u008f\u00c0\3\2\2\2\u0090"+
		"\u0091\7+\2\2\u0091\u0092\5\34\17\2\u0092\u0093\7,\2\2\u0093\u0094\5\24"+
		"\13\2\u0094\u0095\7-\2\2\u0095\u00c0\3\2\2\2\u0096\u0097\7\'\2\2\u0097"+
		"\u0098\5\34\17\2\u0098\u0099\7(\2\2\u0099\u009c\5\24\13\2\u009a\u009b"+
		"\7)\2\2\u009b\u009d\5\24\13\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2"+
		"\u009d\u009e\3\2\2\2\u009e\u009f\7*\2\2\u009f\u00c0\3\2\2\2\u00a0\u00a1"+
		"\5\36\20\2\u00a1\u00aa\7 \2\2\u00a2\u00a7\5\34\17\2\u00a3\u00a4\7\4\2"+
		"\2\u00a4\u00a6\5\34\17\2\u00a5\u00a3\3\2\2\2\u00a6\u00a9\3\2\2\2\u00a7"+
		"\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00ab\3\2\2\2\u00a9\u00a7\3\2"+
		"\2\2\u00aa\u00a2\3\2\2\2\u00aa\u00ab\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac"+
		"\u00ad\7!\2\2\u00ad\u00ae\7\r\2\2\u00ae\u00c0\3\2\2\2\u00af\u00b0\7\61"+
		"\2\2\u00b0\u00b1\5\32\16\2\u00b1\u00b2\7\r\2\2\u00b2\u00c0\3\2\2\2\u00b3"+
		"\u00b4\7\62\2\2\u00b4\u00b5\5\34\17\2\u00b5\u00b6\7\r\2\2\u00b6\u00c0"+
		"\3\2\2\2\u00b7\u00b8\7\62\2\2\u00b8\u00b9\78\2\2\u00b9\u00c0\7\r\2\2\u00ba"+
		"\u00bc\7.\2\2\u00bb\u00bd\5\34\17\2\u00bc\u00bb\3\2\2\2\u00bc\u00bd\3"+
		"\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00c0\7\r\2\2\u00bf\u0086\3\2\2\2\u00bf"+
		"\u008b\3\2\2\2\u00bf\u0090\3\2\2\2\u00bf\u0096\3\2\2\2\u00bf\u00a0\3\2"+
		"\2\2\u00bf\u00af\3\2\2\2\u00bf\u00b3\3\2\2\2\u00bf\u00b7\3\2\2\2\u00bf"+
		"\u00ba\3\2\2\2\u00c0\31\3\2\2\2\u00c1\u00c6\5\36\20\2\u00c2\u00c3\7\b"+
		"\2\2\u00c3\u00c4\5\34\17\2\u00c4\u00c5\7\t\2\2\u00c5\u00c7\3\2\2\2\u00c6"+
		"\u00c2\3\2\2\2\u00c6\u00c7\3\2\2\2\u00c7\u00cd\3\2\2\2\u00c8\u00c9\5\36"+
		"\20\2\u00c9\u00ca\7\16\2\2\u00ca\u00cb\7\64\2\2\u00cb\u00cd\3\2\2\2\u00cc"+
		"\u00c1\3\2\2\2\u00cc\u00c8\3\2\2\2\u00cd\33\3\2\2\2\u00ce\u00cf\b\17\1"+
		"\2\u00cf\u00d0\7 \2\2\u00d0\u00d1\5\34\17\2\u00d1\u00d2\7!\2\2\u00d2\u00ef"+
		"\3\2\2\2\u00d3\u00d4\5\36\20\2\u00d4\u00d5\7\b\2\2\u00d5\u00d6\5\34\17"+
		"\2\u00d6\u00d7\7\t\2\2\u00d7\u00ef\3\2\2\2\u00d8\u00d9\5\36\20\2\u00d9"+
		"\u00da\7\16\2\2\u00da\u00db\7\64\2\2\u00db\u00ef\3\2\2\2\u00dc\u00dd\5"+
		"\36\20\2\u00dd\u00e6\7 \2\2\u00de\u00e3\5\34\17\2\u00df\u00e0\7\4\2\2"+
		"\u00e0\u00e2\5\34\17\2\u00e1\u00df\3\2\2\2\u00e2\u00e5\3\2\2\2\u00e3\u00e1"+
		"\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e6"+
		"\u00de\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e9\7!"+
		"\2\2\u00e9\u00ef\3\2\2\2\u00ea\u00eb\t\3\2\2\u00eb\u00ef\5\34\17\n\u00ec"+
		"\u00ef\t\4\2\2\u00ed\u00ef\5\36\20\2\u00ee\u00ce\3\2\2\2\u00ee\u00d3\3"+
		"\2\2\2\u00ee\u00d8\3\2\2\2\u00ee\u00dc\3\2\2\2\u00ee\u00ea\3\2\2\2\u00ee"+
		"\u00ec\3\2\2\2\u00ee\u00ed\3\2\2\2\u00ef\u0101\3\2\2\2\u00f0\u00f1\f\t"+
		"\2\2\u00f1\u00f2\t\5\2\2\u00f2\u0100\5\34\17\n\u00f3\u00f4\f\b\2\2\u00f4"+
		"\u00f5\t\6\2\2\u00f5\u0100\5\34\17\t\u00f6\u00f7\f\7\2\2\u00f7\u00f8\t"+
		"\7\2\2\u00f8\u0100\5\34\17\b\u00f9\u00fa\f\6\2\2\u00fa\u00fb\7\35\2\2"+
		"\u00fb\u0100\5\34\17\7\u00fc\u00fd\f\5\2\2\u00fd\u00fe\7\36\2\2\u00fe"+
		"\u0100\5\34\17\6\u00ff\u00f0\3\2\2\2\u00ff\u00f3\3\2\2\2\u00ff\u00f6\3"+
		"\2\2\2\u00ff\u00f9\3\2\2\2\u00ff\u00fc\3\2\2\2\u0100\u0103\3\2\2\2\u0101"+
		"\u00ff\3\2\2\2\u0101\u0102\3\2\2\2\u0102\35\3\2\2\2\u0103\u0101\3\2\2"+
		"\2\u0104\u0105\7\64\2\2\u0105\37\3\2\2\2\27#,\66>FOXfw\u009c\u00a7\u00aa"+
		"\u00bc\u00bf\u00c6\u00cc\u00e3\u00e6\u00ee\u00ff\u0101";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}