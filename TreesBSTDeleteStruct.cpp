

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


typedef struct Node
{
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
          node= createNode(key);
          return node;
     }

     if(key<node->data)
         node->left=insertNode(node->left,key);
     else if(key>node->data)
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

Node* searchKey(Node * node, int key){
     if(node==NULL)
        return node;
     
     if( node->data==key)
         return node;

     if(key<node->data)
        return searchKey(node->left,key);
    else
        return searchKey(node->right,key);
}

void search(int key){
    Node * node=searchKey(root,key);
    if(node!=NULL)
       cout<<"Key "<<key<<" is found"<<endl;
    else
       cout<<"Key "<<key<<" is not found"<<endl;
}

int minimumVal(Node *node){
    int minValue=node->data;
    while(node->left!=NULL){
        minValue=node->left->data;
        node=node->left;
    }
    return minValue;
}

Node* deleteNodeRec(Node* node,int key){
    if(node==NULL)
       return node;
    if(key < node->data)
       node->left=deleteNodeRec(node->left,key);
    else if(key > node->data)
       node->right=deleteNodeRec(node->right,key);
    else{
        if(node->left==NULL)
           return node->right;
        else if(node->right==NULL)
           return node->left;

        node->data=minimumVal(node->right);
        node->right=deleteNodeRec(node->right,node->data);
    }
    return node;
}

void deleteNode(int key){
    root=deleteNodeRec(root,key);
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

    cout<<"Search 62 "<<endl;
    search(62);
    cout<<endl;

    deleteNode(62);

    cout<<"Search 62 after deletion"<<endl;
    search(62);
    cout<<endl;
return 0;
}