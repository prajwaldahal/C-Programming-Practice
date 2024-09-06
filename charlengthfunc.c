#include<stdio.h>
#include<string.h>
char a[50];int k;
void input()
{
	printf("enter a string: ");
	gets(a);
}
void charlength()
{
	k=strlen(a);
}
void output()
{
	printf("length of '%s' is %d",a,k);
}
int main()
{
	input();
	charlength();
	output();
	return 0;
}
