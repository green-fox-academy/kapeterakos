#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *aponter = &a;
    int *bponter = &b;
    int sum = *aponter + *bponter;

    std::cout<<sum<<std::endl;




    return 0;
}