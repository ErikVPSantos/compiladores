#ifndef LINHALINHAS_H 
#define LINHALINHAS_H;

#include "linhas.h"
#include "linha.h"

class LinhaLinhas {

	private:
		Linha *linha_;

	public:
		LinhaLinhas(Linha linha) : linha_(linha) { }
		virtual ~LinhaLinhas() {
			delete linha_;
		}
    	LinhaLinhas(cont LinhaLinhas& l) : linha_(l.linha_) { }
    	Linha linha() const { return linha_; }
	
	void accept(Visitor *v) {
		v->visit(this);
	};

};

#endif
