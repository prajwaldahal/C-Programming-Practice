#include<stdio.h>
int main()
{
	int num;float num2; double num3; char ch;char str[50];
	printf("enter a number: ");
	scanf("%d",&num);
	printf("enter a float number: ");
	scanf("%f",&num2);
	printf("enter a double number: ");
	scanf("%lf",&num3);
	printf("enter a character: ");
	fflush(stdin);
	scanf("%c",&ch);
	printf("enter a word: ");
	scanf("%s",str);
	printf("\nintegerdata=%d\n",num);
	printf("floatdata=%f\n",num2);
	printf("doubledata=%lf\n",num3);
	printf("character=%c\n",ch);
	printf("string=%s\n",str);
	return 0;
}

