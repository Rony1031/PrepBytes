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
      for(int i=1;i<=n;i++){
        cin>>arr[i];
      }
      if(((arr[1]!=arr[2])&&(arr[2]==arr[3]))){
        cout<<arr[1]<<endl;
      }
      else if(((arr[n]!=arr[n-1])&&(arr[n-2]==arr[n-1]))){
          cout<<arr[n]<<endl;
      }
      else{
        for(int i=1;i<=n;i=i+2){
          if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<endl;
            break;
          }
      }
      }
      
    }
    
    return 0;
  }