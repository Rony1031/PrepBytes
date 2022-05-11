#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left, *right;
};
class BST{
public:
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
bool searchKey(Node * node, int key){
     if(node==NULL)
         return false;
     if(node->data==key)
        return true;
     if(key<node->data)
        return searchKey(node->left,key);
    else
        return searchKey(node->right,key);
}
void search(int key){
    bool find=searchKey(root,key);
    if(find==true)
       cout<<"Key "<<key<<" is found"<<endl;
    else
       cout<<"Key "<<key<<" is not found"<<endl;
}
};
int main(){
    BST bst;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        bst.addNode(ele);
    }
    cout<<"Preorder = "<<endl;
    bst.preOrder(bst.root);
    cout<<endl;
    cout<<"Inorder = "<<endl;
    bst.inOrder(bst.root);
    cout<<endl;
    cout<<"Search 25 "<<endl;
    bst.search(25);
    cout<<endl;
}