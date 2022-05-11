#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    char b;
    char P,p,Z,z,E,e,D,d;
    cin>>b;
    if(b==P || b==p){
      cout<<"PrepBytes"<<endl;
    }
    else if(b==Z || b==z){
      cout<<"Zenith"<<endl;
    }
    else if(b==E || b==e){
      cout<<"Expert Coder"<<endl;
    }
    else if(b==D || b==D){
      cout<<"Data Structure"<<endl;
    }
    
    return 0;
  }