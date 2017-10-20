
%{
	enum Tokens{
		ID,
		L_INT,
		L_DOUBLE,
		L_FLOAT,
		L_BOOL,
		L_STRING,
		L_BYTE,
		OP_EQ,
		OP_SUMASG,
		OP_SUBASG,
		OP_INEQ,
		OP_GT,
		OP_LT,
		OP_GE,
		OP_LE,
		OP_SUM,
		OP_SUB,
		OP_MUL,
		OP_DIV,
		OP_POT,
		KW_BREAK,
		KW_DEFAULT,
		KW_SWITCH,
		KW_CASE,
		KW_IF,
		KW_ELSE,
		KW_VAR,
		KW_FOR,
		KW_CONST,
		KW_RETURN,
		KW_OPTIONAL,
		KW_REPEATED,
		KW_MESSAGE,
		KW_IMPORT,
		KW_REQUIRED,
		KW_PUBLIC,
		KW_ENUM,
		KW_SERVICE,
		KW_CHANNEL,
		KW_CONTROLLER,
		KW_FUNC,
		A_RPAR,
		A_LPAR,
		C_RPAR,
		C_LPAR,
		PIPE
	  };
%}
%option nodefault noyywrap
%%

"==" { return OP_EQ; }
"+=" { return OP_SUMASG; }
"-=" { return OP_SUBASG; }
"!=" { return OP_INEQ; }
">"  { return OP_GT; }
"<"  { return OP_LT; }
">=" { return OP_GE; }
"<=" { return OP_LE; }
"+"  { return OP_SUM; }
"-"  { return OP_SUB; }
"*"  { return OP_MUL; }
"/"  { return OP_DIV; }
"ˆ"  { return OP_POT; }
"("  { return A_RPAR; }
")"  { return A_LPAR; }
"("  { return A_RPAR; }
")"  { return A_LPAR; }
"{"  { return C_RPAR; }
"}"  { return C_LPAR; }
"|"  { return PIPE; }
";"  { return DOT_COMMA; }
"required" { return KW_REQUIRED; }
"optional" { return KW_OPTIONAL; }
"repeated" { return KW_REPEATED; }
"message" { return KW_MESSAGE; }
"import" { return KW_IMPORT; }
"public" { return KW_PUBLIC; }
"enum" { return KW_ENUM; }
"service" { return KW_SERVICE; }
"channel" { return KW_CHANNEL; }
"controller" { return KW_CONTROLLER; }
"func"{ return KW_FUNC; }
"true" { return L_BOOL; }
"false" { return L_BOOL; }
"break"		KW_BREAK,
"default"		KW_DEFAULT,
"switch"		{ return KW_SWITCH; }
"case"		{ return KW_CASE; }
"if"	{ return KW_IF; }
"else"		{ return KW_ELSE; }
"var"		{ return KW_VAR; }
"for"		{ return KW_FOR; }
"const"		{ return KW_CONST; }
"return" { return KW_RETURN; }
[\r\n ] {}
([0-1]) { printf("[%s]", yytext); return L_BYTE; }
(0|[1-9][0-9]*) { printf("[%s]", yytext); return L_INT; }
(0|[1-9][0-9]*)?\.[0-9]+ { printf("[%s]", yytext); return L_DOUBLE; }
(0|[1-9][0-9]*)?\.[0-9]+[fF] { printf("[%s]", yytext); return L_FLOAT; }
\"[^"]*\" { printf("[%s]", yytext); return L_STRING; }
%%


