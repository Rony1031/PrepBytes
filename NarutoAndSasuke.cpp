#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
     long long a,b,k,x,y;
    cin>>a>>b>>k>>x>>y;
     long long result1=y*k-a+b;
     long long result=x+y;
     if(result1%result==0){
       cout<<result1/result<<endl;
     }else{
       cout<<"-1"<<endl;
     }
    
    return 0;
  }