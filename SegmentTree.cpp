#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void constructMaxSegTree(int segmentTree[],int arr[],int low,int high,int position){
    if(low==high){
        segmentTree[position]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    constructMaxSegTree(segmentTree,arr,low,mid,2*position+1);
    constructMaxSegTree(segmentTree,arr,mid+1,high,2*position+2);
    segmentTree[position]=max(segmentTree[2*position+1],segmentTree[2*position+2]);
}

int rangeMaximumQuery(int segmentTree[],int low,int high,int qlow,int qup,int position){
    if(qlow<=low && qup>=high)
        return segmentTree[position];
    if(qlow>high | qup<low)
        return INT_MIN;
    
    int mid=(low+high)/2;
    int max1=rangeMaximumQuery(segmentTree,low,mid,qlow,qup,2*position+1);
    int max2=rangeMaximumQuery(segmentTree,mid+1,high,qlow,qup,2*position+2);

    return max(max1,max2); //For Minimum of Two use min function
}

void updateSegmentTree(int segmentTree[],int index, int value,int low,int high,int position){
    if(index<low ||index >high)
      return;
    if(low==high){
        segmentTree[position]=value;
        return;
    }
    int mid=(low+high)/2;
    updateSegmentTree(segmentTree,index,value,low,mid,2*position+1);
    updateSegmentTree(segmentTree,index,value,mid+1,high,2*position+2);
    segmentTree[position]=max(segmentTree[2*position+1],segmentTree[2*position+2]);
      
}

int updateSegTree(int arr[],int segmentTree[],int index,int value,int n){
    arr[index]=value;
    updateSegmentTree(segmentTree,index,value,0,n-1,0);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    
    int segmentTree[4*n];
    for(int i=0;i<4*n;i++)
       segmentTree[i]=INT_MIN;
    
    constructMaxSegTree(segmentTree,arr,0,n-1,0);
    for(auto ele:segmentTree)
       cout<<ele<<" ";
    
    cout<<endl;
    
    cout<<"Before Update: "<<rangeMaximumQuery(segmentTree,0,n-1,2,7,0)<<endl;
    updateSegTree(arr,segmentTree,4,12,n);
    for(auto ele:segmentTree)
       cout<<ele<<" ";
    
    cout<<endl;

    cout<<"After Update: "<<rangeMaximumQuery(segmentTree,0,n-1,2,7,0)<<endl;
    updateSegTree(arr,segmentTree,4,1,n);
    for(auto ele:segmentTree)
       cout<<ele<<" ";
    
    cout<<endl;
return 0;
}