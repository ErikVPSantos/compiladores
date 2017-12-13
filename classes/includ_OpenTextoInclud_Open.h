#ifndef INCLUDOPENTEXTOINCLUDOPEN_H
#define INCLUDOPENTEXTOINCLUDOPEN_H

#include "texto.h"

class Includ_OpenTextoInclud_Open {
	
	private:
    	Texto *texto_;

	public:
    	Includ_OpenTextoInclud_Open(Texto texto) : texto_(texto) { }
    	virtual ~Includ_OpenTextoInclud_Open() {
    		delete texto_;
    	}
    	Includ_OpenTextoInclud_Open(const Includ_OpenTextoInclud_Open& b) : texto_(b.texto_) { }
    	Texto texto() const { return texto_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
