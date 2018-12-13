//
// Created by Akos on 2018. 11. 29..
//

#ifndef CARPARK_CARPARK_H
#define CARPARK_CARPARK_H

#include <vector>
#include "Car.h"


class CarPark
{
public:
    const std::vector<Car> &getCars() const;
    void addCar(Car car);
    void modifyTcket();
    void removeCar();
    void getOldest();
    void getPenalties();
    void getPenaltiesByYear();


private:
    std::vector<Car>_Cars;

};


#endif //CARPARK_CARPARK_H
