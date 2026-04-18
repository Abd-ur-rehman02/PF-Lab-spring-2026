#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[30];
    int s1, s2, s3;
    float avg;

    scanf("%s %d %d %d", name, &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    fptr = fopen("report.txt", "w+");

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Marks: %d %d %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", avg);

    if(avg >= 50)
        fprintf(fptr, "Status: Pass\n");
    else
        fprintf(fptr, "Status: Fail\n");

    rewind(fptr);

    char line[100];
    while(fgets(line, 100, fptr))
        printf("%s", line);

    fclose(fptr);

    return 0;
}