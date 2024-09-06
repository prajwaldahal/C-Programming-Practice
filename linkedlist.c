#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create(struct node *start,int data)
{
	struct node *temp; struct node *p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		return;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
			p = p->link;
		p->link=temp;
	}
	return start; 
}
void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("linked lisrt is empty\n");
		return;	
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			printf("%4d",p->info);
			p=p->link;
		}
	}
}
void search(struct node *start,int data)
{
	struct node *p; int count=1; int check=0;
	if(start==NULL)
	{
		printf("linked list is empty\n");
		return;
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			if(p->info==data)
			{
				printf("\nfound in %d node",count);
				check=1;	
			}
			
			p=p->link;
			count++;
		}
		if(check==0)
			printf("not found");
	}
}
int main()
{
	struct node *start=NULL;
	int a;
	while(1)
	{
	printf("\nchoose\n1 for creating\n2 for display\n3 for searching\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1: 
		{
			int data;
			printf("enter a data to be added: ");
			scanf("%d",&data);
			start=create(start,data);
			break;
		}
		case 2:
		{
			display(start);
			break;
		}
		case 3:
		{
			int data;
			printf("enter a data to be searched: ");
			scanf("%d",&data);
			search(start,data);
			break;
		}
		default:printf("invalid\n");
	}
	}
}
