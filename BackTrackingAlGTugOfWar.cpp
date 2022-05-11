#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void TugOfWarRecur(int *arr,int n,bool *current_elements,int sel_ele_count,bool *is_Possible,int totalSum,int current_sum,int current_pos){
     if(current_pos==n)
       return ;
     if(sel_ele_count>n/2)
       return;

    sel_ele_count++;
    current_sum=current_sum + arr[current_pos];
    current_elements[current_pos]=true;
    if(sel_ele_count==n/2){
        int rem_sum=totalSum-current_sum;
        if(abs(current_sum-rem_sum)==0)
           *is_Possible=true;
    }
    else{
        TugOfWarRecur(arr,n,current_elements,sel_ele_count,is_Possible,totalSum,current_sum,current_pos+1);
    }
    sel_ele_count--;
    current_sum=current_sum-arr[current_pos];
    current_elements[current_pos]=false;
    TugOfWarRecur(arr,n,current_elements,sel_ele_count,is_Possible,totalSum,current_sum,current_pos+1);
    
}

void TugOfWar(int *arr,int n){
    bool *current_elements= new bool[n];
    bool is_Possible=false;
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum=totalSum+arr[i];
        current_elements[i]=false;
    }
    TugOfWarRecur(arr,n,current_elements,0,&is_Possible,totalSum,0,0);
    if(is_Possible)
        cout<<"Yes"<<endl;
    else
       cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        TugOfWar(arr,n);
    }
return 0;
}