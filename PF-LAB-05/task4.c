#include <stdio.h>

int main() {
    int category, type, quantity;
    float price = 0, total;
    printf("Select Category (1-Fast Food, 2-Desi Food): ");
    scanf("%d", &category);
    printf("Select Item (1 or 2): ");
    scanf("%d", &type);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    switch (category) {
        case 1:
            switch (type) {
                case 1: price = 500; break;
                case 2: price = 1200; break;
            }
            break;
        case 2:
            switch (type) {
                case 1: price = 350; break;
                case 2: price = 1500; break;
            }
            break;
    }

    total = price * quantity;
    printf("Total Bill = Rs. %.2f\n", total);
    return 0;
}