#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        long long count=0;
        for(int i=0;i<n;i++){
            if(a[i]-b[i]>=0){
                count=count+(a[i]-b[i]);
            }
        }
        cout<<count<<endl;
    }
return 0;
}