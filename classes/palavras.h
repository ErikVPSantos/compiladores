#ifndef PALAVRAS_H 
#define PALAVRAS_H

#include "ASTNode.h"
#include "linha.h"

class Palavras : public Linha{

  public:
    Palavras() {}
    virtual ~Palavras() {}
  
    void accept(Visitor *v);
    
}; 

#endif
