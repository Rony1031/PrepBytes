#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Linked List Node
struct node
{
    int key;
    int data;
    struct node* next;
};

//For storing linked list at each index of hash table
struct hashIndexList{
    struct node *head;
    struct node *tail;
};

struct hashIndexList *arr;
int size=0; //Current number of elements in hashtable
int maxCap=10; //Maximum capacity

//Insert into hash slot
void insert(int key,int value){
     int index=key%maxCap;
     //getting the current list present at the index
     struct node *list=(struct node*) arr[index].head;

     //create an item to insert 
     struct node *item;
     item=(struct node*)malloc(sizeof(struct node));
     item->key=key;
     item->data=value;
     item->next=NULL;

     //In case empty list
     if(list==NULL){
         arr[index].head=item;
         arr[index].tail=item;
         size++;
     }

     //If not empty then insert node at beginning of the list
     else{
         item->next=arr[index].head;
         arr[index].head=item;
     }
}

//Search for an element
int searchElement(int key){
    int index=key%maxCap;
     struct node *list=arr[index].head;
     int flag=0;
     while(list!=NULL){
         if(list->key==key){
             flag=1;
             break;
         }
         list=list->next;
     }

     if(flag==1)
        return 1;
     else
        return 0;

}

//Display Function
void display(){
    for(int i=0;i<maxCap;i++){
        struct node* temp=arr[i].head;
        if(temp==NULL){
            cout<<"arr["<<i<<"] has no elements"<<endl;
        }else{
            cout<<"arr["<<i<<"] has elements"<<endl;
            while(temp!=NULL){
                cout<<"key= "<<temp->key<<", value= "<<temp->data<<endl;
                temp=temp->next;
            }
        }
    }
}

//Initialize hash table 
void initializeTable(){
    for(int i=0;i<maxCap;i++){
        arr[i].head=NULL;
        arr[i].tail=NULL;
    }
}

int main(){
   arr=(struct hashIndexList*) malloc(maxCap * sizeof(struct hashIndexList));
   initializeTable();

   //insertinf elements
   int key,value;
   for(int i=0;i<10;i++){
       cin>>key>>value;
       insert(key,value);
   }
   display();
   if(searchElement(23)==1){
       cout<<"True"<<endl;
   }else{
       cout<<"False"<<endl;
   }
return 0;
}