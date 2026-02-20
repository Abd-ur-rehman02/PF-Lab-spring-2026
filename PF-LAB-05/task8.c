#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b;
    printf("1-Addition 2-Subtraction 3-Multiplication 4-Division\n");
    printf("5-Sqrt 6-Power 7-Log10 8-Absolute 9-Sin 10-Cos 11-Tan\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Enter two numbers: "); scanf("%lf %lf", &a, &b); printf("Result = %.2lf\n", a+b); break;
        case 2: printf("Enter two numbers: "); scanf("%lf %lf", &a, &b); printf("Result = %.2lf\n", a-b); break;
        case 3: printf("Enter two numbers: "); scanf("%lf %lf", &a, &b); printf("Result = %.2lf\n", a*b); break;
        case 4: printf("Enter two numbers: "); scanf("%lf %lf", &a, &b); if(b!=0) printf("Result = %.2lf\n", a/b); else printf("Invalid\n"); break;
        case 5: printf("Enter number: "); scanf("%lf", &a); if(a>=0) printf("Result = %.2lf\n", sqrt(a)); else printf("Invalid\n"); break;
        case 6: printf("Enter base and exponent: "); scanf("%lf %lf", &a, &b); printf("Result = %.2lf\n", pow(a,b)); break;
        case 7: printf("Enter number: "); scanf("%lf", &a); if(a>0) printf("Result = %.2lf\n", log10(a)); else printf("Invalid\n"); break;
        case 8: printf("Enter number: "); scanf("%lf", &a); printf("Result = %.2lf\n", fabs(a)); break;
        case 9: printf("Enter angle in radians: "); scanf("%lf", &a); printf("Result = %.2lf\n", sin(a)); break;
        case 10: printf("Enter angle in radians: "); scanf("%lf", &a); printf("Result = %.2lf\n", cos(a)); break;
        case 11: printf("Enter angle in radians: "); scanf("%lf", &a); printf("Result = %.2lf\n", tan(a)); break;
        default: printf("Invalid Choice\n");
    }

    return 0;
}