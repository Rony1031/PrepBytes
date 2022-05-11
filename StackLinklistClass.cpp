#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;
   Node(int data){
       this->data=data;
       next=NULL;
   }
};

class Stack{

    Node* head;
    Node* next;

public:

Stack(){
    head=NULL;
}  
   void push(int data){
       Node* newNode=new Node(data);
       newNode->next=head;
       head=newNode;
   }

    int isEmpty(){
       return head==NULL;
   } 

    int peek(){
       if(isEmpty()){
           cout<<"Stack is Empty"<<endl;
           return -1;
       }
       return head->data;
   }

      int pop(){
       Node* temp;
       if(isEmpty()){
           cout<<"Underflow"<<endl;
           return -1;
       }
       int ele=head->data;
       temp=head;
       head=head->next;
       free(temp);
       return ele;
   }
};
int main(){
    int n;
    cin>>n;
    Stack st;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    cout<<"Top of Stack: "<<st.peek()<<endl;

    cout<<"Popping all elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<st.pop()<<endl;
    }
return 0;
}