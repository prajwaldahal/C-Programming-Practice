#include<stdio.h>
#define MAXSIZE 10
struct queue{
	int rear,front;
	int data[MAXSIZE];
};
void enqueue( cq *q)
{
	int el;
	printf("enter a number: ");
	scanf("%d",&el);
	if(q->front == (q->rear+1)%MAXSIZE)
	{
		printf(“Queue is full”);
		return;
	}
	else
	{
		q->rear = (q->rear+1)%MAXSIZE;
		q->items[q->rear] = el;
	}
}
void dequeue( cq *q)
{
	if(q->rear < q->front)
	{
		printf(“Queue is empty”);
		return;
	}
	else
	{
		q->front = (q->front+1)%MAXSIZE;
		printf("dequeued data=%d",q->items[q->front]);
	}
}
int main()
{
	int el,k;
	struct queue queue;
	queue.rear=-1;
	queue.front=0;
	while(1)
	{
		printf("choose\n1.enqueue\n2.dequeue\n");
		scanf("%d",&el);
		switch(el)
		{
			case 1:
				enqueue(&queue);
				break;
			case 2:
				dequeue(&queue);
		}		
	}
	return 0;
}
