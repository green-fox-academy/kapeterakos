#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef  enum relatives {
    POSITION,
    MONEY
}relatives_t;
int randomArrayLength(int min, int max);
int main()
{
    int arraysize =randomArrayLength(20,50);
    printf("%d\n",arraysize);
    int *p = (int *)calloc(arraysize, sizeof(int));
    for (int i = 0; i < arraysize; ++i) {
        if(i <51)
        {
            p[i]= i;
        }
        printf("%d\n",p[i]);
    }
    free(p);

    int money = 1024;
    int winningNum = 0;
    while (money !=0)
    {
        winningNum = randomArrayLength(0,arraysize);
        for (int i = 0; i < arraysize; ++i) {
            if(i == winningNum)
            {
                money = money/2;
            }
            printf("%d\n",p[winningNum]);

        }
    }
    return 0;
}
int randomArrayLength(int min, int max){
    srand(time(NULL));
    int randNum = 0;
    randNum =rand()%((max + 1) - min) + min;
    return randNum;
}