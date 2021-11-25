#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while(ptr!=NULL){
        printf("Element data -> %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data = data;
    int i=0;
    while(p->next!=NULL)
    {
        p=p->next;
        i++;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
};

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


    head->data=7;
    head->next=second;

    second->data=17;
    second->next=third;

    third->data=27;
    third->next=fourth;

    fourth->data=98;
    fourth->next=NULL;


    int value;
    linkedlistTraversal(head);

    printf("\nEnter the Data to insert : ");
    scanf("%d",&value);
    printf("\n");
    head=insertAtEnd(head, value);
    linkedlistTraversal(head);

}
