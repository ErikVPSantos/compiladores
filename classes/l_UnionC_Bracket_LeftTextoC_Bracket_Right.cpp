#include "l_UnionC_Bracket_LeftTextoC_Bracket_Right.h"
#include "visitor.h"

void L_UnionC_Bracket_LeftTextoC_Bracket_Right::accept(Visitor *v){
    v->visit(this);
}