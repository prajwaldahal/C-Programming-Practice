#include<stdio.h>
int main()
{
	int  a,b,c;int high,mid,small; 
	printf("enter a three character: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		high=a;
		if(b>c)
		{
			mid=b;	
			small=c;
		}
		else
		{
			mid=c;
			small=b;

		}
	}
	else if(b>a && b>c)
	{
		high=b;
		if(a>c)
		{
			mid=a;
			small=c;
		}
		else
		{
			mid=c;
			small=a;
		}
	}
	else
	{
		high=c;
		if( a>b)
		{
			mid=a;
			small=b;
		}
		else
		{
			mid=b;
			small=a;
		}
	}
	printf("%d %d %d",small,mid,high);
	return 0;
}

