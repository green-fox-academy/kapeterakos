#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int input[5] = {};

    std::cout<<"Give me five numbers"<<std::endl;
    for (int &i : input) {
        std::cin>> i;

    }
    int *inputpointer= input;
    for (int j = 0; j < sizeof(input) / sizeof(input[0]); ++j) {
        std::cout<<inputpointer + j <<std::endl;
    }

    return 0;
}