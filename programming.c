#include<stdio.h>
void input(int a)
{
	printf("enter a number: ");
	scanf("%d",&a);
}
void output(int a)
{
	printf("%d",a);
}
int main()
{
	int a;
	input(a);
	output(a);
	return 0;	
}
