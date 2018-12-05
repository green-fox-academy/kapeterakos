#include <stdio.h>
#include <time.h>
int main()
{


    int win = 20;
    int input;
    printf("Give a number\n");
    scanf("%d",&input);
    if (input > win)
        printf("The stored number is higher");
    else if (input < win)
        printf("The stored number is lower");
    else
        printf("You got the number");
    return 0;
}