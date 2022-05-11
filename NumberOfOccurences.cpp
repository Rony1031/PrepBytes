#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        int count=0;
        cin>>n;
        char arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(long long i=0;i<n;i++){
            if(arr[i]=='x'){
                count++;
            }
        }

        cout<<count<<endl;
    }
return 0;
}