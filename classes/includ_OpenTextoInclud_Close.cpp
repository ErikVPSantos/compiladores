#include "includ_OpenTextoInclud_Close.h"
#include "visitor.h"

void Includ_OpenTextoInclud_Close::accept(Visitor *v) {
    v->visit(this);
}