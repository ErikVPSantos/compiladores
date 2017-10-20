#ifndef IDDOUBLEDOTSLINHASDOTCOMMA_H 
#define IDDOUBLEDOTSLINHASDOTCOMMA_H;

#include "linhas.h"

class IdDouble_DotsLinhasDot_Comma {

	private:
		ID id_;
		Linhas *linhas_;

 	public:
    	IdDouble_DotsLinhasDot_Comma(ID id, Linhas linhas) : id_(id), linhas_(linhas) {}
    	virtual ~IdDouble_DotsLinhasDot_Comma(){
    		delete linhas_;
    	}
    	IdDouble_DotsLinhasDot_Comma(const IdDouble_DotsLinhasDot_Comma& i) : id_(i.id), linhas_(i.linhas_) {}
    	Linhas linhas() const { return linhas_; }
    
}; 

#endif