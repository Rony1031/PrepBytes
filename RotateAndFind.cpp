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
      long long x;
      cin>>x;
      
      int flag=0;
      for(long long i=0;i<n;i++){
        if(arr[i]==x){
          cout<<i<<endl;
          flag=1;
          break;
        }
      }
      if(flag==0){
        cout<<"-1"<<endl;
      }
    }
    
    return 0;
  }