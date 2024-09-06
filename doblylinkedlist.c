#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
	struct node *prev;
}*node;
void insertatfirst(struct node **node,int el)
{
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->info=el;
	if((*node)==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else
	{
		newnode->next=*node;
		(*node)->prev = newnode;
		newnode->prev=NULL;
	}
	*node = newnode;
}
void insertatlast(struct node **node,int el)
{
	struct node *newnode,*temp;
	newnode = (struct node*) malloc(sizeof(struct node));
	temp=*node;
	newnode->info=el;
	if((*node)==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=newnode;
		newnode->next=NULL;
		newnode->prev=temp;
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
	while(temp!=NULL)
	{
		printf("%4d",temp->info);
		temp=temp->next;
	}
}
void insertatany(struct node **node,int el,int p)
{
	struct node *temp,*newnode;int i;
	temp = *node;
	newnode = (struct node*) malloc(sizeof(struct node));
	for(i=1;i<p-1;i++)
		temp=temp->next;
	newnode->next = temp->next;
	newnode->prev= temp;
	newnode->info=el;
	temp->next = newnode;
}
void delete(struct node **node)
{
	struct node *temp,*current;
	temp = *node;
	if(temp==NULL)
	{
		printf("linked list is empty");
		return;
	}
	else if(temp->next==NULL)
	{
		*node=NULL;
		printf("deleted");
		return;
	}
	current = temp;
	*node = temp->next;
	temp->next->prev=NULL;
	printf("\ndeleted");
	free(current);
}
void deletelast(struct node **node)
{
	struct node *temp,*current;
	temp = *node;
	if(temp==NULL)
	{
		printf("linked list is empty");
		return;
	}	
	else if(temp->next==NULL)
	{
		*node=NULL;
		printf("deleted");
		return;
	}
	while(temp->next->next!=NULL)
		temp= temp->next;
	current = temp->next;
	temp->next=NULL;
	printf("\ndeleted");
	free(current);
}
void deleteatany(struct node **node,int p)
{
	int i;
	struct node *temp,*current;
	temp = *node;
	for(i=1;i<p-1;i++)
		temp= temp->next;
	current = temp->next;
	temp->next=temp->next->next;
	temp->next->prev = temp;
	free(current);
}
int main()
{
	struct node *node=NULL;
	int choose,el;
	while(1)
	{
		printf("\n1.inserting at first\n2.insert at last\n3.display\n4.insert at position 3\n5.delete\n6.deletelast\n7.delete any node\n\tchoose: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("enter a value: ");
				scanf("%d",&el);
				insertatfirst(,el);
				break;
			case 3:
				display();
				break;
			case 2:
				printf("enter a value: ");
				scanf("%d",&el);
				insertatlast(,el);
				break;
			case 4:
				printf("enter a value: ");
				scanf("%d",&el);
				insertatany(,el,3);
				break;
			case 5:
				delete();
				break;
			case 6:
				deletelast();
				break;
			case 7:
				deleteatany(,5);
				break;
			default : printf("invalid input!");
		}
	}
}
