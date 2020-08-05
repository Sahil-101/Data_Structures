/* ADT Queue testing */
/* Made by Sahil */
/* 3-08-2020 */

#include "queue.h"

//prototypes of all function
void test_newQ();
void test_enQ();
void test_deQ();
void test_isempty();
void test_readQueue();
void test_freeQ();

int main()
{
  test_newQ();
  printf("\n");
  test_readQueue();
  printf("\n");
  test_enQ();
  printf("\n");
  test_isempty();
  printf("\n");
  test_deQ();
  printf("\n");
  test_freeQ();
  printf("\n");
  
  printf("all test case passed YOu are AWESOME!!!\n");
  return 0;
}

void test_newQ()
{
  printf("testing newQ()\n");
  Queue new_Q=newQ();

  
  assert(new_Q!=NULL);
  assert(sizeQ(new_Q)==0);
  printf("newQ passed!!\n");

  return;
}
void test_enQ()
{
  printf("testing enQ \n");
  Queue new_Q=newQ();

  enQ(4,new_Q);
  assert(readQueue(new_Q)==4);
  enQ(6, new_Q);
  assert(sizeQ(new_Q)==2);

  freeQ(new_Q);
  printf("enQ passed!! \n");

  return;
}

void test_deQ()
{
  printf("testing deQ \n");
  Queue new_Q=newQ();

  enQ(4,new_Q);
  enQ(5, new_Q);
  deQ(4, new_Q);
  assert(readQueue(new_Q)==5);
  enQ(6, new_Q);
  enQ(7, new_Q);
  deQ(6, new_Q);
  assert(sizeQ(new_Q)==2);
  deQ(7, new_Q);
  assert(sizeQ(new_Q)==1);
  
  freeQ(new_Q);
  printf("deQ passed!! \n");
  return;
}

void test_isempty()
{
  printf("testing isEmpty \n");
  
  Queue new_Q =newQ();
  assert(isEmpty(new_Q)==true);
  enQ(1,new_Q);
  assert(isEmpty(new_Q)==false);

  freeQ(new_Q);
  printf("isEmpty passed\n");
  
  return;
}
void test_readQueue()
{
  printf("testing readQueue \n");
  Queue new_Q=newQ();

  enQ(1,new_Q);
  assert(readQueue(new_Q)==1);

  freeQ(new_Q);
  printf("readQueue passed \n");

  return;
}

void test_freeQ()
{
  Queue new_Q=newQ();

  enQ(1, new_Q);
  enQ(2, new_Q);

  freeQ(new_Q);

  assert(readQueue(new_Q)==NULL);
  printf("freeQ passed\n");

  return;
}



