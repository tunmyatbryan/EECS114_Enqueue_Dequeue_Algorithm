#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//#include "queue.h"


struct QueueNode
{
	float number;
	struct QueueNode *next;
};


struct Queue 
{ 
	struct QueueNode *front;
	struct QueueNode *rear; 
}; 


//Create an new node
struct QueueNode* newNode(float num) 
{ 
	struct QueueNode *temp;
	temp = (struct QueueNode*)malloc(sizeof(struct QueueNode)); 
	temp->number = num; 
	temp->next = NULL; 
	return temp; 
} 

//create a Queue
struct Queue *createQueue() 
{ 
	struct Queue *q;
	q = (struct Queue*)malloc(sizeof(struct Queue)); 
	q->front = NULL;
	q->rear = NULL; 
	return q; 
}

//enQueue
void enQueue(struct Queue *q, float num) 
{ 
	struct QueueNode *temp;
	temp = newNode(num); 

	if (q->rear == NULL) 
	{ 
		q->front = temp;
		q->rear = temp; 
		return;
	} 

	q->rear->next = temp; 
	q->rear = temp; 
} 

//deQueue
struct QueueNode *deQueue(struct Queue *q)
{ 
	if (q->front == NULL) 
	{
		return NULL;
	}
	
	struct QueueNode *temp;
	temp = q->front;
	q->front = q->front->next; 

	if (q->front == NULL) 
	{
		q->rear = NULL; 
	}
	return temp; 
} 
