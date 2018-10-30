#include <iostream>

#include <string>



int main(int argc, char* args[])

{

    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");



    // When saving this quote a disk error has occured. Please fix it.

    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::string newquote("Hofstadter's Law: It always takes longer than you expect, even when you take into account Hofstadter's Law.");
    int start = quote.find(newquote);
    if(start == std::string::npos)
        std::cout<<""<<std::endl;
        else
    quote.replace(start, newquote.length() ,"Hofstadter's Law: It always takes longer than you expect, even when you take into account Hofstadter's Law.");

        std::cout << quote << std::endl;

    return 0;

}