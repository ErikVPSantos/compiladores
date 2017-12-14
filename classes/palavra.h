#ifndef ID_H 
#define ID_H;

#include "palavras.h"

class ID : public ASTNode{

  public:
    ID() { }
    virtual ~ID() { }
  
  void accept(Visitor *v) {
		v->visit(this);
	};
    
}; 

#endif
