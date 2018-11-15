//
// Created by Akos on 2018. 11. 13..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter(int _field);

    Counter(int _field, int _number);


    void add();
   void get();
   void reset();
private:
    int _field;
    int _number;
};


#endif //COUNTER_COUNTER_H
