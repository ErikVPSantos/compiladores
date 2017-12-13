#ifndef LTOKENIDDEFTOKENS_H
#define LTOKENIDDEFTOKENS_H

#include "id.h"
#include "def_tokens.h"

class L_TokenIdDef_Tokens {
	
	private:
    	Def_tokens *defT_;
        Id *id_;

	public:
    	L_TokenIdDef_Tokens(Def_tokens defT, Id id) : defT_(defT), id_(id) { }
    	virtual ~L_TokenIdDef_Tokens() {
    		delete defT_, id_;
    	}
    	L_TokenIdDef_Tokens(const L_TokenIdDef_Tokens& b) : defT_(b.defT_), id_(b.id_) { }
    	Def_tokens def_tokens() const { return defT_; }
        Id id() const { return id_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
