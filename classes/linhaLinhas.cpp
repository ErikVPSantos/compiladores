#include "linhaLinhas.h"
#include "visitor.h"

void LinhaLinhas::accept(Visitor *v) {
    v->visit(this);
}