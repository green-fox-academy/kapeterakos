#include <stdio.h>
#define PI 3.14

double circle(float *radius);
double circumference(float radius);
int main()
{
    float tempRadius = 0;
    printf("%f \n",circle(&tempRadius));
    printf("%f \n",circumference(tempRadius));
    return 0;
}

double circle(float *radius){
    printf("Give a radius for a circle");
    scanf("%f",radius);
    return PI* *radius * *radius;
}
double circumference(float radius){
    return 2 * radius *PI;
}
