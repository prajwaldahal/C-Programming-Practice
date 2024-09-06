#include<stdio.h>
int main()
{
    int num,rslt,rev=0;
	printf("enter a number: ");
	scanf("%d",&num);
	while(num>0)
	{
		rslt=num % 10;
		rev=rev*10+rslt;
		num=num/10;
	}
	printf("%d",rev);
	return 0;
}
