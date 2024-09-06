#include<stdio.h>
#define SWAP(a,b) a=a+b;b=a-b;a=a-b
int main()
{
	int a,b;
	printf("enter two number: ");
	scanf("%d%d",&a,&b);
	printf("values before swapping:a=%d b=%d\n",a,b);
	SWAP(a,b);
	printf("values before swapping:a=%d b=%d\n",a,b);
	return 0;
}
