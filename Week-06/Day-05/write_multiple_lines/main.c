#include <stdio.h>

void writeInFile(char path[20] , int numberoflines, char lines[numberoflines]);
int main()
{
    char tempPath[20];
    int tempNum = 0;
    char tempString[20];

    writeInFile(tempPath,tempNum,tempString);
    return 0;
}
void writeInFile(char path[20] , int numberoflines, char lines[numberoflines]){
    path ="../program.txt";
    FILE *fptr;
    fptr = fopen(path, "w");
    printf("Enter the number of lines ");
    scanf("%d",&numberoflines);
    printf("Enter a line ");
    scanf("%s",lines);
    for (int i = 0; i < numberoflines; ++i) {
        fprintf(fptr, "%s\n",lines);
    }



    fclose(fptr);
}