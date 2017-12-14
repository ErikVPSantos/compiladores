#ifndef LTOKENIDDEFTOKENS_H
#define LTOKENIDDEFTOKENS_H

#include "id.h"
#include "texto.h"
#include <string>

class L_TypeOp_LtTextoOp_GtId : public ASTNode{
	
	private:
	std::string id_;
    	Texto *texto_;
        
	public:
    	L_TypeOp_LTTextoOp_GtId(std::String id, Texto *texto) : id_(id), texto_(texto) { }
    	virtual ~L_TypeOp_LTTextoOp_GtId() {
    		delete texto_;
    	}
    	L_TypeOp_LTTextoOp_GtId(const L_TypeOp_LTTextoOp_GtId& t) : id_(t.id_), texto_(t.texto_) { }
        Texto *texto() const { return texto_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
