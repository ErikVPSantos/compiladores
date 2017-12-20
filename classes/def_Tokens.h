#ifndef DEFTOKENS_H 
#define DEFTOKENS_H

#include "ASTNode.h"

class Def_Tokens: public ASTNode {

	public:
    	Def_Tokens() { }
    	virtual ~Def_Tokens() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
