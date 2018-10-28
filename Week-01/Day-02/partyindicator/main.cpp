#include <iostream>

int main() {
    int numberofgirls;
    int numberofboys;

    std::cout<<"Give a number"<<std::endl;
    std::cin>>numberofgirls;
    std::cout<<"Give the second number"<<std::endl;
    std::cin>>numberofboys;


    if(numberofboys == numberofgirls && numberofboys + numberofgirls == 20)
    {std::cout<<"The party is excelent"<<std::endl;}

    else if(numberofboys + numberofgirls > 20 && numberofboys != numberofgirls)
    {
        std::cout<<"Quite cool party"<<std::endl;
    }
    else if(numberofboys + numberofgirls < 20)
    {
        std::cout<<"Avrage party"<<std::endl;

    }
    else if (numberofgirls == 0)
    {
        std::cout<<"Sausage party"<<std::endl;
    }

    return 0;
}