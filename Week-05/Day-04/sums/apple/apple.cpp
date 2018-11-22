//
// Created by Akos on 2018. 11. 22..
//

#include "apple.h"

std::string getApple()
{
    return "apple";
}

int sum(std::vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum +=v[i];
    }
    return sum;
}
