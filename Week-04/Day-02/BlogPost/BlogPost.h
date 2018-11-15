//
// Created by Akos on 2018. 11. 13..
//

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H


#include <string>
#include <iostream>

class BlogPost {
public: BlogPost(std::string name,std::string title, std::string text, std::string publish);
    std::string getname();
    std::string gettitle();
    std::string gettext();
    std::string getpublish();

private:
    std::string _name;
    std::string _title;
    std::string _text;
    std::string _publish;
};


#endif //BLOGPOST_BLOGPOST_H
