#include "preambulo.h"
#include "visitor.h"

void IdPalavras::accept(Visitor *v) {
    v->visit(this);
}