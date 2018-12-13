//
// Created by Akos on 2018. 11. 21..
//

#include "Scanner.h"
#include <iostream>
Scanner::Scanner(int speed) : _speed(speed) {}

void Scanner::scan() {
    std::cout<< "I'm scanning a document speed "+std::to_string(_speed)+" ppm";

}
