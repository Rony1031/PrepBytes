#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int h,m;
      cin>>h>>m;
      int angle1;
      
      angle1=(30*h)-((5.5)*m);
      
      
      if(angle1<0){
        cout<<angle1*(-1)<<endl;
      }else{
          cout<<angle1<<endl;
      }
      
    }
    
    return 0;
  }