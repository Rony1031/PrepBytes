#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1,temp;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
void QuickSort(int arr[],int low,int high){
    if(low>=high)
        return;
    
    int pivot=partition(arr,low,high);
    QuickSort(arr,low,pivot-1);
    QuickSort(arr,pivot+1,high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}