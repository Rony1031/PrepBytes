#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head=NULL;
Node* tail=NULL;

void insertAtBeg(int data){
    Node* new_node=(Node*)malloc(sizeof(Node));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    head=new_node;
    tail->next=head;
}

void deleteAtBeg(){
    Node *temp=head;
    if(temp==NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    head=head->next;
    tail->next=head;
    temp->next=NULL;
    free(temp);
}

void deleteAtEnd(){
    Node* temp=head;
    if(temp==NULL){
       cout<<"Linked List is Empty"<<endl;
        return; 
    }
    if(temp->next==NULL){
        head=NULL;
        tail=NULL;
        free(temp);
        return;
    }
    while(temp->next->next!=head)
      temp=temp->next;

    Node* temp1=tail;
    temp->next=head;
    temp1->next=NULL;
    tail=temp;
    free(temp1);
}

void deleteInMid(int pos){
    Node* temp=head;
    if(temp==NULL){
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    if(temp->next==NULL){
        head=NULL;
        tail=NULL;
        free(temp);
        return;
    }
    int count=1;
    while(count<pos-1 && temp->next!=head){
        count++;
        temp=temp->next;
    }
    if(temp->next==head){
        Node* temp1=tail;
        temp->next=head;
        tail=temp;
        free(temp);
    }
    Node* temp1=temp->next;
    temp->next=temp1->next;
    temp1->next=NULL;
    free(temp1);
}
void display(){
    Node* temp;
    temp=head;
    do{
        cout<<"Address= :"<<temp<<"\n";
        cout<<temp->data<<" ";
        cout<<temp->next<<"\n";
        temp=temp->next;
    }while(temp!=head);
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

        cout<<"Insert at Beginning"<<endl;
        display();
        cout<<endl;

        cout<<"After delete at Beginning: "<<endl;
        deleteAtBeg();
        display();
        cout<<endl;

        cout<<"After delete at end:"<<endl;
        deleteAtEnd();
        display();
        cout<<endl;

        int pos;
        cin>>pos;
        cout<<"After delete at position "<<pos<<" :"<<endl;
        deleteInMid(pos);
        display();
        cout<<endl;

        head=NULL;
        tail=NULL;

    }
    
return 0;
}