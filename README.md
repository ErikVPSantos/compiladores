# Gerador de Classes 

Nosso projeto consiste de um gerador de classes C++ baseados em um analisador sintático dado como entrada. O input será um .y informado pelo usuário, e o output serão os headers _.h_ da classe já criados com seus respectivos atributos e métodos.

Projeto desenvolvido para a cadeira de Compiladores (2017.2) da Universidade de Pernambuco.

## Funcionamento

Para o funcionamento do nosso código do zero, são necessários alguns programas. Para execução do mesmo pelo executável, há instruções no fim do arquivo.

### Pré-requisitos

Para executar o arquivo é necessário ter uma máquina rodando **Windows** (para a execução do _.exe_ gerado ao fim) instalado três programas:
- [Flex](https://github.com/westes/flex) - Scanner generator for lexing in C and C++;
- [Bison](https://www.gnu.org/software/bison/) - Bison is a general-purpose parser generator that converts an annotated context-free grammar into a deterministic LR;
- [GCC](https://gcc.gnu.org/) - The GNU Compiler Collection includes front ends for C, C++, etc.

### Geração do executável

Para gerar o executável, é necessário utilizar os seguintes comandos no terminal:
```
flex -o compilador.c lexico.l
bison -o sintatico.cpp sintatico.y
g++ -o compilador.exe sintatico.cpp test.txt
```
### Visualização

Para executar, é necessário apenas clicar no arquivo _compilador.exe_ e selecionar um arquivo de teste _test.txt_. No nosso caso, disponibilizamos um simples arquivo de teste com um código sintático de exemplo.
