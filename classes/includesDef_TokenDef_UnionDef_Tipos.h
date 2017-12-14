#ifndef INCLUDESDEFTOKENDEFUNIONDEFTIPOS_H
#define INCLUDESDEFTOKENDEFUNIONDEFTIPOS_H

#include "includes.h"
#include "def_token.h"
#include "def_union.h"
#include "def_tipos.h"


class IncludesDef_TokenDef_UnionDef_Tipos : public ASTNode{
	
	private:
        Includes *inc_;
        Def_token *defT_;
        Def_union *defU_;
        Def_tipos *defTp_;

	public:
    	IncludesDef_TokenDef_UnionDef_Tipos(Include *inc, Def_token *defT, Def_union *defU, Def_tipos *defTp) : inc_(inc), defT_(defT), defU_(defU), defTp_(defTp) { }
    	virtual ~IncludesDef_TokenDef_UnionDef_Tipos() {
    		delete inc_, defT_, defU_, defTp_;
    	}
    	IncludesDef_TokenDef_UnionDef_Tipos(const IncludesDef_TokenDef_UnionDef_Tipos& i) : inc_(i.inc_), defT_(i.defT_), defU_(i.defU_), defTp_(i.defTp_) { }
    	Includes *includes() const { return inc_; }
        Def_token *def_token() const { return defT_; }
        Def_union *def_union() const { return defU_; }
        Def_tipos *def_tipos() const { return defTp_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
