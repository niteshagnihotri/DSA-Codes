#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

int createNode(int data){
    struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

void preOrder(struct node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }

}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}


void postOrder(struct node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}


int main()
{
    struct node *p = createNode(4);
    struct node *p1 = createNode(8);
    struct node *p2 = createNode(12);
    p->left = p2;
    p->right = p1;
    preOrder(p);
    printf("\n\n");
    postOrder(p);
    printf("\n\n");
    inOrder(p);

    return 0;
}
