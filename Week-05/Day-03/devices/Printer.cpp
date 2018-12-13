//
// Created by Akos on 2018. 11. 21..
//

#include "Printer.h"
#include <iostream>

void Printer::print() {

    std::cout<<"I'm printing something that's"<<getSize()<<"cm.";
}

Printer::Printer(int sizex, int sizey) : _sizex(sizex), _sizey(sizey) {}
