#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int n, int p){
    int Min=min(n,p);
    int Max=0;
    for(int i=1;i<=Min;i++){
        if(n%i==0 && p%i==0){
           Max=max(Max,i);
        }
    }
    return Max;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        cout<<gcd(n,p)<<endl;
    }
return 0;
}