#include<stdio.h>
int main()
{
	int a[10]; int  i;  int grt=0;
	printf("enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		grt = a[i]>grt? a[i]:grt;
	}
	printf("greatest num is %d",grt);
	return 0;
}
