#include <stdio.h>
#include <stdlib.h>
struct node           //structure of node
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

void delete_first()         // Delete first node
{
  struct node *temp,*current;
  if(head == NULL)
  {
    printf("Void deletion\n");
    exit;
  }
  else
  {
    temp = head;
    current=head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next=current->next;
    head=head->next;
    free(current);
  }
}

void delete_last()
{
  struct node *temp, *current;
  if(head == NULL)
  {
    printf("Void deletion\n");
    exit;
  }
  else if(head->next == head)
  {
    current = head;
    head = NULL;
    free(current);
  }
  else
  {
    temp = head;
    while(temp->next->next != head)
      temp = temp->next; 
    current = temp->next;
    temp->next = head;
    free(current);
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
  int n,pos;
  head = NULL;
  printf ("Enter the size of nodes:");
  scanf ("%d", &n);
  list (n);
  printf("The data at nodes are:");
  display ();

  printf ("\nData after deletion of first node:");
  delete_first();
  display();
  
  printf ("\nData after deletion of last node:");
  delete_last();
  display();
  return 0;
}
