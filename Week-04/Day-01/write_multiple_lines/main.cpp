#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

  // Create a function that takes 3 parameters: a path, a word and a number,
  // than it should write to a file.
  // The path parameter should describes the location of the file.
  // The word parameter should be a string, that will be written to the file as lines
  // The number paramter should describe how many lines the file should have.
  // So if the word is "apple" and the number is 5, than it should write 5 lines
  // to the file and each line should be "apple"


  void func(std::string path, std::string word, std::string number);


int main() {
    std::string path;
    std::string word;
     std::string number;

    func(path,word,number);
    return 0;
}
void func(std::string path, std::string word, std::string number)
{
    path = "C:\\Users\\Akos\\Greenfox\\kapeterakos\\Week-04\\Day-01\\write_multiple_lines\\file.txt";
    std::cout<<"Give me a word"<<std::endl;
    std::cin>>word;
    std::cout<<"Give me a number"<<std::endl;
    std::cin>>number;

    std::ifstream MyFile(path);
    MyFile.open(path);
    while (std::getline(MyFile, word)) {
        std::istringstream ss(number);
        std::string token;


        MyFile.close();


    }
}