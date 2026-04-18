#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][30];
    char search[30];
    int i, found = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i+1);
        fgets(names[i], 30, stdin);
    }

    printf("\nList:\n");
    for(i = 0; i < 5; i++)
        printf("%s", names[i]);

    printf("Search name: ");
    fgets(search, 30, stdin);

    for(i = 0; i < 5; i++)
    {
        if(strcmp(names[i], search) == 0)
        {
            printf("Found at position %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Student not found\n");

    return 0;
}