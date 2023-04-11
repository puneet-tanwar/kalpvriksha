#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left, *right;
    
};

struct node* createNode(int data){
    struct node* temp= malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    
}
void insertNode(struct node *root, int data){
    if(!root){
        root=createNode(data);
        return;
    }
    struct node* temp=root;
    while(1){
        if(temp==NULL){
            temp=createNode(data);
            break;
        }
        if(temp->data < data){
            if(temp->right){
                temp=temp->right;
                continue;
            }
            else{
                temp->right=createNode(data);
                break;
            }
        }
        else{
            if(temp->left){
                temp=temp->left;
                continue;
            }
            else{
                temp->left=createNode(data);
                break;
            }
        }
    }
}

void printTree(struct node* root){
    if(root==NULL)
        return;
    printTree(root->left);
    printf(" %d ",root->data);
    printTree(root->right);
}

void calcSum(struct node* node, int currSum, int* Sum) {
    if (node == NULL) {
        return;
    }
    currSum += node->data;

    if (node->left == NULL && node->right == NULL) {
        *Sum += currSum;
        return;
    }

    calcSum(node->left, currSum, Sum);
    calcSum(node->right, currSum, Sum);
}

int sumOfAllPaths(struct node* root) {
    if (root == NULL) {
        return 0;
    }

    int Sum=0;
    calcSum(root, 0, &Sum);
    return Sum;
}

int main(){
    struct node *root= createNode(10);
    insertNode(root,5);
    insertNode(root,15);
    insertNode(root,1);
    insertNode(root,3);
    insertNode(root,12);
    insertNode(root,20);
    printTree(root);
    int sum = sumOfAllPaths(root);
    printf("\nSum is : %d", sum);
    return 0;
}
