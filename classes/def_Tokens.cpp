#include "def_Tokens.h"
#include "visitor.h"

void Def_Tokens::accept(Visitor *v) {
    v->visit(this);
}