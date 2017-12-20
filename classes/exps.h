#ifndef	EXPS_H 
#define EXPS_H

#include "ASTNode.h"

class Exps: public ASTNode {

	public:
    	Exps();
    	virtual ~Exps() { } 
	
	void accept(Visitor *v);
    
}; 

 #endif
