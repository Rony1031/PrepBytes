#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==b){
        return a;
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    if(b>a){
        return gcd(a,b-a);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
      int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    }
return 0;
}