//
// Created by Akos on 2018. 11. 21..
//

#ifndef DEVICES_PRINTER_H
#define DEVICES_PRINTER_H

#include <iostream>

class Printer {
public:
    Printer(int sizex, int sizey);

    virtual std::string getSize()= 0;
    virtual void print();

protected:
    int _sizex;
    int _sizey;

};


#endif //DEVICES_PRINTER_H
