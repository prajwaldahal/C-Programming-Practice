#include<stdio.h>
int main()
{
	char a;char b[20];
	printf("enter a charater: ");
	a= getchar();
	putchar(a);
	printf("\n");
	printf("enter a string: ");
	fflush(stdin);
	gets(b);
	puts(b);
	return 0;
}

