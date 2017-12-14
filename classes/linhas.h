#ifndef LINHAS_H 
#define LINHAS_H;

class Linhas : public ASTNode{

  public:
  	Linhas() {}
    virtual ~Linhas() {}
  
  void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
