#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("it is palindrom");
	else
	printf("it is not palindrom");
}
