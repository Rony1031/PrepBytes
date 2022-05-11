#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> stack1;
    cout<<stack1.size()<<endl;
    stack1.push(100);
    stack1.push(50);
    stack1.push(20);
    cout<<stack1.size()<<endl;
    cout<<stack1.top()<<endl;

    stack1.pop();
    cout<<stack1.top()<<endl;

    if(stack1.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not Empty"<<endl;
    }


return 0;
}