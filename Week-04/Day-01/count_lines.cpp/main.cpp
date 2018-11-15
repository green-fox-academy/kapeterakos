#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

        std::cout<<"Give me a file name"<<std::endl;
        std::string filename;
        std::cin>>filename;

        std::ofstream MyFile;
        MyFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        MyFile.open("new.txt");
        std::string lines = "";
        MyFile << lines;
        MyFile.close();
        int numberoflines = 0;

        while(!MyFile.eof()){
            std::cout<< lines << std::endl;
            numberoflines++;
            std::cout<< numberoflines << std::endl;
        }


    }
 catch (std::ofstream::failure& e) {
    std::cout << e.what() << std::endl;
}
    return 0;
}