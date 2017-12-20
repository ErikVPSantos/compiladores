#ifndef PALAVRAS_H 
#define PALAVRAS_H

#include "ASTNode.h"

class Palavras : public ASTNode{

  public:
    Palavras() {}
    virtual ~Palavras() {}
  
  void accept(Visitor *v);
    
}; 

#endif
