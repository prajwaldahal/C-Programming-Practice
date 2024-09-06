#include<stdio.h>
int main()
{
	int *p,*q;int a,b;
	printf("enter two number: ");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("swapping %d %d",a,b);
	return 0;
}
