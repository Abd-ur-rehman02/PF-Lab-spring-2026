#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if(fptr == NULL)
    {
        printf("File not found. Creating...\n");

        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "mode=default\n");
    }
    else
    {
        printf("File exists\n");
    }

    fclose(fptr);

    return 0;
}