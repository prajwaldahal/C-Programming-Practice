#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
	struct node *prev;
}*node;
void list (int n) // list creation function of circular linked list
{
  int l,data;
  struct node *temp, *new_node;
    printf ("Enter data for nodes: ");
    if (n >= 1)
    {
        head = (struct node *) malloc (sizeof (struct node));
        scanf ("%d", &data);
        head->info= data;
        head->next = head;
        head->prev=NULL;
        temp = head;
        for (l = 2; l <= n;l++)
        {
            new_node = (struct node *) malloc (sizeof (struct node));
            scanf ("%d", &data);
            new_node->info = data;
            new_node->next = head;
            temp->next= new_node;
            temp=new_node;
        }
    }
}

void insertatfirst(int el)
{
	struct node *newnode;
	newnode = (struct node*) malloc(sizeof(struct node));
	newnode->info=el;
	if(node==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else
	{
		newnode->next=node;
		node->prev = newnode;
		newnode->prev=NULL;
	}
	node = newnode;
}
void insertatlast(int el)
{
	
	}
}
void display () // print function of circular linked list
{
    struct node *temp;
    temp = node;
    printf("The data at node are:");
    while(temp->next != NULL)
    {
        printf ("%d%s", temp->info,"->");
        temp = temp->next;
    }
    printf ("%d%s", temp->info,"->NULL");
}

void insertatany(int el,int p)
{
	struct node *temp,*newnode;int i;
	temp = node;
	newnode = (struct node*) malloc(sizeof(struct node));
	for(i=1;i<p-1;i++)
		temp=temp->next;
	newnode->next = temp->next;
	newnode->prev= temp;
	newnode->info=el;
	temp->next = newnode;
}
void deletefirst()
{
	struct node *temp,*current;
	temp = node;
	if(temp==NULL)
	{
		printf("linked list is empty");
		return;
	}
	else if(temp->next==NULL)
	{
		node=NULL;
		printf("deleted");
		return;
	}
	current = temp;
	node = temp->next;
	temp->next->prev=NULL;
	printf("\ndeleted");
	free(current);
}
void deletelast()
{
	struct node *temp,*current;
	temp = node;
	if(temp==NULL)
	{
		printf("linked list is empty");
		return;
	}	
	else if(temp->next==NULL)
	{
		node=NULL;
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
void deleteatany(int p)
{
	int i;
	struct node *temp,*current;
	temp = node;
	for(i=1;i<p-1;i++)
		temp= temp->next;
	current = temp->next;
	temp->next=temp->next->next;
	temp->next->prev = temp;
	free(current);
}
int main()
{
	 int,el,pos
	;node=NULL
	insertatfirst(1);
	insertatfirst(2);
	insertatfirst(3);
  printf ("\nEnter the data to be inserted at the first node: ");
  scanf ("%d", &el);
  insertatfirst(el);
  display ();

  printf ("\nEnter the position to insert a node: ");
  scanf ("%d", &pos);
  printf("Enter the data for %d position: ", pos);

  scanf ("%d", &el);
  insertatany(el, pos);
  display ();

  printf ("\nEnter the data to be inserted at the last node: ");
  scanf ("%d", &el);
  insertatlast(el);
  display ();
  return 0;
}
