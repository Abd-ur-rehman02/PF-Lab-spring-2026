#include <stdio.h>

int main() {
    int N, total = 0;

    printf("Enter number of days: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        total = total + i;
    }

    printf("Total distance covered: %d km\n", total);

    return 0;
}