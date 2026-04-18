#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[30];
    int grade, i;

    fptr = fopen("grades.txt", "w");

    if(fptr == NULL)
    {
        printf("File error\n");
        return 0;
    }

    for(i = 0; i < 3; i++)
    {
        scanf("%s %d", name, &grade);
        fprintf(fptr, "%s %d\n", name, grade);
    }

    fclose(fptr);

    fptr = fopen("grades.txt", "r");

    while(fscanf(fptr, "%s %d", name, &grade) != EOF)
        printf("%s %d\n", name, grade);

    fclose(fptr);

    return 0;
}