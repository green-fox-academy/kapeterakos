#include <iostream>

int main() {
    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4


    int numberone = 0;
    int numbertwo = 0;
    int numberthree = 0;
    int numberfour = 0;
    int numberfive = 0;

    std::cout<<"Give me five number"<<std::endl;

    std::cin>>numberone;
    std::cin>>numbertwo;
    std::cin>>numberthree;
    std::cin>>numberfour;
    std::cin>>numberfive;

    int sum = numberone + numbertwo + numberthree + numberfour + numberfive ;
    int avg = sum / 5;

    std::cout<<"Sum:"<<sum <<" " <<"Avg: "<<avg<<std::endl;
    return 0;
}