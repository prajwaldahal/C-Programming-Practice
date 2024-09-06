#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
void create(struct node **create,int el)
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->info=el;
	if((*create)==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next=*create;
	}
	*create=newnode;
}
void display(struct node **node)
{
	struct node *temp;
	temp = *node;
	if(temp==NULL)
	{
		printf("error!");
		return;
	}
	while(temp!=NULL)
	{
		printf("%4d",temp->info);
		temp=temp->next;
		printf("temp=%d",temp);
	}
}
void search(struct node **node,int el)
{
	
	int count = 0;
	struct node *temp;
	temp = *node;
	if(temp==NULL)
	{
		printf("error!");
		return;
	}
	while(temp!=NULL)
	{
		if(el==temp->info);
			count++;
		temp=temp->next;
	}
	if(count>1)
	{
		printf("found");
	}
	else
	{
		printf("not found!");
	}
}
void deletenode(&node,el)
{
	struct node *temp,*tempnode;
	temp = *node;
	if(temp==NULL)
	{
		printf("error!");
		return;
	}
	while(temp!=NULL)
	{
		if(el==temp->info)
		{
			tempnode=temp;
			
		}
		temp=temp->next;
	}
	
}
int main()
{
	struct node *node=NULL;
	int choose,el;
	while(1)
	{
		printf("choose\n1.inserting\n2.display\n3.search\n4.delete\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("enter a value: ");
				scanf("%d",&el);
				create(&node,el);
				break;
			case 2:
				display(&node);
				break;
			case 3:
				printf("enter a value: ");
				scanf("%d",&el);
				search(&node,el);
				break;
			case 4:
				printf("enter a value: ");
				scanf("%d",&el);
				deletenode(&node,el);
			default : return 0;
		}
	}
}
