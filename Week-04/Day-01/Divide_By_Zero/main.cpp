#include <iostream>
#include <fstream>


void input(int inputnumber);

int main() {
    int inputnumber;
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    input(inputnumber);
    return 0;
}

void input(int inputnumber) {
    std::cout << "Give me a number" << std::endl;
    std::cin >> inputnumber;
    try {

        if (inputnumber == 0) { throw "fail"; }

        std::cout << 10 / inputnumber<< std::endl;
    }
    catch (...){std::cout << 10 / inputnumber << std::endl;}

}