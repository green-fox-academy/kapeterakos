#include <stdio.h>

void oddOrEven(int num);
int main()
{

    int x = 0;
    oddOrEven(x);
    return 0;
}
void oddOrEven(int num){
    printf("Give a number");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("1");
    } else
        printf("0");

}