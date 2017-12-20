#ifndef LTOKENIDDEFTOKENS_H
#define LTOKENIDDEFTOKENS_H

#include "ASTNode.h"
#include "def_Tokens.h"
#include <string>

class L_TokenIdDef_Tokens : public ASTNode{
	
	private:
    	Def_Tokens *defT_;
		std::string id_;

	public:
    	L_TokenIdDef_Tokens(Def_Tokens *defT, std::string id) : defT_(defT), id_(id) { }
    	virtual ~L_TokenIdDef_Tokens() {
    		delete defT_, id_;
    	}
    	L_TokenIdDef_Tokens(const L_TokenIdDef_Tokens& b) : defT_(b.defT_), id_(b.id_) { }
    	Def_Tokens *def_tokens() const { return defT_; }
	
	void accept(Visitor *v);

};

#endif 
