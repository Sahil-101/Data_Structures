/* ADT Queue main functions */
/* Made by Sahil */
/* 3-08-2020 */

#include "queue.h"

//struct containing data
typedef struct
{
  int data;
  struct node *next;
} node;

//struct for Queue
typedef struct queue
{
  node *front;
  node *rear;
  size_t size;
} myQueue;

//function to create new Queue
Queue newQ()
{
  Queue new = malloc(sizeof(myQueue));
  assert(new != NULL);

  new->front = NULL;
  new->rear = NULL;
  new->size = 0;

  return new;
}

//function to enter item into queue
void enQ(int a, Queue queue)
{
  node *new_node = malloc(sizeof(node));
  assert(new_node != NULL);

  new_node->data = a;
  new_node->next = NULL;

  if (queue->size == 0)
  {
    queue->front = new_node;
    queue->rear = new_node;
  }
  else
  {
    queue->rear->next=new_node;
    queue->rear = new_node;
  }
  queue->size++;

  return;
}

//function to delete item from queue
void deQ(int a, Queue queue)
{
  node *temp0 = NULL, *temp1 = NULL;

  assert(!(isEmpty(queue)));

  for (node *i = queue->front; i != NULL; i = i->next)
  {
    if (i->data = a)
    {
      queue->size--;
      temp0 = i->next;
      if (temp1 != NULL)
      {
        temp1->next = temp0;
      }
      else
      {
        queue->front = temp0;
      }
      break;
    }
    temp1 = i;
  }

  return;
}

//function to check wether queue is empty or not
bool isEmpty(Queue queue)
{
  assert(queue != NULL);

  if (queue->front == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }

  return;
}

//function to read the value at front in queue
int readQueue(Queue queue)
{
  assert(!(isEmpty(queue)));
  return queue->front->data;
}

//function to check size of queue
size_t sizeQ(Queue queue)
{
  assert(queue != NULL);

  return queue->size;
}
//function to free queue
void freeQ(Queue queue)
{
  assert(queue != NULL);

  node *temp = NULL;
  for (node *i = queue->front; i != NULL;)
  {
    temp = i->next;
    free(i);
    i = temp;
  }
  queue->size = 0;

  return;
}
