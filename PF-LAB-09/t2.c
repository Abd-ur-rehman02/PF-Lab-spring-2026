#include<stdio.h>

float applyDiscount(float p,int t)
{
    if(t==1) p = p - (p*0.05);
    else if(t==2) p = p - (p*0.10);
    else if(t==3) p = p - (p*0.20);
    else if(t==4) p = p - (p*0.30);

    return p;
}

void printInvoice(float o,float d)
{
    float del = 0;

    if(d < 2000)
        del = 150;

    printf("Original: %.2f\n",o);
    printf("Discount: %.2f\n",o-d);
    printf("Delivery: %.2f\n",del);
    printf("Total: %.2f\n",d+del);
}

int main()
{
    float price, newp;
    int tier;

    printf("Enter price: ");
    scanf("%f",&price);

    printf("Enter tier: ");
    scanf("%d",&tier);

    newp = applyDiscount(price,tier);

    printInvoice(price,newp);

    return 0;
}
