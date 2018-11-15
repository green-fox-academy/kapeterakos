#include <iostream>

int main(int argc, char *args[]) {

    // - Create an array variable named `aj`

    //   with the following content: `[3, 4, 5, 6, 7]`

    // - Reverse the order of the elements in `aj`

    // - Print the elements of the reversed `aj`

    int aj[] = {3, 4, 5, 6, 7};

    for (int j = sizeof(aj) / 4 - 1; j >= 0; j--) {
        std::cout << aj[j] << std::endl;
    }

    return 0;

}