#include<stdio.h>
#define e(x) 1+x+(x*x)/2+(x*x*x)/6+(x*x*x*x)/24
int main()
{
	printf("%.3lf",e(0.05));
}
