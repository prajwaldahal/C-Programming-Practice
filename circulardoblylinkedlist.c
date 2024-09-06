#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
	struct node *prev;
};
void insertatfirst(struct node **node,int el)
{
	struct node *newnode,*temp;
	temp = *node;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->info=el;
	if((*node)==NULL) 
	{
		*node=newnode;
		newnode->next=*node;
		newnode->prev=*node;
		printf("node=%d=%d=newnode=%d\n",*node,newnode->next,newnode);
	}
	else
	{
		while(temp->next!=(*node))
			temp=temp->next;
		temp->next = newnode;
		newnode->prev=temp;
		newnode->next=*node;
		*node=newnode;
		printf("node=%d=temp=%d\nnewnode=%d\n",*node,temp->next,newnode);
	}
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
	while(temp->next!=(*node))
	{
		printf("%4d",temp->info);
		temp=temp->next;
	}
}
int main()
{
	int i = 0;
	struct node *head=NULL;
	int el;
	
	while(i<10)
	{
		printf("enter a value: ");
		scanf("%d",&el);
		insertatfirst(&head,el);
		i++;
	}
	display(&head);
	return 0;
}
