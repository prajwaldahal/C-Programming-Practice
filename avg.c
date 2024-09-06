#include<stdio.h>
float avg(int a,int b,int c)
{
	return (a+b+c)/(float)3;
}
int main()
{
	int a,b,c;float rslt;
	printf("enter two float data: ");
	scanf("%d%d%d",&a,&b,&c);
	rslt = avg(a,b,c);
	printf("avg=%.2f",rslt);
	return 0;
}
