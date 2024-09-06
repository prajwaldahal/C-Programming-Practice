#include<stdio.h>
int main()
{
	int num,sum;int b;int i;int a;char ch;int count;
	printf("INSTRUCTION:\n");
	printf("step 1: Think a number which have digits more or equal to 3\n");
	printf("step 2: subtract the number with its sum of digits\n\tfor ex:if your num is 1234 then subtract 1234 from 10(1+2+3+4),i.e.1234-10=1224\n");
	printf("step 3: enter  the result that comes from the subtraction of num and its sum of  digit missing\tone digit\n\ti.e.if result is of 4 digit then u have to enter only 3 digit of the number....\n");
	printf("\n\n\t\tthis program will find your missing digit");
	again:
	top:
	count = 0;
	a = 0;
	sum = 0;
	i   = 0;
	printf("\n\n\nenter your subtraction result missing one digit: ");	
	scanf("%d",&num);
	 for(;num>0;)
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
