#include <stdio.h>
#include <string.h>

int main()
{
    char pass[] = "abc123";
    char input[50];
    int i;

    for(i = 1; i <= 3; i++)
    {
        printf("Enter password: ");
        scanf("%s", input);

        if(strlen(input) == 0)
            continue;

        if(strcmp(pass, input) == 0)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            if(i == 2)
            {
                if(strncmp(pass, input, 3) == 0)
                    printf("First 3 characters match\n");
            }

            if(strcmp(input, pass) < 0)
                printf("Input is before stored password\n");
            else
                printf("Input is after stored password\n");
        }
    }

    printf("Account Locked\n");
    return 0;
}