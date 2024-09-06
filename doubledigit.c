#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		if(i<10)
		{
			printf("0%d\t",i);
		}
		else
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
