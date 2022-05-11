#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    long long n,k;
    cin>>n>>k;
    long long r=240-k;
    int count=0;
    for(int i=1;i<=n;i++){
        if(r>=5*i){
          count++;
          r=r-5*i;
        }
    }
    cout<<count<<endl;
    
    return 0;
  }