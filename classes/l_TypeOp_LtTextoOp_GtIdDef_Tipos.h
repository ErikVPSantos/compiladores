#ifndef LTYPEOPLTTEXTOOPGTDEFTIPOS_H
#define LTYPEOPLTTEXTOOPGTDEFTIPOS_H

#include <string>
#include "texto.h"
#include "def_tipos"

class L_TypeOp_LTTextoOp_GtIdDef_Tipos {
	
	private:
        std::string id_;
    	Texto *texto_;
        Def_tipos *defTp_;
        
	public:
    	L_TypeOp_LTTextoOp_GtIdDef_Tipos(std::string id, Texto *texto, Def_Tipos *defTp) : id_(id), texto_(texto), defTp_ { }
    	virtual ~L_TypeOp_LTTextoOp_GtIdDef_Tipos() {
    		delete id_, texto_, defTp_;
    	}
    	L_TypeOp_LTTextoOp_GtIdDef_Tipos(const L_TypeOp_LTTextoOp_GtIdDef_Tipos& t) : id_(t.id_), texto_(t.texto_), defTp_(t.defTp_) { }
        Texto *texto() const { return texto_; }
        Def_tipos *def_tipos() const { return defTp_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif 
