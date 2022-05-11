#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long t;
 cin>>t;
 
 while(t--){
   long long n;
   cin>>n;
   int count=0;
   int arr[9]={1000,500,100,50,20,10,5,2,1};
    for(int i=0;i<9;i++){
       int r=n/arr[i];
       count=count+r;
        n=n%arr[i];
    }

     cout<<count<<endl;
   }
  
 
  
  return 0;
}