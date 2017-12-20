#ifndef L_TypeOp_LtTextoOp_GtId_H
#define L_TypeOp_LtTextoOp_GtId_H

#include "ASTNode.h"
#include "texto.h"
#include <string>

class L_TypeOp_LtTextoOp_GtId : public ASTNode{
	
	private:
	std::string id_;
    	Texto *texto_;
        
	public:
    	L_TypeOp_LtTextoOp_GtId(std::string id, Texto *texto) : id_(id), texto_(texto) { }
    	virtual ~L_TypeOp_LtTextoOp_GtId() {
    		delete texto_;
    	}
    	L_TypeOp_LtTextoOp_GtId(const L_TypeOp_LtTextoOp_GtId& t) : id_(t.id_), texto_(t.texto_) { }
        Texto *texto() const { return texto_; }
	
	void accept(Visitor *v);

};

#endif 
