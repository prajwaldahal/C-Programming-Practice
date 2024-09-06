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
	if(a>b&&a<c||a<b&&a>c)
	{
		printf("%d is middle number",a);
	}
	else if(b>a&&b<c||b<a&&b>c)
	{
		printf("%d is middle number",b);
	}
    else if(c>a&&c<b||c<a&&c>b)
	{
		printf("%d is middle number",c);
	}	
	else
	{
		printf("two of them or all are equal");
	}
    return 0;
}
