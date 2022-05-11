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

class Queue{
public:
   Node* front,*rear;
   Queue(){
       front=rear=NULL;
   }

   void enqueue(int data){
       Node *temp=new Node(data);
       if(rear==NULL){
           front=rear=temp;
           return;
       }
       rear->next=temp;
       rear=temp;
   }

   int dequeue(){
       if(front==NULL){
           return INT_MIN;
       }
       Node *temp=front;
       front=front->next;
       if(front==NULL){
           front=rear=NULL;
       }
       int data=temp->data;
       free(temp);
       return data;
   }
};


int main(){
    int n;
    Queue queue;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        queue.enqueue(ele);
    }

    cout<<queue.dequeue()<<endl;
    cout<<queue.dequeue()<<endl;
    queue.enqueue(100);
    cout<<"Front Element= "<<queue.front->data<<endl;
    cout<<"Rear Element= "<<queue.rear->data<<endl;
return 0;
}