#include<stdio.h>
struct stack{
	int top;
	struct stack *s;
}*node;
void push(struct stack *s)
{
	head = (struct node*)malloc(sizeof(struct node))
	int f;
	printf("enter a element: ");
	scanf("%d",&f);
	top=f;
}
void pop(struct stack *s)
{
	if(s->top==-1)
	{
		printf("stack underflow");
		return;
	}
	else
	{
		printf("%d",s->stack[(s->top)--]);
	}
}
int main()
{
	int k,num;
	s.top=-1;
	
	while(1)
	{
		printf("\nchoose\n1.pop\n2.push\n");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				pop(&s);
				break;
			case 2:
				push(&s);
		}
	}
	return 0;
}
