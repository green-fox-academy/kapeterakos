#include <iostream>
#include <vector>


int main(int argc, char* args[])

{

    // Create a simple calculator application which reads the parameters from the prompt

    // and prints the result to the prompt.

    // It should support the following operations,

    // create a method named "calculate()":

    // +, -, *, /, % and it should support two operands.

    // The format of the expressions must be: {operation} {operand} {operand}.

    // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)





    // It should work like this:

    // Start the program

    // It prints: "Please type in the expression:"

    // Waits for the user input

    // Print the result to the prompt

    // Exit

    std::vector<std::string >input ;
    std::cout<<"Please type in the expression: {operation} {operand} {operand}"<< std::endl;
    for(const auto input: input){
        std::cin >>input  ;



    return 0;

}