#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(6%i==0)
		{
			printf("%d",i);
		}
	}
}
