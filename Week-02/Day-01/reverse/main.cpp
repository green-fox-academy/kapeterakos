#include <iostream>

#include <string>



int main(int argc, char* args[]) {



    // - Create an array variable named `aj`

    //   with the following content: `[3, 4, 5, 6, 7]`

    // - Reverse the order of the elements in `aj`

    // - Print the elements of the reversed `aj`

    int aj[] = { 3 , 4 ,5 ,6 ,7};

    int array[5] = {};



    for (int i = 0; i < sizeof(aj) / sizeof(aj[0]); ++i)
    {
        array[5] = aj[1];
        std::cout<<aj[i]<<std::endl;

    }


    for (int j = sizeof(aj); j >  0; ++j)
    {



    }


    return 0;

}