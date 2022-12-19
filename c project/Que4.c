#include<stdio.h>
#include<string.h>
 main()
{
  char str[100];
  int alp,dig,splch,i,space;
  alp=dig=splch=i=space=0; 

  printf("\n Enter string :");
  gets(str);
  for ( i = 0; str[i] !=0 ; i++)
 {
    if (str[i]>='A'&& str[i]<='Z'||str[i]>='a'&&str[i]<='z')
    {
      alp++;
    }
    else if (str[i]>='0' && str[i]<='9')
    {
      dig++;
    }
    else if(str[i]==' ')
    {
      space++;
    }
    else 
    {
      splch++;
    }
    
  }
  printf("\n Alphabet :%d",alp);
  printf("\n Numbers :%d",dig);
  printf("\n Special :%d",splch);
  printf("\n space :%d",space);
}
