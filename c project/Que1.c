#include<stdio.h>
struct cricketer
{
   char name[50],temp;
   int age,match;
   float avg;
};
struct cricketer c[20],temp1;
void main() 
{
   int i,j;
   for(i=0;i<10;i++)
   {
      printf("\nenter data of cricketer %d",i+1);

      printf("Name= ");
      gets(c[i].name);
      printf("age="); 
      scanf("%d",&c[i].age);
      printf("matches=");
      scanf("%d",&c[i].match);
      printf("average runs=");
      scanf("%f",&c[i].avg);
      scanf("%c",&c[i].temp);
   }
   for(i=0;i<10;i++) 
   {
      for(j=i+1;j<10;j++) 
	  {
         if(c[i].avg > c[j].avg)
		 {
            temp1=c[i];
            c[i]=c[j];
            c[j]=temp1;
         }
      }
   }
   printf("Sorted records=");
   for(i=0;i<10;i++)
   {
      printf("%d\t%s\t%d\t%d\t%f",i+1,c[i].name,c[i].age,c[i].match,c[i].avg);
   }
}
