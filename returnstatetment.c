#include<stdio.h>
int main()
{
	int a;int c=1;
	printf("enter a even number: ");
	scanf("%d",&a);
	for(;c!=0;)
{
		if(a%2==0)
			break;
		else
		{		
			printf("enter a even number: ");
			scanf("%d",&a);
		}
}
	printf("you entered: %d",a);
	return 0;
}
