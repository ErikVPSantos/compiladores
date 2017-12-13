#ifndef LTOKENSID_H 
#define LTOKENSID_H;

#include "id.h"
#include <string>

class  L_TokensId {

    private:
	std::string id_;
	
	public:
		L_TokensId(std::string *id): id_(id) { }
    	virtual ~L_TokensId() { }
    	L_TokensId(const L_TokensID& l) : id_(l.id_) { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
