#include<stdio.h>
#include<string.h>
int main()
{
	char c[20];
	int d;
	printf("enter a word: ");
	scanf("%s",c);
	d=strcmp(c,"Nepal");
	if(d==0)
	{
		printf("entered word is Nepal");
	}
	else
	{
		printf("entered word isn,t Nepal");
	}
	return 0;
}
