#ifndef LINHAS_H 
#define LINHAS_H

#include "ASTNode.h"

class Linhas : public ASTNode{

  public:
  	Linhas() {}
    virtual ~Linhas() {}
  
  void accept(Visitor *v);
    
}; 

#endif
