#include <iostream>

int main() {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int number = 0;
    std::cout<<"Give me a number"<<std::endl;
    std::cin>>number;

    if(number % 2 == 0)
    {
        std::cout<<"Even"<<std::endl;
    }
    else
        (std::cout<<"Odd"<<std::endl);
    return 0;
}