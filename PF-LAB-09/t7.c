#include<stdio.h>

int main()
{
    int a[6],i,max;
    int *p = a;

    printf("Enter 6 marks:\n");

    for(i=0;i<6;i++)
        scanf("%d",(p+i));

    printf("Before:\n");
    for(i=0;i<6;i++)
        printf("%d ",*(p+i));

    max = *p;

    for(i=1;i<6;i++)
    {
        if(*(p+i) > max)
            max = *(p+i);
    }

    for(i=0;i<6;i++)
    {
        *(p+i) = (int)(((float)*(p+i)/max)*100);
    }

    printf("\nAfter:\n");
    for(i=0;i<6;i++)
        printf("%d ",*(p+i));

    return 0;
}
