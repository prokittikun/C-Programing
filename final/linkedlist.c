#include <stdio.h>
#include <stdlib.h>

struct Node_
{
    int value;
    struct Node_ *next;
};
typedef struct Node_ Node;

void add(Node *head, Node *current, int value)
{
    Node *nextNode = (Node *)malloc(sizeof(Node));

    // printf("%p \n", current->next);
    if (head->next == NULL)
    {
        head->next = current;
        current->value = value;
        current->next = nextNode;
    }
    else if (current->next != NULL)
    {
        current->value = value;
        current->next = nextNode;
    }
    current = nextNode;
    current->next = NULL;
    printf("%p \n", head);
    printf("%p \n", current);
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *current = (Node *)malloc(sizeof(Node));
    ;

    head->next = NULL;
    add(head, current, 1);
    add(head, current, 2);
    // while (current->next != NULL)
    // {
    //     printf("%d", current->value);
    //     current = current->next;
    // }
}