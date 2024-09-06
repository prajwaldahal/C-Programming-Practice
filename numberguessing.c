#include<stdio.h>
int main()
{
	int num,sum;int b;int i;int a;char ch;int count;
	again:
	top:
	count = 0;
	a = 0;
	sum = 0;
	i   = 0;
	printf("\nenter your subtraction result missing one digit: ");	
	scanf("%d",&num);
	 while(num>0)
	{
		b=num%10;
		sum+=b;
		num/=10;
    	count++;
	}
	if(count<3)
	{
		printf("error:less than 3 digit");
		goto again;
	}
	for(i=1;i<=109;i++)
	{
		a=9*i;
		if(a>sum)
		{
			printf("\tmissing digit=%d\n\n",a-sum);
			break;
		}	
		else if(a==sum)
		{
			printf("error in finding digit try again\n");
			break;
		}
	}	
	printf("\n\tdo you want to continue");
	down:
	printf("\n\tpress'y' for yes and 'n' for no: ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{ 
	 goto top;
	}
	else if(ch=='n'||ch=='y')
	{
		printf("\n\t  THE END");
	}
	else
	{
		printf("\n\n\t\tinvalid\n\n\t enter again :");
		goto down;
	}
	return 0;
}
