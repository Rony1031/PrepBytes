#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CLLNode{
   
public:
    int data;
    CLLNode *next;
    CLLNode(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class Cll{

public:
   CLLNode *head;
   CLLNode *tail;
   Cll(){
       this->head=nullptr;
       this->tail=nullptr;
   }

   void insert_node_AtBeginning(int data){
       CLLNode *newNode= new CLLNode(data);
       if(head==nullptr){
           head=newNode;
           tail=newNode;
       }
       else{
           newNode->next=head;
           head=newNode;
           tail->next=head;
       }
   }

   void insert_node_AtEnd(int data){
       CLLNode *newNode= new CLLNode(data);
       CLLNode *temp=head;
       if(temp==nullptr){
           head=newNode;
           tail=newNode;
       }
       else{
           tail->next=newNode;
           tail=newNode;
           tail->next=head;
       }
   }

   void insert_node_InMiddle(int data,int pos){
       CLLNode *newNode= new CLLNode(data);
       CLLNode *temp=head;
       if(temp=nullptr){
           head=newNode;
           tail=newNode;
           return;
       }
       if(temp->next==NULL){
           newNode->next=head;
           head=newNode;
           tail->next=head;
           return;
       }
       int count=1;
       while(count<pos && temp->next!=head){
           count++;
           temp=temp->next;
       }

       if(temp->next==head){
           temp->next=newNode;
           newNode->next=head;
           tail=newNode;
           return;
       }

       newNode->next=temp->next;
       temp->next=newNode;
   }

   void Display(CLLNode *head){
       CLLNode *temp=head;
       do{
           cout<<"Address= :"<<temp<<"\n";
           cout<<temp->data<<" ";
           cout<<temp->next<<"\n";
           temp=temp->next;
       }while(temp!=head);
   }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        Cll *llist =new Cll();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtBeginning(data);
        }

        cout<<"Linked List at Beginning: "<<endl;
        llist->Display(llist->head);
        cout<<endl;

        Cll *slist= new Cll();
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            slist->insert_node_AtEnd(data);
        }
        cout<<"Linked list at End: "<<endl;
        llist->Display(slist->head);
        cout<<endl;

        int d,pos;
        cin>>d;
        cin>>pos;
        slist->insert_node_InMiddle(d,pos);
        slist->Display(slist->head);
        cout<<endl;
    }
return 0;
}