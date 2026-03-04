#include <stdio.h>

int main() {
    int status, total = 0;

    for(int i = 1; i <= 25; i++) {
        printf("Enter check-in status for member %d (1=Yes, 0=No): ", i);
        scanf("%d", &status);

        if(status == 1)
            total++;
    }

    printf("Total members checked in: %d\n", total);

    return 0;
}