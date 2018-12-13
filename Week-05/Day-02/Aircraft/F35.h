//
// Created by Akos on 2018. 11. 26..
//

#ifndef AIRCRAFT_F35_H
#define AIRCRAFT_F35_H

#include <iostream>

class F35 {
public:
    F35(int currentammo, int maxammo, int basedmg);

    int fight();
    int refill();
    std::string  getType();
    std::string getStatus();
    bool isPriority();

private:
    int _currentammo = 0;
    int _maxammo = 12;
    int _basedmg = 50;

};


#endif //AIRCRAFT_F35_H
