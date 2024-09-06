#include<stdio.h>
int main()
{
	int i,j;int a=1,b;int num;
	printf("enter a number of rows to be displayed: ");
	scanf("%d",&num);
	b=num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if(j==a)
			{
				printf("%c",'\\');
			}
			else if(j==b)
			{
				printf("/");
			}
			else
			{
				printf("*");
			}
		}
		a++;
		b--;
		printf("\n");
	}
	return 0;
}
