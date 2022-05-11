#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
     int t;
     cin>>t;
     while(t--){
       long long n;
       cin>>n;
       long long arr[n];
       for(long long i=0;i<n;i++){
         cin>>arr[i];
       }
       int flag=0;
       if(arr[0]>arr[1]){
         cout<<"0"<<endl;
       }
       else{
         for(long long i=1;i<n;i++){
           
           if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
             cout<<i<<endl;
             flag=1;
             break;
           }
       }
       
      if(flag==0){
        if(arr[n-1]>arr[n-2]){
          cout<<n-1<<endl;
        }
      }
       }
     }
    
    return 0;
  }