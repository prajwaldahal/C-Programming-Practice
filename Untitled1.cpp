#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
   char data;
   struct node *next;
};
void push(char ch,struct node *top)
{
   struct node *newNode;
   newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = ch;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   	  top = newNode;
}
char pop(struct node *top)
{
	char x;
	if(top == NULL)
		return '~';
   else{
      struct node *temp = top;
      x=temp->data;
      top = temp->next;
      free(temp);
      return x;
   }
}
int isoperator(char ch)
{
	if(ch>=40&&ch<=43||ch==45||ch==47||ch>=91&&ch<=94||ch==123||ch==125)
	{
		return 1;
	}
	else if(ch>=48&&ch<=57||ch>=97&&ch<=122||ch>=65&&ch<=90)
		return 0;
	else
		return 0; 
}	
char *postfix(char *infix){
	struct node *stack;
	char *posfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
	stack = (struct node*)malloc(sizeof(struct node));
	int i=0;
	while(infix[i]!='/0')
	{	
		if(!isoperator(infix[i]))
		{
			posfix[i]=infix[i];
		}
		else
		{
			if(percedence(infix[i])>percedence(stack->data))
			{
				push(infix[i],stack);
			}
			else
			{
				posfix[i]=	pop(stack);	
			}
		}
		i++;
	}				
	while(1)
	{
		posfix[i]=pop(stack);
		if(postfix[i]=='~')
		{
			postfix[i]='/0';
			break;
		}
		i++;
	}
	return posfix;	
}
int main()
{
	char str[20];
	str = "1+2+3-5"
	printf("%s",postfix(str));
	return 0;
}
