#include<stdio.h>
 int sum(int x,int y)
 {
 	int s;
 	s=x+y;
 	return s;
 }
 int main()
 {
 	int s;
 	int a,b;int k;
 	a=10;b=10;
 	k=sum(a,b);
 	printf("%d\n",k);
 	k=sum(4,5);
 	printf("%d\n",k);
 	return 0;
 }
