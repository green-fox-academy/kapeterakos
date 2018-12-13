//
// Created by Akos on 2018. 11. 26..
//

#include "F16.h"

F16::F16(int currentammo, int maxammo, int basedmg) : _currentammo(currentammo), _maxammo(maxammo), _basedmg(basedmg) {}

int F16::fight() {
    return 0;
}

int F16::refill() {
    return 0;
}

std::string F16::getType() {
    return std::__cxx11::string();
}

std::string F16::getStatus() {
    return std::__cxx11::string();
}

bool F16::isPriority() {
    return false;
}
