/*wap to swap values of two variables*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values: ");
	scanf("%d%d",&a,&b);
	printf("values of two variable before:\na=%d\nb=%d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("values after swaping:\na=%d\nb=%d",a,b);
	return 0;
}
