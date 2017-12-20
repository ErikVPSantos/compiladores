#ifndef CODIGO_H 
#define CODIGO_H

#include "ASTNode.h"

class Codigo : public ASTNode {
		
	public:
		Codigo() { }
    	virtual ~Codigo() { }
	
	void accept(Visitor *v);

};

#endif