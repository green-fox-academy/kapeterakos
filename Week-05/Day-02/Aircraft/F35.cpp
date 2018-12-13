//
// Created by Akos on 2018. 11. 26..
//

#include "F35.h"

F35::F35(int currentammo, int maxammo, int basedmg) : _currentammo(currentammo), _maxammo(maxammo), _basedmg(basedmg) {}

int F35::fight() {
    return _basedmg * _currentammo;
    _currentammo = 0;
}

int F35::refill() {
    return 0;
}

std::string F35::getType() {
    return std::__cxx11::string();
}

std::string F35::getStatus() {
    return std::__cxx11::string();
}

bool F35::isPriority() {
    return false;
}
