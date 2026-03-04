#include <stdio.h>

int main() {
    int units, count = 0;
    float total = 0;

    printf("Enter daily units (-999 to stop): ");
    scanf("%d", &units);

    while(units != -999) {
        total = total + units;
        count++;

        printf("Enter daily units (-999 to stop): ");
        scanf("%d", &units);
    }

    if(count > 0)
        printf("Average consumption: %.2f\n", total / count);
    else
        printf("No data entered.\n");

    return 0;
}