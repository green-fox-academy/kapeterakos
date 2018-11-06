#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *apointer = nullptr;
    double *bpointer = nullptr;
    std::string *namepointer = nullptr;

    apointer = &a;
    bpointer = &b;
    namepointer = &name;

    std::cout<<&a<<" "<< &b << " " <<&name<< std::endl;
    std::cout<<*apointer<<" "<< *bpointer << " " <<*namepointer<< std::endl;


    return 0;
}