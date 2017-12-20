#ifndef BLOCO_H 
#define BLOCO_H

#include "ASTNode.h"

class Bloco: public ASTNode {

	public:
    	Bloco() { }
    	virtual ~Bloco() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
