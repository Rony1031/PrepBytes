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

int maxHeight(Node *node){
    if(node==NULL)
        return 0;

    int l=maxHeight(node->left);
    int r=maxHeight(node->right);

    return max(l,r)+1;

}

int size(Node *node){
    if(node==NULL)
       return 0;
    else  
       return (size(node->left)+size(node->right)+1);
}

};
int main(){
    BinaryTree bt;
    Node *root=NULL;
    root=new Node(5);
    root->left=new Node(6);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(2);
    root->right->left=new Node(9);

    cout<<"Preorder Traversal"<<endl;
    bt.PreorderTraverse(root);
    cout<<endl;

     cout<<"Inorder Traversal"<<endl;
    bt.inOrderTraversal(root);
    cout<<endl;
    
    cout<<"Postorder Traversal"<<endl;
    bt.postOrderTraversal(root);
    cout<<endl;

    cout<<"Height= "<<bt.maxHeight(root)<<endl;
    cout<<"Size= "<<bt.size(root)<<endl;
return 0;
}