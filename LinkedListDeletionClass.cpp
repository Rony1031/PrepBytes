#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class SllNode{

public:
    int data;
    SllNode *next;
    SllNode(int node_data){
        this->data=node_data;
        this->next=nullptr;
    }
};

class SLL{

public:
    SllNode *head;
    SLL(){
        this->head=nullptr;
    }

    void insert_node_AtBeginning(int node_data){
        SllNode *node= new SllNode(node_data);
        if(head==nullptr)
           head=node;
        else{
            node->next=head;
            head=node;
        }
    }


    void delete_node_AtBeginning(){
        SllNode *temp=head;
        if(temp==NULL){
            cout<<"Linked list is Empty"<<endl;
            return;
        }
        head=head->next;
        free(temp);
    }

    void delete_node_AtEnd(){
        SllNode *temp=head;
        if(temp==NULL){
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
        SllNode *temp1=temp->next;
        temp->next=NULL;
        free(temp1);
    }

    void deleteInMid(int pos){
          SllNode *temp=head;
        if(temp==NULL){
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

        SllNode *temp1=temp->next;
        temp->next=temp1->next;
        temp1->next=NULL;
        free(temp1); 
    }
};

void printLinkedList(SllNode *head){
    SllNode *temp=head;
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
        SLL *llist= new SLL();
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            llist->insert_node_AtBeginning(data);
        }

        cout<<"Insert at Beginning:\n";
        printLinkedList(llist->head);
        

        cout<<"After delete at Beginning:"<<endl;
        llist->delete_node_AtBeginning();
        printLinkedList(llist->head);
        
        cout<<"After delete at End: "<<endl;
        llist->delete_node_AtEnd();
        printLinkedList(llist->head);

        int pos;
        cin>>pos;
        cout<<"After delete at position "<<pos<<": "<<endl;
        llist->deleteInMid(pos);
        printLinkedList(llist->head);

    }
    
return 0;
}