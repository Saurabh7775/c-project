#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k;
  printf("\n Enter matrix a :");
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n Enter matrix b :");
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
 printf("\n Dispaly Matrix a:\n");
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      printf("\t%d",a[i][j]);
    }
    printf("\n");
  }
  printf("\n Dispaly Matrix b:\n");
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      printf("\t%d",b[i][j]);
    }
    printf("\n");
  }
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      c[i][j]=0;
      for ( k = 0; k <=2  ; k++)
      {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        
      }
      
    }
  }
  printf("\n Enter matrix c :\n");
  for ( i = 0; i <= 2 ; i++)
  {
    for ( j = 0; j <= 2 ; j++)
    {
      
      printf("\t%d",c[i][j]);
    }
    printf("\n");
  }
}


