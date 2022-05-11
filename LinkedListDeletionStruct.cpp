#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node *head=NULL;
void insertBeg(int data){
    Node *new_Node=(Node*)malloc(sizeof(Node));
    new_Node->data=data;
    new_Node->next=head;
    head=new_Node;
}

void deleteAtBeg(){
    Node* temp=head;
    if(temp==NULL){
       cout<<"Linked list is empty"<<endl;
       return;
    }
    head=head->next;
    free(temp);
}

void deleteAtEnd(){
    Node* temp=head;
    if(temp==NULL){
        cout<<"Linked list is Empty"<<endl;
        return;
    }
    if(temp->next==NULL){
        head=NULL;
        free(temp);
        return;
    }

    while (temp->next->next!=NULL)
        temp=temp->next;
    
    Node* temp1=temp->next;
    temp->next=NULL;
    free(temp1);
    
}

void deleteInMid(int pos){
    Node* temp=head;
    if(temp==NULL){
        cout<<"Linked List is empty"<<endl;
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
    temp1->next=NULL;
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
    while(t--){
        int n;
        cin>>n;
        int data;

    for(int i=0;i<n;i++){
        cin>>data;
        insertBeg(data);
    }

    cout<<"Insert at Beginning: ";
    display();
    cout<<"\n";

    cout<<"After delete at Beginning: "<<endl;
    deleteAtBeg();
    display();
    cout<<endl;

    cout<<"After delete at End: "<<endl;
    deleteAtEnd();
    display();
    cout<<endl;

    int pos;
    cin>>pos;
    cout<<"After delete at position "<<pos<<": "<<endl;
    deleteInMid(pos);
    display();
    cout<<endl;
    }
return 0;
}