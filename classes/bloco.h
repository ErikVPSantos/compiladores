#ifndef BLOCO_H 
#define BLOCO_H

#include "ASTNode.h"
#include "exps.h"

class Bloco: public Exps {

	public:
    	Bloco() { }
    	virtual ~Bloco() { }

		void accept(Visitor *v);
		    	
}; 

#endif
