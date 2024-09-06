#include<stdio.h>
int main()
{
	char charc[7],i;
	printf("enter 7 number: ");
	for (i=0;i<7;i++)
	{
		printf("enter character%d: ",i+1);
		scanf("%c",&charc[i]);
		fflush(stdin);
	}
		for (i=0;i<7;i++)
	{
		printf("%c\n",charc[i]);
	}
	return 0;
}
