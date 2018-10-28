#include <iostream>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000




    int a = 0;
    int b = 0;
    int c = 0;

    std::cout<<"Give one side of the cube (integer)" ; std::cin >> a;
    std::cout<<"Give another side of the cube (integer) " ; std::cin >> b;
    std::cout<<"Give the last side of the cube (integer) " ; std::cin >> c;

    int surface = ( a * b + b * c + a * c ) * 2;
    int volume = a * b* c;

    std::cout<<"The surface is :"<< surface << std::endl;
    std::cout<<"The volume is :"<< volume << std::endl;

    return 0;
}