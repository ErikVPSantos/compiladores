#include "def_Tipos.h"
#include "visitor.h"

void Def_Tipos::accept(Visitor *v) {
    v->visit(this);
}