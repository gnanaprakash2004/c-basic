#include<stdio.h>
void main()
{
	int i,n,is_duck=0;
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		if(i==0)
		{
			is_duck=1;
			break;
		}
		n=n/10;
	}
	
	if(is_duck==1)
	{
		
		printf("duck number");
	}
	
	else
	{
	
		printf(" not a       duck number");
	}
}
