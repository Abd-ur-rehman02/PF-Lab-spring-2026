#include <stdio.h>

int main() {
    float salary;

    printf("Enter base salary: ");
    scanf("%f", &salary);

    for(int i = 1; i <= 10; i++) {
        salary = salary + (salary * 0.05);
        printf("Year %d salary: %.2f\n", i, salary);
    }

    return 0;
}