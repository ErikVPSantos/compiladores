#include "blocoExps.h"
#include "visitor.h"

void BlocoExps::accept(Visitor *v) {
    v->visit(this);
}