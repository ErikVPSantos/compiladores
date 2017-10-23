#ifndef LTOKENIDDEFTOKENS_H
#define LTOKENIDDEFTOKENS_H

#include "id.h"
#include "texto.h"

class L_TypeOp_LTTextoOp_GtId {
	
	private:
        Id *id_;
    	Texto *texto_;
        
	public:
    	L_TypeOp_LTTextoOp_GtId(Id id, Texto texto) : id_(id), texto_(texto) { }
    	virtual ~L_TypeOp_LTTextoOp_GtId() {
    		delete id_, texto_;
    	}
    	L_TypeOp_LTTextoOp_GtId(const L_TypeOp_LTTextoOp_GtId& t) : id_(t.id_), texto_(t.texto_) { }
    	Id id() const { return id_; }
        Texto texto() const { return texto_; }

};

#endif 