#ifndef BLOCO_H 
#define BLOCO_H;

class Bloco: public ASTNode {

	public:
    	Bloco() { }
    	virtual ~Bloco() { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    	
}; 

#endif
