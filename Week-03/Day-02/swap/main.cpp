#include <iostream>
void function (int *apointer , int *bpointer );
int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    int *apointer = &a;
    int *bpointer = &b;
    function(apointer,bpointer);
    return 0;
}
void function (int *apointer, int *bpointer )

{
    int *cpointer;
    cpointer= apointer;
    apointer = bpointer;
    bpointer = cpointer;


     std::cout<<*apointer<<" "<<*bpointer<<std::endl;
}