#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct slot{
    int key;
    int value;
};

//Each hashtable slot has a flag and record (ci=onsisting key and value)
struct hashtable_slot{
    int flag;
    /*
    *flag=0 : record does not exit
    *flag=1 : record exits
    */
   struct slot* record;
};

struct hashtable_slot *arr;
int size=0;
int maxCap=10;

void initialize_arry(){
    for(int i=0;i<maxCap;i++){
        arr[i].flag=0;
        arr[i].record=NULL;
    }
}

void insert(int key, int value){
    int index=key%maxCap;
    int i=index;

    //creating a new item to insert in the hash table
    struct slot* item=(struct slot*)malloc(sizeof(struct slot));
    item->key=key;
    item->value=value;

    //probing through the array until we reach empty space 
    while(arr[i].flag==1){
        if(arr[i].record->key==key){
            cout<<"Duplicate keys are not allowed"<<endl;
            return;
        }
        i=(i+1)%maxCap;
        if(i==index){
            cout<<"Hashtable is full, cannot insert new record"<<endl;
            return;
        }

    }
    arr[i].flag=1;
    arr[i].record=item;
    size++;
}

int searchElement(int key){
    int index=key%maxCap;
    int i=index;
    while (arr[i].flag!=0)
    {
        if(arr[i].record->key==key)
            return 1;
         i=(i+1)%maxCap;
         if(i==index)
            return 0;
    }
    return 0;
    
}

void display(){
    for(int i=0;i<maxCap;i++){
        struct slot* temp=(struct slot*)arr[i].record;
        if(temp==NULL){
            cout<<"HashTableSlot["<<i<<"] has no elements"<<endl;
        }else{
            cout<<"HashTableSlot["<<i<<"] has elements"<<endl;
            cout<<"Key= "<<temp->key<<" and value= "<<temp->value<<endl;
        }
    }
}

int getSize(){
    return size;
}


int main(){
    arr=(struct hashtable_slot*) malloc(maxCap* sizeof(hashtable_slot));
    initialize_arry();
    int key,value;
    for(int i=0;i<6;i++){
        cin>>key>>value;
        insert(key,value);
    }
    display();
    
    if(searchElement(2)){
        cout<<"Key is present in hashtable"<<endl;
    }else{
        cout<<"Key is not present in it"<<endl;
    }
return 0;
}