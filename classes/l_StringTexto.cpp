#include "l_StringTexto.h"
#include "visitor.h"

void L_StringTexto::accept(Visitor *v) {
    v->visit(this);
}