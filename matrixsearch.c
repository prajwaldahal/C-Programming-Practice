#include<stdio.h>
int main()
{
	int a[3][4];int i,j;int b;int c;int d;
	printf("enter a element of 3*4 matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==45)
			{
				b=1;
				break;	
			}
		}
	}
	if(b==1)
	{
		printf("found in a[%d][%d]",i-1,j);
	}
	else
	{
		printf("not found ");
	}
	return 0;
}

