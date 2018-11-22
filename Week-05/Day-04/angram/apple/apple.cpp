//
// Created by Akos on 2018. 11. 22..
//

#include "apple.h"
#include <algorithm>

std::string getApple()
{
    return "apple";
}

bool anagram(std::string s1 ="worda", std::string s2="aword") {
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;

}
