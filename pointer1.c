#include<stdio.h>
int main()
{
	int *p,a;char b;
	printf("enter a number: ");
	scanf("%d",&a);
	p = &a; /*store address of a variable*/
	printf("a=%d\n",a);
	*p=123;/*store '123' in the memory address store by 'p' pointer variable*/
	printf("memoryadress(p)=%d\n",p);
	printf("value(a)=%d",a);
	return 0;
}
