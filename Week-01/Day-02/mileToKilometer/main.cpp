#include <iostream>

int main() {

    int km = 0;
    std::cout<<"Please give a distance (in Km)" <<std::endl;
    std::cin >> km;



    float mile = km * 0.621371192;
    std::cout<<"In miles:"<<mile<<std::endl;

    return 0;
}