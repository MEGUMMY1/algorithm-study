#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAX_QUEUE_SIZE 10000

typedef int element;
typedef struct { 	
	element data[MAX_QUEUE_SIZE];
	int front, rear;	
} QueueType;

void init_queue(QueueType* q)
{
	q->front = q->rear = 0;
}

int full(QueueType* q)
{
	if (q->rear == MAX_QUEUE_SIZE - 1)
		return 1;
	else
		return 0;
}

int empty(QueueType* q)
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

void push(QueueType* q, int item)
{
	if (full(q)) {
		return;
	}
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

int pop(QueueType* q)
{
	if (empty(q)) {
		return -1;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

int size(QueueType* q)
{
	return (q->rear + MAX_QUEUE_SIZE - q->front) % MAX_QUEUE_SIZE;
}

int front(QueueType* q)
{
	return q->data[q->front + 1];
}

int rear(QueueType* q)
{
	return q->data[q->rear];
}

int main(void)
{
	int n, value;
	char com[10];
	QueueType q;
	init_queue(&q);

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", com);

		if (strcmp(com, "push") == 0) {
			scanf("%d", &value);
			push(&q, value);
		}
		else if (strcmp(com, "pop") == 0) {
			printf("%d\n", pop(&q));
		}
		else if (strcmp(com, "size") == 0) {
			printf("%d\n", size(&q));
		}
		else if (strcmp(com, "empty") == 0) {
			printf("%d\n", empty(&q));
		}
		else if (strcmp(com, "front") == 0) {
			if (empty(&q)) 
				printf("-1\n");
			else printf("%d\n", front(&q));
		}
		else if (strcmp(com, "back") == 0) {
			if (empty(&q)) 
				printf("-1\n");
			else printf("%d\n", rear(&q));
		}
	}
	return 0;
}
