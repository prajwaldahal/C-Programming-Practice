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
  struct node *temp, *new_node;
    printf ("Enter data for nodes: ");
    if (n >= 1)
    {
        head = (struct node *) malloc (sizeof (struct node));
        scanf ("%d", &data);
        head->data = data;
        head->next = head;
        temp = head;
        for (l = 2; l <= n;l++)
        {
            new_node = (struct node *) malloc (sizeof (struct node));
            scanf ("%d", &data);
            new_node->data = data;
            new_node->next = head;
            temp->next= new_node;
            temp=new_node;
        }
    }
}
void insert_atfirstCLL(int el)
{
  struct node *newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=el;
  newNode->next = head;
  if(head == NULL)
    head = newNode;
  else
  {
    struct node *temp;
    temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next=newNode;
    head=newNode;
  }
}
void insertAtEndCLL(int el) //the function which adds last node
{
    struct node *temp;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=el;
    newNode->next=head;
    temp=head;
    if(head == NULL)
    {
      head = newNode;
    }
    else
    {
        while(temp->next!= head)
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
    while(temp->next != head)
    {
        printf ("%d%s", temp->data,"->");
        temp = temp->next;
    }
    printf ("%d->%d->......", temp->data,head->data);
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
  insert_atfirstCLL(el);
  display ();


  printf ("\nEnter the data to be inserted at the last node: ");
  scanf ("%d", &el);
  insertAtEndCLL(el);
  display ();
  return 0;
}
