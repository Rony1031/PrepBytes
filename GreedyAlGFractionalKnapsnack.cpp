#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Product{
   float wt;
   float profit;
   float pw;
};

bool comp(Product a,Product b){
    return a.pw<b.pw;
}

void fractionalknapsack(Product ratio[],float cap,int n){
    sort(ratio,ratio+n,comp);
    int flag=0;
    float totalProfit=0;
    int i=0;
    for(i=n-1;i>=0;i--){
        float currWt=ratio[i].wt;
        float currPro=ratio[i].profit;
        if(cap>0 && currWt<=cap){
            cap=cap-currWt;
            totalProfit +=currPro;
        }else{
            flag=1;
            break;
        }
    }

    if(flag==1){
        totalProfit+=ratio[i].profit*(cap/ratio[i].wt);
    }
    cout<<totalProfit<<endl;
}
int main(){
    int n;
    cin>>n;
    float cap;
    cin>>cap;
    float wt[n],profit[n];
    Product ratio[n];

    for(int i=0;i<n;i++)
       cin>>wt[i];

    for(int i=0;i<n;i++)
      cin>>profit[i];

    for(int i=0;i<n;i++){
        ratio[i].wt=wt[i];
        ratio[i].profit=profit[i];
        ratio[i].pw=profit[i]/wt[i];
    }

    fractionalknapsack(ratio,cap,n);
return 0;
}