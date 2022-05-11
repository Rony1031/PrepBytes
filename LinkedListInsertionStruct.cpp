#include<bits/stdc++.h>
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    node *next;
}node;

node *head=NULL;
void insertBeg(int data){
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}
void insertend(int data){
    node  *new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;
    node *temp=head;
    if(temp==NULL){
        head=new_node;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void insertmiddle(int data, int pos){
    node *temp=head;
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->next=NULL;
    if(temp==NULL){
        head=new_node;
        return;
    }
    int count=1;
    while(count<pos && temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    if(temp->next==NULL){
        temp->next=new_node;
        return;
    }
    new_node->next=temp->next;
    temp->next=new_node;


}

void display(){
    node *temp;
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
    head=NULL;

    

     for(int i=0;i<n;i++){
        cin>>data;
        insertend(data);
    }
    cout<<"Insert at End: ";
    display();
    cout<<"\n";
    
    cout<<"Insert at Middle:"<<endl;
    int pos;
    cin>>pos;
    cin>>data;
    insertmiddle(data,pos);
    cout<<"Insert at pos:"<<pos<<": ";
    display();
    cout<<"\n";
    head=NULL;

    }
return 0;
}