#ifndef LINHA_H 
#define LINHA_H;

#include "linhas.h"

class Linha : public ASTNode{

  public:
    Linha() {}
    virtual ~Linha() {}
  
    void accept(Visitor *v) {
		  v->visit(this);
  	};
    
}; 

#endif
