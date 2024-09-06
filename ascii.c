#include<stdio.h>
int main()
{
	char char1,char2,char3,char4,char5;
	printf("enter a 1st character? ");
	scanf("%c",&char1);
	fflush(stdin);
	printf("enter a 2nd character?");
	scanf("%c",&char2);
	fflush(stdin);
	printf("enter a 3rd character? ");
	scanf("%c",&char3);
	fflush(stdin);
	printf("enter a 4th character? ");
	scanf("%c",&char4);
	fflush(stdin);
	printf("enter a 5th character? ");
	scanf("%c",&char5);
    printf("%c=%d\n%c=%d\n%c=%d\n%c=%d\n%c=%d",char1,char1,char2,char2,char3,char3,char4,char4,char5,char5);
    return 0;
}
