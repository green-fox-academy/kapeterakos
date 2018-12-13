//
// Created by Akos on 2018. 11. 29..
//

#include "CarPark.h"

const std::vector<Car> &CarPark::getCars() const
{
    return _Cars;
}

void CarPark::addCar(Car car)
{
    _Cars.push_back(car);
}

void CarPark::modifyTcket()
{

}

void CarPark::removeCar()
{

}

void CarPark::getOldest()
{

}

void CarPark::getPenalties()
{

}

void CarPark::getPenaltiesByYear()
{

}
