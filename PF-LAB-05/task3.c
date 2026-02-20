#include <stdio.h>

int main() {
    int vehicle, subtype, hours;
    float fee;
    printf("Enter Vehicle Type (1-Car, 2-Bike, 3-Bus): ");
    scanf("%d", &vehicle);
    if(vehicle != 3){
        printf("Enter Parking Type (1-Regular, 2-VIP/Premium): ");
        scanf("%d", &subtype);
    }
    printf("Enter Hours Parked: ");
    scanf("%d", &hours);

    switch (vehicle) {
        case 1:
            switch (subtype) {
                case 1: fee = 50 * hours; break;
                case 2: fee = 100 * hours; break;
            }
            break;
        case 2:
            switch (subtype) {
                case 1: fee = 20 * hours; break;
                case 2: fee = 40 * hours; break;
            }
            break;
        case 3: fee = 200 * hours; break;
    }

    printf("Total Parking Fee = Rs. %.2f\n", fee);
    return 0;
}

