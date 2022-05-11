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

void deleteAtBeg(){
     Node* temp=head;
     if(temp==NULL){
         head=NULL;
         cout<<"Linked List is Empty"<<endl;
         return;
     }
     if(temp->next==NULL){
         head=NULL;
         free(temp);
         return;
     }

     head=head->next;
     head->prev=NULL;
     temp->next=NULL;
     free(temp);
}


void deleteAtEnd(){
    Node* temp=head;
    if(temp==nullptr){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    if(temp->next==NULL){
        head=NULL;
        free(temp);
        return;
    }
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    Node* temp1=temp->next;
    temp->next=NULL;
    temp1->prev=NULL;
    free(temp1);
    
}

void deleteInMid(int pos){
    Node *temp=head;
    if(temp==nullptr){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    if(temp->next==NULL){
        head=NULL;
        free(temp);
        return;
    }
    int count=1;
    while(count<pos-1){
        count++;
        temp=temp->next;
    }
    
    Node* temp1=temp->next;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    temp1->next=NULL;
    temp->prev=NULL;
    free(temp1);
}
void display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
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
        
        cout<<"After delete at beginning: "<<endl;
        deleteAtBeg();
        display();
        cout<<endl;

        cout<<"After delete at End: "<<endl;
        deleteAtEnd();
        display();
        cout<<endl;

        int pos;
        cin>>pos;
        cout<<"After delete at position "<<pos<<" : "<<endl;
        deleteInMid(pos);
        display();
        cout<<endl;
        
        cout<<"New Case"<<endl;

    }
return 0;
}