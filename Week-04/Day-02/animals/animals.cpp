
#include "animals.h"
#include <iostream>
Animals::Animals()
{
    _hunger = 50;
    _thirst = 40;


}

void Animals::eat(){ _hunger; }
void  Animals::drink(){_thirst;}
void Animals::geteat(){_hunger--;}
void  Animals::getdrink(){_thirst--;}
