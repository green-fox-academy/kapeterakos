#include <stdio.h>

int sumOfDigits(int num1, int num2);

int main()
{
    int x, y;
    printf("Sum of digits: %d", sumOfDigits(x, y));
    return 0;
}

int sumOfDigits(int num1, int num2)
{
    int sum1 = 0;
    int sum2 = 0;
    printf("Give the first number");
    scanf("%d", &num1);
    printf("Give the second number");
    scanf("%d", &num2);
    while (num1 != 0 || num2 != 0) {
        sum1 = sum1 + num1 % 10;
        num1 = num1 / 10;
        sum2 = sum2 + num2 % 10;
        num2 = num2 / 10;
    }
    if (sum1 == sum2) {
        return 1;
    } else
        return 0;
}