#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int count(int arr[],int n,int k){
  int c[n];
  int i;
  for(i=0;i<n;i++){
    c[i]=0;
  }
  for(i=0;i<n;i++){
    c[arr[i]]=c[arr[i]]+1;
  }
  for(i=0;i<n;i++){
      if(c[arr[i]]>k){
        return arr[i];
      }
  }

  return -1;
}
int main(){
     int t;
     cin>>t;
     while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
         cin>>arr[i];
       }
       int k=n/2;
       cout<<count(arr,n,k)<<endl;
     }
return 0;
}