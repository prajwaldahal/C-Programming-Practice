#include<stdio.h>
int main()
{
	int num,rslt,sum=0;
	printf("enter a number: ");
	scanf("%d",&num);
	for(;num>0;)
	{
		rslt=num % 10;
		sum+=rslt;
		num=num/10;
	}
	printf("%d",sum);
	return 0;
}
