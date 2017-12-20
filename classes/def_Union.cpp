#include "def_union.h"
#include "visitor.h"

void Def_Union::accept(Visitor *v) {
    v->visit(this);
}