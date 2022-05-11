#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long gcd(long long a,long long b){
     if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,m;
        cin>>n>>m>>k;
        long long LCM=(n/gcd(n,m))*m;
        cout<<k/LCM<<endl;
    }
return 0;
}