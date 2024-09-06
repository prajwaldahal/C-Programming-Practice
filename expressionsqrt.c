#include<stdio.h>
#include<math.h>
int main()
{
	float a = 2;
	float b = 3;
	float c = 5; float rslt1,rslt2,rslt3,finalrslt;
	rslt1 = a*b;
	rslt2 = b*c;
	rslt3 = a*c;
	finalrslt=pow(rslt1,0.25)+pow(rslt2,0.2)+sqrt(rslt3);
	printf("%f",finalrslt);
	return 0;
}
