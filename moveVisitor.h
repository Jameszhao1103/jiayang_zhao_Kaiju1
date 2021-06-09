#ifndef MVISITOR_H
#define MVISITOR_H

#include "Jaeger.h"
#include "Kaiju.h"
#include "visitor.h"
#include "util.h"

class moveVisitor: public Visitor{
    public:
        
        void visit(Kaiju *e) {
            double x = nicerRand(-1, 1);
            double y = nicerRand(-1, 1);
            e->updatePos(vec2(x, y));
        }
        void visit(Jaeger *e) {
            int x = nicerRand(-4, 0);
            e->updatePos(x);
        }
};

#endif

