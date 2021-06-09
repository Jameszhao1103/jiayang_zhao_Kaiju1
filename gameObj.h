#ifndef GAMEOBJ_H
#define GAMEOBJ_H

#include <iostream> 
#include <algorithm>
#include "util.h"
#include "vec2.h"

class gameObj {
public:
    gameObj(vec2 start, int size, std::string name){
       this->position = start;
       this->size = size;
       this->name = name;
       this->health = 20;
    }

    vec2 getLocation() const { return position; }
    std::string getName() const { return name; }
    int getSize() const { return size; }
    
    virtual void takeHit(double damage)= 0;
    virtual double getHealth() const {return 0;}


    virtual void updatePos(vec2 vel) = 0;
    virtual void accept(class Visitor &v) = 0;

protected:
    vec2 position; 
    int size; 
    std::string name;
    double health;
};

#endif