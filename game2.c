#include<stdio.h>
int main()
{
	int i,a,b[i],c[i],num;
	printf("enter a random 5 digit number");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		b[i]=a%10;
		a=a/10;
		
	}
	for(i=0;i<5;i++)
	{
		c[i]=b[i]+2;
	}
	printf("\tresult will be %d",2);
	for(i=4;i>=0;i--)
	{
		printf("%d",c[i]);
	}
	printf("\n\nenter the second 5 digit number ");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		b[i]= num%10;
		num = num/10;
	}
	for(i=0;i<5;i++)
	{
		c[i]=10-b[i];
		printf("%d",c[i]);
	}
return 0;
}
