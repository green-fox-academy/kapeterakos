#include <stdio.h>

int main()
{

    char names[3][100];
    printf("Give me 3 names\n");
    for ( int i = 0; i < 3; i++) {
        fgets( names[i], sizeof(names), stdin );
    }
    for ( int i = 0; i < 3; i++) {
        printf("Hello %s \n",names[i]);
    }

    return 0;
}