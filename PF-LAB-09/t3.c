#include<stdio.h>

int totalRuns(int a[],int n)
{
    int i,sum=0;

    for(i=0;i<n;i++)
        sum = sum + a[i];

    return sum;
}

int highestScore(int a[],int n)
{
    int i,max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int aboveAverage(int a[],int n,float avg)
{
    int i,count=0;

    for(i=0;i<n;i++)
    {
        if(a[i] > avg)
            count++;
    }

    return count;
}

int main()
{
    int a[10],i,total,max,count;
    float avg;

    printf("Enter 10 values:\n");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    total = totalRuns(a,10);
    avg = (float)total/10;

    max = highestScore(a,10);
    count = aboveAverage(a,10,avg);

    printf("Total = %d\n",total);
    printf("Average = %.2f\n",avg);
    printf("Max = %d\n",max);
    printf("Above avg = %d\n",count);

    return 0;
}
