#include<stdio.h>
void main()
{
	int r,n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		dc++;
		sum +=r;
	}
	
	printf("\nsum of digits is %d",sum);
	printf("\nno of digits is %d",dc);
}
