/* stack.h all headers . . . */
/* Written By Sahil */
/* 31-07-2020 */


#include<stdbool.h>

//stack prototype
typedef struct stack *Stack;

//New Stack get a new stack allocated
Stack newStack();

//Push to a stack
void push(char c, Stack stack);

//pop from a stack
void pop(Stack stack);

//check wether the stack is empty or not
bool isEmpty(Stack stack);

//reading what is at the top of stack
char readStack(Stack stack);

//free the memory taken by stack
void freeStack(Stack stack);

  

  








