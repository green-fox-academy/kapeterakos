//
// Created by Akos on 2018. 11. 28..
//

#ifndef GUESSMYNUMBER_MIN_H
#define GUESSMYNUMBER_MIN_H




class Min {

public:
    Min(int min);
    virtual int getmin() const = 0;

protected:
    int _min;
};


#endif //GUESSMYNUMBER_MIN_H
