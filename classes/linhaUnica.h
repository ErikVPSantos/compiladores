#ifndef LINHAUNICA_H 
#define LINHAUNICA_H

#include "ASTNode.h"
#include "linhas.h"
#include "linha.h"

class LinhaUnica : public Linhas{

	private:
		Linha *linha_;

	public:
		LinhaUnica(Linha *linha) : linha_(linha) { }
		virtual ~LinhaUnica() {
			delete linha_;
		}
    	LinhaUnica(const LinhaUnica& l) : linha_(l.linha_) { }
    	Linha *linha() const { return linha_; }
	
	void accept(Visitor *v);

};

#endif