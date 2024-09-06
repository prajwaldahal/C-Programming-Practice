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
	for(i=a;i<=b;i++)
	{
		printf("%d\t",i);
	}
   }
   if(a>b)
	{
	for(i=b;i<=a;i++)
	{
		printf("%d\t",i);	
   }
	}
   	return 0;
}
