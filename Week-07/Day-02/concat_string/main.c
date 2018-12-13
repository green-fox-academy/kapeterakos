#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concateStrings(char *s1,char  *s2);
int main()
{
    char* t1 ="Test1 ";
    char* t2 ="And Test2";
    printf("%s\n",concateStrings(t1,t2));
    return 0;
}

char* concateStrings(char *s1,char * s2)
{
    size_t size = strlen(s1) + strlen(s2);
    char * fullString =  calloc(size + 1, sizeof(char));
    strcat(fullString,s1);
    strcat(fullString,s2);

    if(strlen(fullString) == 0){
        return "This is an empty string";
    } else
        return fullString;

}