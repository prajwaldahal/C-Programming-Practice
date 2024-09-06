#include<stdio.h>
int main()
{
	enum month{
	jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec
	}m1,m2;
	m1=feb;
	m2=nov;
	printf("feb=%d\nnov=%d",m1,m2);
	return 0;
}
