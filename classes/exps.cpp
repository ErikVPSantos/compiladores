#include "exps.h"
#include "visitor.h"

void Exps::accept(Visitor *v) {
    v->visit(this);
}