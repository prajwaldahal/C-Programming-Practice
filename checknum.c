#include<stdio.h>
int main()
{
	double d;
	printf("enter a decimal number: ");
	scanf("%lf",&d);
	if(d<=34.5)
	{
		printf("it is less than or equal to 34.5");
	}
   if(d>34.5)
   {
   	printf("number is more than 34.5");
	} 	
	return 0;
}
