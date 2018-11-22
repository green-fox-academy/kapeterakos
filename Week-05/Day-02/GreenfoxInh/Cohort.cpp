//
// Created by Akos on 2018. 11. 20..
//

#include "Cohort.h"
#include <iostream>


Cohort::Cohort(const std::string name) {
_students.clear();
_mentor.clear();
}

const std::string &Cohort::getName() const {
    return _name;
}

const std::vector<std::string> &Cohort::getStudents() const {
    return _students;
}

const std::vector<std::string> &Cohort::getMentor() const {
    return _mentor;
}

void Cohort::addStudent(std::string &student) {
    _students.push_back(student);

}

void Cohort::addMentor(std::string &mentor) {
    _mentor.push_back(mentor);
}

void Cohort::info() {
    std::cout<<"The "<<_name<<" cohort has"<<_students.size()<<" students and "<<_mentor.size()<<" mentors";
}


