//
// Created by Akos on 2018. 11. 13..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>
#include <string>

class Sharpie {
public:Sharpie(std::string color, float width);
    void use();
    float getinkAmount();

private:
    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //SHARPIE_SHARPIE_H
