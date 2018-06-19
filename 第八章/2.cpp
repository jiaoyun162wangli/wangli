#include <stdio.h>
#include <string.h>   
void swap(char *s1,char *s2) ;
main()
{
 char str1[20],str2[20],str3[20];
  printf("Input three strings:\n");
  gets(str1);
  gets(str2);
  gets(str3);
  if(strcmp(str1,str2)>0)swap(str1,str2);
  if(strcmp(str1,str3)>0)swap(str1,str3);
  if(strcmp(str2,str3)>0)swap(str2,str3);
  printf("After exchange:");
   printf("%s\n%s\n%s\n",str1,str2,str3);
}
void swap(char *s1,char *s2)
{
 char p[20];
 strcpy(p,s1);
 strcpy(s1,s2);
 strcpy(s2,p);
}

