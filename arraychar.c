#include<stdio.h>
int main()
{
	int i;
	char charc[]={'1','2','3','4','5'};
	for (i=0;i<5;i++)
	{
		printf("%d\n",charc+i);
	}
	return 0;
}

