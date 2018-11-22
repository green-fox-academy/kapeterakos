//
// Created by Akos on 2018. 11. 20..
//

#ifndef GREENFOXINH_SPONSOR_H
#define GREENFOXINH_SPONSOR_H


#include "Person.h"

class Sponsor: public Person {
public:
    Sponsor(const std::string &name, int age, Gender ,std::string company);
    Sponsor();
    void getGoal() const override;
    void introduce() const override;
    int hire();

    const std::string &getCompany() const;

    int getHiredStudents() const;

protected:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOXINH_SPONSOR_H
