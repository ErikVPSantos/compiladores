#include "l_TokenIdDef_Tokens.h"
#include "visitor.h"

void L_TokenIdDef_Tokens::accept(Visitor *v) {
    v->visit(this);
}