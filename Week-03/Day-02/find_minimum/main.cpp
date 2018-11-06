#include <iostream>
int function (int numbers[] , int lenght);
int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    function(numbers,7);

    return 0;
}
int function (int numbers[] , int lenght) {
    int min = 101;
    for (int i = 0; i < 7; ++i) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    int *minpointer = &min;

    std::cout<<*minpointer<<std::endl;
    return *minpointer;

}