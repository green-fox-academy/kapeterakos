#include <iostream>

#include <string>


int factorio (int x);
int main(int argc, char* args[]) {



    // - Create a function called `factorio`

    //   that returns it's input's factorial

    int number = 0;

    std::cout<<"Give a number"<<std::endl;
    std::cin >> number;


        int result = factorio(number);
        std::cout<<result<<std::endl;

    return 0;

}
int factorio ( int number)
{
    for (int i = 0; i < number ; i++)
    {
        int factorial = number * factorio(number - 1);
        return  factorial;
    }

}