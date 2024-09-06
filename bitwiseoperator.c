#include<stdio.h>
int store;int i;
void binary(int x)
{
	printf("\nbinary:");
	int rem[32]; int b;
	for(i=0; i<32; i++)
	{
		if(x==0)
		{
			store=i-1;
			break;
		}
		rem[i]= x%2;
		x=x/2;
	}
	for(i=store; i>=0; i--)
	{
		printf("%d",rem[i]);
	}
}
int main()
{
	int num1,num2;
	printf("enter two number: ");
	scanf("%d %d",&num1,&num2);
	binary(num1);
	binary(num2);
	return 0;
}

