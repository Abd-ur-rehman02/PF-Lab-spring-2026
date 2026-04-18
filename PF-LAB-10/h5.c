#include <stdio.h>
#include <string.h>

int main()
{
    char words[6][20];
    int seen[6] = {0};
    int i, j;

    for(i = 0; i < 6; i++)
        scanf("%s", words[i]);

    for(i = 0; i < 6; i++)
    {
        if(seen[i] == 1)
            continue;

        int count = 1;

        for(j = i+1; j < 6; j++)
        {
            if(strcmp(words[i], words[j]) == 0)
            {
                count++;
                seen[j] = 1;
            }
        }

        printf("%s (%d): ", words[i], count);

        for(j = 0; words[i][j] != '\0'; j++)
            printf("%c ", words[i][j]);

        printf("\n");
    }

    return 0;
}