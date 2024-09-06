#include<stdio.h>
int main()
{
	char a,b,c;
	printf("enter a character: ");
	scanf("%c",&a);
	printf("enter a second character: ");
	scanf("%c",&b);
	printf("enter third charact
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
    else if(c>a&&c>b)
	{
		printf("%d is greatest number",c);
	}	
	else
	{
		printf("all are equal");
	}
    return 0;
}
