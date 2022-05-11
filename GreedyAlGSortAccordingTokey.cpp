#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Items{
    int fv;
    int sv;
    int s;
};

bool comp(Items a,Items b){
   if(a.s==b.s){
       return a.fv<b.sv;
   }
   return a.s<b.s;
}
int main(){
    int n;
    cin>>n;
    Items arr[n];
    int f,s;
    for(int i=0;i<n;i++){
        cin>>f>>s;
        arr[i].fv=f;
        arr[i].sv=s;
        arr[i].s=f+s;
    }

    sort(arr,arr+n,comp);

    for(int i=0;i<n;i++)
      cout<<arr[i].fv<<" + "<<arr[i].sv<<" = "<<arr[i].s<<endl;
      
return 0;
}