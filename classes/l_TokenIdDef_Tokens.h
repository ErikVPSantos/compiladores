#ifndef LTOKENIDDEFTOKENS_H
#define LTOKENIDDEFTOKENS_H

#include "ASTNode.h"
#include "def_Tokens.h"
#include <string>

class L_TokenIdDef_Tokens : public Def_Tokens{
	
	private:
    	Def_Tokens *defT_;
		std::string id_;

	public:
    	L_TokenIdDef_Tokens(std::string id, Def_Tokens *defT) : id_(id), defT_(defT) { }
    	virtual ~L_TokenIdDef_Tokens() {
    		delete defT_, id_;
    	}
    	L_TokenIdDef_Tokens(const L_TokenIdDef_Tokens& b) : id_(b.id_), defT_(b.defT_) { }
    	Def_Tokens *def_tokens() const { return defT_; }
	
	void accept(Visitor *v);

};

#endif 
