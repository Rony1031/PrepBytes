/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long binaryExponentiation(long long a, long long b){
    long long result=1;
    while(b>0){
        if(b&1){
            result=result*a;
        }
        a=a*a;
        b=b>>1;
    }
    return result;
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<binaryExponentiation(a,b);
return 0;
}*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long long binaryExponentiation(long long a, long long b,long long m){
    long long result=1;
    while(b>0){
        if(b&1){
            result=(result*a)%m;//(result%m*a%m)%m
        }
        a=(a*a)%m;//(a%m*a%m)%m
        b=b>>1;
    }
    return result;//for negative cases (result%m+m)%m
}
int main(){
    long long a,b,m;
    cin>>a>>b>>m;
    cout<<binaryExponentiation(a,b,m)<<endl;
return 0;
}