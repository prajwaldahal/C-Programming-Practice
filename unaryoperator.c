#include<stdio.h>
int main()
{
	int x=20; int y=21;
	y = y++ + ++x;
	printf("%d %d",x,y);
	return 0;
}
