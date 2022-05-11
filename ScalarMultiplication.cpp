#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]*k<<" ";
        }cout<<"\n";
    }
return 0;
}