#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Isprime(int num){
    int flag=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            flag=1;
            break;
        }
        
    }
    if(flag==1){
            return 0;
        }else{
            return 1;
        }
}
int main(){
    int num;
    cin>>num;
    for(int i=2;i<=num;i++){
         if(Isprime(i)==1){
             cout<<i<<" ";
         }
    }cout<<endl;
return 0;
}