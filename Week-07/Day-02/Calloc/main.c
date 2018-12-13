#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 10;
    int* array = (int*) calloc(size, sizeof(int));
    for(int i = 0; i < size; i++){
        if(i < 5)
            array[i] = i;
        printf("%d\n", array[i]);
    }

    free(array);
    return 0;
}