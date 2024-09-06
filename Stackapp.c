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
	printf("this is push:%4c\n",top->data);
	return;
}
char pop(struct node *top)
{
	char x;
	if(top == NULL)
		return '~';
   else{
      struct node * temp = top;  
	  printf("%d\n",4);
      x=temp->data;
      printf("%d\n",5);
      top = temp->next;
      printf("%d\n",6);
      free(temp);
      //printf("this is pop:%d ",x);
      return x;
   }
}
int isoperator(char ch)
{
	//printf("hello this is isoperator ");
	if(ch>=40&&ch<=43||ch==45||ch==47||ch==94)
	{
		printf("operator ");
		return 1;
	}
	else if(ch>=48&&ch<=57||ch>=97&&ch<=122||ch>=65&&ch<=90)
		printf("operand");
	return 0; 
}
int percedence(char ch)
{
	if(ch=='+'||ch=='-')
	{
		printf("lower ");
		return 1;	
	}
	else if(ch=='*'||ch=='/')
	{
		printf("higher ");
		return 2;	
	}
	else if(ch=='^')
	{
		return 3;	
	}	
	else 
	{
		return 4;	
	}		
}	
char *postfix(char *infix){
	struct node *stack;
	char *posfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
	stack = (struct node*)malloc(sizeof(struct node));
	stack=NULL;
	int i=0,j=0;
	while(i<=strlen(infix))
	{	
		if(!isoperator(infix[i]))
		{
			posfix[j]=infix[i];
			j++;
		}
		else
		{
			printf("stack->data = %c");
			if(i!=1)
			{
				printf("i=%d\n",i);
				if(percedence(infix[i])>percedence(stack->data))
				{
					printf("this is push1 ");
					push(infix[i],stack);
				}
				else
				{
					//printf("this is pop ");
					posfix[j]=	pop(stack);	
					j++;
				}
			}
			else
			{
				//printf("this is push2 ");
				push(infix[i],&stack);
			}
			
		}
		i++;
	}				
	while(1)
	{
		posfix[j]=pop(stack);
		if(posfix[j]=='~')
		{
			posfix[j]='\0';
			break;
		}
		j++;
	}
	return posfix;	
}
int main()
{
	struct node *stack;
	stack = (struct node*)malloc(sizeof(struct node));
	char str[20]="1+2*3-5";
	printf("%s",postfix(str));
	return 0;
}
