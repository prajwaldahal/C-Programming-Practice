#include<stdio.h>
int main()
{
	int a,sum=0;
	for(a=10;a<=100;a+=2)
	{
		sum+=a;
	}
	printf("sum of even num=%d",sum);
	return 0;
}
