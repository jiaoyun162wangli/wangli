#include <stdio.h>
#include <stdlib.h>
 
float myfunction(int n,int x)
{
      if (0 == n)
      {
         return 1;
      }
      else if (1 == n)
      {
           return x;
      }
      else
      {
          return ((2 * n - 1) * x - myfunction(n - 1 , x) - (n - 1) * myfunction(n - 2, x)) / n;    
      }
}
 
int main()
{
    int n,x;
    float result;  
    printf("please inputa n,x:");
    scanf("%d,%d",&n,&x);
    result = myfunction(n,x);
    printf("the result is : %f\n",result);
    system("pause");
    return 0;
}
