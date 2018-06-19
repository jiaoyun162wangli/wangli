#include<stdio.h>
int main()
{
    int n, a, b, c, d, e;
    scanf("%d", &n);
    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;
    if(a != 0)
    {
        printf("5\n");
        printf("%d %d %d %d %d\n", a, b, c, d, e);
        printf("%d%d%d%d%d\n", e, d, c, b, a);
    }
    else if(b != 0)
    {
        printf("4\n");
        printf("%d %d %d %d\n", b, c, d, e);
        printf("%d%d%d%d\n", e, d, c, b);
    }
    else if(c != 0)
    {
        printf("3\n");
        printf("%d %d %d\n", c, d, e);
        printf("%d%d%d\n", e, d, c);
    }
    else if(d != 0)
    {
        printf("2\n");
        printf("%d %d\n", d, e);
        printf("%d%d\n", e, d);
    }
    else if(e != 0)
    {
        printf("1\n");
        printf("%d\n", e);
        printf("%d\n", e);
    }
    else
    {
        printf("0\n0\n0\n");
    }
    return 0;
}
