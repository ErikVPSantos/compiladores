#include "l_TokensId.h"
#include "visitor.h"

void L_TokensId::accept(Visitor *v) {
    v->visit(this);
}