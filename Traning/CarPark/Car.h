//
// Created by Akos on 2018. 11. 29..
//

#ifndef CARPARK_CAR_H
#define CARPARK_CAR_H


#include <string>

class Car
{
public:
    Car(int id, const std::string &licensePlate, int year, bool hasTicket);

    int getId() const;

    const std::string &getLicensePlate() const;

    int getYear() const;

    bool isHasTicket() const;

private:
    int _id =0;
    std::string _licensePlate;
    int _year;
    bool _hasTicket;

};


#endif //CARPARK_CAR_H
