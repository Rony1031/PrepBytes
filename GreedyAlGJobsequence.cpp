#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Job{
    int id;
    int deadline;
    int profit;
};


bool comp(Job a,Job b){
    return (a.profit>b.profit);
}

void jobSequencing(Job arr[],int n){
     sort(arr,arr+n,comp);
     int result[n];
     bool slot[n];
     for(int i=0;i<n;i++)
       slot[i]=false;

    for(int i=0;i<n;i++){
        for(int j=min(n-1,arr[i].deadline)-1;j>=0;j--){
            if(slot[j]==false){
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }

    int totalProfit=0;
    for(int i=0;i<n;i++){
        if(slot[i]){
            cout<<arr[result[i]].id<<" ";
            totalProfit+=arr[result[i]].profit;
        }
    }
    cout<<endl;
    cout<<totalProfit<<endl;
}
int main(){
    int n;
    cin>>n;
    Job arr[n];
    int id,deadline,profit;
    for(int i=0;i<n;i++){
        cin>>id>>deadline>>profit;
        arr[i].id=id;
        arr[i].deadline=deadline;
        arr[i].profit=profit;
    }
    jobSequencing(arr,n);
return 0;
}