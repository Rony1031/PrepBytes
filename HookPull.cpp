#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    if(a==b){
      cout<<a+b<<endl;
    }else{
      int Max=max(a,b);
      int Min=min(a,b);
      int count=0;
      
      count=count+Max;
      Max=Max-1;
      
      int m=max(Max,Min);
      count=count+Max;
      
      cout<<count<<endl;
      
      
    }
  }
  
  return 0;
}