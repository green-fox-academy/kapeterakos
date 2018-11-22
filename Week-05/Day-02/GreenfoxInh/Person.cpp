//
// Created by Akos on 2018. 11. 20..
//

#include "Person.h"
#include <iostream>
#include <stdlib.h>


Person::Person(const std::string &name, int age, Gender) : _name(name), _age(age), _gender() {}

Person::Person() {
    _name ="Jane Doe";
    _age = 30;
    Gender ::FEMALE;

}
const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

std::string Person::getGender() const {
    switch (_gender)
    {
       case Gender ::MALE:
            return "male";
        case Gender ::FEMALE:
            return "female";
    }
}

void Person::introduce() const {
    std::cout<<"Hi i'm "<<_name<<" a "<<_age<<" year old "<<std::endl;
}

void Person::getGoal() const {
    std::cout<<"My goal is: Live for the moment!"<<std::endl;
}


