#ifndef LTYPEOPLTTEXTOOPGTDEFTIPOS_H
#define LTYPEOPLTTEXTOOPGTDEFTIPOS_H

#include <string>
#include "ASTNode.h"
#include "texto.h"
#include "def_Tipos.h"

class L_TypeOp_LtTextoOp_GtIdDef_Tipos : public ASTNode{
	
	private:
        std::string id_;
    	Texto *texto_;
        Def_Tipos *defTp_;
        
	public:
    	L_TypeOp_LtTextoOp_GtIdDef_Tipos(std::string id, Texto *texto, Def_Tipos *defTp) : id_(id), texto_(texto), defTp_(defTp) { }
    	L_TypeOp_LtTextoOp_GtIdDef_Tipos(const L_TypeOp_LtTextoOp_GtIdDef_Tipos& t) : id_(t.id_), texto_(t.texto_), defTp_(t.defTp_) { }
        Texto *texto() const { return texto_; }
        Def_Tipos *def_tipos() const { return defTp_; }
	
	void accept(Visitor *v);

};

#endif 
