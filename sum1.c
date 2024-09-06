#include<stdio.h>
float add(float a,float b){
	float sum;
	sum=a+b;
	return sum;
}
int main()
{
	float a,b;float k;
	printf("enter a two float number: ");
	scanf("%f%f",&a,&b);
	k=add(a,b);
	printf("sum of two number=%f",k);
	return 0;
}
