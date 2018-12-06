#include <stdio.h>
#include <string.h>

typedef struct sandwich{
    char name[20];
    float price;
    float weight;
}sandwich_t;

float order(sandwich_t* sandwich , int numberOfSandwiches);

int main()

{
    sandwich_t sandwich1;
    strcpy(sandwich1.name,"Subway extra");
    int numOfSandwiches=4;
    sandwich1.price =5.4;
    printf("The price of %d %s is %f",numOfSandwiches,sandwich1.name,order(&sandwich1,numOfSandwiches));
    return 0;

}

float order(sandwich_t* sandwich, int numberOfSandwiches){
    return  numberOfSandwiches * sandwich->price;
}