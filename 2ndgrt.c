/*wap to store n number of integer in array and find 2nd greatest number*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *pt;int a;int great=0; int storev;int storei;int i;
	printf("enter a number of integer do you want to enter: ");
	scanf("%d",&a);
	pt=(int*)malloc(a*sizeof(int));
	printf("enter a %d numbers: ",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",pt+i);	
	}
	for(i=0;i<a;i++)
	{
		if(pt[i]>great)
			storei=i;
	}
	pt[storei]=0;
	for(i=0;i<a;i++)
	{
		if(pt[i]>great)
			great=pt[i];
	}
	printf("\n2ndgreatest=%d",great);
	return 0;
}
