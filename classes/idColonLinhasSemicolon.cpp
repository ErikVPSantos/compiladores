#include "idColonLinhasSemicolon.h"
#include "visitor.h"

void IdColonLinhasSemicolon::accept(Visitor *v) {
    v->visit(this);
}