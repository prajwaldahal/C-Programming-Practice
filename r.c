#include<stdio.h>
#include<windows.h>
int main()
{
	int i;int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("\r%d",i);
		}
	}
	return 0;
}
