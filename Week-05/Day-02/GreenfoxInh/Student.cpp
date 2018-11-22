//
// Created by Akos on 2018. 11. 20..
//

#include "Student.h"
Student::Student(const std::string name, int age, Gender gender, const std::string &previousOrganization,
                 int skippedDays) : Person(name, age, gender), _previousOrganization(previousOrganization),
                                    _skippedDays(skippedDays) {
    _skippedDays = 0;

}

void Student::getGoal() const {
    std::cout<<"My goal is: Be a junior software developer";

}

void Student::introduce() const {
    std::cout<<"Hi i'm "<<_name<<" a "<<_age<<" year old"<<" from "<<_previousOrganization<<" who skipped "<<_skippedDays<<" from the course already";
}

int Student::skipDays(int numberofdays) {

 _skippedDays= _skippedDays + numberofdays;
    return _skippedDays;
}

Student::Student() {
    _name="Jane Doe";
    _age = 30;
    Gender ::FEMALE;
    _previousOrganization = "School of Life";
    _skippedDays = 0;

}








