#include<stdio.h>
int store;int i=1;int c=1;
void binary(int x)
{
	int rem[32]; 
	for(i=0; i<32; i++)
	{
		if(x==0)
		{
			store=i-1;
			c=0;
			break;
		}
		rem[i]= x%2;
		printf("rem[%d]=%d\n",i,rem[i]);
		x=x/2;
	}
	for(i=store; i>=0; i--)
	{
		printf("%d",rem[i]);
	}
}
int main()
{
	int a;int b;
	printf("enter a decimal digits : ");
	scanf("%d",&a);
	binary(a);
	return 0;
}
