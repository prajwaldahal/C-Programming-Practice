#include<stdio.h>
void displayBits(int x);
int main()
{
	int a=15;
	int b= 0x456;
	printf("a=%x\n",a); displayBits(a);
	return 0;
}
