#include<stdio.h>
int main()
{
	char a,b,c;char grt; 
	printf("enter a three: ");
	a=getchar();
	b=getchar();
	c=getchar();
	if(a>b)
	{
		if(a>c)
		{
			grt=a;
		}	
		else
		{
			grt=c;
		}
	}
	else
	{
		if(b>c)
		{
			grt=b;
		}
		else
		{
			grt = c;
		}
	}
	printf("greatest=");
	putchar(grt);
	return 0;
}

