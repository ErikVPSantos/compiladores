#include "linhas.h"
#include "visitor.h"

void Linhas::accept(Visitor *v) {
    v->visit(this);
}