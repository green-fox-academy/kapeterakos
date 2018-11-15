#include <iostream>

int main()
{

    int input[5] = {};

    std::cout<<"Give me five numbers"<<std::endl;
    for (int i = 0; i < sizeof(input)/ sizeof(input[0]); ++i) {
        std::cin>>input[i];

    }
    int *inputpointer= input;
    for (int j = 0; j < sizeof(input) / sizeof(input[0]) ; ++j) {
        std::cout<<*inputpointer + j <<std::endl;
    }

    return 0;
}