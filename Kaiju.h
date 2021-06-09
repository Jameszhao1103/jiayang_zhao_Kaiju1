
#ifndef KAIJU_H
#define KAIJU_H

#include "gameObj.h"


class Kaiju : public gameObj{
  public:
    Kaiju(vec2 start, int size, std::string name, std::string superPower): gameObj{start, size, name} {
      this->superPower = superPower;
	}

  //life can never be less than 0
  void takeHit(double damage) { health = fmax(0.0, getHealth() - damage);}

  std::string getPower() const { return superPower; }

  double getHealth() const override;

  void updatePos(vec2 vel) override;
  void accept(class Visitor &v) override;

  protected:
  std::string superPower;
};


#endif
