#ifndef L_TypeOp_LtTextoOp_GtId_H
#define L_TypeOp_LtTextoOp_GtId_H

#include "ASTNode.h"
#include "texto.h"
#include <string>
#include "def_Tipos.h"

class L_TypeOp_LtTextoOp_GtId : public Def_Tipos{
	
	private:
	std::string id_;
    	Texto *texto_;
        
	public:
    	L_TypeOp_LtTextoOp_GtId(Texto *texto, std::string id) : texto_(texto), id_(id) { }
    	virtual ~L_TypeOp_LtTextoOp_GtId() {
    		delete texto_;
    	}
    	L_TypeOp_LtTextoOp_GtId(const L_TypeOp_LtTextoOp_GtId& t) : texto_(t.texto_), id_(t.id_) { }
        Texto *texto() const { return texto_; }
	
	void accept(Visitor *v);

};

#endif 
