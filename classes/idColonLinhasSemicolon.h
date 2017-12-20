#ifndef IDCOLONLINHASSEMICOLON_H 
#define IDCOLONLINHASSEMICOLON_H

#include "ASTNode.h"
#include "linhas.h"
#include <string>

class IdColonLinhasSemicolon: public ASTNode {

	private:
		std::string id_;
		Linhas *linhas_;

 	public:
    	IdColonLinhasSemicolon(std::string id, Linhas *linhas) : id_(id), linhas_(linhas) {}
    	virtual ~IdColonLinhasSemicolon(){
    		delete linhas_;
    	}
    	IdColonLinhasSemicolon(const IdColonLinhasSemicolon& i) : id_(i.id_), linhas_(i.linhas_) {}
    	Linhas *linhas() const { return linhas_; }
	
	void accept(Visitor *v);
    
}; 

#endif
