//
// Created by Akos on 2018. 11. 20..
//

#include "Sponsor.h"

void Sponsor::getGoal() const {
    std::cout<<"My goal is: Hire brilliant junior software developers."<<std::endl;
}

void Sponsor::introduce() const {
    std::cout<<"Hi I'm "<<_name<<" a "<<_age<<" who represents "<<_company<<" and hired "<<_hiredStudents<<" so far"<<std::endl;
}

int Sponsor::hire() {
    _hiredStudents ++;
    return _hiredStudents;
}

Sponsor::Sponsor(const std::string &name, int age, Gender, std::string company) {
_hiredStudents = 0;
}

const std::string &Sponsor::getCompany() const {
    return _company;
}

int Sponsor::getHiredStudents() const {
    return _hiredStudents;
}

Sponsor::Sponsor() {
    _name = "Jane Doe";
    _age = 30;
    Gender ::FEMALE;
    _company = "Google";
    _hiredStudents = 0;
}
