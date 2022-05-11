#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class SllNode{
public:  
   int data;
   SllNode *next;
   SllNode(int data){
       this->data= data;
       this->next=nullptr;
   }

    
};

class Sll{

public:

    SllNode *head;
    Sll(){
        this->head=nullptr;
    }

    void insert_node_AtBeginning(int data){
      SllNode *newNode= new SllNode(data);
      if(head==nullptr){
          head=newNode;
      }
      else{
          newNode->next=head;
          head=newNode;
      }
    }

    void insert_node_AtEnd(int data){
        SllNode *newNode= new SllNode(data);
        SllNode *temp=head;
      if(temp==nullptr){
          head=newNode;
      }
      else{
          while(temp->next!=nullptr)
             temp=temp->next;

          temp->next=newNode;
      } 
    }
    

    void insert_node_AtMiddle(int data,int pos){
        SllNode *node= new SllNode(data);
        SllNode *temp=head;
        if(temp==nullptr){
            head=node;
        }
        else{
            int count=1;
            while(count<pos){
                count++;
                temp=temp->next;
            }
            node->next=temp->next;
            temp->next=node;
        }
    }

   void display(SllNode *head){
        SllNode* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
};


int main(){
    int t;
    cin>>t;
    while(t--){
        Sll *llist= new Sll();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtBeginning(data);
        }

        cout<<"Linked list after Inserting at Beginning"<<endl;
        llist->display(llist->head);

        int pos;
        cin>>pos;
        int data;
        cin>>data;
        cout<<"Linked list after Inserting after position in llist"<<endl;
        llist->insert_node_AtMiddle(data,pos);
        llist->display(llist->head);

        cout<<"Linked list after Inserting after position in llist"<<endl;
        llist->insert_node_AtMiddle(data,pos);
        llist->display(llist->head);
    }
return 0;
}

