#ifndef LINHA_H 
#define LINHA_H

#include "ASTNode.h"
#include "linhas.h"

class Linha : public ASTNode{

  public:
    Linha() {}
    virtual ~Linha() {}
  
  void accept(Visitor *v);
    
}; 

#endif
