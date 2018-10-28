#include <iostream>

int main() {

    std::string name = "Kapeter Akos";
    int age = 21;
    double height = 1.82;
    bool married = false;

    std::cout <<"Name: " <<  name <<  "Age  :"<<  age << "height:   " <<height << std::endl;
    if(married == false)
    {
        std::cout <<"I'm not married" << std::endl;
    }

    return 0;
}