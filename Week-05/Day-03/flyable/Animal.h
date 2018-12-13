//
// Created by Akos on 2018. 11. 21..
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H


#include <string>

class Animal {
public:
    virtual std::string getName() const = 0;
    virtual std::string breed() const = 0;
    Animal(std::string name);

    int getAge() const;


protected:
    std::string _name;
    int _age;
};


#endif //ZOO_ANIMAL_H
