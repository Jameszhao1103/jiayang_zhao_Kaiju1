#ifndef UAVISITOR_H
#define UAVISITOR_H

#include "Jaeger.h"
#include "Kaiju.h"
#include "visitor.h"


class unitAttackVisitor: public Visitor{
    public:
        void visit(Kaiju *e) {
            e->takeHit(1.0);
            std::cout << "dealing one damage to Kaiju" << std::endl;
        }
        void visit(Jaeger *e) {
            double result = niceRand();
            if(result>0.2){
                e->takeHit(1.0);
                std::cout << "dealing one damage to Jaeger" << std::endl;
            }else{
                std::cout << "Jaeger shielded from attack" << std::endl;
            }
        }
        

        
};

#endif

