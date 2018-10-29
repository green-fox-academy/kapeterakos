#include <iostream>

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

        const int i = 4;
        const int j = 4;
        int array [i][j] = {{1,0}  , {0,0} , { 0,0} , { 0,0} };



    for (int i = 0; i  <  sizeof(array) / sizeof(array[0]); i++)
    {
        for (int j = 0; j <  sizeof(array) / sizeof(array[0]) ; j++)
        {
            std::cout<<"Array [" << i << "][" << j << "]: ";
            std::cout<<array[i][j]<< std::endl;

        }
    }


    return 0;
}