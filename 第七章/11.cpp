#include <stdio.h>
void sort(char s[], int n);                   
int main()
{
    char str[10];
    printf("Please enter 10 charactor: ");     
    gets(str);
    sort(str, 10);                               
    return 0;
}
void sort(char s[], int n)
{
    for (int i=0; i<n; i++)
        for (int j=i+1, t; j<n; s[i]>s[j]?t=s[j],s[j++]=s[i],s[i]=t:j++);
    printf("Sort array: ");
    puts(s);
}
