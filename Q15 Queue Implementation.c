#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct list
{
    int data;
    struct list *link;
} *front = NULL, *rear = NULL;

void create(int m)
{
    struct list *tmp;
    tmp = (struct list *)malloc(sizeof(struct list));
    tmp->data = m;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->link = tmp;
    rear = tmp;
}

void del()
{
    struct list *tmp;
    if (front == NULL)
        printf("\n\nQUEUE IS FULL");
    else
    {
        tmp = front;
        printf("\n\nDeleted Element %d", tmp->data);
        front = front->link;
        free(tmp);
    }
}

void disp()
{
    struct list *q;
    if (front == NULL)
        printf("\n\nQUEUE IS EMPTY");
    else
    {
        q = front;
        while (q != NULL)
        {
            printf("%d->", q->data);
            q = q->link;
        }
    }
}

int main()
{
    int i, n, ch;
    do
    {
        printf("\n\nStack Operations");
        printf("\n1.Insert ");
        printf("\n2.Delete ");
        printf("\n3.Display ");
        printf("\n4.Exit");
        printf("\n\nEnter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter The Number : ");
            scanf("%d", &n);
            create(n);
            break;
        case 2:
            del();
            break;
        case 3:
            printf("\nQueue Elements \n\n");
            disp();
            break;
        case 4:
            exit(0);
        }
    } while (ch != 4);
}
