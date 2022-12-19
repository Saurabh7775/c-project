#include<stdio.h>
main()
{
char s1[20];
int i,len;
printf("\n enter 1st string \n");
gets(s1);
len=strlen(s1);
for (i=len-1;i>=0;i--)
{
	printf("%c",s1[i]);
}
}
