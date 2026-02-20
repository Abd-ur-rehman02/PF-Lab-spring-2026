#include <stdio.h>

int main() {
    float units, rate, bill;
    int type;
    scanf("%f %d", &units, &type);

    if (units <= 100)
        rate = 10;
    else if (units <= 300) {
        if (type == 1)
            rate = 12;
        else
            rate = 15;
    } else
        rate = 20;

    bill = units * rate;
    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}