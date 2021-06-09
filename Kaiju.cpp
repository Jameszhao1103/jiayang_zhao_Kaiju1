#include <sstream>
#include "Kaiju.h"
#include "visitor.h"

double Kaiju::getHealth() const {
    return health;
}


void Kaiju::updatePos(vec2 vel){
    position += vel;
}

void Kaiju::accept(class Visitor &v){
    v.visit(this);
}