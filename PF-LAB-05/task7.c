#include <stdio.h>

int main() {
    int username, password, otp;
    int validUser = 1111, validPass = 2222, validOtp = 1234;
    printf("Enter Username: ");
    scanf("%d", &username);
    printf("Enter Password: ");
    scanf("%d", &password);
    printf("Enter OTP: ");
    scanf("%d", &otp);

    if (username == validUser) {
        if (password == validPass) {
            if (otp == validOtp)
                printf("Login Successful\n");
            else
                printf("Invalid OTP\n");
        } else
            printf("Incorrect Password\n");
    } else
        printf("Invalid Username\n");

    return 0;
}