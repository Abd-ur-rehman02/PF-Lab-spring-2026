#include<stdio.h>

float total(float b[],int n)
{
    int i;
    float sum=0;

    for(i=0;i<n;i++)
        sum = sum + b[i];

    return sum;
}

int best(float b[],int n)
{
    int i,idx=0;

    for(i=1;i<n;i++)
    {
        if(b[i] > b[idx])
            idx = i;
    }

    return idx;
}

int check(float t)
{
    if(t>10000)
        return 1;
    else
        return 0;
}

int main()
{
    float b[5],t;
    int i,idx;

    printf("Enter 5 bills:\n");

    for(i=0;i<5;i++)
        scanf("%f",&b[i]);

    t = total(b,5);
    idx = best(b,5);

    printf("Total = %.2f\n",t);
    printf("Best table = %d\n",idx+1);

    if(check(t)==1)
        printf("Profit");
    else
        printf("No profit");

    return 0;
}
