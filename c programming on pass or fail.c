#include<stdio.h>
void main()
{
	int M,P,C,E;
	printf("enter marks");
	scanf("%d%d%d%d",&M,&P,&C,&E);
	if(35<=M && 35<=P && 35<=C && 35<=E )
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
