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

int isBST(struct node* root){

    static struct node *prev = NULL;

    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!= NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }

}

int main()
{
    struct node *p = createNode(9);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(2);
    struct node *p3 = createNode(7);
    struct node *p4 = createNode(5);
    struct node *p5 = createNode(8);
    struct node *p6 = createNode(11);
    struct node *p7 = createNode(19);
    struct node *p8 = createNode(14);

    p->left = p1;
    p->right = p6;
    p1->left = p2;
    p1->right = p3;
    p3->left = p4;
    p3->right = p5;
    p6->right = p7;
    p7->left = p8;
    printf("\nPreOrder - ");
    preOrder(p);

    printf("\n\nPostOrder - ");
    postOrder(p);

    printf("\n\nInorder - ");
    inOrder(p);

    printf("\n\nBST Check - %d", isBST(p));

    return 0;
}
