#include <iostream>
#include "Sharpie.h"
int main() {

    Sharpie sharpie("blue",1.2);


    std::cout<<sharpie.getinkAmount()<<std::endl;
    sharpie.use();
    std::cout<<sharpie.getinkAmount()<<std::endl;

    return 0;
}