#include<stdio.h>
int main()
{
	int a,b,c,d;
	a= 3>7;/*0*/
	b=12.12>2.22;/*1*/
	c= 12.44>10.2;/*1*/
	d=12.22>23.44;/*0*/
	printf("%d",a||c&&b||d);
	return 0;

}
