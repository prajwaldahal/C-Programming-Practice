#include<stdio.h>
struct stack{
	int top;
	int stack[10];
}s;
void push(struct stack *s)
{
	int f;
	if(s->top >9)
	{
		printf("stack overflow");
		return;
	}
	else
	{
		printf("enter a element: ");
		scanf("%d",&f);
		s->stack[++(s->top)]=f;
	}
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
		printf("popped data:%d\n",s->stack[(s->top)--]);
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
