#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=1000000000;i++)
	{
		if(i%2==0)
		printf("\a");
	}
	return 0;
}
