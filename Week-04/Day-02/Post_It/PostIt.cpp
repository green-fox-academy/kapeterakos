//
// Created by Akos on 2018. 11. 13..
//

#include "PostIt.h"
#include <iostream>

PostIt::PostIt(std::string backgroundcolor,std::string text, std::string textcolor)
{
    _color= backgroundcolor;
    _text = text;
    _textcolor= textcolor;
}

std::string PostIt::getbackgroundcolor(){ return _color;}

std::string PostIt::gettext() { return _text;}

std::string PostIt::gettextcolor() { return _textcolor;}









	
