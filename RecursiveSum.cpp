#include <bits/stdc++.h>
  using namespace std;
  
  int sum(int n){
    int sum=0;
    while(n>0){
      sum=sum+n;
      n--;
    }
    return sum;
  }
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      cout<<sum(n)<<endl;
    }
    
    return 0;
  }