//
// Created by Akos on 2018. 11. 21..
//

#ifndef DEVICES_COPIER_H
#define DEVICES_COPIER_H

#include "Printer2D.h"
#include "Scanner.h"

class Copier: public Printer2D,public Scanner {
public:
    Copier(int sizex, int sizey, int speed);
     void copy();


};


#endif //DEVICES_COPIER_H
