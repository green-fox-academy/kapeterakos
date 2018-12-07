#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("../my-file.txt", "r");
    char lines[100];

    while (!feof(fptr)){
        fgets(lines, sizeof(lines),fptr);
        puts(lines);
    }

    fclose(fptr);
    return 0;
}