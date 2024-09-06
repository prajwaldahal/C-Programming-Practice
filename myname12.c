#include<stdio.h>
int main()
{
	int i;
	char s[20];
	printf("enter a word: ");
	scanf("%s",s);
	for(i=1;i<=12;i++)
	{
		printf("%10s",s);
	}
	return 0;
}
