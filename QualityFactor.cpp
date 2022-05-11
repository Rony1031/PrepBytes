#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    long long sum=0;
    for(long long i=0;i<n-1;i++){
      long long t=abs(arr[i+1]-arr[i]);
      sum= sum + t;
    }
    long long x=llabs(arr[0]);
    cout<<sum+x<<endl;
    
    return 0;
  }