#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long count(long long p,long long q){
    int sum=0;
   if(p%q==0){
       return (sum+p/q);
   }
   sum=sum+p/q;
   int m=p;
   p=q;
   q=m%q;
   return count(p,q)+sum;
   
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long p,q;
        cin>>p>>q;
        cout<<count(p,q)<<endl;
    }
return 0;
}