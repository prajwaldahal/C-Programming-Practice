#include<stdio.h>
int main()
{
	int i;
	for(i=64;i<=116;i++)
	{
		printf("%4c",i);
		if(i=='a')
			printf("%d",i);
	}
	return 0;
}
