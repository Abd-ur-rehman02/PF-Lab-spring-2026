#include <stdio.h>

int main() {
    float cgpa, income;
    float scholarship = 0;
    scanf("%f %f", &cgpa, &income);

    if (cgpa >= 3.5) {
        if (income < 50000)
            scholarship = 100;
        else
            scholarship = 50;
    } else {
        if (cgpa >= 3.0 && income < 40000)
            scholarship = 25;
        else
            scholarship = 0;
    }

    if (scholarship > 0)
        printf("Scholarship = %.0f%%\n", scholarship);
    else
        printf("No Scholarship\n");

    return 0;
}