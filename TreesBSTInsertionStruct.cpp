#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node{
   int data;
   Node *left,*right;
}Node;

Node *createNode(int key){
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=key;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

Node *root=NULL;

Node *insertNode(Node *node,int key){
    if(node==NULL){
        node=createNode(key);
        return node;
    }
    if(key < node->data)
        node->left=insertNode(node->left,key);

    else if(key > node->data)
       node->right=insertNode(node->right,key);

    return node;
}

void addNode(int key){
    root=insertNode(root,key);
}

void preOrder(Node *node){
    if(node!=NULL){
        cout<<node->data<<" ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void inOrder(Node *node){
    if(node!=NULL){
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        addNode(ele);
    }

    cout<<"Preorder = "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Inorder = "<<endl;
    inOrder(root);
    cout<<endl;
return 0;
}