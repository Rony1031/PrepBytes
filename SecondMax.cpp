#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y){
        if(x>z){
            cout<<max(y,z);
        }
    }
    else if(y>x){
        if(y>z){
            cout<<max(x,z);
        }
    }else{
        cout<<max(x,y);
    }

    
    
    return 0;
  }