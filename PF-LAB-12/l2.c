#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *contacts;
    int i;

    // Step 1: allocate 3 contacts
    contacts = (int *)malloc(3 * sizeof(int));

    if (contacts == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    printf("Enter 3 contact IDs:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &contacts[i]);
    }

    // Step 2: expand to 5
    int *temp = realloc(contacts, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Reallocation failed\n");
        free(contacts);
        return 1;
    }

    contacts = temp;

    printf("Enter 2 more contact IDs:\n");
    for (i = 3; i < 5; i++)
    {
        scanf("%d", &contacts[i]);
    }

    // print all
    printf("\nAll Contacts:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", contacts[i]);
    }

    free(contacts);

    return 0;
}