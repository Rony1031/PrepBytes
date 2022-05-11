#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(long long l, long long b){
    if(l==0){
        return b;
    }
    if(b==0){
        return l;
    }
    return gcd(b,l%b);
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long l,b;
        cin>>l>>b;
        long long result=(l*b)/(gcd(l,b)*gcd(l,b));
        cout<<result<<endl;
    }
return 0;
}