#include <bits/stdc++.h>
  using namespace std;
  
  int absolute(int arr[],int n,int x){
    int diff=INT_MAX;
    for(int i=0;i<n;i++){
      int l = i+1, r = n-1;
       while (r > l)
    { 
      if(diff==0){
            return 0;
      }
       
       if (abs(arr[l] + arr[r]+arr[i] - x) < diff)
       {
          
           diff = abs(arr[l] + arr[r] +arr[i]- x);
       }
 
      
       if (arr[l] + arr[r] +arr[i]> x)
           r--;
       else 
           l++;
    }
    
    }
    
    return diff;
    
  }
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int x;
      cin>>x;
      sort(arr,arr+n);
      cout<<absolute(arr,n,x)<<endl;
    }
    
    return 0;
  }