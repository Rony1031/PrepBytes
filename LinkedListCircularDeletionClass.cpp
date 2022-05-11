#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CllNode{
    
public:
     int data;
     CllNode *next;
     CllNode(int node_data){
         this->data=data;
         this->next=nullptr;
     }
};

class Cll{
    
public:
    CllNode *head;
    CllNode *tail;
    Cll(){
        this->head=nullptr;
        this->tail=nullptr;
    }

    void insert_node_AtBeginning(int node_data){
        CllNode *new_Node= new CllNode(node_data);

        if(head==NULL){
            head=new_Node;
            tail=new_Node;
            return;
        }
        new_Node->next=head;
        head=new_Node;
        tail->next=head;
    }

    void delete_node_AtBeginning(){
        CllNode *temp=head;
        if(temp==NULL){
            cout<<"Linked list is Empty"<<endl;
            return;
        }
        head=head->next;
        tail->next=head;
        temp->next=NULL;
        free(temp);
    }

    void delete_node_AtEnd(){
        CllNode *temp=head;
        if(temp==NULL){
            cout<<"Linked list is Empty"<<endl;
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
        
        CllNode* temp1=tail;
        temp->next=head;
        temp1->next=NULL;
        tail=temp;
        free(temp1);
        
    }

    void deleteInMid(int pos){
        CllNode *temp=head;
        if(temp==NULL){
            cout<<"Linked list is Empty"<<endl;
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
            CllNode* temp1=tail;
            temp->next=head;
            tail=temp;
            free(temp1);
        } 

        CllNode* temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        free(temp1);
    }
};

void printLinkedList(CllNode *head){
    CllNode *temp = head;
    do{
        cout<<"Address= :"<<temp<<"\n";
        cout<<temp->data<<" ";
        cout<<temp->next<<"\n";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        Cll *llist= new Cll();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtBeginning(data);
        }

        cout<<"Insert at Beginning"<<endl;
        printLinkedList(llist->head);
        cout<<endl;

        cout<<"After delete at End"<<endl;
        llist->delete_node_AtBeginning();
        printLinkedList(llist->head);
        cout<<endl;

        cout<<"After delete at End"<<endl;
        llist->delete_node_AtEnd();
        printLinkedList(llist->head);
        cout<<endl;

        int pos;
        cin>>pos;
        cout<<"After delete at position "<<pos<<" :"<<endl;
        llist->deleteInMid(pos);
        printLinkedList(llist->head);

    }
return 0;
}