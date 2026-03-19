#include <stdio.h>

int main() {
    int marks[4][3] = {
        {80,75,90},
        {60,70,85},
        {88,92,79},
        {55,65,70}
    };
    int i,j,sum;

    for(i=0;i<4;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum += marks[i][j];
        }
        printf("Student %d Total = %d\n", i+1, sum);
    }

    printf("\n");

    for(j=0;j<3;j++){
        sum=0;
        for(i=0;i<4;i++){
            sum += marks[i][j];
        }
        printf("Subject %d Avg = %.2f\n", j+1, sum/4.0);
    }

    return 0;
}