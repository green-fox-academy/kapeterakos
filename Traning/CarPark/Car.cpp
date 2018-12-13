//
// Created by Akos on 2018. 11. 29..
//

#include "Car.h"
Car::Car(int id, const std::string &licensePlate, int year, bool hasTicket) : _id(id), _licensePlate(licensePlate),
                                                                              _year(year), _hasTicket(hasTicket) {}
int Car::getId() const
{
    return _id;
}

const std::string &Car::getLicensePlate() const
{
    return _licensePlate;
}

int Car::getYear() const
{
    return _year;
}

bool Car::isHasTicket() const
{
    return _hasTicket;
}


