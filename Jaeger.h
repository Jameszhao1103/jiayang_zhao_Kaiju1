#ifndef JAEGER_H
#define JAEGER_H

#include "util.h"
#include "vec2.h"
#include "gameObj.h"

class Jaeger : public gameObj{
  public:
    Jaeger(vec2 start, int size, std::string name, std::string pilotN1, std::string pilotN2) : gameObj{start, size, name}{
       this->pilot1 = pilotN1;
       this->pilot1 = pilotN2;
    }

    vec2 getLocation() const { return position; }
    std::string getName() const { return name; }
    int getSize() const { return size; }
    double getPower() const { return health; }
    //life can never be less than 0 - maybe able to sheild (roll dice)
    void takeHit(double damage) { health - damage; }
    std::string getPilot1() const { return pilot1; }
    std::string getPilot2() const { return pilot2; }

    void updatePos(vec2 vel) override;

    void accept(class Visitor &v) override;

  private:
    std::string pilot1;
    std::string pilot2; 
};

#endif