#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter cp and sp:");
	scanf("%d%d",&cp,&sp);
	if(cp<sp)
	{
		printf("profit %d%%",(sp-cp)*100/cp);
	}
	else if(cp>sp)
	{
		printf("loss %d%%",(cp-sp)*100/sp);
	}
	else
	{
		printf("sarle paduko");
	}
}
