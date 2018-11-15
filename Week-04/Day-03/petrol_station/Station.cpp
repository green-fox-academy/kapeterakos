//
// Created by Akos on 2018. 11. 14..
//

#include "Station.h"
#include "Car.h"
#include <iostream>

Station::Station(int gasamount) {
    _gasamount = gasamount;
}

int GetGasAmount(int gasamount)
{
    return gasamount;
}
void Station::fill(std::string car) {
   while(Car::isFull())
   {
       std::cout<<"Filling car"<<std::endl;
       _gasamount--;

   }
   std::cout<<"Gas left in station " << _gasamount<<std::endl;
}
