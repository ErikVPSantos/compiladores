#ifndef PREAMBULO_H 
#define PREAMBULO_H

#include "ASTNode.h"

class Preambulo : public ASTNode{

	public:
    	Preambulo() { }
    	virtual ~Preambulo() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
