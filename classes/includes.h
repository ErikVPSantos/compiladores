#ifndef INCLUDES_H 
#define INCLUDES_H

#include "ASTNode.h"

class Includes : public ASTNode{

	public:
    	Includes() { }
    	virtual ~Includes() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
