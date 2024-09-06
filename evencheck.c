#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter a integer: ");
	scanf("%d",&a);
	printf("enter second integer: ");
	scanf("%d",&b);
	if(b>a)
{
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
		 	printf("%d\t",i);
		}
	}
}
else
{
	for(i=b+1;i<a;i++)
	{
		if(i%2==0)
		{
		 	printf("%d\t",i);
		}
	}
}
	return 0;
}
