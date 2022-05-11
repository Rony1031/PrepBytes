#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int i;
        int Min=1;
        for(int i=0;i<n;i++){
           cin>>arr[i];
            Min=min(arr[i],1);
        }
        
        for(int i=0;i<n;i++){
           if(Min==arr[i]){
            cout<<i<<endl;
           }
        }
        
    }
return 0;
}