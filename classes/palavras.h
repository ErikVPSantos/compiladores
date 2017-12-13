#ifndef PALAVRAS_H 
#define PALAVRAS_H;

class Palavras {

  public:
    Palavras() {}
    virtual ~Palavras() {}
  
  void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
