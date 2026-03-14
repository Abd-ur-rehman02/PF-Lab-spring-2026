#include <stdio.h>

int main()
{
    int pass[10], fail[10];
    int p=0,f=0;
    int mark;
    int i;
    float avg1=0,avg2=0;

    printf("Enter marks (-1 to stop):\n");

    while(1)
    {
        scanf("%d",&mark);

        if(mark==-1)
        break;

        if(mark>=5 && mark<=10)
        {
            pass[p]=mark;
            avg1=avg1+mark;
            p++;
        }
        else if(mark>=0 && mark<5)
        {
            fail[f]=mark;
            avg2=avg2+mark;
            f++;
        }
    }

    printf("Pass marks:\n");
    for(i=0;i<p;i++)
    printf("%d ",pass[i]);

    printf("\nFail marks:\n");
    for(i=0;i<f;i++)
    printf("%d ",fail[i]);

    if(p>0)
    printf("\nAverage pass marks = %.2f",avg1/p);

    if(f>0)
    printf("\nAverage fail marks = %.2f",avg2/f);

    return 0;
}