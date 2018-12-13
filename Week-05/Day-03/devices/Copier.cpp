//
// Created by Akos on 2018. 11. 21..
//

#include "Copier.h"

Copier::Copier(int sizex, int sizey, int speed) : Printer2D(sizex, sizey), Scanner(speed) {}

void Copier::copy() {
    std::cout<<scan()<<"X"<<print()<<std::endl;

}
