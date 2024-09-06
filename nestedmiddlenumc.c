#include<stdio.h>
int a,b,c;int mid;
void input()
{
	printf("enter a  3 numbers");
	scanf("%d%d%d",&a,&b,&c);
}
void middle()
{
	if(a>b)
	{
		if(a<c)
		{
			mid = a;
		}
		else
		{
			mid = c;
		}
	}
	else
	{
		if(b<c)
		{
			mid = b;
		}
		else
		{
			mid = c;
		}		
	}
	void output()
	{
		printf("%d is 2nd greatest",mid);
	}
}
int main()
{
	input();
	middle();
	output();
	return 0;
}

