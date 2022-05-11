#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack{
  char *arr;
  int top;
  int capacity;

public:
   Stack(){
       this->capacity=1000000;
       arr=new char[capacity];
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

   char peek(){
       if(isEmpty()){
           cout<<"Stack is Empty"<<endl;
           return -1;
       }
       return arr[top];
   }

   char pop(){
       if(isEmpty()){
           cout<<"Underflow"<<endl;
           return -1;
       }
       return arr[top--];
   }

   void push(char c){
        if(isFull()){
           cout<<"Overflow"<<endl;
           return;
       }
        top++;
       arr[top]=c;
   }
};

//Function to return precedence of operators
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/'|| c=='*'){
        return 2;
    }
    else if(c=='-'||c=='+'){
        return 1;
    }else{
        return -1;
    }
}

//Function to convert infix expression to postfix expression

void infixToposfix(string s){
    Stack st;
    st.push('#');
    int l=s.length();
    string ns;
    for(int i=0;i<l;i++){
        //If the scanned character is an operand, append it to final string
       if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&& s[i]<='Z')){
          ns+=s[i]; 
       }

       //If the scanned character is an '(', push it into stack
       else if(s[i]=='('){
           st.push(s[i]);
       }

       //If the scanned character is an ')', pop and append the elements present in the stack to ns until we reach '('
       else if(s[i]==')'){
           while(st.peek()!='#' && st.peek()!='('){
               char c=st.pop();
               ns+=c;
           }

           if(st.peek()=='('){
               st.pop();
           }
       }
       else{
           while(st.peek()!='#' && prec(s[i])<=prec(st.peek())){
               char c=st.pop();
               ns+=c;
           }
           st.push(s[i]);
       }
    }
    while(st.peek()!='#'){
        char c=st.pop();
        ns+=c;
    }
    cout<<ns<<endl;
}
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        infixToposfix(s);
    }
return 0;
}