#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int minPlatforms(int arr[],int dept[],int n){
    sort(arr,arr+n);
    sort(dept,dept+n);
    int plat=1,res=1,i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dept[j]){
            plat+=1;
            i+=1;
        }
        else{
            plat-=1;
            j+=1;
        }
        res=max(res,plat);
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],dept[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        for(int i=0;i<n;i++)
           cin>>dept[i];

        cout<<minPlatforms(arr,dept,n)<<endl;
    }
return 0;
}