#ifndef BLOCOEXPS_H
#define BLOCOEXPS_H

#include "ASTNode.h"
#include "exps.h"

class BlocoExps: public ASTNode {
	
	private:
    	Exps *exps_;

	public:
    	BlocoExps(Exps *exps) : exps_(exps) { }
    	virtual ~BlocoExps() {
    		delete exps_;
    	}
    	BlocoExps(const BlocoExps& b) : exps_(b.exps_) { }
    	Exps *exps() const { return exps_; }
	
	void accept(Visitor *v);

};

#endif 
