//
// Created by Akos on 2018. 11. 20..
//

#ifndef GREENFOXINH_MENTOR_H
#define GREENFOXINH_MENTOR_H


#include "Person.h"
#include <iostream>
enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor: public Person {
public:
    Mentor(const std::string &name, int age, Gender , Level);
    Mentor();
    void getGoal() const override;
    void introduce() const override;
};


#endif //GREENFOXINH_MENTOR_H
