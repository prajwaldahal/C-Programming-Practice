#include<stdio.h>
struct stack{
	int top;
	int data[10];
}s;
void push(struct stack *s)
{
	int f;
	if(s->top>9)
	{
		printf("stack overflow");
		return;
	}
	else
	{
		printf("enter a element: ");
		scanf("%d",&f);
		printf("%d",s->top);
		s->data[++(s->top)]=f;
	}
}
void display(struct stack *s)
{
	int i;
	for(i=0;i<3;i++)
		printf("%4d",s->data[i]);
}
int main()
{
	push(&s);
	push(&s);
	display(&s);
	return 0;
}
