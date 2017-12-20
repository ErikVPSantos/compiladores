#ifndef TEXTO_H 
#define TEXTO_H

#include "ASTNode.h"

class Texto : public ASTNode{

	public:
    	Texto() { }
    	virtual ~Texto() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
