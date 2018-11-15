#include <iostream>

int refactorio(int x) {
    if (x > 1)
        return x * refactorio(x - 1);
    else
        return 1;
}

int main() {
    int x;
    std::cout << "Give a number" << std::endl;
    std::cin >> x;
    std::cout << refactorio(x) << std::endl;
    return 0;
}