//
// Created by Akos on 2018. 11. 21..
//

#ifndef DEVICES_SCANNER_H
#define DEVICES_SCANNER_H

#include <iostream>

class Scanner {
public:
    explicit Scanner(int speed);
    void scan();
private:
    int _speed;
};


#endif //DEVICES_SCANNER_H
