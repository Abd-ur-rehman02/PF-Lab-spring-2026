#include<stdio.h>

float toMJ(float k)
{
    return k*3.6;
}

float toBTU(float k)
{
    return k*3412.14;
}

float toCal(float k)
{
    return k*859845;
}

int main()
{
    float k;

    printf("Enter kwh: ");
    scanf("%f",&k);

    printf("MJ = %.2f\n",toMJ(k));
    printf("BTU = %.2f\n",toBTU(k));
    printf("Cal = %.2f\n",toCal(k));

    return 0;
}
