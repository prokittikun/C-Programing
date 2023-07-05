#include <stdio.h>
#include <stdlib.h>

#define SIZE 97

typedef struct nodeType
{
  int item;
  struct nodeType *next;
} Node;
typedef Node *NodePtr;

void addFirst(NodePtr *startPtr, int value)
{
  NodePtr temp = (NodePtr)malloc(sizeof(Node));
  temp->item = value;
  temp->next = NULL;
  if (startPtr == NULL)
  {
    *startPtr = temp;
  }
  else
  {
    temp->next = *startPtr;
    *startPtr = temp;
  }
}

int main()
{
  Node *hashTable[SIZE] = {NULL};
  char type;
  int num, i;
  while (1)
  {
    printf("input> ");
    scanf("\n%c", &type);
    if (type == 'q')
    {
      break;
    }
    else if (type == 'a')
    {
      scanf("%d", &num);
      int position = num % SIZE;
      addFirst(&hashTable[position], num);
    }
    else if (type == 'p')
    {
      for (int i = 0; i < SIZE; i++)
      {
        printf("KEY %2d: ", i);
        NodePtr current = hashTable[i];
        while (current != NULL)
        {
          printf("%d ", current->item);
          current = current->next;
        }
        printf("\n");
      }
    }
  }
  return 0;
}