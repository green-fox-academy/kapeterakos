#include <iostream>
#include <vector>
int returnindex (int inputarray[] , int length , int number);
int main() {
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0






    returnindex(inputarray,3);


    return 0;
}

int returnindex (int *inputarray[] , int length , int number)
{
    std::cout<<"Give the array's length"<<std::endl;
    std::cin>>length;
    std::cout<<"Give a number to fill up the array"<<std::endl;
    for (int j = 0; j < sizeof(inputarray) / sizeof(inputarray[0]); ++j)
    {
        std::cin>> inputarray[j];
    }

    std::cout<<"Give a number you want to search for"<<std::endl;
    std::cin>> number;


    for (int i = 0; i < length; ++i)
    {
        if(inputarray[i] = *number)
        {
            std::cout<<i<<std::endl;
            return i;
        }

    }
    return 0;

}
