#include "texto.h"
#include "visitor.h"

void Texto::accept(Visitor *v) {
    v->visit(this);
}