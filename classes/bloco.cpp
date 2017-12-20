#include "bloco.h"
#include "visitor.h"

void Bloco::accept(Visitor *v) {
    v->visit(this);
}