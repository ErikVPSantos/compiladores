#ifndef	EXPS_H 
#define EXPS_H;

class Exps: public ASTNode {

	public:
    	Exps();
    	virtual ~Exps() { } 
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

 #endif
