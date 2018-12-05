#include <stdio.h>

void alcoholic(int age);

int main()
{
    int num;
    alcoholic(num);
    return 0;
}

void alcoholic(int age){
    printf("Give me your age");
    scanf("%d",&age);
    if(age >= 18){
        printf("Go git drunk");
    }
    else
        printf("No drink 4 U");

}