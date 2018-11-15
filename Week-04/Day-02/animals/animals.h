

#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H

#include <iostream>

class Animals {
public: Animals();
  void eat();
void drink();
void geteat();
void getdrink();

private:
    int _hunger;
    int _thirst;

};


#endif //ANIMALS_ANIMALS_H
