#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::ofstream MyFile;
    MyFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        MyFile.open("C:\\Users\\Akos\\Greenfox\\kapeterakos\\Week-04\\Day-01\\write_single_line\\my-file.txt");
        std::string line = "Kapéter Ákos";
        MyFile<<line;
        MyFile.close();
    }
    catch (std::ofstream::failure& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}