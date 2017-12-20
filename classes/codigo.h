#ifndef CODIGO_H 
#define CODIGO_H

class Codigo : public ASTNode {
		
	public:
		Codigo() { }
    	virtual ~Codigo() { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif