#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fibonacci(int n){
    int number=0;
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }else{
        int temp1=1;
        int temp2=1;

        for(int i=3;i<=n;i++){
           number=temp1 + temp2;
           temp1=temp2;
           temp2=number;
        }
        return number;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fibonacci(n)<<endl;
    }
return 0;
}