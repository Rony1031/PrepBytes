#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *left,*right;
    Node(int key){
        data=key;
        left=right=NULL;
    }
};

class BST{

public:
    Node *root;
    BST(){
        root=NULL;
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

    Node *insertNode(Node *node,int key){
    if(node==NULL){
        node= new Node(key);
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
return 0;
}