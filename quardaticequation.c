#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
	double sqr,result1,result2;
	printf("enter the first coefficient of quardatic equation? ");
	scanf("%d",&a);
	printf("enter the second coefficient of quardatic equation? ");
	scanf("%d",&b);
    printf("enter the third coefficient of quardatic equation? ");
	scanf("%d",&c);
	sqr=sqrt(b*b-4*a*c);
	result1=(-b+sqr)/(2*a);
    result2=(-b-sqr)/(2*a);
    printf("ans:(%f,%f)",result1,result2);
    return 0;	
}
