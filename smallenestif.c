#include<stdio.h>
int main()
{
	int a,b,c;int great;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			great=a;
		else
			great=c;
	}
	else
	{
		if(b>c)
			great=b;
		else
			great=c;
	}
	printf("%d",great);
	return 0;
}
