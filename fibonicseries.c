#include<stdio.h>
int main()
{
	int i=1;int a=6,b=6,c;
	while(i<=10)
	{
		c=a+b;
		printf("%d\n",a);				
		b=a;
		a=c;
	    i=i+1;
	}
	return 0;
}

