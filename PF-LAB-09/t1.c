#include<stdio.h>

float triageScore(int s,int a,int v)
{
    float score;
    score = (s*0.5) + (a*0.3) + (v*0.2);
    return score;
}

int main()
{
    int s,a,v;
    float ans;

    printf("Enter values: ");
    scanf("%d %d %d",&s,&a,&v);

    ans = triageScore(s,a,v);

    if(ans > 7)
        printf("Immediate attention required");
    else if(ans >= 4)
        printf("Moderate priority");
    else
        printf("Can wait");

    return 0;
}
