#ifndef DEFUNION_H 
#define DEFUNION_H

#include "ASTNode.h"

class Def_Union: public ASTNode {

	public:
    	Def_Union() { }
    	virtual ~Def_Union() { }
	
	void accept(Visitor *v);
    	
}; 

#endif
