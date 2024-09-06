#include<stdio.h>
int main()
{
	double d;
	printf("enter a number: ");
	scanf("%lf",&d);
	if(d>90.25)
	{
		printf("it is greater than 90.25");
	}
    else
   {
   	printf("number is less than or equal to 90.25");
	} 	
	return 0;
}
