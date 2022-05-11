#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(long long n){
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,m,w;
        cin>>m>>w>>x>>y;
        long long r=x+y;
        long long t=m-x;
        long long s=w-y;
         long long result1=(fact(m)/(fact(x)*fact(t)));
         long long result2=(fact(w)/(fact(y)*fact(s)));
         cout<<result1*result2*fact(x+y)<<endl;
    }
return 0;
}