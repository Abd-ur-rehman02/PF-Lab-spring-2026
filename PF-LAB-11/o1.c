#include <stdio.h>

int totalPower(int floors)
{
    if (floors == 1)
        return 100;

    return (100 * (1 << (floors - 1))) + totalPower(floors - 1);
}

int main()
{
    int n;
    printf("Enter number of floors: ");
    scanf("%d", &n);

    printf("Total Power = %d kWh\n", totalPower(n));

    return 0;
}