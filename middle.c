#include<stdio.h>
int main()
{
	double a,b,c;double mid;
	printf("enter a  3 numbers: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a>c && a>b) 
	{
		if(b>c)
			mid = b;
		else
			mid = c;
	}
	else if(b>a && b>c)
	{
		if(c>a)
			mid = c;
		else
			mid = a;		
	}
	else
	{
		if(a>b)
			mid = a;
		else
			mid = b;
	}
	printf("%.2lf is 2nd greatest",mid);
	return 0;
}

