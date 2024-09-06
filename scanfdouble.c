#include<stdio.h>
int main()
{
	double a,b,sum;
	printf("enter the 1st decimal number? ");
	scanf("%lf",&a);
printf("enter the 2nd decimal number? ");
scanf("%lf",&b);
sum = a+b;
printf("%lf\n%lf\n",a,b);
printf("sum=%lf\n",sum);
printf("product=%lf\n",a*b);
printf("average=%lf",sum/2);
return 0;
}

