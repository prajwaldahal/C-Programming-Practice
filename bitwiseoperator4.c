#include<stdio.h>
int store;int i;
void binary(int x)
{
	printf("enter :");
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
		printf("a\n");
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
	scanf("%d %d",num1,num2);
	binary(10);
	binary(11);
	return 0;
}

