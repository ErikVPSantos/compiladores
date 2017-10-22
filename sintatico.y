%{ #include <stdio.h>
   #inlcude <stdlib.h>
%}

% token ID,
% token L_STRING,
% token OP_GT,
% token OP_LT,
% token PIPE,
% token DOT_COMMA,
% token INCLUD_OPEN, 
% token INCLUD_CLOSE,
% token L_TOKEN,
% token L_UNION,
% token C_BRACKET_LEFT,
% token C_BRACKET_RIGHT,
% token SEPARATOR,
% token L_TYPE


% union  {
  int64_t integer;
  std: string  strg;
}
%type <integer> L_INT
%type <strg> ID

%%

sintatico: preambulo  SEPARATOR exps SEPARATOR;

preambulo: includes definição_tokens union definição_tipos;
           
includes: INCLUD_OPEN texto INCLUD_CLOSE;

texto: L_ STRING
       | L_STRING texto;

definição_tokens: L_TOKEN ID
                  | L_TOKEN ID definição_tokens;
                  
union: L_UNION C_BRACKET_LEFT texto C_BRACKET_RIGHT;

definição_tipos: L_TYPE OP_LT texto OP_GT ID
                 | L_TYPE OP_LT texto OP_GT ID definição_tipos;
                             
exps: bloco 
     |bloco exps;

bloco: ID DOUBLE_DOTS linhas DOT_COMMA;

linhas: linha
        |linha linhas;

linha: palavras
       |PIPE palavras;
                   
palavras: ID
          |ID palavras;
   
%%
