#include "idFolha.h"
#include "visitor.h"

void IdFolha::accept(Visitor *v) {
    v->visit(this);
}