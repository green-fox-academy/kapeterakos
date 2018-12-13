//
// Created by Akos on 2018. 11. 28..
//

#ifndef GUESSMYNUMBER_MAX_H
#define GUESSMYNUMBER_MAX_H


#include "TheGame.h"

class Max {
public:
    Max(int max);

    virtual int getMax()const = 0;

protected:
    int _max;


};


#endif //GUESSMYNUMBER_MAX_H
