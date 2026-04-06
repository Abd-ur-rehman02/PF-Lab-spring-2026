#include<stdio.h>

int validatePIN(int sp,int ep)
{
    if(sp==ep)
        return 1;
    else
        return 0;
}

int main()
{
    int sp=4729, ep, i;

    for(i=1;i<=3;i++)
    {
        printf("Enter pin: ");
        scanf("%d",&ep);

        if(validatePIN(sp,ep)==1)
        {
            printf("Access granted");
            break;
        }
        else
        {
            printf("Wrong\n");
            printf("Left: %d\n",3-i);
        }
    }

    if(i==4)
        printf("Card blocked");

    return 0;
}
