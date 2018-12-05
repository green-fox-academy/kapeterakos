#include <stdio.h>
#include <string.h>

int lengthOfString(char s[100]);

void lengthofString2(char string[100]);

int main()
{
    char tempstring[100];
    printf("Length of string is: %d\n", lengthOfString(tempstring));
    lengthofString2(tempstring);
    return 0;
}

int lengthOfString(char s[100])
{    //With string.h
    printf("Give a string");
    scanf("%s", s);
    return strlen(s);

}

void lengthofString2(char string[100])
{     //Without string.h
    printf("Give a string");
    scanf("%s", string);
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    printf("Length of string is: %d", i);
}