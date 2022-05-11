#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool myCompare(int x,int y){
    return (x>y);
}
int main(){
    vector<int> v;//vector of size 0
    vector<int>v2(10);//vector of size 10
    cout<<v.size()<<endl;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<v.size()<<endl;
     //first method to print
     for(int i=0;i<5;i++){
         cout<<v[i]<<" ";
     }cout<<endl;

     //Second Method
     vector<int>::iterator itr;
     for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<" ";
     }cout<<endl;

     //sorting 
     //Ascending
     sort(v.begin(),v.end());
     for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<" ";
     }cout<<endl;
    
    //Desceding
    //first method
    /*sort(v.begin(),v.end(),greater<int>());
     for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<" ";
     }cout<<endl;*/

    //Second method
    sort(v.begin(),v.end(),myCompare);


    //Insertion
    itr=v.begin()+2;
    v.insert(itr,2,8);
    for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<" ";
     }cout<<endl;

     //Erase
     v.erase(v.begin()+3,v.begin()+5);
     for(itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<" ";
     }cout<<endl;
    
    
    //v.pop_back();
    //v.clear()
return 0;
}