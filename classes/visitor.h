#ifndef VISITOR_H 
#define VISITOR_H

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


class Visitor {

  public:
    virtual void visit(Bloco *bloco) = 0;
    virtual void visit(BlocoExps *blocoExps) = 0;
    virtual void visit(Def_Tipos *def_Tipos) = 0;
    virtual void visit(Def_Tokens *def_Tokens) = 0;
    virtual void visit(Def_Union *def_Union) = 0;
    virtual void visit(Exps  *exps) = 0;
    virtual void visit(IdColonLinhasSemicolon  *idColonLinhasSemicolon ) = 0;
    virtual void visit(IdPalavras  *idPalavras ) = 0;
    virtual void visit(IdFolha  *idFolha ) = 0;
    virtual void visit(Includ_OpenTextoInclud_Close   *includ_OpenTextoInclud_Close ) = 0;
    virtual void visit(Includes  *includes ) = 0;
    virtual void visit(IncludesDef_TokenDef_UnionDef_Tipos *includesDef_TokenDef_UnionDef_Tipos) = 0;
    virtual void visit(L_StringTexto *l_StringTexto  ) = 0;
    virtual void visit(L_TokenIdDef_Tokens *l_TokenIdDef_Tokens  ) = 0;
    virtual void visit(L_TokensId *l_TokensId) = 0;
    virtual void visit(L_TypeOp_LtTextoOp_GtId   *l_TypeOp_LtTextoOp_GtId  ) = 0;
    virtual void visit(L_TypeOp_LtTextoOp_GtIdDef_Tipos  *l_TypeOp_LtTextoOp_GtIdDef_Tipos) = 0;
    virtual void visit(L_UnionC_Bracket_LeftTextoC_Bracket_Right  *l_UnionC_Bracket_LeftTextoC_Bracket_Right  ) = 0;
    virtual void visit(Linha    *linha   ) = 0;
    virtual void visit(LinhaLinhas   *linhaLinhas  ) = 0;
    virtual void visit(LinhaUnica   *linhaUnica  ) = 0;
    virtual void visit(Linhas   *linhas   ) = 0;
    virtual void visit(Palavras    *palavras   ) = 0;
    virtual void visit(Preambulo    *preambulo  ) = 0;
    virtual void visit(PreambuloSeparatorExpsSeparator    *preambuloSeparatorExpsSeparator   ) = 0;
    virtual void visit(Texto    *texto   ) = 0;
    
}; 

#endif
