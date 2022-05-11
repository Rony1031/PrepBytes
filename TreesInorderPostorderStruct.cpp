#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node{
   int data;
   Node *left;
   Node *right;
}Node;

Node *root=NULL;
Node *createNode(int data){
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void PreorderTraverse(Node *node){
     if(node!=NULL){
         cout<<node->data<<" ";
         PreorderTraverse(node->left);
         PreorderTraverse(node->right);
     }
}

void inOrderTraversal(Node *node){
    if(node!=NULL){
        inOrderTraversal(node->left);
        cout<<node->data<<" ";
        inOrderTraversal(node->right);
    }
}

void postOrderTraversal(Node *node){
    if(node!=NULL){
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout<<node->data<<" ";
    }
}
int main(){
    root=createNode(5);
    root->left=createNode(6);
    root->right=createNode(7);
    root->left->left=createNode(4);
    root->left->right=createNode(3);
    root->right->right=createNode(2);

    cout<<"Preorder Traversal"<<endl;
    PreorderTraverse(root);
    cout<<endl;

    cout<<"Inorder Traversal"<<endl;
    inOrderTraversal(root);
    cout<<endl;
    
    cout<<"Postorder Traversal"<<endl;
    postOrderTraversal(root);
return 0;
}