%{
  #include <stdio.h>
  #include <stdlib.h> 
  #include "classes/palavras.h"
  #include "classes/codigo.h"
  #include "classes/idFolha.h"
  #include "classes/bloco.h"
  #include "classes/blocoExps.h"
  #include "classes/def_Tipos.h"
  #include "classes/def_Tokens.h"
  #include "classes/def_Union.h"
  #include "classes/exps.h"
  #include "classes/idColonLinhasSemicolon.h"
  #include "classes/idPalavras.h"
  #include "classes/includes.h"
  #include "classes/ASTNode.h"
  #include "classes/l_TypeOp_LtTextoOp_GtIdDef_Tipos.h"
  #include "classes/idPalavras.h"
  #include "classes/l_TokenIdDef_Tokens.h"
  #include "classes/texto.h"
  #include "classes/includesDef_TokenDef_UnionDef_Tipos.h"
  #include "classes/l_UnionC_Bracket_LeftTextoC_Bracket_Right.h"
  #include "classes/linhaUnica.h"
  #include "classes/linhas.h"
  #include "classes/l_TypeOp_LtTextoOp_GtId.h" 
  #include "classes/linha.h"
  #include "classes/l_StringTexto.h"
  #include "classes/preambuloSeparatorExpsSeparator.h"
  #include "classes/includ_OpenTextoInclud_Close.h"
  #include "classes/linhaLinhas.h"
  #include "classes/preambulo.h"
  #include "classes/l_TokensId.h"
  #include "classes/printVisitor.h"
  
   ASTNode* raiz = null;
%}

%token ID
%token L_STRING
%token OP_GT
%token OP_LT
%token PIPE
%token COLON
%token SEMICOLON
%token INCLUD_OPEN 
%token INCLUD_CLOSE
%token L_TOKEN
%token L_UNION
%token C_BRACKET_LEFT
%token C_BRACKET_RIGHT
%token SEPARATOR
%token L_TYPE
%union  {
  int64_t integer;
  std::string  strg;
}
%type <strg> ID
%type <Palavras> palavras
%type <Bloco> bloco
%type <Def_Tipos> def_tipos
%type <Def_Tokens> def_tokens
%type <Def_Union> def_union
%type <Exps> exps
%type <Includes> includes
%type <Texto> texto
%type <Linhas> linhas
%type <Linha> linha
%type <Preambulo> preambulo
%type <Codigo> codigo

%%
inicio : codigo { raiz = $1; };

codigo: preambulo  SEPARATOR exps SEPARATOR { $$ = new PreambuloSeparatorExpsSeparator($1, $3);};

preambulo: includes def_tokens def_union def_tipos { $$ = new IncludesDef_TokenDef_UnionDef_Tipos($1,$2,$3,$4); };
           
includes: INCLUD_OPEN texto INCLUD_CLOSE { $$ = new Includ_OpenTextoInclud_Open($2);};

texto: L_STRING
     | L_STRING texto { $$ = new L_StringTexto($2);};

def_tokens: L_TOKEN ID { $$ = new L_TokenId ($2);}
            | L_TOKEN ID def_tokens { $$ = new L_TokenIdDef_Tokens ($3); };
                  
def_union: L_UNION C_BRACKET_LEFT texto C_BRACKET_RIGHT { $$ = new L_UnionC_Bracket_LeftTextoC_Bracket_Right($3); }  
           ;

def_tipos: L_TYPE OP_LT texto OP_GT ID { $$ = new L_TypeOp_LtTextoOp_GtId($3);}  
           | L_TYPE OP_LT texto OP_GT ID def_tipos { $$ = new L_TypeOp_LTTextoOp_GtIdDef_Tipos ($3,$6); }  
           ;
                             
exps: bloco { $$ = $1; }                                 
     |bloco exps { $$ = new BlocoExps ($1, $2); };

bloco: ID COLON linhas SEMICOLON {/* $$ = new IdColonLinhasSemicolon($3); */};

linhas: linha {$$ = new LinhaUnica($1); }                               
        |linha linhas {$$ = new LinhaLinhas ($2);};

linha: palavras {$$ = $1; }                          
       |PIPE palavras { $$ = new PipePalavras($2); } ; 
                   
palavras: ID {$$ = new IdFolha ($1); }
          |ID palavras { $$ = new IdPalavras ($2); } ;
   
%%

int main(int argc, char **argv) {
	
  
  root->accept(new PrintVisitor());
  return 0;
}

