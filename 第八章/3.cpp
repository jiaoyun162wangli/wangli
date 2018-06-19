#include <stdio.h>
void input (int * p);
void swapmin (int * p);
void swapmax (int * p);
int main ()
{
    int i;
    int a[10] ;
    input (a);
    swapmin(a);
    swapmax (a);
    for(i = 0;i<10;i++)
     printf("%d ",a[i]);
    return 0;
}
void input (int * p)
{
     int i;
     printf("请输入十个数\n");
     for(i=0;i<10;i++) 
     {
         printf("%d:",i);
         scanf("%d",p++);
     }
}
void swapmin(int * p)
{
    int *q = p;
    int *min = p,tmp;
    for (;q < p + 10;q++)
    {
     if (*min > *q)
        min = q;
    }
    tmp = *p;
    *p = *min;
    *min = tmp;
}
void swapmax (int * p)
{
    int *q = p;
    int *max = p,tmp;
    for (;q < p + 10;q++)
    {
     if (*max < *q)
        max = q;
    }
    q = p+9;
    tmp = *q;
    *q = *max;
    *max = tmp;
}
