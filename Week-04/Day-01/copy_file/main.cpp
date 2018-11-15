#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyfiles(std::string file1name = "file", std::string file2name = "file2");

int main() {
    std::string file1name = "file.txt";
    std::string file2name = "file2.txt";
    copyfiles(file1name, file2name);
    return 0;
}

bool copyfiles(std::string file1name, std::string file2name) {

    std::ifstream file;
    file.open("../" + file1name);
    std::ofstream file2;
    file2.open("../" + file2name);
    std::string lines;
    while (std::getline(file, lines , '\n')) {
        file2<<lines << '\n' ;

    }
    if(file2<<lines<<'\n')
    {
        return true;
    }
    file.close();
    file2.close();


}

