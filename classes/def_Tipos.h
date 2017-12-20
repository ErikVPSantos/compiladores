#ifndef DEFTIPOS_H 
#define DEFTIPOS_H

#include "ASTNode.h"

class Def_Tipos: public ASTNode {

	public:
    	Def_Tipos() { }
    	virtual ~Def_Tipos() { }
    	
	void accept(Visitor *v);
}; 

#endif
