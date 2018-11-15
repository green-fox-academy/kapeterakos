
#include <iostream>

#include <string>

#include <algorithm>

#include <vector>

std::string quoteswap(std::vector<std::string> quote)
{
        std::string right = "What I cannot create, I do not understand";

        std::vector<std::string>::iterator it1 = std::find(quote.begin() , quote.end() , "do");
        std::vector<std::string>::iterator it2 = std::find(quote.begin() , quote.end() , "create");

        int index1 =  std::distance(quote.begin(), it1);
        int index2 = std::distance(quote.begin(), it2);

                std::cout<<index1 <<std::endl;
                std::cout<<index2 <<std::endl;
                std::swap(quote[index1], quote[index2]);




    for(const auto quote : quote){
        std::cout << quote << " ";
    }

}

int main(int argc, char* args[])

{

    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};



    // Accidentally I messed up this quote from Richard Feynman.

    // Two words are out of place

    // Your task is to fix it by swapping the right words with code

    // Create a method called quoteSwap().



    // Also, print the sentence to the output with spaces in between.

        quoteswap(quote);

    return 0;

}