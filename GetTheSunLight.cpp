#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long temp=arr[0];
        long long count=1;
        for(long long i=1;i<n;i++){
            if(temp<arr[i]){
               temp=arr[i];
               count++;
            }else{
                continue;
            }
        }
        cout<<count<<endl;
    }
return 0;
}