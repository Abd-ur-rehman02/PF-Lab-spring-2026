#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *buffer;

    printf("Enter number of sensors: ");
    scanf("%d", &n);

    buffer = (float *)calloc(n, sizeof(float));

    if (buffer == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    // show initial values
    printf("\nInitial values (should be 0):\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", buffer[i]);
    }

    
    printf("\n\nEnter temperature readings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &buffer[i]);
    }

    
    printf("\nSensor Readings:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", buffer[i]);
    }

    free(buffer);

    return 0;
}