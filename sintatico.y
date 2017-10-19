exps: bloco 
     |bloco PARAGRAPH exps;

bloco: nome_bloco DOUBLE_DOTS linhas DOT_COMMA;

linhas: linha
        |linha linhas;

linha: palavras
       |PIPE palavras;
                   
palavras: palavra
          |palavra palavras; //Convertido em classe com NOME_BLOCO como atributos
          
palavra: nome_bloco //Convertido em classe sem atributos
         |constante
         |operacao
         
//ele disse que a gente nao precisa preocupar agora com os atributos
// fim do arquivo já que a palavra vira um ID

constante: L_INT
       |L_PAR
       |L_DIR
       |L_STRING;
       //etc
       
operacao: plus
           |minus
           |mult      
           |div;
           //etc
 
//etc serao tokens definidos pelo analisador lexico
//as classes serao PALAVRAS ou NOME_BLOCO
