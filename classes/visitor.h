#ifndef VISITOR_H 
#define VISITOR_H;

#include "palavras.h"
#include "idFolha.h"
#include "bloco.h"
#include "blocoExps.h"
#include "def_Tipos.h"
#include "Def_Tokens.h"
#include "Def_Union.h"
#include "exps.h"
#include "idColonLinhasSemicolon.h"
#include "includes.h"
#include "ASTNode.h"
#include "l_TypeOp_LTTextoOp_GtIdDef_Tipos.h"
#include "idPalavras.h"
#include "l_TokenIdDef_Tokens.h"
#include "texto.h"
#include "includesDef_TokenDef_UnionDef_Tipos.h"
#include "palavra.h"
#include "l_UnionC_Bracket_LeftTextoC_Bracket_Right"
#include "linhaUnica.h"
#include "linhas.h"
#include "l_TypeOp_LTTextoOp_GtId" 
#include "linha.h"
#include "l_StringTexto.h"
#include "preambuloSeparatorExpsSeparator.h"
#include "includ_OpenTextoInclud_Close.h"
#include "linhaLinhas.h"
#include "preambulo.h"
#include "l_TokensID.h"


class Visitor {

  public:
    virtual visit(Bloco *bloco) = 0;
    virtual visit(BlocoExps *blocoExps) = 0;
    virtual visit(Def_Tipos *def_Tipos) = 0;
    virtual visit(Def_Tokens *def_Tokens) = 0;
    virtual visit(Def_Union *def_Union) = 0;
    virtual visit(Exps  *exps) = 0;
    virtual visit(IdColonLinhasSemicolon  *idColonLinhasSemicolon ) = 0;
    virtual visit(IdPalavras  *idPalavras ) = 0;
    virtual visit(IdFolha  *idFolha ) = 0;
    virtual visit(Includ_OpenTextoInclud_Open   *includ_OpenTextoInclud_Open ) = 0;
    virtual visit(Includes  *includes ) = 0;
    virtual visit(IncludesDef_TokenDef_UnionDef_Tipos *includesDef_TokenDef_UnionDef_Tipos) = 0;
    virtual visit(L_StringTexto *l_StringTexto  ) = 0;
    virtual visit(L_TokenIdDef_Tokens *l_TokenIdDef_Tokens  ) = 0;
    virtual visit(L_TokensID *l_TokensID) = 0;
    virtual visit(L_TypeOp_LTTextoOp_GtId   *l_TypeOp_LTTextoOp_GtId  ) = 0;
    virtual visit(L_TypeOp_LTTextoOp_GtIdDef_Tipos  *l_TypeOp_LTTextoOp_GtIdDef_Tipos) = 0;
    virtual visit(L_UnionC_Bracket_LeftTextoC_Bracket_Right  *l_UnionC_Bracket_LeftTextoC_Bracket_Right  ) = 0;
    virtual visit(Linha    *linha   ) = 0;
    virtual visit(LinhaLinhas   *linhaLinhas  ) = 0;
    virtual visit(LinhaUnica   *linhaUnica  ) = 0;
    virtual visit(Linhas   *linhas   ) = 0;
    virtual visit(Palavras    *palavras   ) = 0;
    virtual visit(Preambulo    *preambulo  ) = 0;
    virtual visit(PreambuloSeparatorExpsSeparator    *preambuloSeparatorExpsSeparator   ) = 0;
    virtual visit(Texto    *texto   ) = 0;
    
}; 

#endif
