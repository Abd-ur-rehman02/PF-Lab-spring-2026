#include <stdio.h>
#include <string.h>

struct Department
{
    char deptCode[10];
    char deptName[50];
};

struct Course
{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void filterDept(struct Course c[], int n, char code[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c[i].dept.deptCode, code) == 0)
        {
            printf("%s - %s\n", c[i].courseCode, c[i].courseName);
        }
    }
}

int main()
{
    struct Course c[3];
    char code[10];

    for (int i = 0; i < 3; i++)
    {
        printf("\nCourse %d\n", i + 1);

        printf("Course Code: ");
        scanf("%s", c[i].courseCode);

        printf("Course Name: ");
        scanf(" %[^\n]", c[i].courseName);

        printf("Credit Hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Dept Code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Dept Name: ");
        scanf(" %[^\n]", c[i].dept.deptName);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n%s - %s (%d credits)\nDept: %s\n",
               c[i].courseCode, c[i].courseName,
               c[i].creditHours, c[i].dept.deptName);
    }

    printf("\nEnter department code to filter: ");
    scanf("%s", code);

    filterDept(c, 3, code);

    return 0;
}