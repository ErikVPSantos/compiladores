#ifndef TEXTO_H 
#define TEXTO_H;

class Texto : public ASTNode{

	public:
    	Texto() { }
    	virtual ~Texto() { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    	
}; 

#endif
