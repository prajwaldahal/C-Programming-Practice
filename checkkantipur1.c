#include<stdio.h>
#include<string.h>
int main()
{
	char c[20];
	int d;
	printf("enter a word: ");
	scanf("%s",c);
	d=strcmp(c,"kantipur");
	if(d==0)
	{
		printf("entered word is kantipur");
	}
	else
	{
		printf("entered word isn,t kantipur");
	}
	return 0;
}
