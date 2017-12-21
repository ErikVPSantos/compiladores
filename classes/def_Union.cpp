#include "def_Union.h"
#include "visitor.h"

void Def_Union::accept(Visitor *v) {
    v->visit(this);
}