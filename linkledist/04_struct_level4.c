#include <stdio.h>
#include <stdlib.h>
// linked list
struct Node__
{
    int value;
    struct Node__ *next;
};

typedef struct Node__ Node;
typedef Node *NodePtr;

void printList(NodePtr start)
{
    NodePtr current = start;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
}
void addFirst(NodePtr *startPtr, int value)
{
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    if (*startPtr == NULL)
    {
        temp->next = NULL; // temp will be the last Node
        *startPtr = temp;
    }
    else
    {
        temp->next = *startPtr;
        *startPtr = temp;
    }
}
void addLast(NodePtr *startPtr, int value)
{
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;
    if (*startPtr == NULL)
    {
        *startPtr = temp;
    }
    else
    {
        NodePtr current = *startPtr;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
}

void delete(NodePtr *startPtr, int value){
    if (*startPtr != NULL)
    {
        NodePtr current = *startPtr;
        NodePtr previous = NULL;
        while (current->next != NULL && current->value != value)
        {
            previous = current;
            current = current->next;
        }
        if (current->value == value)
        {
            if(previous == NULL){
                *startPtr = current->next;
                free(current);
            }else{
                previous->next = current->next;
                free(current);
            }
        }
    }
}
int main()
{
    NodePtr startPtr; // always point to the start of linked list
    startPtr = NULL;  // init linked list
    addLast(&startPtr, 0);
    addFirst(&startPtr, 50);
    addFirst(&startPtr, 90);
    addFirst(&startPtr, 40);
    addLast(&startPtr, 12);
    addLast(&startPtr, 24);
    addLast(&startPtr, 66);
    delete(&startPtr, 66);
    delete(&startPtr, 50);
    delete(&startPtr, 0);
    printList(startPtr);

    
}
