#include<stdio.h>
#include<math.h>
int main()
{
	double h,p,b;
	printf("enter a perpendicular of triangle? ");
	scanf("%lf",&p);
	printf("enter a base of triangle? ");
	scanf("%lf",&b);
    h=sqrt(p*p+b*b);
    printf("hypotenuse=%lf",h);
    return 0;
}
