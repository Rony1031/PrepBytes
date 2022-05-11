#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack{
  int *arr;
  int top;
  int capacity;

public:
   Stack(int capacity){
       this->capacity=capacity;
       arr=new int[capacity];
       top=-1;
   }

   int size(){
       return top+1;
   }

   bool isEmpty(){
       return top==-1;
   }
   bool isFull(){
       return top+1==capacity;
   }

   void push(int data){
       if(isFull()){
           cout<<"Overflow"<<endl;
           return;
       }
       top++;
       arr[top]=data;
   }

   int peek(){
       if(isEmpty()){
           cout<<"Stack is Empty"<<endl;
           return -1;
       }
       return arr[top];
   }

   int pop(){
       if(isEmpty()){
           cout<<"Underflow"<<endl;
           return -1;
       }
       return arr[top--];
   }
};
int main(){
    int capacity,n;
    cin>>capacity>>n;
    Stack st(capacity);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    cout<<"Top of Stack: "<<st.peek()<<endl;
    cout<<"Size of stack: "<<st.size()<<endl;

    cout<<"Popping all elements"<<endl;
    for(int i=0;i<n;i++){
        cout<<st.pop()<<endl;
    }
return 0;
}