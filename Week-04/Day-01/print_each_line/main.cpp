#include <iostream>
#include <fstream>
#include <string>
#include <exception>

int main() {

    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory


    std::ifstream myFile;
    myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        myFile.open("C:/Users/Akos/Greenfox/kapeterakos/Week-04/Day-01/print_each_line/my-text.txt");
        std::string text;
        getline(myFile, text);
        std::cout << text << std::endl;
        myFile.close();
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }


    return 0;
}