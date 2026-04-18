#include <stdio.h>
#include <string.h>

int main()
{
    char email[50], copy[50], format[100] = "Email: ";

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(copy, email);

    char *ptr = strchr(copy, '@');

    if(ptr == NULL)
    {
        printf("Invalid Email\n");
        return 0;
    }

    ptr++;

    if(strstr(ptr, ".") == NULL)
    {
        printf("Invalid Domain\n");
        return 0;
    }

    printf("Domain: %s\n", ptr);

    strcat(format, copy);
    printf("%s", format);

    return 0;
}