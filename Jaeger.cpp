#include <sstream>
#include "Jaeger.h"
#include "visitor.h"

void Jaeger::updatePos(vec2 vel){
    position += vec2(vel.x(),0);
}


void Jaeger::accept(class Visitor &v){
    v.visit(this);
}


