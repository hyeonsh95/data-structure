#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 4
typedef char element;
typedef  struct ArrayQueue_CirC {
	int front, rear;
	element queue[MAX_QUEUE_SIZE];
}arrayQueue;

arrayQueue *createArrayQueue() {
	arrayQueue *Q;
	Q = (arrayQueue*)malloc(sizeof(arrayQueue));
	Q->front = 0; Q->rear = 0;
	return Q;
}

void enQueue(arrayQueue *Q, element item) {
	if ((Q->rear + 1) % MAX_QUEUE_SIZE == Q->front) { return; }		// (rear +1)%arraysize == front  :  empty가 아니라 full
	else {
		Q->rear = (Q->rear + 1) % MAX_QUEUE_SIZE;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(arrayQueue *Q) {
	if (Q->front == Q->rear) { return (element)NULL; }		// front == rear  -> empty
	else {
		Q->front = (Q->front + 1) % MAX_QUEUE_SIZE;
		return Q->queue[Q->front];
	}
}

void printQueue(arrayQueue *Q)
{	
	int first, last;
	first = (Q->front + 1) % MAX_QUEUE_SIZE;
	last = (Q->rear + 1) % MAX_QUEUE_SIZE;
	int i = first;
	while (i != last) {
		printf("%3c ", Q->queue[i]);
		i = (i + 1) % MAX_QUEUE_SIZE;
	}
	printf("\n\n\n");
}

int main()
{
	arrayQueue *Q1 = createArrayQueue();
	printf("insert A: ");			enQueue(Q1, 'A');			printQueue(Q1);
	printf("insert B: ");			enQueue(Q1, 'B');			printQueue(Q1);
	printf("insert C: ");			enQueue(Q1, 'C');			printQueue(Q1);

	printf("Delete Q: ");			deQueue(Q1);			printQueue(Q1);
	printf("Delete Q: ");			deQueue(Q1);			printQueue(Q1);
	printf("Delete Q: ");			deQueue(Q1);			printQueue(Q1);

	return 0;
}