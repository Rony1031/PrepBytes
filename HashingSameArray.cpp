#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        unordered_map<int, int> map;
        for(int i=0;i<n;i++)
            map[arr[i]]++;
        
        bool flag=true;
        for(int i=0;i<n;i++){
            //if there is an element in brr[] but not in arr[]
            if(map.find(brr[i])==map.end()){
                flag=false;
                break;
            }
            if(map[brr[i]]==0){
                flag=false;
                break;
            }

            map[brr[i]]--;
        }
        if(flag){
            cout<<"Both have same numbers"<<endl;
        }else{
            cout<<"Both do not have same numbers"<<endl;
        }
    }
return 0;
}