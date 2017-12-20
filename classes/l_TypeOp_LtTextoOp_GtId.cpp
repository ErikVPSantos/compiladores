#include "l_TypeOp_LtTextoOp_GtId.h"
#include "visitor.h"

void L_TypeOp_LtTextoOp_GtId::accept(Visitor *v){
    v->visit(this);
}