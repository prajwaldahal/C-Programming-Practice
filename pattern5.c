#include<stdio.h>
int main()
{
	int i,j,k;int b=65;int a=0;
	for(i=1;i<=5;i++)
	{
		for(k=6;k>=a;k--)
		{
			printf(" ");
		}
		for(j=65;j<=b;j++)
		{
			if(j==b)
			{
				printf("A");
			}
			else
			{
				printf("%c",j);
			}
		}
		b+=2;
		a++;
		printf("\n");
	}
	return 0;
}
