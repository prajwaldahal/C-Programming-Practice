#include<stdio.h>
int main()
{
	char a;
	printf("enter a character: ");
	a=getchar();
	switch(a)
	{
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("%c is vowel",a); break;
		default: printf("%c is consonant",a);
	}
	return 0;
}
