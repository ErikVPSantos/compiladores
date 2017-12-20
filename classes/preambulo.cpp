#include "preambulo.h"
#include "visitor.h"

void Preambulo::accept(Visitor *v) {
    v->visit(this);
}