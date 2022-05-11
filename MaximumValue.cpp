#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void binarysearch(long long arr[],long long start, long long end ,long long sum,long long n,long long k){
    long long y=0;
   while (start<=end)
   {
       long long mid=(start+end)/2;
       long long nsum=0;
       for(int i=0;i<n;i++){
           nsum=nsum+max(0LL,(arr[i]-mid*(i+1)));
       }
       if(nsum<k){
           end=mid-1;
       }else{
           sum=nsum;
           y=mid;
           start=mid+1;
       }

   }
   
  cout<<y<<" "<<sum<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
      long long n,k;
      cin>>n>>k;
      long long arr[n];
      for(long long i=0;i<n;i++){
        cin>>arr[i];
      }
      long long sum=0;
      for(int i=01;i<n;i++){
        sum=sum+arr[i];
      }
    long long m=pow(10,12)+1;
    binarysearch(arr,0,m,sum,n,k);
    }
return 0;
}