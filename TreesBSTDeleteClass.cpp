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


int maximumVal(Node *node){
     int maxValue=node->data;
     while(node->right!=NULL){
         maxValue=node->right->data;
         node=node->right;
     }
     return maxValue;
}

Node* deleteNodeRec(Node *node,int key){
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

        node->data=maximumVal(node->left);
        node->left=deleteNodeRec(node->left,node->data);
    }

    return node;
}

void deleteNode(int key){
    root=deleteNodeRec(root,key);
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
    cout<<"Search 30 "<<endl;
    bst.search(30);
    cout<<endl;


    bst.deleteNode(30);
     cout<<"Search 30 after deletion "<<endl;
    bst.search(30);

}