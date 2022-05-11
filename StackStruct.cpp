#include<bits/stdc++.h>
#include<iostream>
using namespace std;


//structure ofstack
typedef struct stack{
    int capacity;
    int top;
    int *arr;
}Stack;

//Function to initialize stack
Stack *initializeStack(int capacity){
    Stack *st=(Stack*)malloc(sizeof(Stack));
    st->capacity=capacity;
    st->top=-1;
    st->arr=(int*)malloc(sizeof(int)*capacity);
    return st;
} 

//Function to return size of the stack
int size(Stack *st){
    return st->top+1;
}

//Fucnction to check whether stack is empty or not;
int isEmpty(Stack *st){
    return st->top==-1;
}

//Function to check if the stack is full or not
int isFull(Stack *st){
    return st->top+1==st->capacity;
}

void push(Stack *st,int data){
    if(isFull(st)){
        cout<<"Overflow"<<endl;
        return;
    }
    st->top=st->top+1;
    st->arr[st->top]=data;
}

//Function to return the top element in the stack called peek

int peek(Stack *st){
    if(isEmpty(st)){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return st->arr[st->top];
}

//Function to pop the top element from the stack
int pop(Stack *st){
    if(isEmpty(st)){
        cout<<"Underflow"<<endl;
        return -1;
    }
    int ele=st->arr[st->top];
    st->top=st->top-1;
     return ele;
}

int main(){
    int capacity;//Maximum Capacity
    int n;//number of elements to inserted
    cin>>capacity>>n;
    Stack *st=initializeStack(capacity);
    
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        push(st,ele);
    }
    cout<<"Top of stack= "<<peek(st)<<endl;
    cout<<"Size of Stack= "<<size(st)<<endl;
    if(isEmpty(st)){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is not Empty"<<endl;
    }

    cout<<"Popping all the Elements"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<pop(st)<<endl;
    }

    cout<<"Size of stack after pop= "<<size(st)<<endl;

    if(isEmpty(st)){
        cout<<"Stack is Empty after pop"<<endl;
    }else{
        cout<<"Stack is not Empty after pop"<<endl;
    }

return 0;
}