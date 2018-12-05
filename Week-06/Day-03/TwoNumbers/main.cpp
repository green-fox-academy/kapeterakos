#include<stdio.h>

int main()
{
    int number1;
    int number2;

    printf("Give the first number");
    scanf("%d", &number1);
    printf("Give the second number");
    scanf("%d", &number2);
    if (number2 == 0) {
        printf("Can't divide with 0 , give a different integer");
        scanf("%d", &number2);
    } else {
        int sum = number1 + number2;
        int substract = number1 - number2;
        int multiply = number1 * number2;
        float divide = float(number1) / number2;
        int reminder = number1 % number2;

        printf("Sum %d\n" "Substract %d\n" "Multiplied %d\n" "Divided %f\n" "Reminder %d", sum, substract, multiply,
               divide, reminder);
    }


    return 0;
}