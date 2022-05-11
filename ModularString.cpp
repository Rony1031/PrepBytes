#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string str="123456789123456789123456789";
    int result=0;
    int mod=10;
    for(int i=0;i<str.length();i++){
        result=(result*10+(int)str[i]-'0')%mod;
    }
    cout<<result<<endl;
return 0;
}