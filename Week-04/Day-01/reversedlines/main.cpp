#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // Create a program that decrypts the file called "reversed-lines.txt",
    // and pritns the decrypred text to the terminal window.
    std::ifstream file;
    file.open("../reversed-lines.txt");
    std::string content;
    std::vector<std::string> v;

    while(file >> content)
       v.push_back(content);
    for(int i = v.size() - 1; i >= 0; i--)
        std::cout << v[i] << ' ';
    std::cout << std::endl;



    file.close();
    return 0;
}