#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <IOstream>

class PrintVisitor : public Visitor 
{
	public:
		virtual void visit(VariablesTypesRule5* e)
		{
			std::cout << "string";
		}
		virtual void visit(VariablesTypesRule2* e)
		{
			std::cout << "int";
		}
		virtual void visit(ValuesRule5* e)
		{
			std::cout << "ID";
		}
		virtual void visit(ValuesRule4* e)
		{
			std::cout << "L_STRING";
		}
		virtual void visit(ValuesRule3* e)
		{
			std::cout << "L_TOKEN";
		}
		virtual void visit(ValuesRule2* e)
		{
			std::cout << "L_UNION";
		}
		virtual void visit(ValuesRule1* e)
		{
			std::cout << "L_TYPE";
		}
		virtual void visit(ValuesRule1* e)
		{
			std::cout << "PIPE";
		}
		virtual void visit(ValuesRule1* e)
		{
			std::cout << "SEPARATOR";
		}
		virtual void visit(Bloco* e)
		{
			e -> bloco() -> accept(this);
		}
		virtual void visit(BlocoExps* e)
		{
			e -> bloco() -> accept(this);
			e -> exps() -> accept(this);
		}
		virtual void visit(Def_Tipos* e)
		{
			e -> def_Tipos() -> accept(this);
		}
		virtual void visit(Def_Tokens* e)
		{
			e -> def_Tokens() -> accept(this);
		}
		virtual void visit(Def_Union* e)
		{
			e -> def_Union() -> accept(this);
		}
		virtual void visit(Exps* e)
		{
			e -> exps() -> accept(this);
		}
		virtual void visit(IdColonLinhasSemicolon* e)
		{
			std::cout << "L_STRING";
			std::cout << ":"
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
			std::cout << "}%"
		}
		virtual void visit(Includes* e)
		{
			e -> includes() ->accept(this);
		}
		virtual void visit(IncludeDef_TokensDef_UnionDef_Tipos* e)
		{
			e -> includes() -> accept(this);
			e -> def_Tokens() -> accept(this);
			e -> def_Union() -> accept(this);
			e -> def_Tipos() -> accept(this);
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
			e -> def_Tokens() -> accept(this);
		}
		virtual void visit(L_TypeOp_LtTextoOp_GtId* e)
		{
			std::cout << "L_TYPE";
			std::cout << "<";
			e -> texto() -> accept(this);
			std::cout << ">"
			std::cout << "L_STRING";
		}
		virtual void visit(L_TypeOp_LtTextoOp_GtIdDef_Tipos* e)
		{
			std::cout << "L_TYPE";
			std::cout << "<";
			e -> texto() -> accept(this);
			std::cout << ">"
			std::cout << "L_STRING";
			e -> def_Tipos() -> accept(this);
		}
		virtual void visit(L_UnionC_Bracket_LeftTextoC_Bracket_Right* e)
		{
			std::cout << "L_UNION";
			std::cout << "{";
			e -> texto() -> accept(this);
			std::cout << "}"
		}
		virtual void visit(Linhas* e)
		{
			e -> linhas() -> accept(this);
		}
		virtual void visit(Palavras* e)
		{
			e -> palavras() -> accept(this);
		}
		virtual void visit(Preambulo* e)
		{
			e -> preambulo() -> accept(this);
		}
		virtual void visit(PreambuloSeparatorExpsSeparator* e)
		{
			e -> preambulo() -> accept(this);
			std::cout << "%%";
			e -> exps() -> accept(this);
			std>>cout << "%%"
		}
		virtual void visit(Texto* e) {
			e -> texto() -> accept(this);
		}
};
#endif