#include<stdio.h>
#include<assert.h>
#include "test.h"
#include "stack.h"

int main()
{
  test_newstack();
  printf("\n");
  test_push();
  printf("\n");
  test_pop();
  printf("\n");
  test_isEmpty();
  printf("\n");
  test_readStack();
  printf("\n");
  //test_freeStack();
  
  printf("Alll test Case passed!!!!!!\n");
  printf(":) \n");
  return 0;
}

void test_newstack()
{
  printf("testing newstack\n");
  
  Stack new_stack=newStack();
  assert(new_stack!=NULL);
  printf("new stack test cas passed!!\n");
  free(new_stack);
  return;
}

void test_push()
{
  printf("testing test_push\n");
  Stack new_stack=newStack();
  push('s',new_stack);
  assert(readStack(new_stack)=='s');
  push('a', new_stack);
  assert(readStack(new_stack)=='a');
  printf("test_push passed !!\n");
  free(new_stack);
  return;
}


void test_pop()
{
  printf("testing test_pop\n");
  Stack new_stack=newStack();
  push('s',new_stack);
  push('a', new_stack);
  pop(new_stack);
  printf("test_pop passed !!\n");
  assert(readStack(new_stack)=='s');
  free(new_stack);
  return; 
}

void test_isEmpty()
{
  printf("testing isEmpty \n");
  Stack new_stack=newStack();
  assert(isEmpty(new_stack)==true);
  push('a',new_stack);
  assert(isEmpty(new_stack)==false);
  printf("isEmpty passed!!\n");
  free(new_stack);
  return;
}

void test_readStack()
{
  printf("testing readStack \n");
  Stack new_stack=newStack();
  push('a',new_stack);
  assert(readStack(new_stack)=='a');
  printf("readStack passed!!\n");
  free(new_stack);
  return;  
}

void test_freeStack()
{
  printf("testing freeStack\n");
  Stack new_stack=newStack();
  free(new_stack);
  assert(new_stack==NULL);
  printf("freestack passed");
  return;
}
