#include<stdio.h>
int main()
{
	char a,b,c;
	printf("enter a character: ");
	scanf("%c",&a);
	fflush(stdin);
	printf("enter a second character: ");
	scanf("%c",&b);
	fflush(stdin);
	printf("enter third character: ");
	scanf("%c",&c);
	if(a>=b&&a>c)
	{
		printf("%c is greatest character",a);
	}
	else if(b>a&&b>=c)
	{
		printf("%c is greatest character",b);
	}
    else if(c>a&&c>b)
	{
		printf("%c is greatest character",c);
	}	
	else
	{
		printf("all are equal");
	}
    return 0;
}
