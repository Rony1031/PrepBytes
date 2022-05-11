#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node *head=NULL;

void insertAtBeg(int data){
   Node *new_Node=(Node*)malloc(sizeof(Node));
   if(head==NULL){
       new_Node->data=data;
       new_Node->next=NULL;
       new_Node->prev=NULL;
       head=new_Node;
       return;
   }

   new_Node->data=data;
   new_Node->next=head;
   new_Node->prev=NULL;
   head->prev=new_Node;
   head=new_Node;
}

void insertAtEnd(int data){
    Node *new_Node=(Node*)malloc(sizeof(Node));
    new_Node->data=data;
    new_Node->next=NULL;
    new_Node->prev=NULL;
    Node* temp=head;
    if(temp==NULL){
        head=new_Node;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_Node;
    new_Node->prev=temp;
}

void insertionInMiddle(int data,int position){
     Node *new_Node=(Node*)malloc(sizeof(Node));
     new_Node->data=data;
     new_Node->next=NULL;
     new_Node->prev=NULL;

     Node* temp=head;
     int count=1;
     if(temp==NULL){
         head=new_Node;
         return;
     }
     while(count<position && temp->next!=NULL){
         count++;
         temp=temp->next;
     }

     if(temp->next==NULL){
         temp->next=new_Node;
         new_Node->prev=temp;
     }

     new_Node->next=temp->next;
     new_Node->prev=temp;
     new_Node->next->prev=new_Node;
     temp->next=new_Node;
}

void display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){

        //cout<<temp->prev<<" ";
        cout<<temp->data<<" ";
        //cout<<temp->next<<"\n";

        temp=temp->next;
    }
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int data;
        for(int i=0;i<n;i++){
            cin>>data;
            insertAtBeg(data);
        }
        cout<<"Insert at Beginning: "<<endl;
        display();
        cout<<endl;

        head=NULL;
        for(int i=0;i<n;i++){
            cin>>data;
            insertAtEnd(data);
        }
        cout<<"Insert At End: "<<endl;
        display();
        cout<<endl;

        int pos;
        cin>>pos;
        int d;
        cin>>d;
        cout<<"Insert after Position "<<pos<<": "<<endl;
        insertionInMiddle(d,pos);
        display();
        cout<<endl;


    }
    
return 0;
}