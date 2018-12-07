#include <stdio.h>
void writeInFile();
int main()
{
   writeInFile();
    return 0;
}
void writeInFile(){
    char surname[10];
    char lastname[10];
    FILE *fptr;
    fptr = fopen("../program.txt", "w");

    printf("Enter your surname: ");
    scanf("%s",surname);
    printf("Enter your lastname: ");
    scanf("%s",lastname);
    fprintf(fptr, "%s"" %s",surname,lastname);


    fclose(fptr);
}