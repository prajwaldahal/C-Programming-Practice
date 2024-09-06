#include<stdio.h>
int sum(int a){
	
	if(a==0)
	{
		return 0;
	}
	else 
	{
		return a+sum(a-1);
	}
	
}
int main()
{
	
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	
	printf("factorial of %d is %d",num,sum(num));
	return 0;
	
}
