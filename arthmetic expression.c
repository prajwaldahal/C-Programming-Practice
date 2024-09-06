#include<stdio.h>
#include<math.h>
int main()
{
	int a=2;
	int b=3;
	int c=5;
	printf("a^2+b^2+c^2=%d\n",a*a+b*b+c*c);
	int d = pow(a,8);
	printf("c^3+b^3+a^8=%d\n",c*c*c+b*b*b+d);
	int e = a+b;
	int f = c-a;
	printf("(a+b)^5+(c-a)^7=%d\n",e+f);
	float g=sqrt(a);
	float h=sqrt(b); 
	printf("a^1/2 + b^1/2=%f\n",g+h);
	int j=a*b;
	int k=c*a;
	int l=a*b*c; 
	float i= pow(j,1.0/3);
	float m= pow(k,1.0/4);
	float n=sqrt(l);	
	printf("ab^3+ca^1/4+abc^1/2=%f",i+m+n);
	return 0;
}
