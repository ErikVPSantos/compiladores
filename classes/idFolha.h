#ifndef IDFOLHA_H 
#define IDFOLHA_H

#include "ASTNode.h"
#include <string>
#include "palavras.h"

class IdFolha : public Palavras{

	private:
		std::string id_;
		
	public:
		IdFolha(std::string id) : id_(id) { }
    	virtual ~IdFolha() { }

    	IdFolha(const IdFolha& p) : id_(p.id_) { }

		const std::string l_id() {
			return id_;
		}
	
	void accept(Visitor *v);

};

#endif