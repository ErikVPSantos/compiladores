#include "preambuloSeparatorExpsSeparator.h"
#include "visitor.h"

void PreambuloSeparatorExpsSeparator::accept(Visitor *v) {
    v->visit(this);
}