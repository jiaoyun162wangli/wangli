#include<stdio.h>
main()
{
    int *p1,*p2,*p3,*p,a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(a>b)
    {
        p=p1;
        p1=p2;
        p2=p;
    }
    if(a>c)
    {
        p=p1;
        p1=p3;
        p3=p;
    }
    if(b>c)
    {
        p=p2;
        p2=p3;
        p3=p;
    }
    printf("%d,%d,%d",*p1,*p2,*p3);
} 
