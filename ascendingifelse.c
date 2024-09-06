#include<stdio.h>
int main()
{
	int a,b,c;char high,mid,small; 
	printf("enter a three: ");
	a=getchar();
	b=getchar();
	c=getchar();
	if(a>b&&a>c)
	{
		high=a;
	}
	else if(a<b&&b>c)
	{
		high = b;
	}
	else
	{
		high = c;
	}
	if(a<b && a<c)
	{
		small=a;
	}
	else if(a>b&&b<c)
	{
		small = b;
	}
	else
	{
		small = c;
	}
	mid = a+b+c-high-small;
	printf("above num in ascending order:\n%c %c %c",small,mid,high);
	return 0;
}

