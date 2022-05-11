#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long arr[n];
      for(long long i=0;i<n;i++){
        cin>>arr[i];
      }
      int d=0;
      for(long long i=0;i<n;i++){
        if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1]){
          d=arr[i+1]-arr[i];
          break;
        }
      }
      for(long long i=1;i<n;i++){
           if(arr[i]!=arr[0]+i*d){
             cout<<arr[0]+i*d<<endl;
             break;
           }
      }
    }
    
    return 0;
  }