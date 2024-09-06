#include<stdio.h>
int main()
{
	int a=1,b=1;int x;int y;
	x = a++ || ++b;
	y = a-- && --b;
	printf("%d %d %d %d",a,b,x,y);	
	return 0;
}
