#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binaryIterativeSearch(int arr[],int low,int high,int data){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==data){
            return mid;
        }
        else if(arr[mid]>data){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }
    return -1;

}

int binarySearchRecursive(int arr[],int low,int high,int data){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
     if(arr[mid]==data){
            return mid;
        }
   else if(arr[mid]>data){
       return binarySearchRecursive(arr,low,mid-1,data);
   }else{
        return binarySearchRecursive(arr,mid+1,high,data);
   }
   return -1;
}


int main(){
    int n,data;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>data;
    //int index=binaryIterativeSearch(arr,0,n-1,data);
    int index=binarySearchRecursive(arr,0,n-1,data);
    cout<<index<<endl;

return 0;
}