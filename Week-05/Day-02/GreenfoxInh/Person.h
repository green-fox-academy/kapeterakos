//
// Created by Akos on 2018. 11. 20..
//

#ifndef GREENFOXINH_PERSON_H
#define GREENFOXINH_PERSON_H

#include <iostream>
enum class Gender{
    MALE,
    FEMALE

};

class Person {
public:
    Person(const std::string &name, int age, Gender);
    Person();

    const std::string &getName() const;

    int getAge() const;

    std::string getGender() const;

   virtual void introduce() const;

    virtual void getGoal() const;

protected:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif //GREENFOXINH_PERSON_H
