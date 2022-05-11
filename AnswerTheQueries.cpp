#include <bits/stdc++.h>
  using namespace std;
  
  
  
  int main()
  {
    long long t;
    cin>>t;
    long long arr[t];
    for(int i=0;i<t;i++){
      cin>>arr[i];
    }
    long long q;
    cin>>q;
    while(q--){
      int m;
      cin>>m;
      int sum=0;
      int count=0;
      for(int i=0;i<t;i++){
         if(arr[i]<=m){
           count++;
           sum=sum+arr[i];
         }
      }
      cout<<count<<" "<<sum<<endl;
    }
    
    return 0;
  }