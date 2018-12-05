#include <stdio.h>

int primenumber(int num);
int main()
{
    int x;
    printf("%d",primenumber(x));
    return 0;
}
int primenumber(int num){
    printf("Give a number");
    scanf("%d",&num);
    int prime = 1;
    for (int i = 2; i < num; ++i){
        if(num%i==0){
            prime = 0;
        }
        if(prime ==1){
            return 1;
        } else
            return 0;


    }
}