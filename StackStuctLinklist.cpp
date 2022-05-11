#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head=NULL;
int size=0;

//Function to push 
void push(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        cout<<"Heap size overflow"<<endl;
        return;
    }
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    size++;
}
//Function to check whether stack is Empty or not
int isEmpty(){
    return head==NULL;
} 

//Function to print the top of the stack
int peek(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return head->data;
} 

//Function to pop the elements
int pop(){
    Node* temp;
    if(head==NULL){
        cout<<"Stack is Underflow"<<endl;
        return -1;
    }
    int ele=head->data;
    temp=head;
    head=head->next;
    size--;
    free(temp);
    return ele;
}
int sizeFunction(){
    return size;
}
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        push(ele);
    }
    cout<<"Top of Stack: "<<peek()<<endl;
    cout<<"Size of stack: "<<sizeFunction()<<endl;

    cout<<"Popping all elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<pop()<<endl;
    }
    cout<<"Size of Stack: "<<sizeFunction()<<endl;
return 0;
}