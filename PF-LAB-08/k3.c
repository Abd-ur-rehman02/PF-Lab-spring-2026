#include <stdio.h>

int main() {
    int t[7][3] = {
        {30,35,28},{29,34,27},{31,36,29},
        {32,37,30},{30,33,26},{28,32,25},{27,31,24}
    };

    int i,j,max=t[0][0];
    float avg;

    for(i=0;i<7;i++){
        for(j=0;j<3;j++){
            if(t[i][j]>max){
                max=t[i][j];
            }
        }
    }

    printf("Highest = %d\n\n", max);

    for(i=0;i<7;i++){
        avg=0;
        for(j=0;j<3;j++){
            avg += t[i][j];
        }
        printf("Day %d Avg = %.2f\n", i+1, avg/3);
    }

    return 0;
}