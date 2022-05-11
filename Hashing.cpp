#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[6]={11,145,156,172,293,758};
    int hash[10];
    for(int i=0;i<10;i++){
        hash[i]=-1;
    }
    for(int i=0;i<6;i++){
        hash[arr[i]%10]=arr[i];
    }
    for(int i=0;i<10;i++){
        if(hash[i]!=-1){
            cout<<"Element present at slot index "<<i<<" is "<<hash[i]<<endl;
        }
    }

    if(hash[172%10]==-1){
        cout<<"False"<<endl;
    }else{
        cout<<"True"<<endl;
    }
return 0;
}