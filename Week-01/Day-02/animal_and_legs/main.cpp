#include <iostream>

int main() {




    int numberone = 0;
    int numbertwo = 0;

    std::cout << "Please give a number (integer)" << std::endl;
    std::cin>> numberone;

    if(numberone < 0){std::cout<<"Give a positive number "<<std::endl;}
    std::cin>> numberone;

    std::cout << "Please give a second number (integer)" << std::endl;
    std::cin>> numbertwo;

    if(numbertwo < 0){std::cout<<"Give a positive number "<<std::endl;}
    std::cin>> numbertwo;

    int chickenleg = numberone * 2;
    int piglegs = numbertwo * 4;
    int sum = chickenleg + piglegs;

    std::cout<<"The number of legs"<< sum <<std::endl;


    return 0;
}