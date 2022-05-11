#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxLengthWithZeroSum(int arr[],int n){
    unordered_map<int, int> map;
    int sum=0;
    int max_len=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]==0 && max_len==0)
            max_len=1;
        
        if(sum==0)
           max_len=i+1;

        if(map.find(sum)!=map.end()){
            max_len=max(max_len,i-map[sum]);
        }else{
            map[sum]=i;
        }
    }

    return max_len;
}
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }   
     cout<<maxLengthWithZeroSum(arr,n)<<endl;
    }
return 0;
}