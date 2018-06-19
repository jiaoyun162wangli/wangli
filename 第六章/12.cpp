#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char str[100];  
    printf("please enter the string :\n");  
    gets(str);  
  
    printf("Ô´Âë£º%s\n",str);  
  
    for(int i=0;i<strlen(str);i++)  
    {  
        if (str[i]>='a' && str[i]<='z')    str[i]='z'-(str[i]-'a');  
        else if (str[i]>='A' && str[i]<='Z')  str[i]='Z'-(str[i]-'A');  
    }  
  
    printf("ÒëÂë£º%s\n",str);  
    return 0;  
}  
