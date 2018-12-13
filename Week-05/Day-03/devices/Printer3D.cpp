//
// Created by Akos on 2018. 11. 21..
//

#include "Printer3D.h"

Printer3D::Printer3D(int sizex, int sizey, int sizez) :Printer(sizex,sizey), _sizez(sizez) {}

std::string Printer3D::getSize() {
    return std::to_string(_sizex)  +" X " + std::to_string(_sizey) +" X " +  std::to_string(_sizez);
}
