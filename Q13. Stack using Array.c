#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if(ptr->size==ptr->top-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack *ptr, int val)
{
    if(isFull(ptr)){
        printf("\nStack Overflow ! Cannot Push Value now %d\n", val);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("%d pushed\n", val);
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
        printf("\nStack UnderFlow\n");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        printf("\n%d popped",val);
    }
}

int peek(struct stack *ptr, int i)
{
    int arrInd = ptr->top-i+1;
    if(arrInd<0){
        printf("\nNot a valid position");
        return -1;
    }
    else{
        printf("\n%d",ptr->arr[arrInd]);
    }
}

int stackTop(struct stack *ptr)
{
    printf("\n\nTop : %d",ptr->arr[ptr->top]);
}

int stackBottom(struct stack *ptr)
{
    printf("\nBottom : %d",ptr->arr[0]);
}


int main()
{
    int n=0,val, i=0;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    sp->top=-1;
    printf("\n Enter the size of stack : ");
    scanf("%d",&n);
    sp->size=n;

    printf("Stack has been created successfully\n");

    printf("\nEnter the element to be pushed in stack ");
    printf("\nThe Size of stack : %d\n", sp->size);
    for( i=0;i<=n-1;i++)
    {
        printf("\n\nEnter %d element : ",i+1);
        scanf("%d",&val);
        push(sp,val);
        printf("%d top val", sp->top);
    }

    printf("\n\nDisplaying Elements in Stack");
    for(i=1;i<=n;i++)
    {
        peek(sp,i);
    }

    printf("\n\nPopping Element in Stack...");
    pop(sp);
    printf("\n\nDisplaying Elements After Popping");
    for(i=1;i<n;i++)
    {
        peek(sp,i);
    }

}
