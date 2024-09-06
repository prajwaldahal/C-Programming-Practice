#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*top = NULL;
void push(int f)
{
	struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = f;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\nInsertion is Success!!!\n");
}
void pop()
{
if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
int main()
{
	int num;int f;
	while(1)
	{
		printf("\nchoose\n1.pop\n2.push\n");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				
				pop();
				break;
			case 2:
				printf("enter a element: ");
				scanf("%d",&f);
				push(f);
		}
	}
	return 0;
}
