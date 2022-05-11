#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class DllNode{

public:
      int data;
      DllNode *next;
      DllNode *prev;
      DllNode(int node_data){
          this->data=data;
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
            node->data=data;
            node->next=NULL;
            node->prev=NULL;
            head=node;
        }
        else{
            node->data=data;
            node->next=head;
            node->prev=NULL;
            head->prev=node;
            head=node;
        }
    }

    void insert_node_AtEnd(int data){
         DllNode *node= new DllNode(data);
         node->data=data;
         node->next=NULL;
         node->prev=NULL;

         DllNode *temp=head;
         if(temp==nullptr){
             head=node;
         }else{
             while(temp->next!=nullptr){
                 temp=temp->next;
             }

             temp->next=node;
             node->prev=temp;
         }
    }

    void insert_node_InMiddle(int data,int pos){
        DllNode *node= new DllNode(data);
        node->data=data;
        node->next=NULL;
        node->prev=NULL;

        DllNode *temp=head;
        
        if(temp==NULL){
            head=node;
            return;
        }
        int count=1;
        while(count<pos && temp->next!=NULL){
            count++;
            temp=temp->next;
        }

        if(temp->next==NULL){
            temp->next=node;
            node->prev=temp;
            return;
        }

        node->next=temp->next;
        node->prev=temp;
        node->next->prev=node;
        temp->next=node;
    }
};

void printLinkedList(DllNode *head){
    DllNode *temp=head;
    while (temp!=NULL)
    {
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

        printLinkedList(llist->head);

        llist->head=NULL;

        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtEnd(data);
        }

        printLinkedList(llist->head);

        int pos;
        cin>>pos;
        int d;
        cin>>d;
        llist->insert_node_InMiddle(d,pos);
        printLinkedList(llist->head);
    }
    
return 0;
}