#include <iostream>
void inputarraylength(int *lengthpointer);
void inputarray(int array[] , int *lengthpointer);
void maxfunction(int array[] , int *lengtpointer  );
int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality


    int lengthpointer;

    inputarraylength(&lengthpointer);

    int array[lengthpointer];

    inputarray(array,&lengthpointer);

    maxfunction(array,&lengthpointer);

    return 0;
}
void inputarraylength(int *lengthpointer)
{
    std::cout<<"Give the array's length"<<std::endl;
    std::cin>>*lengthpointer;
}

void inputarray(int array[] , int *lengthpointer)
{
    std::cout<<"Give the numbers for the array"<<std::endl;
    for (int i = 0; i < *lengthpointer; ++i)
    {
        std::cin>>array[i];
    }
}

void maxfunction(int array[] , int *lengthpointer )
{
    int max = 0;
    for (int i = 0; i < *lengthpointer; ++i)
    {
        if(array[i] > max)
            max = array[i];
    }
    int *maxpointer = & max;
    std::cout<<*maxpointer<< " "<<maxpointer<<std::endl;
}


