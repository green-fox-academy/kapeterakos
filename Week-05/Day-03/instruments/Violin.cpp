//
// Created by Akos on 2018. 11. 21..
//

#include "Violin.h"
#include <iostream>

void Violin::sound()const {

}

void Violin::play()const {
    std::cout<<_name<<" a " <<_numberOfStrings<<"-stringed instrument that goes Screech"<<std::endl;
}

Violin::Violin() :StringedInstrument("Violin" , 4){}

Violin::Violin(int numberOfStrings) :StringedInstrument("Violin" , numberOfStrings){}