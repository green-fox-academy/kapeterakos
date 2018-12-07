#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("../my-file.txt", "w");

    printf("Enter num: ");
    scanf("%d",&num);

    for (int i = 0; i < num; ++i) {
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
    return 0;
}