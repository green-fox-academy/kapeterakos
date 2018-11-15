//
// Created by Akos on 2018. 11. 14..
//

#include "Car.h"


Car::Car(int gasamount, int capacity) : _gasamount(gasamount), _capacity(capacity) {}

int Car::GetCapacity() const {
    return _capacity;
}

int Car::getGasAmount() const {
    return _gasamount;
}


void Car::fill()
{
   _gasamount++;
}
bool Car::isFull()
{
    if(_capacity = _gasamount)
        return true;
    else{ return false;}
}