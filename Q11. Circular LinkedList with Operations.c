#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void traverse(struct Node *head)
{
    struct Node *ptr = NULL;
    ptr=head;
    
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct node* insertAtFirst(struct Node* head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    struct Node *p = head->next;
    while(p->next!=head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    
    head->data=7;
    head->next=second;

    second->data=17;
    second->next=third;

    third->data=27;
    third->next=fourth;

    fourth->data=98;
    fourth->next=head;

    traverse(head);
    printf("Enter the Element to Insert At First : ");
    int value;
    scanf("%d", &value);
    head = insertAtFirst(head, value);
    printf("\nElment Inserted : %d\n\n", head->data);
    traverse(head);
}
