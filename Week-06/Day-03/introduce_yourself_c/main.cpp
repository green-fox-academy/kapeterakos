
#include<stdio.h>



int main()

{
    char name[20];
    int age;
    float height;

    printf("Please give me your name\n");
    scanf("%s",&name);
    printf("Please give me your age\n");
    scanf("%d",&age);
    printf("Please give me your height in meters\n");
    scanf("%f",&height);

    printf("%s " "%d " "%f \n",name,age,height);
    return 0;

}