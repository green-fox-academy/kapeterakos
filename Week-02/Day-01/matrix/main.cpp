#include <iostream>

void printMatrix(int matrix[][4], int y);

int main() {
    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int matrix[4][4] = {{1, 0, 0, 0},
                       {0, 1, 0, 0},
                       {0, 0, 1, 0},
                       {0, 0, 0, 1}};
    printMatrix(matrix, 4);
    return 0;
}

void printMatrix(int matrix[][4], int y) {
    for (int i = 0; i < y ; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
