//
// Created by Akos on 2018. 11. 21..
//

#ifndef DEVICES_PRINTER3D_H
#define DEVICES_PRINTER3D_H

#include "Printer.h"

class Printer3D:public Printer {
public:

    Printer3D(int sizex, int sizey, int sizez);

    virtual std::string getSize() override;

private:
    int _sizez;

};


#endif //DEVICES_PRINTER3D_H
