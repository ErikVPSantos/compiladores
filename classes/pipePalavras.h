#ifndef PIPEPALAVRAS_H 
#define PIPEPALAVRAS_H

#include "ASTNode.h"
#include "linha.h"
#include "palavras.h"

class PipePalavras : public Linha{

 private:
		Palavras *palavras_;

 public:
		PipePalavras(Palavras *palavras) : palavras_(palavras) { }
		virtual ~PipePalavras() {
			delete palavras_;
		}
    	PipePalavras(const PipePalavras& l) : palavras_(l.palavras_) { }
    	Palavras *palavras() const { return palavras_; }

        void accept(Visitor *v);
    
}; 

#endif