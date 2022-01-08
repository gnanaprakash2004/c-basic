#include<stdio.h>
void main()
{
	int n,r,z=0,e=0,o=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			z++;
		}
		else if(r%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		n=n/10;
		
	}
	printf("%d %d %d",z,e,o);
}
