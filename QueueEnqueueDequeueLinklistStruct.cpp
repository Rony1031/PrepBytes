#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node* next;
    
}Node;

typedef struct Queue
{
    Node *front;
    Node *rear;
}Queue;

//Function to create new node
Node* createNode(int data){
    Node * newNode=(Node* )malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=nullptr;
    return newNode;
}

Queue* createQueue(){
    Queue *qu=(Queue* )malloc(sizeof(Queue));
    qu->front=nullptr;
    qu->rear=nullptr;
    return qu;
}

//Enqueue Function
void enqueue(Queue* queue, int data){
    Node *newNode=createNode(data);
    if(queue->rear==nullptr){
        queue->front=newNode;
        queue->rear=newNode;
        return;
    }
    queue->rear->next=newNode;
    queue->rear=newNode;
}

//Dequeu function
int dequeue(Queue* queue){
    if(queue->front==nullptr)
        return INT_MIN;
    
    Node* temp=queue->front;
    queue->front=queue->front->next;

    if(queue->front==nullptr){
        queue->front=nullptr;
        queue->rear=nullptr;
    }
    int data=temp->data;
    free(temp);
    return data;
}


int main(){
    Queue *queue=createQueue();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        enqueue(queue,ele);
    }

    cout<<dequeue(queue)<<endl;
    cout<<dequeue(queue)<<endl;
    cout<<dequeue(queue)<<endl;

    enqueue(queue,100);
    cout<<"Queue Front= "<<queue->front->data<<endl;
    cout<<"Queue rear= "<<queue->rear->data<<endl;
return 0;
}