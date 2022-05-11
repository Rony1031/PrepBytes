#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class DllNode{
    
public:
    int data;
    DllNode *next;
    DllNode *prev;
    DllNode(int node_data){
        this->data=node_data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

class DLL{

public:
   DllNode *head;
   DLL(){
       this->head=nullptr;
   }

   void insert_node_AtBeginning(int data){
       DllNode *node= new DllNode(data);
       if(head==nullptr){
           head=node;
       }else{
           node->next=head;
           node->prev=NULL;
           head->prev=node;
           head=node;
       }
   }

   void deleteAtBeg(){
       DllNode* temp=head;
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
       DllNode* temp=head;
       if(temp==nullptr){
           cout<<"Linked List is Empty"<<endl;
           return;
       }

       if(temp->next==NULL){
           head=NULL;
           free(temp);
           return;
       }

       while(temp->next->next!=NULL){
           temp=temp->next;
       }
       DllNode* temp1=temp->next;
       temp->next=NULL;
       temp1->prev=NULL;
       free(temp1);
   }

   void deleteInMid(int pos){
       DllNode* temp=head;
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
       DllNode* temp1=temp->next;
       temp->next=temp1->next;
       temp1->next->prev=temp;
       temp1->next=NULL;
       temp->prev=NULL;
       free(temp1);
   }
};

void display(DllNode *head){
    DllNode *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--)
    {
        DLL *llist= new DLL();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtBeginning(data);
        }

        cout<<"Insert at beginning"<<endl;
        display(llist->head);

        cout<<"After delete at Beginning"<<endl;
        llist->deleteAtBeg();
        display(llist->head);

        cout<<"After delete at end"<<endl;
        llist->deleteAtEnd();
        display(llist->head);

        int pos;
        cin>>pos;
        cout<<"After delete at position "<<pos<<": "<<endl;
        llist->deleteInMid(pos);
        display(llist->head);

        cout<<"New case"<<endl;
    }
    
return 0;
}