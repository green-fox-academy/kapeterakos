//
// Created by Akos on 2018. 11. 26..
//

#ifndef AIRCRAFT_F16_H
#define AIRCRAFT_F16_H

#include <iostream>
class F16 {
public:
    F16(int currentammo, int maxammo, int basedmg);

    int fight();
    int refill();
    std::string  getType();
    std::string getStatus();
    bool isPriority();


private:
    int _currentammo = 0;
    int _maxammo = 8;
    int _basedmg = 30;
};


#endif //AIRCRAFT_F16_H
