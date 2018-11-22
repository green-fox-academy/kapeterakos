//
// Created by Akos on 2018. 11. 20..
//

#include "Mentor.h"

Mentor::Mentor(const std::string &name, int age, Gender, Level) {

}

Mentor::Mentor() {
_name = "Jane Doe";
_age = 30;
 Gender ::FEMALE;
 Level :: INTERMEDIATE;
}

void Mentor::getGoal() const {
    std::cout<<"My goal is: Educate brilliant junior software developers."<<std::endl;
}

void Mentor::introduce() const {
    std::cout<<"Hi I'm "<<_name<<" a "<<_age<<" year old"<<std::endl;
}
