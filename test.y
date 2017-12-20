exps: bloco 
     |bloco PARAGRAPH exps;

bloco: nome_bloco DOUBLE_DOTS linhas DOT_COMMA;

linhas: linha
        |linha linhas;

linha: palavras
      |PIPE palavras;
                   
palavras: palavras
         |ID