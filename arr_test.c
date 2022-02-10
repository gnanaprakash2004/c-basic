#include<stdio.h>
int main()
{
	int i,j,m,n,y,k,g,t;
	printf("m,n \n");
	scanf("%d %d" ,&m,&n);
	k=m*n;
	int a[m][n],b[m][n];
	printf("array \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<m-1;i++) 
	{
		for(j=1;j<n-1;j++) 
		{
		      b[i][j]=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];	
		}
	}
	for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			printf("%d     " ,b[i][j]);
		}
	}
	t=b[1][1];
    for(i=1;i<m-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(t<b[i][j])
			{
				t=b[i][j];	
			}
			
		}
	}
	printf("%d  ",t);	
}
