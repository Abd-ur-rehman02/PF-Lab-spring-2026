#include<stdio.h>

int main()
{
    void *p;

    int v=847;
    float t=73.6;
    char c='W';

    p=&v;
    printf("%d\n",*(int*)p);
    printf("%p\n",(void*)p);

    p=&t;
    printf("%.2f\n",*(float*)p);
    printf("%p\n",(void*)p);

    p=&c;
    printf("%c\n",*(char*)p);
    printf("%p\n",(void*)p);

    if(*(char*)p=='N') printf("Normal");
    else if(*(char*)p=='W') printf("Warning");
    else printf("Critical");

    return 0;
}
