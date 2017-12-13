#ifndef INCLUDES_H 
#define INCLUDES_H;

class Includes {

	public:
    	Includes() { }
    	virtual ~Includes() { }
	
	void accept(Visitor *v) {
		v->visit(this);
	};
    	
}; 

#endif
