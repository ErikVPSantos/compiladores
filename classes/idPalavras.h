#ifndef IDPALAVRAS_H 
#define IDPALAVRAS_H;

#include "palavras.h"

class IDPalavras {

	private:
		ID *id_;

	public:
    	IDPalavras(ID id) : id_(id) { }
    	virtual ~IDPalavras() {
    		delete id_;
    	}
    	IDPalavras(const IDPalavras& p) : id_(p.id_) { }
    	ID id() const { return id_; }

};

#endif