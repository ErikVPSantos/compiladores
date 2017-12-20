#include "linha.h"
#include "visitor.h"

void Linha::accept(Visitor *v) {
    v->visit(this);
}