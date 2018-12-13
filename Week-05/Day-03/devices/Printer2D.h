//
// Created by Akos on 2018. 11. 21..
//

#ifndef DEVICES_PRINTER2D_H
#define DEVICES_PRINTER2D_H

#include "Printer.h"


class Printer2D : public Printer {
public:
    Printer2D(int sizex, int sizey);

    virtual std::string getSize() override;
};


#endif //DEVICES_PRINTER2D_H
