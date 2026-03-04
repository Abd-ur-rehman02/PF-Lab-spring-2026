#include <stdio.h>

int main() {
    int spaces = 50;
    int entry = 1;

    while(spaces > 0 && entry != 0) {

        printf("Car arrived? (1=Yes, 0=Stop): ");
        scanf("%d", &entry);

        if(entry == 1) {
            spaces--;
            printf("Remaining spaces: %d\n", spaces);
        }
    }

    if(spaces == 0)
        printf("Parking Full.\n");
    else
        printf("Parking closed early.\n");

    return 0;
}