#include <stdio.h>
#define PI 3.14

double circle(float radius);
int main()
{
    int tempRadius = 0;
    printf("%f",circle(tempRadius));
    return 0;
}

double circle(float radius){
    printf("Give a radius for a circle");
    scanf("%f",&radius);
    return PI* radius * radius;
}