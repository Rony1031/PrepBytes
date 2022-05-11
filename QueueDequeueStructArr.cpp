#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Queue {
    int rear,front;
    int size,capacity;
    int *arr;
}Queue;

//Function to create a queue
Queue* createQueue(int capacity){
    Queue *qu=(Queue*)malloc(sizeof(Queue));
    qu->capacity=capacity;
    qu->size=0;
    qu->front=0;
    qu->rear=capacity-1;
    qu->arr=(int*)malloc(qu->capacity*sizeof(int));
    return qu;

}

//Function to check Queue is full or not
int isFull(Queue *queue){
    return queue->size==queue->capacity;
}

//Function to check if queue is empty or not
 int isEmpty(Queue *queue){
     return queue->size==0;
 }

 //Enqueue Function
 void enqueue(Queue* queue, int data){
     if(isFull(queue)){
         cout<<"Queue is Full"<<endl;
         return;
     }

     queue->rear=(queue->rear+1)%(queue->capacity);
     queue->arr[queue->rear]=data;
     queue->size=queue->size+1;
 }

//Dequeue Function
int dequeue(Queue* queue){
    if(isEmpty(queue)){
         cout<<"Queue is Empty"<<endl;
       return INT_MIN;
    }

    int data=queue->arr[queue->front];
    queue->front=(queue->front+1)%queue->capacity;
    queue->size=queue->size-1;
    return data;
}
 //Function to get front of Queue
 int front(Queue* queue){
     if(isEmpty(queue))
      return INT_MIN;
    
    return queue->arr[queue->front];
 }

 //Function to get rear of Queue
 int rear(Queue* queue){
     if(isEmpty(queue))
      return INT_MIN;
    
    return queue->arr[queue->rear];
 }

 void display(Queue* queue){
     for(int i=0;i<queue->size;i++){
         cout<<queue->arr[(queue->front+i)%queue->capacity]<<" ";
     }
     cout<<endl;
 }
int main(){
    int capacity,n;
    cin>>capacity>>n;
    Queue* queue= createQueue(capacity);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        enqueue(queue,ele);
    }
    display(queue);
    cout<<"Front Element= "<<front(queue)<<endl;
    cout<<"Rear Element= "<<rear(queue)<<endl;

    cout<<dequeue(queue)<<endl;
    cout<<"Front Element= "<<front(queue)<<endl;
    cout<<"Rear Element= "<<rear(queue)<<endl;

    cout<<dequeue(queue)<<endl;
    cout<<"Front Element= "<<front(queue)<<endl;
    cout<<"Rear Element= "<<rear(queue)<<endl;
    
    enqueue(queue,100);
    cout<<"Front Element= "<<front(queue)<<endl;
    cout<<"Rear Element= "<<rear(queue)<<endl;
return 0;
}