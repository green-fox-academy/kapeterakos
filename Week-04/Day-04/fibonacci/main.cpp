#include <iostream>

int fibonacci(int x) {
    if (x <= 0)
        return 0;
    else if (x == 1 || x == 2)
        return 1;
    else
        return (fibonacci(x - 1) + fibonacci(x - 2));
}

int main() {
    int number;
    std::cout<<"Give a number"<<std::endl;
    std::cin>>number;
    std::cout << "The number's fibonacci value is: "<<fibonacci(number) << std::endl;
    return 0;
}