#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n=50;
    int leastPrime[n+1];
    for(int i=0;i<=n;i++){
        leastPrime[i]=0;
    }
    for(int i=2;i<=n;i++){
        if(leastPrime[i]==0){
            leastPrime[i]=i;
            for(int j=i*i;j<=n;j=j+i){
                if(leastPrime[j]==0){
                   leastPrime[j]=i;
                }
            }
        }
    }
    for(int i=2;i<=n;i++){
        cout<<i<<"="<<leastPrime[i]<<endl;
    }
return 0;
}