#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printBinary(int a[],int k,int n){

    if(k==n){
        for(int i=0;i<n;i++)
          cout<<a[i];                 //Try to solve this and understand this.
        cout<<endl;
    return;
    }

    if(a[k-1]==0){
        a[k]=0;
        printBinary(a,k+1,n);
        a[k]=1;
        printBinary(a,k+1,n);
    }else{
        a[k]=0;
        printBinary(a,k+1,n);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        a[0]=0;
        printBinary(a,1,n);
        a[0]=1;
        printBinary(a,1,n);
    }
return 0;
}