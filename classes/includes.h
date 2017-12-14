#ifndef INCLUDES_H 
#define INCLUDES_H;

class Includes : public ASTNode{

	public:
    	Includes() { }
    	virtual ~Includes() { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    	
}; 

#endif
