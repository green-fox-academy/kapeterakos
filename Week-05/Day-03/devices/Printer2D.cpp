//
// Created by Akos on 2018. 11. 21..
//

#include "Printer2D.h"

Printer2D::Printer2D(int sizex, int sizey) : Printer(sizex,sizey) {}

std::string Printer2D::getSize() {
    return std::to_string(_sizex)+"X "+std::to_string(_sizey);
}
