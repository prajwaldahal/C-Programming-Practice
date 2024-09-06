#include <stdio.h>
#include <stdlib.h>
struct node           //structure of node
{
  int data;
  struct node *next;
} *head;

void list (int n)     // creation of Singly linked list
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
        prev = head;
        for (l = 2; l <= n;l++)
        {
            new_node = (struct node *) malloc (sizeof (struct node));
            scanf ("%d", &data);
            new_node->data = data;
            new_node->next = NULL;
            prev->next = new_node;
            prev = new_node;
        }
    }
}

void delete_first()         // Delete first node
{
  struct node *temp;
  if(head == NULL)
  {
    printf("Void deletion\n");
    exit;
  }
  else
  {
    temp = head;
    head = head->next;
    free(temp);
  }
}

void delete_atany(int pos)
{
  struct node *temp, *current;
  int i;
  if(head == NULL)
  {
    printf("Void deletion\n");
    exit;
  }
  else if(pos == 1)
      delete_first();
  else
  {
    temp = head;
    for(i=1; i<pos-1; i++)
      temp = temp->next; 
    current = temp->next;
    temp->next = current->next;
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
  else if(head->next == NULL)
  {
    current = head;
    head = NULL;
    free(current);
  }
  else
  {
    temp = head;
    while(temp->next->next != NULL)
      temp = temp->next; 
    current = temp->next;
    temp->next = NULL;
    free(current);
  }
}


void display ()       // Display Singly linked list
{
    struct node *temp;
    temp = head;
    while(temp->next != NULL)
    {
        printf ("%d%s", temp->data,"->");
        temp = temp->next;
    }
    printf ("%d%s", temp->data, "->NULL");
    printf("\n");
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

  printf ("Data after deletion of first node:");
  delete_first();
  display();
  
  printf ("\nEnter the position to delete a node: ");
  scanf ("%d", &pos);
  printf ("Data after deletion of a  node at %d position:", pos);
  delete_atany(pos);
  display();
  
  printf ("Data after deletion of last node:");
  delete_last();
  display();
  return 0;
}
