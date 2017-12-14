#ifndef VISITOR_H 
#define VISITOR_H;

#include "palavras.h"

class Visitor {

  public:
    virtual ~visit(Bloco *bloco) {}
    virtual ~visit(BlocoExps *blocoExps) {}
    virtual ~visit(Def_Tipos *def_Tipos) {}
    virtual ~visit(Def_Tokens *def_Tokens) {}
    virtual ~visit(Def_Union *def_Union) {}
    virtual ~visit(Exps  *exps) {}
    virtual ~visit(IdColonLinhasSemicolon  *idColonLinhasSemicolon ) {}
    virtual ~visit(IdPalavras  *idPalavras ) {}
     virtual ~visit(IdFolha  *idFolha ) {}
    virtual ~visit(Includ_OpenTextoInclud_Open   *includ_OpenTextoInclud_Open ) {}
    virtual ~visit(Includes  *includes ) {}
    virtual ~visit(IncludesDef_TokenDef_UnionDef_Tipos *includesDef_TokenDef_UnionDef_Tipos) {}
    virtual ~visit(L_StringTexto   *l_StringTexto  ) {}
    virtual ~visit(L_TokenIdDef_Tokens   *l_TokenIdDef_Tokens  ) {}
    virtual ~visit(L_TokensID   *l_TokensID  ) {}
    virtual ~visit(L_TypeOp_LTTextoOp_GtId   *l_TypeOp_LTTextoOp_GtId  ) {}
    virtual ~visit(L_TypeOp_LTTextoOp_GtIdDef_Tipos  *l_TypeOp_LTTextoOp_GtIdDef_Tipos) {}
    virtual ~visit(L_UnionC_Bracket_LeftTextoC_Bracket_Right  *l_UnionC_Bracket_LeftTextoC_Bracket_Right  ) {}
    virtual ~visit(Linha    *linha   ) {}
    virtual ~visit(LinhaLinhas   *linhaLinhas  ) {}
    virtual ~visit(LinhaUnica   *linhaUnica  ) {}
    virtual ~visit(Linhas   *linhas   ) {}
    virtual ~visit(Palavras    *palavras   ) {}
    virtual ~visit(Preambulo    *preambulo  ) {}
    virtual ~visit(PreambuloSeparatorExpsSeparator    *preambuloSeparatorExpsSeparator   ) {}
    virtual ~visit(Texto    *texto   ) {}
    
}; 

#endif
