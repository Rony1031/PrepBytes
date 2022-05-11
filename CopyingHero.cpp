#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    long long t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long arr[n];
     for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
        
        
      long long sum=0;
      sort(arr,arr+n);
      
      for(long long i=0;i<n;i++){
        sum=sum + abs(arr[i]-i-1);
      }
      cout<<sum<<endl;
    }
    
    return 0;
  }