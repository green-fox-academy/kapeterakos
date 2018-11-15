//
// Created by Akos on 2018. 11. 13..
//

#include "BlogPost.h"
#include <iostream>
BlogPost::BlogPost(std::string name,std::string title, std::string text, std::string publish)
{
    _name = name;
    _title = title;
    _text = text;
    _publish = publish;
}
std::string BlogPost::getname(){ return _name;}
std::string BlogPost::gettitle() { return _title;}
std::string BlogPost::gettext() { return  _text;}
std::string BlogPost::getpublish() { return _publish;}