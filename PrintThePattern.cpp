#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printNum(int n){
   cout<<n<<" ";
   if(n<=0)
   return;

   printNum(n-5);
   cout<<n<<"";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    printNum(n);
    cout<<endl;
  }
return 0;
}


/*#include <bits/stdc++.h>
  using namespace std;
  
  int Pattern(int n){
      int m=n;
      while(n>0){
          cout<<n<<" ";
          n=n-5;
      }

      while(n<=m-5){
          cout<<n<<" ";
          n=n+5;
      }
     return m; 
  }
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      cout<<Pattern(n)<<endl;
    }
    
    return 0;
  }*/