#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};


void traverse(struct Node *ptr)
{
    while(ptr!=NULL){
        printf("Element data -> %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->prev = NULL;
    head->next = second;

    second->data = 17;
    second->prev = head;
    second->next = third;

    third->data = 27;
    third->prev = second;
    third->next = fourth;

    fourth->data = 98;
    fourth->prev = third;
    fourth->next = NULL;

    traverse(head);
}

