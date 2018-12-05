#include <stdio.h>
#include <stdlib.h>

void equal(int num1, int num2);
int main()
{
    int x = 0, y = 0;
    equal(x,y);
    return 0;
}

void equal(int num1, int num2){
    printf("Give a number");
    scanf("%d",&num1);
    printf("Give another number");
    scanf("%d",&num2);
    if(num1 == num2){
       printf("1");
    } else
        printf("0");
}