/* ADT Queue for BFS in BST */
/* Made by Sahil */
/* 18-09-2020 */

#include "queue.h"

//struct containing data

typedef struct node *NODE;

struct node
{
    int data;
    NODE left;
    NODE right;
};

typedef struct queue_node{
  struct node bst_node;
  struct queue_node* next;
}Qnode;

//struct for Queue
typedef struct queue
{
  Qnode *front;
  Qnode *rear;
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
void enQ(Qnode* node, Queue queue)
{
  assert(node != NULL);

  if (queue->size == 0)
  {
    queue->front = node;
    queue->rear = node;
  }
  else
  {
    queue->rear->next=node;
    queue->rear = node;
  }
  queue->size++;

  return;
}

//function to delete item from queue
void deQ(Qnode* node, Queue queue)
{
  Qnode *temp0 = NULL, *temp1 = NULL;

  assert(!(isEmpty(queue)));

  for (Qnode *i = queue->front; i != NULL; i = i->next)
  {
    if (i->bst_node.data = node->bst_node.data);
    {
      queue->size--;
      temp0 = i->next;
      free(i);
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

  if (queue->size)
  {
    return false;
  }
  else
  {
    return true;
  }

  return;
}

//function to read the value at front in queue
int readQueue(Queue queue)
{
  assert(!(isEmpty(queue)));
  return queue->front->bst_node.data;
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

  Qnode *temp = NULL;
  for (Qnode *i = queue->front; i != NULL;)
  {
    temp = i->next;
    free(i);
    i = temp;
  }
  queue->size = 0;
  free(queue);

  return;
}
