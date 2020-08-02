/* stack.c stack functions abstact. . . not user accessible */
/* Written By Sahil */
/* 31-07-2020 */

#include "stack.h"
#include<stdlib.h>
#include<assert.h>

#define MAX_SIZE 100

//stack prototype
typedef struct stack{
  char array[MAX_SIZE];
  int itemCount;
}mystack;


//New Stack get a new stack allocated
Stack newStack()
{
  Stack newstack=malloc(sizeof(mystack));
  newstack->itemCount=0;
  assert(newstack!=NULL);
  return newstack;
}


//Push to a stack
void push(char c, Stack stack)
{
  assert(stack!=NULL);
  assert(stack->itemCount<MAX_SIZE);
  stack->array[stack->itemCount]=c;
  stack->itemCount++;
  return;
}

  

//pop from a stack
void pop(Stack stack)
{
  assert(stack!=NULL);
  assert(stack->itemCount!=0);
  stack->itemCount--;
}

//check wether the stack is empty or not
bool isEmpty(Stack stack)
{
  if(stack->itemCount==0)
    {
      return true;
    }
  else
  {
    return false;
  }
  
}



//reading what is at the top of stack
char readStack(Stack stack)
{
  assert(stack->itemCount>0);
  return stack->array[stack->itemCount-1];
}

//free the memory taken by stack
void freeStack(Stack stack)
{
  free(stack);
}

