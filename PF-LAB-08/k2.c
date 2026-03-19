#include <stdio.h>

int main() {
    int a[5][6] = {
        {1,0,0,1,0,0},
        {1,1,0,0,0,1},
        {0,0,0,1,1,0},
        {1,1,1,0,0,0},
        {0,0,1,1,0,1}
    };

    int i,j,available=0,row=0,max=0,count;

    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(a[i][j]==0){
                available++;
            }
        }
    }

    printf("Available seats = %d\n", available);

    for(i=0;i<5;i++){
        count=0;
        for(j=0;j<6;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            row=i;
        }
    }

    printf("Max booked row = %d\n", row+1);

    return 0;
}