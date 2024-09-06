#include<stdio.h>
int input(int a[],int n)
{
	int k;
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	k=sum(a,n);
	return k;
}
int sum(int a[],int n)
{
	int i;int sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;
}
int main()
{
	int num;int n;int a[1000]; int l; int m=0;int return1;int return2;
	int k,tot,net,elec1,elec2,netelec,elecb,dis,prepaid1,prepaid2;
	char name1[20],name2[20];
	float j,due1,due2,shareelec;
	printf("  //RENT and WATER:\n");
	printf("  enter a number of due months for rent: ");
	scanf("%d",&k);
	printf("  discount(if no:enter 0): ");
	scanf("%d",&dis);
	tot=13500*k+200*k-dis;
	net=tot/2;
	printf("\n");
	for(l=1;l<=95;l++)
	{
		printf("-");
	}
	printf("  \nELECTRICITY:\n");
	printf("  enter a previous elec. unit: ");
	scanf("%d",&elec1);
	printf("  enter a current elec. unit: ");
	scanf("%d",&elec2);
	netelec=elec2-elec1;
	elecb= netelec*15;
	shareelec=elecb/(float)2;
	if(shareelec<0)
	{
		shareelec = shareelec * -1;
	}
	printf("\n");
	for(l=1;l<=95;l++)
	{
		printf("-");
	}
	printf("\n enter a first person name: ");
	fflush(stdin);
	scanf("%s",name1);
	printf("  enter the number of things brought by %s:",name1);
    scanf("%d",&n);
    printf("  enter a price of that things below: ");
	return1=input(a,n);
	printf("  total expenses by %s=%d\n",name1,return1);
	printf("\n");
	for(l=1;l<=95;l++)
	{
		printf("-");
	}
	printf("\n  enter a second person name: ");
	scanf("%s",name2);
	printf("  enter a number of thing brought by %s:  ",name2);
	scanf("%d",&num);
	printf("  enter price of that things below:  ");
	return2=input(a,num);
	printf("  total expenses by %s=%d",name2,return2);
	j=(return2+return1)/(float)2;
	due1=j-return1;
	due2=j-return2;
	printf("\n");
	for(l=1;l<=95;l++)
	{
		printf("-");
	}
	printf("\n  overall household expenses: %d\n  each share:%.2f",return1+return2,j);
	printf("\n  total rent to be paid=%d\n",tot);
	printf("  each share:%d\n",net);
	if(return1>return2)
	{
		m=return1-return2;
		printf("  to be paid by %s = %.2f\n",name1,net+due1+shareelec-m);
		printf("  to be paid by %s = %.2f\n",name2,net+due2+shareelec+m);
	}
	else
	{
		m=return2-return1;
		printf("  to be paid by %s = %.2f\n",name1,net+due1+shareelec+m);
		printf("  to be paid by %s = %.2f\n",name2,net+due2+shareelec-m);	
	}
	printf("  electric consumption=%d units\n",netelec);
	printf("  each share of electricity=%.2f\n",shareelec);
	printf("  total house rent to be paid=%.2f\n",shareelec*2+tot);
	printf(" each share  of house rent=%.2f\n",shareelec+net);
	fflush(stdin);
	printf("  prepaid of %s(if no enter 0): ",name1);
	scanf("%d",&prepaid1);
	printf("  prepaid of %s(if no enter 0): ",name2);
	scanf("%d",&prepaid2);
	printf("  balance of % s=%.f\n",name1,net+due1+shareelec-prepaid1);
	printf("  balance of % s=%.f\n",name2,net+due2+shareelec-prepaid2);
	return 0;	
}
