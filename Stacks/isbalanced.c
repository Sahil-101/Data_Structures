#include <stdio.h>
#include "stack.h"
#include <stdbool.h>
#include <assert.h>

bool isbalanced(char str[], int count);

int main()
{
  char arr0[10] = "{{}}";
  char arr1[10] = "(())))";

  assert(isbalanced(arr0, 4));
  assert(isbalanced(arr1, 6));
}

bool isbalanced(char str[], int count)
{
  //using ADT stacks and its functions
  if (count % 2 != 0)
  {
    return false;
  }

  Stack new_stack = newStack();

  for (int i = 0; i < count; i++)
  {
    //printf("iterating\n");
    if ((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
    {
      push(str[i], new_stack);
      //printf("pushing \n");
      continue;
    }
    //printf("yo\n");
    if ((str[i] == ')') || (str[i] == '}') || (str[i] == ']'))
    {
      //printf("entering else condition");
      if (isEmpty(new_stack))
      {
        //printf("is empty true");
        return false;
      }
      else
      {
        //printf("%c", readStack(new_stack));
        switch (str[i])
        {
        case ')':
          if (readStack(new_stack) == '(')
          {
            //printf("pop working\n");
            pop(new_stack);
            break;
          }
          else
          {
            return false;
          }
        case '}':
          if (readStack(new_stack) == '{')
          {
            //printf("pop working\n");
            pop(new_stack);
            break;
          }
          else
          {
            return false;
          }
        case ']':
          if (readStack(new_stack) == '[')
          {
            //printf("pop working\n");
            pop(new_stack);
            break;
          }
          else
          {
            return false;
          }
        }
      }
    }
  }

  if (isEmpty(new_stack))
  {
    return true;
  }
  else
  {
    return false;
  }
}
