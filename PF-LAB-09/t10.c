#include<stdio.h>

int basic(int d,int h)
{
    return h-d;
}

int power(int d,int h)
{
    return h-(int)(d*2.5);
}

int heal(int d,int h)
{
    return h+20;
}

int poison(int d,int h)
{
    printf("Poison\n");
    return h-d/2;
}

int main()
{
    int hp=100,d=25,ch,i;
    int (*f)(int,int);

    for(i=1;i<=3;i++)
    {
        printf("\n1 2 3 4: ");
        scanf("%d",&ch);

        if(ch==1) f=basic;
        else if(ch==2) f=power;
        else if(ch==3) f=heal;
        else f=poison;

        hp = f(d,hp);

        printf("HP=%d\n",hp);
    }

    return 0;
}

