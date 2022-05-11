#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else
     return gcd(b,a%b);
}

long long fastExponent(int x,int y,int m){
      long long result=1;
      while(y>0){
          if(y&1){
              result=(result*x)%m;
          }
           x=(x*x)%m;
           y=y>>1;
      }
      return result;
}

void modularInverse(int a,int m){
    if(gcd(a,m)!=1){
        cout<<"Inverse doesn't exits"<<endl;
    }else{
        cout<<"Modular multiplicative Inverse: "<<fastExponent(a,m-2,m);
    }
}


int main(){
    int a=4,m=11;
    modularInverse(a,m);
return 0;
}