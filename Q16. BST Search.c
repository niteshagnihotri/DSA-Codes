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


void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node* search(struct node* root, int key){
    if(root==NULL)
        return NULL;
    if(key==root->data)
        return root;
    else if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

struct node* searchItr(struct node* root, int key){

    while(root!=NULL){
        if(root==NULL)
            return NULL;
        if(key==root->data)
            return root;
        else if(key < root->data)
            root = root->left;
        else{
            root = root->right;
        }
    }

        return NULL;

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

    printf("\nInorder - ");
    inOrder(p);

    struct node* nItr = searchItr(p, 10);
    if(nItr!=NULL)
        printf("\nElement Found: %d", nItr->data);
    else
        printf("\nELement Not Exist");



    return 0;
}
