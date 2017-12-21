#include "pipePalavras.h"
#include "visitor.h"

void PipePalavras::accept(Visitor *v) {
    v->visit(this);
}