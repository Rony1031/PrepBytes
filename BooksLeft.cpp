#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long m=n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            count++;
        }else{
            j=i;
            break;
        }
    }
    if(count==n || count==0){
        cout<<n-count<<endl;
    }else{
        for(int i=n-1;i>j;i--){
        if(arr[i]<=k){
            count++;
        }else{
            break;
        }
    }
       
        cout<<m-count<<endl;
    }
   
return 0;
}