#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    } 
};

class BinaryTree{

public:
     void PreorderTraverse(Node *node){
     if(node!=NULL){
         cout<<node->data<<" ";
         PreorderTraverse(node->left);
         PreorderTraverse(node->right);
     }
   }
};
int main(){
    BinaryTree bt;
    Node *root=NULL;
    root=new Node(5);
    root->left=new Node(6);
    root->right=new Node(7);
    root->left->left=new Node(4);
    root->left->right=new Node(3);
    root->right->right=new Node(2);

    cout<<"Preorder Traversal"<<endl;
    bt.PreorderTraverse(root);
return 0;
}