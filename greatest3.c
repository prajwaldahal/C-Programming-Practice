#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter a second number: ");
	scanf("%d",&b);
	printf("enter third number: ");
	scanf("%d",&c);
	if(a>=b&&a>c)
	{
		printf("%d is greatest number",a);
	}
	else if(b>a&&b>=c)
	{
		printf("%d is greatest number",b);
	}
    else if(c>=a&&c>b)
	{
		printf("%d is greatest number",c);
	}	
	else
	{
		printf("all are equal");
	}
    return 0;
}
