#include <stdio.h>
#include <stdlib.h>

int equal(int num1, int num2);
int main()
{
    int x = 0, y = 0;
   printf("%d", equal(x,y));
    return 0;
}

int equal(int num1, int num2){
    printf("Give a number");
    scanf("%d",&num1);
    printf("Give another number");
    scanf("%d",&num2);
    if(num1 == num2){
        return 1;
    } else
        return 0;
}