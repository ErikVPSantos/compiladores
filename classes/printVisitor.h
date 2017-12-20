#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <iostream>
#include <stack>  
#include <fstream>
#include <string>
#include "palavras.h"
#include "idFolha.h"
#include "bloco.h"
#include "blocoExps.h"
#include "def_Tipos.h"
#include "def_Tokens.h"
#include "def_Union.h"
#include "exps.h"
#include "idColonLinhasSemicolon.h"
#include "includes.h"
#include "ASTNode.h"
#include "l_TypeOp_LtTextoOp_GtIdDef_Tipos.h"
#include "idPalavras.h"
#include "l_TokenIdDef_Tokens.h"
#include "texto.h"
#include "includesDef_TokenDef_UnionDef_Tipos.h"
#include "l_UnionC_Bracket_LeftTextoC_Bracket_Right.h"
#include "linhaUnica.h"
#include "linhas.h"
#include "l_TypeOp_LtTextoOp_GtId.h" 
#include "linha.h"
#include "l_StringTexto.h"
#include "preambuloSeparatorExpsSeparator.h"
#include "includ_OpenTextoInclud_Close.h"
#include "linhaLinhas.h"
#include "preambulo.h"
#include "l_TokensId.h"
#include "visitor.h"

class PrintVisitor : public Visitor 
{
	private:
		std::stack<std::string> att_;

	public:
		// virtual void visit(Bloco* e)
		// {
		// 	e -> bloco() -> accept(this);
		// }
		virtual void visit(BlocoExps* e)
		{
			// e -> bloco() -> accept(this);
			e -> exps() -> accept(this);
		}
		// virtual void visit(Def_Tipos* e)
		// {
		// 	e -> def_Tipos() -> accept(this);
		// }
		// virtual void visit(Def_Tokens* e)
		// {
		// 	e -> def_Tokens() -> accept(this);
		// }
		// virtual void visit(Def_Union* e)
		// {
		// 	e -> def_Union() -> accept(this);
		// }
		// virtual void visit(Exps* e)
		// {
		// 	e -> exps() -> accept(this);
		// }
		virtual void visit(IdColonLinhasSemicolon* e)
		{
			std::cout << "L_STRING";
			std::cout << ":";
			e -> linhas() -> accept(this);
			std::cout << ";";
		}
		virtual void visit(IdPalavras* e)
		{
			std::cout << "L_STRING";
			e -> palavras() ->accept(this);
		}
		virtual void visit(Includ_OpenTextoInclud_Close* e)
		{
			std::cout << "%{";
			e -> texto() ->accept(this);
			std::cout << "}%";
		}
		// virtual void visit(Includes* e)
		// {
		// 	e -> includes() ->accept(this);
		// }
		virtual void visit(IncludesDef_TokenDef_UnionDef_Tipos* e)
		{
			e -> includes() -> accept(this);
			e -> def_token() -> accept(this);
			e -> def_union() -> accept(this);
			e -> def_tipos() -> accept(this);
		}
		virtual void visit(L_StringTexto* e)
		{
			std::cout << "L_STRING";
			e -> texto() -> accept(this);
		}
		virtual void visit(L_TokenIdDef_Tokens* e)
		{
			std::cout << "L_TOKEN";
			std::cout << "L_STRING";
			e -> def_tokens() -> accept(this);
		}
		virtual void visit(L_TypeOp_LtTextoOp_GtId* e)
		{
			std::cout << "L_TYPE";
			std::cout << "<";
			e -> texto() -> accept(this);
			std::cout << ">";
			std::cout << "L_STRING";
		}
		virtual void visit(L_TypeOp_LtTextoOp_GtIdDef_Tipos* e)
		{
			std::cout << "L_TYPE";
			std::cout << "<";
			e -> texto() -> accept(this);
			std::cout << ">";
			std::cout << "L_STRING";
			e -> def_tipos() -> accept(this);
		}
		virtual void visit(L_UnionC_Bracket_LeftTextoC_Bracket_Right* e)
		{
			std::cout << "L_UNION";
			std::cout << "{";
			e -> texto() -> accept(this);
			std::cout << "}";
		}
		// virtual void visit(Linhas* e)
		// {
		// 	e -> linhas() -> accept(this);
		// }
		virtual void visit(IdFolha* e)
		{
			std::cout << "L_STRING";
			att_.push(cout);
		}
		virtual void visit(LinhaLinhas* e)
		{
			e -> linha() -> accept(this);
			e -> linhas() -> accept(this);
		}
		virtual void visit(LinhaUnica* e)
		{
			e -> linha() -> accept(this);

			std::string nome; // atributos concatenados
			std::int count = att_.size();

			std::stack<std::string> nomeatt = att_;
			for (int i = 0; i < count; ++i) {
				nome += nomeatt.pop();
			}

			//Abrir arquivo
			std::ofstream outputFile;
			outputFile.open(nome + ".h");
	        outputFile << "class " + nome + " : public ASTNode {\n";

	        //Definir parâmetros de classe
     		std::stack<std::string> attatt = att_;
			outputFile << "\nprivate: \n";
	        for (int i = 0; i < count; ++i) {
	        	std::string atributo = attatt.pop();
	        	outputFile << atributo + " *" + atributo + "_;\n";
	        }
	        
	        //Criar construtor publico com atributos de classe
	        outputFile << "\npublic: \n";
        	outputFile << nome + "(";
        	std::stack<std::string>construtoratt = att_;
        	for (int i = 0; i < count; ++i) {
        		std::string atributo = construtoratt.pop();
        		outputFile << atributo + " *" + atributo;
        		if(i != count - 1) {  cout << ", "; } 
        	}
        	cout << ") : ";
        	for (int i = 0; i < count; ++i) {
        		std::string atributo = construtoratt.pop();
        		outputFile << atributo + "_(" + atributo + ")";
        		if(i != count - 1) {  cout << ", "; } 
        	}
        	outputFile << " { }\n";
        	outputFile << "\n};";

	        outputFile.close();
		}
		// virtual void visit(Linha* e)
		// {
		// 	e -> linha() -> accept(this);
		// }
		// virtual void visit(Palavras* e)
		// {
		// 	e -> palavras() -> accept(this);
		// }
		// virtual void visit(Preambulo* e)
		// {
		// 	e -> preambulo() -> accept(this);
		// }
		virtual void visit(PreambuloSeparatorExpsSeparator* e)
		{
			e -> preambulo() -> accept(this);
			std::cout << "%%";
			e -> exps() -> accept(this);
			std >> cout << "%%";
		}
		// virtual void visit(Texto* e) {
		// 	e -> texto() -> accept(this);
		// }
};
#endif