%{ #include <stdio.h>
   #inlcude <stdlib.h>
%}

% token ID,
% token L_INT,
% token L_DOUBLE,
% token L_FLOAT,
% token L_BOOL,
% token L_STRING,
% token L_BYTE,
% token OP_EQ,
% token OP_SUMASG,
% token OP_SUBASG,
% token OP_INEQ,
% token OP_GT,
% token OP_LT,
% token OP_GE,
% token OP_LE,
% token OP_SUM,
% token OP_SUB,
% token OP_MUL,
% token OP_DIV,
% token OP_POT,
% token KW_BREAK,
% token KW_DEFAULT,
% token KW_SWITCH,
% token KW_CASE,
% token KW_IF,
% token KW_ELSE,
% token KW_VAR,
% token KW_FOR,
% token KW_CONST,
% token KW_RETURN,
% token KW_OPTIONAL,
% token KW_REPEATED,
% token KW_MESSAGE,
% token KW_IMPORT,
% token KW_REQUIRED,
% token KW_PUBLIC,
% token KW_ENUM,
% token KW_SERVICE,
% token KW_CHANNEL,
% token KW_CONTROLLER,
% token KW_FUNC,
% token A_RPAR,
% token A_LPAR,
% token C_RPAR,
% token C_LPAR,
% token PIPE,
% token DOT_COMMA

% union  {
  int64_t integer;
  std: string  strg;
}
%type <integer> L_INT
%type <strg> ID

%%
exps: bloco 
     |bloco exps;

bloco: ID DOUBLE_DOTS linhas DOT_COMMA;

linhas: linha
        |linha linhas;

linha: palavras
       |PIPE palavras;
                   
palavras: ID
          |ID palavras;
