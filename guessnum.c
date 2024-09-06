#include<stdio.h>
int main()
{
	int num;int numread;int count=0;
	num = rand() % 101;
	top:
		count++;
	printf("enter a number between 1 to 100 ");
	scanf("%d",&numread);
	if(numread==num)
	{
		printf("num = %d\nyou guess it in %d times",num,count);
	}
	else
	{
		printf("incorrect enter again:\n\n");
		goto top;
	}
	return 0;
}
