#include<stdio.h>
int main()
{
	int a,b,c,d;
	a= 3>7;/*0*/
	b=12.12>5;/*1*/
	c= 12.44>10.2;/*1*/
	d=12.22<23.44;/*1*/
	printf("%d",d&&!b);
	return 0;

}
