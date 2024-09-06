#include<stdio.h>
int main()
{
	int i,j;int a=0;int b=1;int count=1;
	for(i=1;i<=4;i++)
	{
		for(j=count;j<=b;j++)
		{
			if(a==3)
			{
				printf("\b");
			}
			printf("\t%d\t",j);
		}
		a++;
		b=b+a;
		count=count + i;
		printf("\n");
	}
	return 0;
}
