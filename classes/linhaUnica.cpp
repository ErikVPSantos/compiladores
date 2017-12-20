#include "linhaUnica.h"
#include "visitor.h"

void LinhaUnica::accept(Visitor *v) {
    v->visit(this);
}