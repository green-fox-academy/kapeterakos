#include <iostream>
#include <vector>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int arraylenght = 0;
    std::cout<<"Give a number for the array's length"<<std::endl;
    std::cin>> arraylenght;

    std::cout<<"Give a number for the array"<<std::endl;
   int array[arraylenght];
    for (int i = 0; i < arraylenght; ++i)
    {
        std::cin>>array[i];
    }
    int max = 0;
    for (int j = 0; j < arraylenght; ++j)
    {

        if (array[j] > max)
            max = array[j];
    }
    int *maxpointer = &max;
    std::cout<<max<<" "<<  maxpointer<<std::endl;
    return 0;
}