#include <iostream>

#include <string>

#include <algorithm>

#include <vector>





void filter(  std::vector<std::string> list)
{
    std::vector<std::string>::iterator i = list.begin();
    for (int i = 0; i < list.size(); ++i)
    {
        if (list[i] == "Carrot" || list[i] == "Lemon" || list[i] == "Bread")

            list.erase(std::remove_if(list.begin(), list.end(), list[i]), list.end());
        else
            std::cout<<""<<std::endl;

    }
}
int main(int argc, char* args[])

{

    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};

    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};



    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.

    // Your task is to remove them from the list. "sweets" vector can help you with this

    // You should erase every element from "list" vector that is not in "sweets" vector.

    // No, don't just remove the lines

    // Create a method called filter() which takes the list as a parameter.


    filter(list);
    // Expected output: Cupcake Brownie

    for(const auto& sweet : filter(list, sweets))

    {

        std::cout << sweet << " ";

    }



    return 0;

}