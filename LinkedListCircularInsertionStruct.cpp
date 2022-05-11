#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* head=NULL;
Node* tail=NULL;

void insertAtBeg(int data){
    Node * newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    newNode->next=head;
    head=newNode;
    tail->next=head;
}

void insertAtEnd(int data){
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
         head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=head;
}

void insertInMiddle(int data,int pos){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
         head=newNode;
        tail=newNode;
        return;
    }
    Node *temp=head;
    if(temp->next==nullptr){
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
        return;
    }
    int count=1;
    while (count<pos && temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    if(temp->next==head){
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
        return;
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void display(){
    Node *temp;
    temp=head;
    do{
        cout<<"Address= :"<<temp<<"\n";
        cout<<temp->data<<" ";
        cout<<temp->next<<"\n";
        temp=temp->next;
    }while (temp!=head);   
}

int main(){
    int t;
    cin>>t;
    while(t--){
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

        head=NULL;
        tail=NULL;
         
         for(int i=0;i<n;i++){
            cin>>data;
            insertAtEnd(data);
        }
        cout<<"Insert at End"<<endl;
        display();
        cout<<endl;

        int pos,da;
        cin>>pos;
        cin>>da;
        insertInMiddle(da,pos);
        cout<<"Insert at position "<<pos<<": "<<endl;
        display();
        cout<<endl;
        head=NULL;
        tail=NULL;

    }
return 0;
}