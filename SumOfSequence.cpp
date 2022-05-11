//https://mycode.prepbytes.com/problems/recursion/SEQUENCE
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<complex>
#include<cstring>
#include<string>
#include<set>
#include<map>
#include<list>
#include<vector>
#include<fstream>
using namespace std;

int m=1000000007;
int recursive(int n,int sum){
    if(n==1){
        return (sum+1)%m;
    }
    if(n%2==0)
        return recursive(n/2,(sum+n)%m);
    else
       return recursive(3*n+1,(sum+n)%m);
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<recursive(n,0)<<endl;
    }
return 0;
}