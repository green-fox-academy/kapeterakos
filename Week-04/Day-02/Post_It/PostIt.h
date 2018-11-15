//
// Created by Akos on 2018. 11. 13..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H


#include <string>

#include <iostream>

class PostIt {
public:
    PostIt(std::string backgroundcolor,std::string text, std::string textcolor);
    std::string getbackgroundcolor();
    std::string gettext();
    std::string gettextcolor();



private:
    std::string _color;
    std::string _text;
    std::string _textcolor;
};


#endif //POST_IT_POSTIT_H
