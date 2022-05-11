#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void CountingSort(int arr[],int n,int k){
    int c[k+1],b[n],i;
    for(i=0;i<=k;i++){
        c[i]=0;
    }
    for(i=0;i<n;i++){
        c[arr[i]]=c[arr[i]]+1;
    }
    for(i=1;i<=k;i++){
         c[i]=c[i]+c[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[c[arr[i]]-1]=arr[i];
        c[arr[i]]--;
    }
    for(i=0;i<n;i++){
        arr[i]=b[i];
    }
}
int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}
                                                           //radix sort //bucket sort
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=largest(arr,n);
    CountingSort(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}