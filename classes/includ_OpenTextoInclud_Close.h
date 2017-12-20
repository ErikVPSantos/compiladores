#ifndef INCLUDOPENTEXTOINCLUDCLOSE_H
#define INCLUDOPENTEXTOINCLUDCLOSE_H

#include "ASTNode.h"
#include "texto.h"

class Includ_OpenTextoInclud_Close : public ASTNode{
	
	private:
    	Texto *texto_;

	public:
    	Includ_OpenTextoInclud_Close(Texto *texto) : texto_(texto) { }
    	virtual ~Includ_OpenTextoInclud_Close() {
    		delete texto_;
    	}
    	Includ_OpenTextoInclud_Close(const Includ_OpenTextoInclud_Close& b) : texto_(b.texto_) { }
    	Texto *texto() const { return texto_; }
	
	void accept(Visitor *v);

};

#endif 
