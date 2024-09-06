#include<stdio.h>
int main()
{
	int a,b,x,y,x2,a1,b1,ch;
	top:
	printf("enter a value of present state: ");
	scanf("%d %d",&a,&b);
	printf("enter two input value: ");
	scanf("%d %d",&x,&y);
	if(x==0)
	{
		x2=1;
	}
   else
    {
  	  x2=0;
    }
	a1 = x2*y+x*a;
	b1 = x2*b+x*a;
	printf("present state:\na=%d\nb=%d\n\n",a,b);
	printf("input:\nx=%d\ny=%d\n\n",x,y);
    printf("next state:\na1=%d\nb1=%d\n\n",a1,b1);
	printf("do you want to continue\npress y for yes\npress n for no: ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y')
	{
	goto top;
	}
}
