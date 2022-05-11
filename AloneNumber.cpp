#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long unique(long long arr[], long long n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
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
      
      cout<<unique(arr,n)<<endl;
    }
    
return 0;
}