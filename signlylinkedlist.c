#include <stdio.h>
#include <stdlib.h>
struct node    //structure of node in circular
{
  int data;
  struct node *next;
} *head;

void list (int n) // list creation function of circular linked list
{
  int l,data;
  struct node *prev, *new_node;
    printf ("Enter data for nodes: ");
    if (n >= 1)
    {
        head = (struct node *) malloc (sizeof (struct node));
        scanf ("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (l = 2; l <= n;l++)
        {
            new_node = (struct node *) malloc (sizeof (struct node));
            scanf ("%d", &data);
            new_node->data = data;
            new_node->next = NULL;
            temp->next= new_node;
            temp=newnode;
        }
    }
}

void insert_atfirstSLL(int el)
{
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=el;
  if(head == NULL)
  {
    head = newNode;
    newNode->next = NULL;
  }
  else
  {
      newNode->next = head;
      head = newNode;
  }
}

void insert_atanySLL(int el, int pos)
{
	int i;
  struct node *temp;
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data = el;
  if(head == NULL)
  {
    head = newNode;
    newNode->next = NULL;
  }
  else if(pos == 1)
  {
      insert_atfirstSLL(el);
  }
  else
  {
    temp = head;
    for(i=1; i<pos-1; i++)
    { 
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void insertAtEndSLL(int el) //the function which adds last node
{
    struct node *temp;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=el;
    newNode->next=NULL;
    temp=head;
    if(head == NULL)
    {
      head = newNode;
      newNode->next = NULL;
    }
    else
    {
        while(temp->next!= NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode; 
    }
}

void display () // print function of circular linked list
{
    struct node *temp;
    temp = head;
    printf("The data at node are:");
    while(temp->next != NULL)
    {
        printf ("%d%s", temp->data,"->");
        temp = temp->next;
    }
    printf ("%d%s", temp->data,"->NULL");
}

int main ()
{
  int n,el,pos;
  head = NULL;
  printf ("Enter the size of nodes:");
  scanf ("%d", &n);
  list (n);
  display ();
  
  printf ("\nEnter the data to be inserted at the first node: ");
  scanf ("%d", &el);
  insert_atfirstSLL(el);
  display ();

  printf ("\nEnter the position to insert a node: ");
  scanf ("%d", &pos);
  printf("Enter the data for %d position: ", pos);

  scanf ("%d", &el);
  insert_atanySLL(el, pos);
  display ();

  printf ("\nEnter the data to be inserted at the last node: ");
  scanf ("%d", &el);
  insertAtEndSLL(el);
  display ();
  return 0;
}
