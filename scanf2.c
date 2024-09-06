#include<stdio.h>
int main()
{
	char a,b,c;
	printf("enter a 1st character? ");
	scanf("%c",&a);
	fflush(stdin);
	printf("enter a 2nd character?");
	scanf("%c",&b);
	fflush(stdin);
	printf("enter a 3rd character? ");
	scanf("%c",&c);
    printf("%c\n%c\n%c",a,b,c);
    return 0;
}
