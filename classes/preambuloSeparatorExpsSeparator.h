#ifndef PREAMBULOSEPARATOREXPSSEPARATOR_H
#define PREAMBULOSEPARATOREXPSSEPARATOR_H

#include "ASTNode.h"
#include "codigo.h"
#include "preambulo.h"
#include "exps.h"


class PreambuloSeparatorExpsSeparator : public Codigo{
	
	private:
        Preambulo *pream_;
    	Exps *exps_;

	public:
    	PreambuloSeparatorExpsSeparator(Preambulo *pream, Exps *exps) : pream_(pream), exps_(exps) { }
    	virtual ~PreambuloSeparatorExpsSeparator() {
    		delete exps_;
			delete pream_;
    	}
    	PreambuloSeparatorExpsSeparator(const PreambuloSeparatorExpsSeparator& s) : exps_(s.exps_), pream_(s.pream_) { }
    	Exps *exps() const { return exps_; }
        Preambulo *preambulo() const { return pream_; }
	
	void accept(Visitor *v);

};

#endif 
