#ifndef ASTNODE_H
#define ASTNODE_H

class Visitor;

class ASTNode {

  public:
    ASTNode() {}
    virtual ~ASTNode() {}
  
    virtual void accept(Visitor *v) = 0;
}; 
#endif