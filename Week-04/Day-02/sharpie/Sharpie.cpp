//
// Created by Akos on 2018. 11. 13..
//

#include "Sharpie.h"
#include <iostream>
Sharpie::Sharpie(std::string color, float width)
{
    _inkAmount = 100;
    _color = color;
    _width = width;
}
void Sharpie::use() {_inkAmount--; _width, _color;}
float Sharpie::getinkAmount() { return _inkAmount;}