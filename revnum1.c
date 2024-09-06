#include<stdio.h>
int main()
{
	int num=10002;int r;int rev=0;
	top:
	r=num%10;
	rev=rev+r;
	num=num/10;
	if(num!=0)
		goto top;
	printf("%d",rev);
}
