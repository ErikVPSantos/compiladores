#ifndef LSTRINGTEXTO_H
#define LSTRINGTEXTO_H

#include "texto.h"

class L_StringTexto {
	
	private:
    	Texto *texto_;

	public:
    	L_StringTexto(Texto texto) : texto_(texto) { }
    	virtual ~L_StringTexto() {
    		delete texto_;
    	}
    	L_StringTexto(const L_StringTexto& b) : texto_(b.texto_) { }
    	Texto texto() const { return texto_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
