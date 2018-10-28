#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;


    double massInKg = 81.2;
    double heightInM = 1.78;

    // Print the Body mass index (BMI) based on these values

    double heightsquare = heightInM * heightInM;
    double bmi = massInKg / heightsquare;

    std::cout << "The BMI is: "  <<bmi << std::endl;

    return 0;
}