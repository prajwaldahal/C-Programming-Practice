#include<stdio.h>
int a;
void input()
{
	printf("enter a number: ");
	scanf("%d",&a);
}
void evenodd()
{
	if(a % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
void positivenegetive()
{
	if(a>0)
	{
		printf("positive");
	}
	else
	printf("negetive");
}
int main()
{
	int b;
	top:
	printf("\nchoose a number:\n1.to check even-odd\n2.to check positive-negetive\n");
	scanf("%d",&b);
    switch(b)
    { 
    	case 1:
			input();
			evenodd();
			break;	
		case 2:
			input();
			positivenegetive();
			break;	
		default: printf("invalid menu number\n");goto top;
	}
	return 0;
}
