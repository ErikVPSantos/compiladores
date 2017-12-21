#ifndef INCLUDESDEFTOKENDEFUNIONDEFTIPOS_H
#define INCLUDESDEFTOKENDEFUNIONDEFTIPOS_H

#include "ASTNode.h"
#include "preambulo.h"
#include "includes.h"
#include "def_Tokens.h"
#include "def_Union.h"
#include "def_Tipos.h"

class IncludesDef_TokenDef_UnionDef_Tipos : public Preambulo{
	
	private:
        Includes *inc_;
        Def_Tokens *defT_;
        Def_Union *defU_;
        Def_Tipos *defTp_;

	public:
    	IncludesDef_TokenDef_UnionDef_Tipos(Includes *inc, Def_Tokens *defT, Def_Union *defU, Def_Tipos *defTp) : inc_(inc), defT_(defT), defU_(defU), defTp_(defTp) { }

    	IncludesDef_TokenDef_UnionDef_Tipos(const IncludesDef_TokenDef_UnionDef_Tipos& i) : inc_(i.inc_), defT_(i.defT_), defU_(i.defU_), defTp_(i.defTp_) { }
    	Includes *includes() const { return inc_; }
        Def_Tokens *def_token() const { return defT_; }
        Def_Union *def_union() const { return defU_; }
        Def_Tipos *def_tipos() const { return defTp_; }
	
	void accept(Visitor *v);

};

#endif 
