//
// Created by Akos on 2018. 11. 20..
//

#ifndef GREENFOXINH_COHORT_H
#define GREENFOXINH_COHORT_H


#include <string>
#include <vector>

class Cohort {
public:
    Cohort(const std::string name);
    const std::string &getName() const;

    const std::vector<std::string> &getStudents() const;

    const std::vector<std::string> &getMentor() const;

     void addStudent(std::string &student);
     void addMentor(std::string &mentor);
     void info();

protected:
    std::string _name;
    std::vector<std::string> _students;
    std::vector<std::string> _mentor;
};


#endif //GREENFOXINH_COHORT_H
