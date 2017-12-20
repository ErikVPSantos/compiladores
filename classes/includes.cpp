#include "includes.h"
#include "visitor.h"

void Includes::accept(Visitor *v) {
    v->visit(this);
}