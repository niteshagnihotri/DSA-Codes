#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedlistTraversal(struct Node *ptr)
{
    int i=1;
    while(ptr!=NULL){
        printf("Node %d -> %d\n",i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}


int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));


    head->data=7;
    head->next=second;

    second->data=17;
    second->next=third;

    third->data=27;
    third->next=fourth;

    fourth->data=98;
    fourth->next=fifth;


    fifth->data=27;
    fifth->next=NULL;

    linkedlistTraversal(head);

    return 0;
}
