#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<long long> leastPrimeFactor(long long n){
    vector<long long> leastPrime(n+1,0);
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
    return leastPrime;
}
int main(){
     int n=48;
     vector<long long> leastPrime= leastPrimeFactor(n);
    vector<long long> PrimeFactors;
    for(long long i=2;i<=n;i++){
        while(n%i==0){
            PrimeFactors.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        PrimeFactors.push_back(n);
    }
    for(int i=0;i<PrimeFactors.size();i++){
        cout<<PrimeFactors[i]<<" ";
    }
return 0;
}




/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n=48;
    vector<long long> PrimeFactors;
    for(long long i=2;i*i<=n;i++){
        while(n%i==0){
            PrimeFactors.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        PrimeFactors.push_back(n);
    }
    for(int i=0;i<PrimeFactors.size();i++){
        cout<<PrimeFactors[i]<<" ";
    }
return 0;
}*/