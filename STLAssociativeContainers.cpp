#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<string>
#include<unordered_set>
#include<map>
#include<unordered_map>
using namespace std;
//ordered set
/*void display(set<int> s){
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
}
int main(){
    set<int> s;//set of size 0
    cout<<s.size()<<endl;
    s.insert(21);
    s.insert(25);
    s.insert(2);
    s.insert(50);
    s.insert(100);
    cout<<s.size()<<endl;
    display(s);

    s.erase(2);
    display(s);
     
    if(s.find(50)!=s.end())
     cout<<"50 is there"<<endl;

    set<int>::iterator itr=s.find(50);
    cout<<*itr<<endl;

return 0;
}*/

//Unordered Set
/*void display(unordered_set<int> s){
    unordered_set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
}
int main(){
    unordered_set<int> s;//set of size 0
    cout<<s.size()<<endl;
    s.insert(21);
    s.insert(25);
    s.insert(2);
    s.insert(50);
    s.insert(100);
    cout<<s.size()<<endl;
    display(s);

    s.erase(2);
    display(s);
     
    if(s.find(50)!=s.end())
     cout<<"50 is there"<<endl;

    unordered_set<int>::iterator itr=s.find(50);
    cout<<*itr<<endl;

return 0;
}*/

//Pair
/*int main(){
    //name roll
    pair<string, int> student;
    student=make_pair("Rohan",1031);
    cout<<student.first<<" "<<student.second<<endl;
}*/

//Ordered Map
/*void display(map<int,int> map1){
     map<int,int> ::iterator itr;
     for(itr=map1.begin();itr!=map1.end();itr++){
         cout<<itr->first<<" "<<itr->second<<endl;
     }
}
    

int main(){
    map<int ,int> map1;
    map1.insert(make_pair(5,10));
    map1[2]=20;
    display(map1);

    if(map1.find(5)!=map1.end()){
        cout<<"Element is there"<<endl;
    }

    return 0;
}*/

//Unordered Map
void display(unordered_map<int,int> map1){
     unordered_map<int,int> ::iterator itr;
     for(itr=map1.begin();itr!=map1.end();itr++){
         cout<<itr->first<<" "<<itr->second<<endl;
     }
}
    

int main(){
    unordered_map<int ,int> map1;
    map1.insert(make_pair(2,10));
    map1[5]=20;
    display(map1);

    if(map1.find(5)!=map1.end()){
        cout<<"Element is there"<<endl;
    }

    return 0;
}
