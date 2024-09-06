#include<stdio.h>
int main()
{  	
	int i,j,a; 
	for(j=1;j<=13;j++)
	{
		printf("enter a number");
		scanf("%d",a);
	}
	for(i=1;i<13;i++)
	{
		if(i==5||i==9||i==12)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
