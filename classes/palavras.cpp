#include "palavras.h"
#include "visitor.h"

void Palavras::accept(Visitor *v) {
    v->visit(this);
}