#include <stdio.h>

int main() {
    int a[5][5],i,j,r,c,zero=1;

    printf("Enter rows cols: ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    if(r==c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                zero=0;
            }
        }
    }

    if(zero)
        printf("Zero Matrix\n");

    return 0;
}