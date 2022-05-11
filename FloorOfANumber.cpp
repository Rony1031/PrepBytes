#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        if(arr[0]>x){
            cout<<"-1"<<endl;
        }
        else if(arr[n-1]<=x){
            cout<<n-1<<endl;
        }
        else{
            for(long long i=0;i<n;i++){
                if(arr[i]>x  && arr[i-1]<=x){
                cout<<i-1<<endl;
                break;
            }

        }
        }
    }

return 0;
}