#ifndef IDCOLONLINHASSEMICOLON_H 
#define IDCOLONLINHASSEMICOLON_H;

#include "linhas.h"
#include <string>

class IdColonLinhasSemicolon {

	private:
		std::string id_;
		Linhas *linhas_;

 	public:
    	IdDouble_DotsLinhasDot_Comma(std::string id, Linhas *linhas) : id_(id), linhas_(linhas) {}
    	virtual ~IdDouble_DotsLinhasDot_Comma(){
    		delete linhas_;
    	}
    	IdDouble_DotsLinhasDot_Comma(const IdDouble_DotsLinhasDot_Comma& i) : id_(i.id), linhas_(i.linhas_) {}
    	Linhas *linhas() const { return linhas_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
