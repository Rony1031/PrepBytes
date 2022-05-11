#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Queue{
    int front,rear;
    int size,capacity;
    int *arr;

public:
    Queue(int capacity){
        this->capacity=capacity;
        front=0;
        size=0;
        rear=capacity-1;
        arr=new int[capacity];
    }    

    //Function to check whether a queue is full or not
    int isFull(){
        return size==capacity;
    }

    //Function to check whether queue is empty or not
    int isEmpty(){
        return size==0;
    }

    //Enqueue function
    void enqueue(int data){
        if(isFull()){
        cout<<"Queue is Full"<<endl;
        return;
        }

        rear=(rear+1)%capacity;
        arr[rear]=data;
        size++;
    }

    //Front element function
    int frontEle(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return INT_MIN;
        }
        return arr[front];
    }

    //Rear element function
    int rearEle(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return INT_MIN;
        }
        return arr[rear];
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[(front+i)%capacity]<<" ";
        }cout<<endl;
    }
};
int main(){
    int capacity,n;
    cin>>capacity>>n;
    Queue queue1(capacity);
    Queue queue2(capacity);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        queue1.enqueue(ele);
    }

    cout<<"Front Element= "<<queue1.frontEle()<<endl;
    cout<<"Rear Element= "<<queue1.rearEle()<<endl;

    queue1.display();
    

return 0;
}