#include<stdio.h>
int main()
{
	int i=0;
	while(i<100)
	{
		i++;
		if(i%2==0)
		{
			continue;	
		}
		printf(" %4d",i);	
	}
	return 0;
}
