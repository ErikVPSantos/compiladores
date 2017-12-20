#ifndef LINHALINHAS_H 
#define LINHALINHAS_H

#include "ASTNode.h"
#include "linhas.h"
#include "linha.h"

class LinhaLinhas : public ASTNode{

	private:
		Linha *linha_;
		Linhas *linhas_;

	public:
		LinhaLinhas(Linha *linha, Linhas *linhas) : linha_(linha), linhas_(linhas) { }
		virtual ~LinhaLinhas() {
			delete linha_, linhas_;
		}
    	LinhaLinhas(const LinhaLinhas& l) : linha_(l.linha_), linhas_(l.linhas_) { }
    	Linha *linha() const { return linha_; }
	Linhas *linhas() const { return linhas_; }
	
	void accept(Visitor *v);

};

#endif
