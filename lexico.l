%{
	enum Tokens{
		ID,
		L_STRING,
		OP_GT,
		OP_LT,
		PIPE,
		COLON,
		SEMICOLON,
		INCLUD_OPEN, 
		INCLUD_CLOSE,
		L_TOKEN,
		L_UNION,
		C_BRACKET_LEFT,
		C_BRACKET_RIGHT,
		SEPARATOR,
		L_TYPE
	  };
%}
%option nodefault noyywrap
%%
"%{" 		{ return INCLUD_OPEN ; }
"%}" 		{ return INCLUD_CLOSE; }
"%%" 		{ return SEPARATOR; }
">"  		{ return OP_GT; }
"<"  		{ return OP_LT; }
"{"  		{ return C_BRACKET_LEFT; }
"}"  		{ return C_BRACKET_RIGHT; }
"|"  		{ return PIPE; }
":"			{ return COLON; }
";"  		{ return SEMICOLON; }

[\r\n ] {}
"%token"	{ return L_TOKEN; }
"%union"	{ return L_UNION; }
"%type"	{ return L_TYPE; }
\"([^"]|\\[ntar"]*)*\" { return L_STRING; }
. {}

%%
