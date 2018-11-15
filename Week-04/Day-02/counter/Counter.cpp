//
// Created by Akos on 2018. 11. 13..
//

#include "Counter.h"


Counter::Counter(int _field, int _number) : _field(_field), _number(_number) {
    _field = 0;
    _number = 7;
}
void Counter::add() {_field+ _number;}
void Counter::get() {_number;}
void Counter::reset() {_number = 0;}