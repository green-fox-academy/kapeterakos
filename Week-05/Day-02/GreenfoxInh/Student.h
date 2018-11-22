//
// Created by Akos on 2018. 11. 20..
//

#ifndef GREENFOXINH_STUDENT_H
#define GREENFOXINH_STUDENT_H

#include "Person.h"


class Student : public Person {
public:

    Student(std::string name, int age, Gender, const std::string &previousOrganization, int skippedDays);
    Student();
    void getGoal() const override;
    void introduce() const override;
    int skipDays(int numberofdays);



protected:
    std::string _previousOrganization;
    int _skippedDays;




};


#endif //GREENFOXINH_STUDENT_H
