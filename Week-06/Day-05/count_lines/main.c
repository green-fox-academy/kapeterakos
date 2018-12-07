#include <stdio.h>
#include <string.h>

int fileHandling(char filename[20]);
int main ()

{
    char tempFileName[20];
    printf("Lines : %d\n",fileHandling(tempFileName));
    return 0;

}

int fileHandling(char filename[20]){
    filename ="../file.txt";
    FILE *fptr;
    fptr = fopen(filename, "r");
    int lines = 0;
    int ch;
    while (!feof(fptr))
    {
        ch = fgetc(fptr);
        if(ch == (int) "\n")
        {
            lines++;
        }

    }
    fclose(fptr);

    return 2;
}