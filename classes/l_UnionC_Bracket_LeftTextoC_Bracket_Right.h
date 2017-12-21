#ifndef LUNIONCBRACKETLEFTTEXTOCBRACKETRIGHT_H 
#define LUNIONCBRACKETLEFTTEXTOCBRACKETRIGHT_H

#include "ASTNode.h"
#include "def_Union.h"
#include "texto.h"

class  L_UnionC_Bracket_LeftTextoC_Bracket_Right : public Def_Union{

    private:
    	Texto *texto_;

	public:
		L_UnionC_Bracket_LeftTextoC_Bracket_Right(Texto *texto): texto_(texto) { }
    	virtual ~L_UnionC_Bracket_LeftTextoC_Bracket_Right() { 
    		delete texto_;
    	}
    	L_UnionC_Bracket_LeftTextoC_Bracket_Right(const L_UnionC_Bracket_LeftTextoC_Bracket_Right& l) : texto_(l.texto_) { }
    	Texto *texto() const { return texto_; }
	
	void accept(Visitor *v);
    
}; 

#endif
