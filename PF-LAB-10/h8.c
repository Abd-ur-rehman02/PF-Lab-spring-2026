#include <stdio.h>

int main()
{
    FILE *fptr;
    int i, val, sum = 0;
    float avg;

    fptr = fopen("survey.txt", "w");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &val);
        fprintf(fptr, "%d\n", val);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    while(fscanf(fptr, "%d", &val) != EOF)
        sum += val;

    avg = sum / 5.0;

    printf("Sum: %d\nAverage: %.2f", sum, avg);

    fclose(fptr);

    return 0;
}