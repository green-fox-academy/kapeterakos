#include <iostream>
#include "PostIt.h"
#include <vector>

int main() {

    PostIt postit("Yellow " , "Idea1" , " Blue");
    PostIt postit2("Pink " , "Awsome " , " Black");
    PostIt postit3("Yellow " , "Superb " , "Green");
    std::cout<<postit.getbackgroundcolor()<< postit.gettext()<<postit.gettextcolor()<<std::endl;
    std::cout<<postit2.getbackgroundcolor()<< postit2.gettext()<<postit2.gettextcolor()<<std::endl;
    std::cout<<postit3.getbackgroundcolor()<< postit3.gettext()<<postit3.gettextcolor()<<std::endl;

    return 0;
}