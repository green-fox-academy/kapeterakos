//
// Created by Akos on 2018. 11. 14..
//

#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H


#include <string>

class Station {
public:
    Station(int gasamount);
    void fill(std::string car);
public: int _gasamount;
};


#endif //PETROL_STATION_STATION_H
