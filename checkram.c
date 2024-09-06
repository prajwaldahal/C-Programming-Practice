#include<stdio.h>
#include<string.h>
int main()
{
	char c[20];
	int d;
	printf("enter a word: ");
	scanf("%s",c);
	d=strcmp(c,"Ram");
	if(d==0)
	{
		printf("entered word is Ram");
	}
	else
	{
		printf("entered word isn,t Ram");
	}
	return 0;
}
