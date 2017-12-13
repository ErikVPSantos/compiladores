#ifndef LTOKENSID_H 
#define LTOKENSID_H;

#include "id.h"

class  L_TokensID {

    private:
    	Id *id_;

	public:
		L_TokensID(Id id): id_(id) { }
    	virtual ~L_TokensID() { 
    		delete id_;
    	}
    	L_TokensID(const L_TokensID& l) : id_(l.id_) { }
    	Id id() const { return id_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
