/* ADT Queue main functions */
/* Made by Sahil */
/* 3-08-2020 */

#include<stdlib.h>
#include "queue.h"

//struct containing data
typedef struct{
  int data;
  struct node* next;
}node;

//struct for Queue
typedef struct queue{
  node *front;
  node *rear;
  size_t size;
}myQueue;

//function to create new Queue
Queue newQ()
{
  Queue new=malloc(sizeof(myQueue));
  assert(new!=NULL);
  
  new->front=NULL;
  new->rear=NULL;
  new->size=0;
  
  return new;
}

//function to enter item into queue
void enQ(int a; Queue queue)
{
  node *new_node=malloc(sizeof(node));
  assert(new_node!=NULL);

  new_node->data=a;
  new_node->next=NULL;

  if(queue->size==0)
    {
      queue->front=new_node;
      queue->rear=new_node
      
}

//function to delete item from queue
void deQ(int a; Queue queue);

//function to check wether queue is empty or not
bool isEmpty(Queue queue);

//function to read the value at front in queue
int readQueue(Queue queue);

//function to check size of queue
size_t sizeQ(Queue queue);

//function to free queue
void freeQ(Queue queue);
