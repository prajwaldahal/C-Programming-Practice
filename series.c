/*to print series:

 2,8,18,32 upto 10th term
 */
#include<stdio.h>
int main()
{
	int a= 2;int i;int b=6;
	for(i=1;i<=10;i++)
	{
		printf("%4d",a);
		a+=b;
		b+=4;
	}
	return 0;
}
