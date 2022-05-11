#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int Min=pow(10,7);
        int Max=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            Max=max(arr[i],Max);
            Min=min(arr[i],Min);
        }
        cout<<Min<<" "<<Max<<endl;
    }
return 0;
}