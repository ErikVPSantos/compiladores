#include "codigo.h"
#include "visitor.h"

void Codigo::accept(Visitor *v) {
    v->visit(this);
}