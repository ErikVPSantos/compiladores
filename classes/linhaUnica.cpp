#ifndef LINHAUNICA_H 
#define LINHAUNICA_H;

#include "linha.h"

class LinhaUnica : public ASTNode{

	private:
		Linha *linha_;

	public:
		LinhaUnica(Linha *linha) : linha_(linha) { }
		virtual ~LinhaUnica() {
			delete linha_;
		}
    	LinhaUnica(cont LinhaUnica& l) : linha_(l.linha_) { }
    	Linha *linha() const { return linha_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif