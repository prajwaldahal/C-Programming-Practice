#include<stdio.h>
int main()
{
	char c;
	printf("enter a character: ");
	scanf("%c",&c);
	if(c=='#')
	{
		printf("true");
	}
	if(c!='#')
	{
		printf("false");
	}
	return 0;
}
