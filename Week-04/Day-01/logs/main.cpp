#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.
void readfile(std::string lines);

int main() {
    std::string lines;

    readfile(lines);
    return 0;
}

void readfile(std::string lines) {
    std::ifstream file;
    file.open("..//logs.txt");

    while (!file.eof()) {
        getline(file, lines);

    std::cout << lines << std::endl;

    }


    std::stringstream newlines;
    std::string segment;
    std::vector<std::string> seglist{lines};

    while (std::getline(newlines, segment, ' ')) {
        seglist.push_back(segment);
    }
    for (int i = 0; i < seglist.size(); ++i) {
        std::cout << seglist[i]<< std::endl;

    }

    file.close();
}
