/* ADT Queue header */
/* Made by Sahil */
/* 3-08-2020 */

#ifndef Qheader
#define Qheader

#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>

typedef struct queue * Queue;
typedef struct node  BST_node;

//function to create new Queue
Queue newQ();

//function to enter item into queue
void enQ(BST_node* node, Queue queue);

//function to delete item from queue
void deQ(BST_node* node, Queue queue);

//function to check wether queue is empty or not
bool isEmpty(Queue queue);

//function to read the value at front in queue
int readQueue(Queue queue);

//function to check size of queue
size_t sizeQ(Queue queue);

//function to free queue
void freeQ(Queue queue);

#endif