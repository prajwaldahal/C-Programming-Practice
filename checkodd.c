#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter a integer: ");
	scanf("%d",&a);
	printf("enter second integer(>first integer): ");
	scanf("%d",&b);
	printf("odd number between %d to %d are:\n\n",a,b);
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
		 	printf("%d\t",i);
		}
	}
	return 0;
}
