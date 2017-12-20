#ifndef IDFOLHA_H 
#define IDFOLHA_H

#include <string>

class IdFolha : public ASTNode {

	private:
		std::string id_;
		
	public:
		IdFolha(std::string id) : id_(id) { }
    	virtual ~IdFolha() { }

    	IdFolha(const IdFolha& p) : id_(p.id_) { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif