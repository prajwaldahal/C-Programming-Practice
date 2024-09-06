#include<stdio.h>
int main()
{
	int a;
	while(1)
	{
		printf("enter a number: ");
		scanf("%d",&a);
		if(a%2==0)
			break;
	}
	printf("input taken:%d",a);
	return 0;
}
