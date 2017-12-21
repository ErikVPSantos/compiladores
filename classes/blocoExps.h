#ifndef BLOCOEXPS_H
#define BLOCOEXPS_H

#include "ASTNode.h"
#include "bloco.h"
#include "exps.h"

class BlocoExps: public Exps {
	
	private:
		Bloco *bloco_;
    	Exps *exps_;

	public:
    	BlocoExps(Bloco *bloco, Exps *exps) : bloco_(bloco), exps_(exps) { }
    	virtual ~BlocoExps() {
    		delete exps_;
    	}
    	BlocoExps(const BlocoExps& b) : bloco_(b.bloco_), exps_(b.exps_) { }
    	Exps *exps() const { return exps_; }
	
		void accept(Visitor *v);

};

#endif 
