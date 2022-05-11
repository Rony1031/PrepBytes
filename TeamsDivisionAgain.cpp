#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  sort(arr,arr+n);
  int low=arr[n/2-1];
  int high=arr[n/2];
  
  
  cout<<high-low<<endl;
  
  return 0;
}