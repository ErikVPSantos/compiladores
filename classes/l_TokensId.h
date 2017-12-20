#ifndef LTOKENSID_H 
#define LTOKENSID_H

#include <string>
#include "ASTNode.h"

class  L_TokensId : public ASTNode{

    private:
	std::string id_;
	
	public:
		L_TokensId(std::string id): id_(id) { }
    	L_TokensId(const L_TokensId& l) : id_(l.id_) { }
	
	void accept(Visitor *v);
    
}; 

#endif
