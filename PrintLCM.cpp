#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int a,int b){
    
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(a / gcd(a, b)) * b<<endl;
        
    }
return 0;
}