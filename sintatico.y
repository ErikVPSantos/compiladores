%{ #include <stdio.h>
   #inlcude <stdlib.h>
%}

% token ID,
% token L_STRING,
% token OP_GT,
% token OP_LT,
% token PIPE,
% token COLON,
% token SEMICOLON,
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

codigo: preambulo  SEPARATOR exps SEPARATOR;

preambulo: includes def_tokens def_union def_tipos;
           
includes: INCLUD_OPEN texto INCLUD_CLOSE
          | ;

texto: L_STRING
       | L_STRING texto;

def_tokens: L_TOKEN ID
            | L_TOKEN ID def_tokens;
                  
def_union: L_UNION C_BRACKET_LEFT texto C_BRACKET_RIGHT
           | ;

def_tipos: L_TYPE OP_LT texto OP_GT ID
           | L_TYPE OP_LT texto OP_GT ID def_tipos
           | ;
                             
exps: bloco 
     |bloco exps;

bloco: ID COLON linhas SEMICOLON;

linhas: linha
        |linha linhas;

linha: palavras
       |PIPE palavras;
                   
palavras: ID
          |ID palavras;
   
%%
