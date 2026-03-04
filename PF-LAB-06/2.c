#include <stdio.h>

int main() {
    int balance, usage;

    printf("Enter total data balance (MB): ");
    scanf("%d", &balance);

    while(balance > 0) {
        printf("Enter data used (MB): ");
        scanf("%d", &usage);

        balance = balance - usage;
        printf("Remaining balance: %d MB\n", balance);
    }

    printf("Data balance finished.\n");

    return 0;
}