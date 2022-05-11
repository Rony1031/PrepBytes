#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sumDigit(int n){
    int sum=0;
    while(n>0){
        int r=n%10;
        n=n/10;
        sum+=r;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<sumDigit(n)<<endl;
    }
return 0;
}