#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,a=1;int sum=0;
	while(i<=10)
	{
		sum+=pow(a,2);	
		i++;
		a++;
	}
	printf("sum=%d",sum);
	return 0;
}
